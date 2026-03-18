/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x1408905EC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _PnpCtxRegDeleteTree @ 0x14088F19C (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgInitDeviceContext @ 0x140890EB0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x140891014 (PiDevCfgFreeDeviceContext.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094EE3C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14095F8EC (PiDevCfgConfigureDeviceKeys.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  int inited; // ebx
  int v7; // r14d
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v11; // [rsp+40h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-61h] BYREF
  __int128 v13; // [rsp+50h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v15[112]; // [rsp+90h] [rbp-19h] BYREF
  int v16; // [rsp+110h] [rbp+67h] BYREF
  int v17; // [rsp+120h] [rbp+77h] BYREF
  int v18; // [rsp+128h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v13 = 0LL;
  memset_0(v15, 0, 0x48uLL);
  v16 = 0;
  v18 = 0;
  v11 = 0;
  v17 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *((_QWORD *)&v13 + 1) = L"PendingConfiguration";
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
    LODWORD(v13) = 2752552;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    inited = v4;
    if ( v4 == -1073741772 )
    {
      inited = 0;
    }
    else if ( v4 >= 0 )
    {
      inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v15);
      if ( inited >= 0 )
      {
        inited = PiDevCfgConfigureDeviceKeys(a1, (unsigned int)v15, (_DWORD)KeyHandle, -1, (__int64)&v18, 0LL);
        if ( inited >= 0 )
        {
          PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, (__int64)L"PendingConfiguration");
          v7 = v18;
          if ( v18 )
          {
            v8 = *(_QWORD *)(a1 + 48);
            v17 = 4;
            if ( (int)CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        v8,
                        (_DWORD)a2,
                        11,
                        (__int64)&v11,
                        (__int64)&v16,
                        (__int64)&v17,
                        0) >= 0
              && v11 == 4
              && v17 == 4 )
            {
              v10 = v16;
            }
            else
            {
              v10 = 0;
            }
            v16 = v7 | v10;
            PiDevCfgSetDeviceRegProp(v9, (unsigned int)v15, 11, 4, (__int64)&v16, 4);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    inited = -1073741808;
  }
  PiDevCfgFreeDeviceContext(v15);
  return (unsigned int)inited;
}
