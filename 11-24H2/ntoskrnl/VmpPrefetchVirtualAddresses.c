/*
 * XREFs of VmpPrefetchVirtualAddresses @ 0x1403AA658
 * Callers:
 *     VmPrefetchVirtualAddresses @ 0x14079E6C8 (VmPrefetchVirtualAddresses.c)
 *     VmpPrefetchWorker @ 0x14079F550 (VmpPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     VmpFillGpnRanges @ 0x1403AA560 (VmpFillGpnRanges.c)
 *     VmpProcessContextLockShared @ 0x1403ABC30 (VmpProcessContextLockShared.c)
 *     VmpProcessContextUnlockShared @ 0x1403ABC7C (VmpProcessContextUnlockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchVirtualAddresses(volatile LONG *SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  void *Pool2; // r14
  _QWORD *v11; // r15
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  unsigned __int64 v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+58h]

  v3 = *((_QWORD *)SpinLock + 13);
  if ( v3 == -1 || !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost) )
  {
    return (unsigned int)-1073741667;
  }
  else
  {
    v8 = 0LL;
    v20 = 0LL;
    v9 = a3;
    if ( a3 >= 0x2000 )
      v9 = 0x2000LL;
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v11 = &a2[2 * a3];
      v19 = 0LL;
      v18 = 0LL;
      v12 = VmpProcessContextLockShared(SpinLock);
      v21 = v12;
      while ( a2 < v11 )
      {
        v13 = *a2 + (((*a2 & 0xFFFLL) + a2[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
        v16 = *a2 >> 12;
        v17 = (v13 >> 12) - v16;
        while ( v17 )
        {
          VmpFillGpnRanges((int)SpinLock, (__int64)&v16, (__int64)Pool2, (__int64 *)&v20, v9, (__int64)&v18);
          v8 = v20;
          if ( v20 < v9 )
          {
            v12 = v21;
          }
          else
          {
            v15 = *((_QWORD *)SpinLock + 9);
            VmpProcessContextUnlockShared(SpinLock, v21);
            v7 = guard_dispatch_icall_no_overrides(Pool2, v8, v3, 1LL);
            if ( v7 < 0 )
              goto LABEL_21;
            v8 = 0LL;
            v20 = 0LL;
            v12 = VmpProcessContextLockShared(SpinLock);
            v21 = v12;
            if ( v15 != *((_QWORD *)SpinLock + 9) )
            {
              v18 = 0LL;
              v19 = 0LL;
            }
          }
        }
        a2 += 2;
      }
      VmpProcessContextUnlockShared(SpinLock, v12);
      if ( !v8 || (v7 = guard_dispatch_icall_no_overrides(Pool2, v8, v3, 1LL), v7 >= 0) )
        v7 = 0;
    }
    else
    {
      v7 = -1073741670;
    }
LABEL_21:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(VmpExtensionHost + 88));
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v7;
}
