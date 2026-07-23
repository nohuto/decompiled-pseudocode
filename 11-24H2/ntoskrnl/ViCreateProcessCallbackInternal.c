/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140B988D0
 * Callers:
 *     VfCreateProcessCallback @ 0x1406124F0 (VfCreateProcessCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140949CE0 (PsGetAllocatedFullProcessImageName.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViFaultsIsAppTarget @ 0x140B98CF0 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  PVOID v3; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  _WORD *i; // rcx
  KIRQL v7; // si
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PEPROCESS Process; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  if ( a2 )
  {
    Process = 0LL;
    P = 0LL;
    DestinationString = 0LL;
    if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    {
      p_Lock = &Process->Header.Lock;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, (__int64 *)&P) >= 0 )
      {
        v3 = P;
        v4 = *(unsigned __int16 *)P;
        if ( (_WORD)v4 )
        {
          v5 = *((_QWORD *)P + 1);
          for ( i = (_WORD *)(v5 + 2 * ((v4 >> 1) - 1)); (unsigned __int64)i >= v5 && *i != 92; --i )
            ;
          DestinationString.Buffer = i + 1;
          DestinationString.Length = v5 + v4 - ((_WORD)i + 2);
          DestinationString.MaximumLength = DestinationString.Length;
        }
        else
        {
          DestinationString = *(UNICODE_STRING *)P;
        }
        RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
        v7 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
        if ( (unsigned int)ViFaultsIsAppTarget(&DestinationString) )
        {
          _InterlockedOr(p_Lock + 124, 0x10000u);
          p_Lock = &Process->Header.Lock;
          v3 = P;
        }
        KeReleaseSpinLock(&ViFaultInjectionLock, v7);
        ExFreePoolWithTag(v3, 0);
      }
      ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x746C6644u);
    }
  }
}
