/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x140389364
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1402A4B90 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x140332650 (DxgkRender.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002BA80 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x140033AFC (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1400358E8 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x140036658 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140037A18 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1402CC71C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x140389AA4 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        int a3,
        DXGADAPTER **a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        unsigned int a6,
        unsigned int *a7,
        struct DXGCONTEXT **a8)
{
  __int64 v8; // r14
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // r12
  unsigned int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // rdx
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  const char *v23; // rdx
  int v24; // edi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int *v27; // rdi
  unsigned int v28; // edi
  DXGDEVICE *v29; // rcx
  int v30; // r12d
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v33; // r13
  struct DXGGLOBAL *Global; // rax
  struct _D3DKMT_PRESENT *v35; // rdi
  unsigned int *v36; // rdi
  __int64 v37; // r12
  void *v38; // r12
  unsigned int *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  RECT v43; // xmm0
  unsigned int v44; // eax
  __int64 v45; // r8
  struct DXGCONTEXT **v46; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGGLOBAL *v48; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v49; // rdi
  const char *v50; // rdx
  unsigned int v51; // [rsp+50h] [rbp-B0h]
  unsigned int v52; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v53; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v54; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v55; // [rsp+60h] [rbp-A0h]
  unsigned int v56; // [rsp+68h] [rbp-98h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  void *v58; // [rsp+78h] [rbp-88h]
  DXGADAPTERSTOPRESETLOCKSHARED *v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+88h] [rbp-78h]
  HWND v61; // [rsp+90h] [rbp-70h]
  void *v62; // [rsp+98h] [rbp-68h] BYREF
  struct DXGCONTEXT **v63; // [rsp+A0h] [rbp-60h]
  PVOID Entry[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v65; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  __int128 v72; // [rsp+118h] [rbp+18h] BYREF
  RECT v73; // [rsp+128h] [rbp+28h] BYREF
  __int128 v74; // [rsp+138h] [rbp+38h] BYREF

  v8 = a6;
  *(_QWORD *)&v73.left = a2;
  v59 = a5;
  v11 = 0;
  v63 = a8;
  v60 = a3;
  if ( a2 >= 0 )
    return (unsigned int)v11;
  v62 = 0LL;
  v12 = HIDWORD(a2);
  Entry[0] = (PVOID)(unsigned int)a2;
  LODWORD(v12) = HIDWORD(a2) & 0x7FFFFFFF;
  v13 = *((_QWORD *)this + 2);
  v14 = 0LL;
  v72 = 0LL;
  v57 = 0LL;
  v15 = 0;
  v74 = 0LL;
  v16 = *(_QWORD *)(v13 + 1896);
  v71 = v16;
  v61 = (HWND)v12;
  v54 = 0;
  v51 = 0;
  v52 = 0;
  v55 = 0LL;
  v58 = 0LL;
  v56 = 0;
  v53 = 0;
  v17 = *((_QWORD *)DXGPROCESS::GetCurrent(v12) + 11);
  if ( !v17 )
    return 3221225485LL;
  if ( v16 )
    v19 = v16;
  else
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v67 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
  v65 = 0LL;
  v66 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = v19;
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v59);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
  v20 = CWin32kLocks::Lock((CWin32kLocks *)&v65, v61, 1, 1, 0);
  if ( v20 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, void **))(v17 + 248))(v65, &v62);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v17 + 72))(v65, &v72)
      && (*(unsigned int (__fastcall **)(HWND, __int128 *))(v17 + 376))(v61, &v74) )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v17 + 328))(v65, &v57);
      v22 = v20;
      if ( !v21 )
        v22 = -1073741811;
      v20 = v22;
    }
    else
    {
      v20 = -1073741811;
    }
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)&v65);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v59);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v23);
    return (unsigned int)v24;
  }
  if ( v20 < 0 )
  {
    v11 = 0;
    goto LABEL_52;
  }
  if ( !a6 )
  {
    v27 = 0LL;
    goto LABEL_27;
  }
  v25 = 4LL * a6;
  if ( !is_mul_ok(a6, 4uLL) )
    v25 = -1LL;
  v55 = (void *)operator new[](v25, 0x4B677844u, 256LL);
  v14 = (unsigned int *)v55;
  if ( v55 )
  {
    v26 = 4LL * a6;
    if ( !is_mul_ok(a6, 4uLL) )
      v26 = -1LL;
    v58 = (void *)operator new[](v26, 0x4B677844u, 256LL);
    v27 = (unsigned int *)v58;
    if ( !v58 )
    {
      v11 = -1073741670;
      goto LABEL_58;
    }
LABEL_27:
    v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
            this,
            Entry[0],
            (struct COREDEVICEACCESS *)a4,
            &v54,
            a6,
            v63,
            v14,
            &v56);
    if ( v11 < 0 )
    {
      LODWORD(v14) = v54;
      goto LABEL_52;
    }
    if ( v62
      && ((int)DXGCONTEXT::OpenResourceFromSharedHandle(
                 this,
                 v62,
                 (struct COREDEVICEACCESS *)a4,
                 &v52,
                 a6,
                 v63,
                 v27,
                 &v53) >= 0
        ? (v15 = v52)
        : (v52 = 0),
          (v51 = v15) != 0) )
    {
      if ( !a6 )
      {
        v28 = v53;
        if ( v53 > 1 )
        {
          v29 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 420LL) == 4318 )
          {
            v30 = v60;
            VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v29, v60);
            if ( VistaBltStubInfo )
            {
              if ( v30 )
              {
                *(_QWORD *)VistaBltStubInfo = *(_QWORD *)&v73.left;
                *((_DWORD *)VistaBltStubInfo + 2) = v28 - 1;
                *((_DWORD *)VistaBltStubInfo + 3) = *((_DWORD *)this + 6);
              }
              else if ( (*((_DWORD *)VistaBltStubInfo + 2))-- == 1 )
              {
                *(_QWORD *)VistaBltStubInfo = 0LL;
                *((_DWORD *)VistaBltStubInfo + 3) = 0;
              }
            }
          }
        }
        goto LABEL_45;
      }
    }
    else if ( !a6 )
    {
      goto LABEL_45;
    }
    if ( v56 <= 1 && v53 <= 1 )
    {
      v8 = 0LL;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
      v55 = 0LL;
      v58 = 0LL;
    }
LABEL_45:
    CVidSchSubmitData::CVidSchSubmitData(
      (CVidSchSubmitData *)Entry,
      *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
      1);
    v33 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry[0];
    LODWORD(v14) = v54;
    if ( Entry[0] )
    {
      LODWORD(v72) = v57 + v72;
      DWORD1(v72) += HIDWORD(v57);
      DWORD2(v72) += v57;
      HIDWORD(v72) += HIDWORD(v57);
      v73.left = v72 - v74;
      v73.top = DWORD1(v72) - DWORD1(v74);
      v73.right = DWORD2(v72) - v74;
      v73.bottom = HIDWORD(v72) - DWORD1(v74);
      Global = DXGGLOBAL::GetGlobal();
      v35 = (struct _D3DKMT_PRESENT *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
      if ( v35 )
      {
        v40 = v71;
        if ( !v71 )
          v40 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
        v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
        v70 = v40;
        v65 = 0LL;
        v66 = 0LL;
        v67 = v41;
        v68 = 0LL;
        v69 = 0LL;
        memset(v35, 0, 0x5F8uLL);
        v42 = *(unsigned int *)(*((_QWORD *)this + 2) + 468LL);
        v35->hDevice = v42;
        v35->hDevice = *((_DWORD *)this + 6);
        v35->hWindow = v61;
        v35->hDestination = v51;
        v35->VidPnSourceId = 0;
        v35->hSource = (unsigned int)v14;
        v43 = v73;
        v35->pSrcSubRects = &v73;
        v44 = v35->Flags.Value & 0xFFFFEFFF;
        v35->SubRectCnt = 1;
        *(_QWORD *)&v35->PresentCount = 0LL;
        v35->Flags.Value = v44 | 0x10081;
        v35->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
        v35->SrcRect = v43;
        v35->PresentHistoryToken.Token.Flip.hLogicalSurface = (ULONG64)v62;
        v35->PresentHistoryToken.Token.Flip.dxgContext = 0LL;
        v35->BroadcastContextCount = v8;
        if ( (_DWORD)v8 )
        {
          v42 = (__int64)a7;
          v45 = (unsigned int)v8;
          do
          {
            *(_DWORD *)((char *)v35 - (char *)a7 + v42 + 96) = *(_DWORD *)v42;
            v42 += 4LL;
            --v45;
          }
          while ( v45 );
        }
        v46 = v63;
        v35->BroadcastSrcAllocation = (D3DKMT_HANDLE *)v55;
        v35->BroadcastDstAllocation = (D3DKMT_HANDLE *)v58;
        *(_QWORD *)&v35[1].hDevice = v46;
        LOBYTE(v35[1].VidPnSourceId) = 1;
        Current = DXGPROCESS::GetCurrent(v42);
        DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, v35, Current);
        v11 = DXGCONTEXT::Present(this, v35, (struct COREDEVICEACCESS *)a4, v59, (struct CWin32kLocks *)&v65, v46, v33);
        v48 = DXGGLOBAL::GetGlobal();
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v48 + 1136), v35);
        if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
        v49 = v59;
        if ( *((_BYTE *)v59 + 16) )
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v59);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)&v65);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v49);
        if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
        {
          v11 = -1073741130;
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v50);
        }
        goto LABEL_49;
      }
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6552;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for present parameters.",
        6552LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = -1073741801;
LABEL_49:
    if ( v33 )
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Entry[1] + 1424), v33);
    v15 = v51;
LABEL_52:
    if ( (_DWORD)v14 )
      DXGCONTEXT::DestroyAllocation(this, (unsigned int)v14, (struct COREDEVICEACCESS *)a4);
    if ( v15 )
      DXGCONTEXT::DestroyAllocation(this, v15, (struct COREDEVICEACCESS *)a4);
    v14 = (unsigned int *)v55;
    if ( !v55 )
      goto LABEL_64;
    if ( !(_DWORD)v8 )
    {
LABEL_63:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
LABEL_64:
      v38 = v58;
      if ( v58 )
      {
        if ( (_DWORD)v8 )
        {
          v39 = (unsigned int *)v58;
          do
          {
            if ( *v39 )
              DXGCONTEXT::DestroyAllocation(this, *v39, (struct COREDEVICEACCESS *)a4);
            ++v39;
            --v8;
          }
          while ( v8 );
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v38);
      }
      return (unsigned int)v11;
    }
LABEL_58:
    v36 = v14;
    v37 = (unsigned int)v8;
    do
    {
      if ( *v36 )
        DXGCONTEXT::DestroyAllocation(this, *v36, (struct COREDEVICEACCESS *)a4);
      ++v36;
      --v37;
    }
    while ( v37 );
    v14 = (unsigned int *)v55;
    goto LABEL_63;
  }
  return (unsigned int)-1073741670;
}
