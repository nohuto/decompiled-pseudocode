/*
 * XREFs of Field @ 0x140035640
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ParseFieldList @ 0x1400358A8 (ParseFieldList.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall Field(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v5; // r15
  size_t v6; // rbx
  _BYTE *v7; // rdi
  _BYTE *Pool2; // r14
  KIRQL v9; // bl
  unsigned int NameSpaceObjectNoLock; // edi
  __int64 v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE P[128]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = a2[10];
  v16 = 0LL;
  v5 = a1[10];
  v6 = -1LL;
  v7 = *(_BYTE **)(v2 + 32);
  do
    ++v6;
  while ( v7[v6] );
  if ( v6 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v6 + 1, 1768973121LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, v7, v6);
  Pool2[v6] = 0;
  v9 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v5, &v16, 0x80000000);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v11 = v16;
  if ( !NameSpaceObjectNoLock )
  {
    if ( *(_WORD *)(v16 + 66) == 10 )
    {
      v12 = a2 + 8;
      NameSpaceObjectNoLock = CreateNameSpaceObject(a1[40], 0LL, a1[10], a1[11], a2 + 8, 0);
      if ( !NameSpaceObjectNoLock )
      {
        *(_WORD *)(*v12 + 66LL) = 131;
        *(_DWORD *)(*v12 + 88LL) = 8;
        v13 = HeapAlloc(a1[40], 1329874504, *(_DWORD *)(*v12 + 88LL));
        *(_QWORD *)(*v12 + 96LL) = v13;
        if ( v13 )
        {
          memset(*(void **)(*v12 + 96LL), 0, *(unsigned int *)(*v12 + 88LL));
          **(_QWORD **)(*v12 + 96LL) = v11;
          v14 = *(_QWORD *)(v11 + 96);
          v11 = 0LL;
          NameSpaceObjectNoLock = ParseFieldList(
                                    (_DWORD)a1,
                                    a2[5],
                                    *v12,
                                    *(_DWORD *)(a2[10] + 56LL),
                                    *(_DWORD *)(v14 + 8));
        }
        else
        {
          NameSpaceObjectNoLock = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError((__int64)a1, -1073741670);
          PrintDebugMessage(0x33u, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    else
    {
      NameSpaceObjectNoLock = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError((__int64)a1, -1072431095);
      PrintDebugMessage(0x34u, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
    }
  }
  if ( v11 )
    DereferenceObjectEx(v11);
  return NameSpaceObjectNoLock;
}
