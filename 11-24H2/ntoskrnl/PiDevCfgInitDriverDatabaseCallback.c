/*
 * XREFs of PiDevCfgInitDriverDatabaseCallback @ 0x140727F68
 * Callers:
 *     PiDrvDbEnumNodes @ 0x140734D1C (PiDrvDbEnumNodes.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxCloseMachine @ 0x140817930 (_PnpCtxCloseMachine.c)
 *     _PnpCtxOpenMachine @ 0x140817DD0 (_PnpCtxOpenMachine.c)
 *     _CmDeleteDevice @ 0x1408189D8 (_CmDeleteDevice.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x1409CD594 (PiDevCfgCopyObjectProperties.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140A163D4 (_CmGetMatchingFilteredDeviceList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PiDevCfgInitDriverDatabaseCallback(int a1)
{
  void *Pool2; // rbx
  __int64 v2; // rdi
  int v3; // ecx
  int v4; // r8d
  unsigned int v5; // eax
  int MatchingFilteredDeviceList; // eax
  _WORD *i; // rdi
  int Device; // r14d
  HANDLE v9; // r15
  __int64 v10; // rax
  int v12; // [rsp+28h] [rbp-29h]
  int v13; // [rsp+68h] [rbp+17h] BYREF
  PVOID P; // [rsp+70h] [rbp+1Fh]
  HANDLE v15; // [rsp+78h] [rbp+27h] BYREF
  HANDLE v16; // [rsp+80h] [rbp+2Fh] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+37h] BYREF
  char v18; // [rsp+D0h] [rbp+7Fh] BYREF

  v16 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  LODWORD(v2) = 0;
  v13 = 0;
  v15 = 0LL;
  Handle = 0LL;
  v18 = 0;
  if ( (int)PnpCtxRegOpenKey(PiPnpRtlCtx, -2147483646, a1, 0, 0x2000000, (__int64)&v16) >= 0 )
  {
    if ( (int)PnpCtxOpenMachine(v3, (_DWORD)v16, v4, 0) >= 0 )
    {
      v5 = 2048;
      v13 = 2048;
      while ( v5 > (unsigned int)v2 )
      {
        v2 = v5;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL, 2 * v2, 0x63647050u);
        if ( !Pool2 )
          goto LABEL_26;
        MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                       (_DWORD)P,
                                       (unsigned int)L"Root",
                                       1,
                                       0,
                                       0LL,
                                       (__int64)Pool2,
                                       v2,
                                       (__int64)&v13);
        if ( MatchingFilteredDeviceList != -1073741789 )
        {
          if ( MatchingFilteredDeviceList >= 0 )
          {
            if ( (_DWORD)v2 )
            {
              for ( i = Pool2; *i; i += v10 + 1 )
              {
                if ( (int)CmOpenDeviceRegKey((_DWORD)P, (_DWORD)i, 16, 0, 0x2000000, 0, (__int64)&v15, 0LL) >= 0 )
                {
                  Device = CmCreateDevice(PiPnpRtlCtx, (_DWORD)i, 131103, (unsigned int)&Handle, (__int64)&v18, 0);
                  if ( Device >= 0 )
                  {
                    v9 = Handle;
                    if ( v18 )
                      Device = PiDevCfgCopyObjectProperties(
                                 (_DWORD)P,
                                 (_DWORD)i,
                                 1,
                                 (_DWORD)v15,
                                 v12,
                                 (__int64)i,
                                 1,
                                 (__int64)Handle,
                                 0LL,
                                 0LL,
                                 0x20000);
                    ZwClose(v9);
                    if ( Device < 0 )
                      CmDeleteDevice(PiPnpRtlCtx);
                  }
                  ZwClose(v15);
                }
                v10 = -1LL;
                do
                  ++v10;
                while ( i[v10] );
              }
            }
          }
          goto LABEL_25;
        }
        v5 = v13;
      }
      if ( !Pool2 )
        goto LABEL_26;
LABEL_25:
      ExFreePoolWithTag(Pool2, 0);
    }
LABEL_26:
    if ( P )
      PnpCtxCloseMachine(P);
  }
  if ( v16 )
    ZwClose(v16);
  return 1;
}
