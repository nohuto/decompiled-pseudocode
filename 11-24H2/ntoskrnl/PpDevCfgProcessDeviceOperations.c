/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x1409C94B4
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1409C9EF4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1409CDCF0 (PiDevCfgSetDeviceRegProp.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  int inited; // ebx
  int v7; // r14d
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v11; // [rsp+40h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-71h] BYREF
  __int128 v13; // [rsp+50h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v15[128]; // [rsp+90h] [rbp-29h] BYREF
  int v16; // [rsp+120h] [rbp+67h] BYREF
  int v17; // [rsp+130h] [rbp+77h] BYREF
  int v18; // [rsp+138h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v13 = 0LL;
  memset_0(v15, 0, 0x58uLL);
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
        inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v15, KeyHandle, -1, &v18, 0LL);
        if ( inited >= 0 )
        {
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, a2, L"PendingConfiguration");
          v7 = v18;
          if ( v18 )
          {
            v8 = *(_QWORD *)(a1 + 48);
            v17 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v8,
                        (__int64)a2,
                        0xBu,
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
