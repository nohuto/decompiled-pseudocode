/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x14019B140
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x14005BD74 (-DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F0660 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1401FA0C8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403826AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(ADAPTER_DISPLAY *this, struct _LUID *a2)
{
  _DWORD *i; // rax
  DXGPROTECTEDSESSION *j; // rbx
  DXGADAPTER *v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rbx
  unsigned int k; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  DXGSESSIONDATA **v13; // rcx
  unsigned int v14; // [rsp+78h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this, *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 3128LL));
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 32));
    for ( i = (_DWORD *)*((_QWORD *)this + 10); i != (_DWORD *)((char *)this + 80) && i; i = *(_DWORD **)i )
      i[14] = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 680));
    for ( j = (DXGPROTECTEDSESSION *)*((_QWORD *)this + 91);
          j != (ADAPTER_DISPLAY *)((char *)this + 728) && j;
          j = *(DXGPROTECTEDSESSION **)j )
    {
      DXGPROTECTEDSESSION::Stop(j);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 85);
  }
  v5 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v14 = 0;
  if ( (*((_DWORD *)v5 + 111) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v5, a2, &v14, 0LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v7 = v14;
    v8 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 122), v14);
    if ( v8 < 0 )
    {
      v9 = v8;
      WdLogSingleEntry2(2LL, (unsigned int)v7, v8);
      WdLogGlobalForLineNumber = 6377;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to purge the cached IDD display config request for session 0x%I64x, (Status = 0x%I64x).",
        v7,
        v9,
        0LL,
        0LL,
        0LL);
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 24); ++k )
  {
    v11 = 4024LL * k;
    v12 = *((_QWORD *)this + 16);
    if ( *(_BYTE *)(v11 + v12 + 762) )
    {
      v13 = *(DXGSESSIONDATA ***)(v11 + v12 + 48);
      if ( v13 )
        DXGSESSIONDATA::DecrementDesktopVidPnCount(*v13);
    }
  }
  KeCancelTimer((PKTIMER)((char *)this + 752));
  KeFlushQueuedDpcs();
}
