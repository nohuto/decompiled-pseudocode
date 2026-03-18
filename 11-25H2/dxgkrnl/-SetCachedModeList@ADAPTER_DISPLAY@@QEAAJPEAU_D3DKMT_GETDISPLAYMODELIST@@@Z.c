/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403F6EEC
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v5; // ecx
  NTSTATUS v7; // eax
  __int64 v8; // rbp
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  struct _LUID Luid; // [rsp+70h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6534;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 6534LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6536;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pInputDisplayModeList != NULL", 6536LL, 0LL, 0LL, 0LL, 0LL);
  }
  VidPnSourceId = a2->VidPnSourceId;
  v5 = *((_DWORD *)this + 24);
  if ( VidPnSourceId < v5 )
  {
    if ( *((_BYTE *)this + 292) )
    {
      Luid = 0LL;
      v7 = ZwAllocateLocallyUniqueId(&Luid);
      v8 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(6LL, v7);
        WdLogGlobalForLineNumber = 6575;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate LUID for mode cache, returning 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
        BYTE4(this[16][498 * a2->VidPnSourceId + 137]) = 0;
      }
      else
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[16][498 * a2->VidPnSourceId + 136]);
        this[16][498 * a2->VidPnSourceId + 136] = (PERESOURCE)a2->pModeList;
        LODWORD(this[16][498 * a2->VidPnSourceId + 137]) = a2->ModeCount;
        BYTE4(this[16][498 * a2->VidPnSourceId + 137]) = 1;
        *(PERESOURCE *)((char *)&this[16][498 * a2->VidPnSourceId + 138] + 4) = (PERESOURCE)Luid;
      }
      return (unsigned int)v8;
    }
    else
    {
      return 3221226021LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, VidPnSourceId, v5);
    v10 = *((unsigned int *)this + 24);
    v9 = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 6541;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      v9,
      v10,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
