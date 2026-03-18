/*
 * XREFs of PiUpdateDeviceResourceLists @ 0x14073646C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpCopyResourceList @ 0x1407335F0 (PnpCopyResourceList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140733BF0 (IopQueryBusResourceUpdateInterface.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUpdateDeviceResourceLists(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rsi
  void *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  _QWORD *v7; // r14
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF

  Src = 0LL;
  v14 = 0LL;
  v2 = (void *)a1[4];
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  result = IopQueryBusResourceUpdateInterface(v2, &P);
  if ( (int)result < 0 )
    return result;
  v7 = P;
  v9 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 1), &Src, &v14, v6);
  if ( v9 >= 0 )
  {
    if ( !Src || !v14 )
    {
LABEL_13:
      v9 = 0;
      goto LABEL_14;
    }
    v3 = PnpCopyResourceList(Src);
    if ( v3 )
    {
      v4 = PnpCopyResourceList(v14);
      if ( v4 )
      {
        ExAcquireFastMutex(&PiResourceListLock);
        v12 = (void *)a1[52];
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
        v13 = (void *)a1[53];
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        a1[52] = v3;
        a1[53] = v4;
        KeReleaseGuardedMutex(&PiResourceListLock);
        goto LABEL_13;
      }
    }
    v9 = -1073741670;
  }
LABEL_14:
  guard_dispatch_icall_no_overrides(v7[1], v8, v10, v11);
  ExFreePoolWithTag(v7, 0);
  if ( v9 < 0 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v9;
}
