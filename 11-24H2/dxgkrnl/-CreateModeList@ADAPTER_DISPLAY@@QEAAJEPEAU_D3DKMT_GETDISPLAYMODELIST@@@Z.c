/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140343CE0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140343FDC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r14
  void *v9; // rcx
  struct _D3DKMT_GETDISPLAYMODELIST *v10; // r9
  __int64 ActiveVidPnBasedDisplayModeList; // rbp
  __int64 v12; // rax
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  ULONG TimeIncrement; // eax
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  _BYTE v22[16]; // [rsp+50h] [rbp-38h] BYREF
  void *v23[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v24; // [rsp+70h] [rbp-18h]

  v6 = MEMORY[0xFFFFF78000000320];
  v8 = v6 * KeQueryTimeIncrement();
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6706;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayModeList != NULL", 6706LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6707;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayModeList->VidPnSourceId < GetNumVidPnSources()",
      6707LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3->pModeList )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6708;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayModeList->pModeList == NULL",
      6708LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v21) = 0;
    LODWORD(v20) = a3->VidPnSourceId;
    McTemplateK0pqq_EtwWriteTransfer((unsigned int)v20, (__int64)&EventStartRebuildModeCache, v7, this, v20, v21);
  }
  v9 = (void *)*((_QWORD *)this + 2);
  v24 = 0LL;
  v10 = (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v23 & -(__int64)(*((_QWORD *)this + 43) != 0LL));
  *(_OWORD *)v23 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(v9, a2, a3, v10);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v12 = *((_QWORD *)this + 43);
  if ( v12 )
  {
    v13 = *(void **)(v12 + 24LL * a3->VidPnSourceId + 8);
    if ( v13 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
    v14 = 3LL * a3->VidPnSourceId;
    v15 = *((_QWORD *)this + 43);
    *(_OWORD *)(v15 + 8 * v14) = *(_OWORD *)v23;
    *(_QWORD *)(v15 + 8 * v14 + 16) = v24;
  }
  else if ( v23[1] )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v23[1]);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a3->pModeList);
    a3->pModeList = 0LL;
    WdLogSingleEntry3(4LL, this, a3->VidPnSourceId, ActiveVidPnBasedDisplayModeList);
    WdLogGlobalForLineNumber = 6754;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v21) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v20) = a3->VidPnSourceId;
    McTemplateK0pqq_EtwWriteTransfer((unsigned int)v20, (__int64)&EventEndRebuildModeCache, v16, this, v20, v21);
  }
  v17 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    (v17 * (unsigned __int64)TimeIncrement - v8) / 0x2710,
    *(_QWORD *)(*((_QWORD *)this + 2) + 412LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
