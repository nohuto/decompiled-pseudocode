/*
 * XREFs of ExEnableHandleTracing @ 0x140AB4D44
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1407747D8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExpLockHandleTableExclusive @ 0x140447858 (ExpLockHandleTableExclusive.c)
 *     ExpUnlockHandleTableExclusive @ 0x14044D754 (ExpUnlockHandleTableExclusive.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x1404AA3A8 (MmGetMaximumNonPagedPoolInBytes.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A00380 (ExDereferenceHandleDebugInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  __int64 result; // rax
  int i; // eax
  unsigned __int64 v8; // r14
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // rbp
  __int64 Pool2; // rax
  __int64 v13; // rsi
  _DWORD *v14; // rbx

  v3 = a3;
  v4 = a2;
  if ( (a3 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( !a3 )
    v3 = ExHandleTraceDbDefaultBitMaskFlags;
  if ( a2 )
  {
    if ( a2 >= ExHandleTraceDbMinStacks )
    {
      if ( a2 > ExHandleTraceDbMaxStacks )
        v4 = ExHandleTraceDbMaxStacks;
    }
    else
    {
      v4 = ExHandleTraceDbMinStacks;
    }
    for ( i = v4 - 1; (i & v4) != 0; v4 = i + 1 )
      i = v4 | (v4 - 1);
  }
  else
  {
    v4 = ExHandleTraceDbDefaultStacks;
  }
  v8 = 160LL * v4 + 80;
  _InterlockedExchangeAdd(&ExpTotalTraceBuffers, v4);
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v10 > (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    result = 3221225626LL;
LABEL_18:
    _InterlockedAdd(&ExpTotalTraceBuffers, -v4);
    return result;
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    result = PsChargeProcessNonPagedPoolQuota(*(_QWORD *)(a1 + 16), v8);
    if ( (int)result < 0 )
      goto LABEL_18;
  }
  Pool2 = ExAllocatePool2(0x40uLL, v8, 0x6474624Fu);
  v13 = Pool2;
  if ( !Pool2 )
  {
    _InterlockedAdd(&ExpTotalTraceBuffers, -v4);
    if ( v11 )
      PsReturnProcessNonPagedPoolQuota(v11, v8);
    return 3221225626LL;
  }
  *(_DWORD *)(Pool2 + 4) = v4;
  *(_DWORD *)(Pool2 + 8) = v3;
  *(_DWORD *)Pool2 = 1;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_DWORD *)(Pool2 + 16) = 1;
  KeInitializeEvent((PRKEVENT)(Pool2 + 40), SynchronizationEvent, 0);
  if ( v11 )
    *(_BYTE *)(a1 + 44) |= 1u;
  ExpLockHandleTableExclusive(a1, (__int64)KeGetCurrentThread());
  v14 = *(_DWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v13;
  if ( v14 )
  {
    if ( (v14[2] & 8) != 0 )
      goto LABEL_29;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
LABEL_29:
    *(_DWORD *)(v13 + 8) |= 8u;
  }
  *(_BYTE *)(a1 + 44) |= 2u;
  ExpUnlockHandleTableExclusive(a1);
  if ( v14 )
    ExDereferenceHandleDebugInfo(a1, v14);
  return 0LL;
}
