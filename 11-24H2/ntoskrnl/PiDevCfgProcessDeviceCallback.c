/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x140728690
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     PnpDuplicateUnicodeString @ 0x1404BBB34 (PnpDuplicateUnicodeString.c)
 *     PipAreDriversLoaded @ 0x1404DD238 (PipAreDriversLoaded.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1409C9EF4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1409CDCF0 (PiDevCfgSetDeviceRegProp.c)
 *     PnpSetTargetDeviceRemove @ 0x140A8BB2C (PnpSetTargetDeviceRemove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // eax
  int v11; // ecx
  __int64 Pool2; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  void *v15; // rcx
  int v17; // [rsp+40h] [rbp-79h]
  int v18; // [rsp+48h] [rbp-71h]
  HANDLE Handle[2]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v20[144]; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+120h] [rbp+67h] BYREF
  int v22; // [rsp+128h] [rbp+6Fh] BYREF
  int v23; // [rsp+130h] [rbp+77h] BYREF
  unsigned int v24; // [rsp+138h] [rbp+7Fh] BYREF

  memset_0(v20, 0, 0x58uLL);
  v23 = 1;
  v4 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle[0] = 0LL;
  v21 = 0;
  v24 = 0;
  v22 = 0;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v5 = a1 + 40;
      if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 16, 0, 983103, 0, (__int64)Handle, 0LL) >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 48);
        v22 = 4;
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v6, Handle[0], 11, (__int64)&v23, (__int64)&v21, (__int64)&v22, 0) >= 0
          && v23 == 4
          && v22 == 4 )
        {
          v7 = v21;
        }
        else
        {
          v7 = 0;
          v21 = 0;
        }
        if ( (v7 & 0x40000) != 0 )
        {
          if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), Handle[0], v20) < 0 )
            goto LABEL_29;
          LOBYTE(v8) = (PiDevCfgFlags & 2) != 0;
          if ( ((unsigned __int8)v8 & ((v21 & 0x400) != 0)) != 0 )
          {
            v9 = v21 & 0xFFFFFFDF;
          }
          else
          {
            v10 = PiDevCfgCheckDeviceNeedsUpdate((__int64)v20, &v24);
            v9 = v21;
            if ( v10 >= 0 )
              v9 = v24 | v21;
          }
          v21 = v9 & 0xFFFBFFFF;
          PiDevCfgSetDeviceRegProp(v8, (unsigned int)v20, 11, 4, (__int64)&v21, 4);
          LOBYTE(v7) = v21;
        }
        if ( (v7 & 2) != 0 )
        {
          if ( (unsigned int)PipAreDriversLoaded(a1) )
          {
            v21 &= ~2u;
            PiDevCfgSetDeviceRegProp(v11, (unsigned int)v20, 11, 4, (__int64)&v21, 4);
          }
          else
          {
            Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x63647050u);
            v13 = (_QWORD *)Pool2;
            if ( Pool2 )
            {
              if ( PnpDuplicateUnicodeString(Pool2 + 16, v5) )
              {
                v14 = *(_QWORD **)(a2 + 8);
                if ( *v14 != a2 )
                  __fastfail(3u);
                *v13 = a2;
                v13[1] = v14;
                *v14 = v13;
                *(_QWORD *)(a2 + 8) = v13;
              }
              else
              {
                ExFreePoolWithTag(v13, 0);
              }
            }
          }
        }
        else if ( (v7 & 0x20) != 0 )
        {
          v15 = *(void **)(a1 + 32);
          if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
          {
            PnpRequestDeviceAction(v15, 1u, 1, 0LL, 0LL, 0LL, 0LL);
            PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 0x10u, 1, 0LL, 0LL, 0LL, 0LL);
          }
          else
          {
            PnpSetTargetDeviceRemove(v15, 0, 18, -1073740651, 0LL, v17, v18, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
  }
LABEL_29:
  PiDevCfgFreeDeviceContext(v20);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
