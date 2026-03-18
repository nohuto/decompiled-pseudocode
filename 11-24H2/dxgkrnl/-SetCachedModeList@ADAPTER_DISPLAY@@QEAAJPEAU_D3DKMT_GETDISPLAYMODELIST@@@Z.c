/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140408210
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1400679F0 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(ADAPTER_DISPLAY *this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v5; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  PERESOURCE *v8; // rcx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  NTSTATUS v11; // eax
  __int64 v12; // rbp
  __int64 v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  struct _LUID Luid; // [rsp+70h] [rbp+8h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6532;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pInputDisplayModeList != NULL",
      6532LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  VidPnSourceId = a2->VidPnSourceId;
  v5 = *((_DWORD *)this + 24);
  if ( VidPnSourceId >= v5 )
  {
    WdLogSingleEntry2(2LL, VidPnSourceId, v5);
    v14 = *((unsigned int *)this + 24);
    v13 = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 6537;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      v13,
      v14,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  IsEnabledDeviceUsageNoInline = Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline();
  v8 = (PERESOURCE *)*((_QWORD *)this + 2);
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( DXGADAPTER::IsCoreResourceExclusiveOwner(v8) )
      goto LABEL_12;
    WdLogSingleEntry0(1LL);
    v9 = 6550LL;
    v10 = L"IsCoreResourceExclusiveOwner()";
    goto LABEL_11;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v8)
    && *(struct _KTHREAD **)(4024LL * a2->VidPnSourceId + *((_QWORD *)this + 16) + 1136) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v9 = 6546LL;
    v10 = L"IsCoreResourceExclusiveOwner() || m_pDisplaySource[pInputDisplayModeList->VidPnSourceId].m_CachedModeListLock."
           "IsExclusiveOwner()";
LABEL_11:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_12:
  if ( !*((_BYTE *)this + 292) )
    return 3221226021LL;
  Luid = 0LL;
  v11 = ZwAllocateLocallyUniqueId(&Luid);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(6LL, v11);
    WdLogGlobalForLineNumber = 6582;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate LUID for mode cache, returning 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_BYTE *)(4024LL * a2->VidPnSourceId + *((_QWORD *)this + 16) + 1100) = 0;
  }
  else
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(4024LL * a2->VidPnSourceId
                                                                + *((_QWORD *)this + 16)
                                                                + 1088));
    *(_QWORD *)(4024LL * a2->VidPnSourceId + *((_QWORD *)this + 16) + 1088) = a2->pModeList;
    *(_DWORD *)(4024LL * a2->VidPnSourceId + *((_QWORD *)this + 16) + 1096) = a2->ModeCount;
    *(_BYTE *)(4024LL * a2->VidPnSourceId + *((_QWORD *)this + 16) + 1100) = 1;
    *(struct _LUID *)(4024LL * a2->VidPnSourceId + *((_QWORD *)this + 16) + 1108) = Luid;
  }
  return (unsigned int)v12;
}
