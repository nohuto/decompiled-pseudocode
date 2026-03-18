/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1403C4EDC
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14002A7F8 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x14004D6BC (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14004D718 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DxgkGetAdapterVirtualTopologyEnabledNoLock @ 0x1403C5080 (DxgkGetAdapterVirtualTopologyEnabledNoLock.c)
 *     DxgkGetContentProtectionUserModeDriverName @ 0x1403C5100 (DxgkGetContentProtectionUserModeDriverName.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int AdapterVirtualTopologyEnabledNoLock; // esi
  _WORD *ContentProtectionUserModeDriverName; // rax
  int v8; // ecx
  char v9; // al
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int16 v11; // [rsp+28h] [rbp-18h]
  char v12; // [rsp+2Ah] [rbp-16h]
  PVOID Tag; // [rsp+30h] [rbp-10h] BYREF
  char v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+60h] [rbp+20h] BYREF

  Tag = (PVOID)a1;
  *(_DWORD *)a2 = 0;
  v14 = 0;
  v10 = a1;
  v11 = 0;
  v12 = 0;
  if ( a1 )
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)&v10);
  if ( AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)&Tag) < 0 )
  {
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v10);
    if ( v14 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
    return 3221225659LL;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)&v10);
    v4 = *(_QWORD *)(a1 + 4032);
    if ( v4 )
    {
      v15 = 0;
      AdapterVirtualTopologyEnabledNoLock = DxgkGetAdapterVirtualTopologyEnabledNoLock(v4, &v15);
      if ( AdapterVirtualTopologyEnabledNoLock < 0 )
      {
        AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v10);
        if ( v14 )
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
        return (unsigned int)AdapterVirtualTopologyEnabledNoLock;
      }
      ContentProtectionUserModeDriverName = (_WORD *)DxgkGetContentProtectionUserModeDriverName(*(_QWORD *)(a1 + 4032));
      if ( *(int *)(*(_QWORD *)(a1 + 4032) + 3004LL) >= 2000 )
      {
        v8 = v15;
        if ( v15 )
          *(_BYTE *)a2 = 1;
        if ( *(_DWORD *)(a1 + 3152) >= 2u
          && ContentProtectionUserModeDriverName
          && *ContentProtectionUserModeDriverName
          && v8 )
        {
          *(_BYTE *)(a2 + 1) = 1;
        }
      }
      if ( *(_DWORD *)(a1 + 3360) != -1 && *(_WORD *)(a1 + 4992) )
      {
        v9 = *(_BYTE *)(a1 + 3356) & 1;
        *(_BYTE *)(a2 + 2) = 1;
        *(_BYTE *)(a2 + 3) = v9;
      }
    }
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v10);
    if ( v14 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
    return 0LL;
  }
}
