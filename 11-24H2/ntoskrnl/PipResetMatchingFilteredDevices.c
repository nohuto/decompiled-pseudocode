/*
 * XREFs of PipResetMatchingFilteredDevices @ 0x140C24080
 * Callers:
 *     PipResetDevices @ 0x140C23FB0 (PipResetDevices.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x14097E5DC (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegCloseKey @ 0x140A1004C (_PnpCtxRegCloseKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140A163D4 (_CmGetMatchingFilteredDeviceList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PipResetDevice @ 0x140C23DB0 (PipResetDevice.c)
 */

__int64 __fastcall PipResetMatchingFilteredDevices(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // esi
  _WORD *v7; // rdi
  void *v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  int InfoKey; // ebx
  ULONG v12; // r13d
  int v13; // r12d
  __int64 Pool2; // rax
  ULONG i; // r15d
  int v16; // eax
  const CHAR *v17; // r8
  int MatchingFilteredDeviceList; // eax
  const WCHAR *v19; // rsi
  __int64 v20; // rax
  int v22; // [rsp+50h] [rbp-20h]
  ULONG v23; // [rsp+54h] [rbp-1Ch] BYREF
  int v24; // [rsp+58h] [rbp-18h] BYREF
  void *v25; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+58h] BYREF

  v28 = 0;
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v22 = 0;
  v7 = 0LL;
  v24 = 0;
  v23 = 0;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v9 = PnpCtxRegOpenKey(a1, 2147483650LL, a2, 0, 0x20019u, (__int64)&v25);
  InfoKey = v9;
  if ( v9 == -1073741772 )
  {
    InfoKey = 0;
  }
  else if ( v9 >= 0 )
  {
    InfoKey = PnpCtxRegQueryInfoKey(v10, (int)v25, 0, 0, (__int64)&v23, (__int64)&v24, 0LL);
    if ( InfoKey >= 0 )
    {
      v12 = v23;
      if ( v23 )
      {
        v13 = v24 + 1;
        Pool2 = ExAllocatePool2(0x100uLL, 2LL * (unsigned int)(v24 + 1), 0x6E697050uLL);
        v10 = 0LL;
        v8 = (void *)Pool2;
        if ( Pool2 )
        {
          for ( i = 0; i < v12; ++i )
          {
            v24 = v13;
            v16 = PnpCtxRegEnumValue(0LL, v25, i, v8, (__int64)&v24, 0LL, 0LL, 0LL);
            v10 = 0LL;
            if ( v16 >= 0 )
            {
              if ( (v6 & 0x80u) == 0 )
              {
                v17 = "Resetting devices using service '%ws'\n";
                if ( (v6 & 2) == 0 )
                  v17 = "Resetting devices related to '%ws'\n";
                DbgPrintEx(0x20u, 0, v17, v8);
              }
              else
              {
                DbgPrintEx(0x20u, 0, "Resetting devices in device setup class '%ws'\n", v8);
              }
              MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                             a1,
                                             (__int64)v8,
                                             v6,
                                             0LL,
                                             0LL,
                                             (__int64)v7,
                                             v22,
                                             (__int64)&v28);
              if ( MatchingFilteredDeviceList == -1073741789 )
              {
                if ( v7 )
                  ExFreePoolWithTag(v7, 0);
                v22 = v28;
                v7 = (_WORD *)ExAllocatePool2(0x100uLL, 2LL * v28, 0x6E697050uLL);
                if ( !v7 )
                  goto LABEL_29;
                MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                               a1,
                                               (__int64)v8,
                                               v6,
                                               0LL,
                                               0LL,
                                               (__int64)v7,
                                               v22,
                                               (__int64)&v28);
              }
              v10 = 0LL;
              if ( MatchingFilteredDeviceList >= 0 && v28 )
              {
                v19 = v7;
                if ( *v7 )
                {
                  do
                  {
                    PipResetDevice(a1, v19);
                    v20 = -1LL;
                    v10 = 0LL;
                    do
                      ++v20;
                    while ( v19[v20] );
                    v19 += v20 + 1;
                  }
                  while ( *v19 );
                  v12 = v23;
                }
                v6 = a3;
              }
            }
          }
        }
        else
        {
LABEL_29:
          InfoKey = -1073741670;
        }
      }
    }
  }
  if ( v25 )
    PnpCtxRegCloseKey(v10, v25);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return (unsigned int)InfoKey;
}
