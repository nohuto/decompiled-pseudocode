/*
 * XREFs of _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14081AD60 (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmDeleteDeviceContainer @ 0x140819D14 (_CmDeleteDeviceContainer.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B6F54 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainerWorker(__int64 a1, __int64 a2, int a3, __int64 a4, _BYTE *a5)
{
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v14; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v16; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  v14 = 0;
  *a5 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10LL, &v18);
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = PnpCtxRegOpenKey(a1, v18, a2, 0, 1, (__int64)&v17);
    if ( CachedContextBaseKey >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(a1, (_DWORD)v17, (unsigned int)L"BaseContainers", 0, 1, (__int64)&v16);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PnpCtxRegOpenKey(a1, (_DWORD)v16, a3, 0, 3, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          PnpCtxRegDeleteValue(v10, Handle, a4);
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v11, (_DWORD)Handle, 0, 0, (__int64)&v14, 0LL, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( !v14 )
              PnpCtxRegDeleteTree(a1, Handle, 0LL);
            CachedContextBaseKey = PnpCtxRegQueryInfoKey(v12, (_DWORD)v16, (unsigned int)&v14, 0, 0LL, 0LL, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( !v14 )
              {
                CachedContextBaseKey = CmDeleteDeviceContainer(a1, a2);
                if ( CachedContextBaseKey >= 0 )
                  *a5 = 1;
              }
              PnpObjectRaisePropertyChangeEvent(a1, a4, 1, 0, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
            }
          }
        }
      }
    }
  }
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ZwClose(v17);
  return (unsigned int)CachedContextBaseKey;
}
