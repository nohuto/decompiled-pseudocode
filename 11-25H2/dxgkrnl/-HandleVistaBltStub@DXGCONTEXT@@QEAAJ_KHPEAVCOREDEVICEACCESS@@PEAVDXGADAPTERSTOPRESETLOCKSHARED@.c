/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1403444D0 (DxgkRender.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x140033BE0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x140035AB0 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x140036668 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140037D84 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403332B8 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1403CE630 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
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
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  unsigned int *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // edi
  DXGDEVICE *v33; // rcx
  int v34; // r12d
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v37; // r13
  struct DXGGLOBAL *Global; // rax
  struct _D3DKMT_PRESENT *v39; // rdi
  unsigned int *v40; // rdi
  __int64 v41; // r12
  void *v42; // r12
  unsigned int *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  RECT v47; // xmm0
  unsigned int v48; // eax
  __int64 v49; // r8
  struct DXGCONTEXT **v50; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGGLOBAL *v52; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v53; // rdi
  const char *v54; // rdx
  unsigned int v55; // [rsp+50h] [rbp-B0h]
  unsigned int v56; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v59; // [rsp+60h] [rbp-A0h]
  unsigned int v60; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  void *v62; // [rsp+78h] [rbp-88h]
  DXGADAPTERSTOPRESETLOCKSHARED *v63; // [rsp+80h] [rbp-80h]
  int v64; // [rsp+88h] [rbp-78h]
  HWND v65; // [rsp+90h] [rbp-70h]
  void *v66; // [rsp+98h] [rbp-68h] BYREF
  struct DXGCONTEXT **v67; // [rsp+A0h] [rbp-60h]
  PVOID Entry[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+10h]
  __int128 v76; // [rsp+118h] [rbp+18h] BYREF
  RECT v77; // [rsp+128h] [rbp+28h] BYREF
  __int128 v78; // [rsp+138h] [rbp+38h] BYREF

  v8 = a6;
  *(_QWORD *)&v77.left = a2;
  v63 = a5;
  v11 = 0;
  v67 = a8;
  v64 = a3;
  if ( a2 >= 0 )
    return (unsigned int)v11;
  v66 = 0LL;
  v12 = HIDWORD(a2);
  Entry[0] = (PVOID)(unsigned int)a2;
  LODWORD(v12) = HIDWORD(a2) & 0x7FFFFFFF;
  v13 = *((_QWORD *)this + 2);
  v14 = 0LL;
  v76 = 0LL;
  v61 = 0LL;
  v15 = 0;
  v78 = 0LL;
  v16 = *(_QWORD *)(v13 + 1880);
  v75 = v16;
  v65 = (HWND)v12;
  v58 = 0;
  v55 = 0;
  v56 = 0;
  v59 = 0LL;
  v62 = 0LL;
  v60 = 0;
  v57 = 0;
  v17 = *((_QWORD *)DXGPROCESS::GetCurrent(v12) + 11);
  if ( !v17 )
    return 3221225485LL;
  if ( v16 )
    v19 = v16;
  else
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v71 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
  v69 = 0LL;
  v70 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = v19;
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v63);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
  v20 = CWin32kLocks::Lock((CWin32kLocks *)&v69, v65, 1, 1, 0);
  if ( v20 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, void **))(v17 + 248))(v69, &v66);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v17 + 72))(v69, &v76)
      && (*(unsigned int (__fastcall **)(HWND, __int128 *))(v17 + 376))(v65, &v78) )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v17 + 328))(v69, &v61);
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
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)&v69);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v63);
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
    v29 = 0LL;
    goto LABEL_27;
  }
  v26 = 4LL * a6;
  if ( !is_mul_ok(a6, 4uLL) )
    v26 = -1LL;
  v59 = (void *)operator new[](v26, 0x4B677844u, 256LL, v25);
  v14 = (unsigned int *)v59;
  if ( v59 )
  {
    v28 = 4LL * a6;
    if ( !is_mul_ok(a6, 4uLL) )
      v28 = -1LL;
    v62 = (void *)operator new[](v28, 0x4B677844u, 256LL, v27);
    v29 = (unsigned int *)v62;
    if ( !v62 )
    {
      v11 = -1073741670;
      goto LABEL_58;
    }
LABEL_27:
    v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
            this,
            Entry[0],
            (struct COREDEVICEACCESS *)a4,
            &v58,
            a6,
            v67,
            v14,
            &v60);
    if ( v11 < 0 )
    {
      LODWORD(v14) = v58;
      goto LABEL_52;
    }
    if ( v66
      && ((int)DXGCONTEXT::OpenResourceFromSharedHandle(
                 this,
                 v66,
                 (struct COREDEVICEACCESS *)a4,
                 &v56,
                 a6,
                 v67,
                 v29,
                 &v57) >= 0
        ? (v15 = v56)
        : (v56 = 0),
          (v55 = v15) != 0) )
    {
      if ( !a6 )
      {
        v32 = v57;
        if ( v57 > 1 )
        {
          v33 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL) + 420LL) == 4318 )
          {
            v34 = v64;
            VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v33, v64, v30, v31);
            if ( VistaBltStubInfo )
            {
              if ( v34 )
              {
                *(_QWORD *)VistaBltStubInfo = *(_QWORD *)&v77.left;
                *((_DWORD *)VistaBltStubInfo + 2) = v32 - 1;
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
    if ( v60 <= 1 && v57 <= 1 )
    {
      v8 = 0LL;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
      v59 = 0LL;
      v62 = 0LL;
    }
LABEL_45:
    CVidSchSubmitData::CVidSchSubmitData(
      (CVidSchSubmitData *)Entry,
      *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
      1);
    v37 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry[0];
    LODWORD(v14) = v58;
    if ( Entry[0] )
    {
      LODWORD(v76) = v61 + v76;
      DWORD1(v76) += HIDWORD(v61);
      DWORD2(v76) += v61;
      HIDWORD(v76) += HIDWORD(v61);
      v77.left = v76 - v78;
      v77.top = DWORD1(v76) - DWORD1(v78);
      v77.right = DWORD2(v76) - v78;
      v77.bottom = HIDWORD(v76) - DWORD1(v78);
      Global = DXGGLOBAL::GetGlobal();
      v39 = (struct _D3DKMT_PRESENT *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1104));
      if ( v39 )
      {
        v44 = v75;
        if ( !v75 )
          v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
        v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
        v74 = v44;
        v69 = 0LL;
        v70 = 0LL;
        v71 = v45;
        v72 = 0LL;
        v73 = 0LL;
        memset(v39, 0, 0x5F8uLL);
        v46 = *(unsigned int *)(*((_QWORD *)this + 2) + 468LL);
        v39->hDevice = v46;
        v39->hDevice = *((_DWORD *)this + 6);
        v39->hWindow = v65;
        v39->hDestination = v55;
        v39->VidPnSourceId = 0;
        v39->hSource = (unsigned int)v14;
        v47 = v77;
        v39->pSrcSubRects = &v77;
        v48 = v39->Flags.Value & 0xFFFFEFFF;
        v39->SubRectCnt = 1;
        *(_QWORD *)&v39->PresentCount = 0LL;
        v39->Flags.Value = v48 | 0x10081;
        v39->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
        v39->SrcRect = v47;
        v39->PresentHistoryToken.Token.Flip.hLogicalSurface = (ULONG64)v66;
        v39->PresentHistoryToken.Token.Flip.dxgContext = 0LL;
        v39->BroadcastContextCount = v8;
        if ( (_DWORD)v8 )
        {
          v46 = (__int64)a7;
          v49 = (unsigned int)v8;
          do
          {
            *(_DWORD *)((char *)v39 - (char *)a7 + v46 + 96) = *(_DWORD *)v46;
            v46 += 4LL;
            --v49;
          }
          while ( v49 );
        }
        v50 = v67;
        v39->BroadcastSrcAllocation = (D3DKMT_HANDLE *)v59;
        v39->BroadcastDstAllocation = (D3DKMT_HANDLE *)v62;
        *(_QWORD *)&v39[1].hDevice = v50;
        LOBYTE(v39[1].VidPnSourceId) = 1;
        Current = DXGPROCESS::GetCurrent(v46);
        DXGCONTEXT::CopyPresentArgs(this, v39, Current);
        v11 = DXGCONTEXT::Present(this, v39, (struct COREDEVICEACCESS *)a4, v63, (struct CWin32kLocks *)&v69, v50, v37);
        v52 = DXGGLOBAL::GetGlobal();
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v52 + 1104), v39);
        if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
        v53 = v63;
        if ( *((_BYTE *)v63 + 16) )
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v63);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)&v69);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v53);
        if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
        {
          v11 = -1073741130;
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v54);
        }
        goto LABEL_49;
      }
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6517;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for present parameters.",
        6517LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = -1073741801;
LABEL_49:
    if ( v37 )
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Entry[1] + 1424), v37);
    v15 = v55;
LABEL_52:
    if ( (_DWORD)v14 )
      DXGCONTEXT::DestroyAllocation(this, (unsigned int)v14, (struct COREDEVICEACCESS *)a4);
    if ( v15 )
      DXGCONTEXT::DestroyAllocation(this, v15, (struct COREDEVICEACCESS *)a4);
    v14 = (unsigned int *)v59;
    if ( !v59 )
      goto LABEL_64;
    if ( !(_DWORD)v8 )
    {
LABEL_63:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
LABEL_64:
      v42 = v62;
      if ( v62 )
      {
        if ( (_DWORD)v8 )
        {
          v43 = (unsigned int *)v62;
          do
          {
            if ( *v43 )
              DXGCONTEXT::DestroyAllocation(this, *v43, (struct COREDEVICEACCESS *)a4);
            ++v43;
            --v8;
          }
          while ( v8 );
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v42);
      }
      return (unsigned int)v11;
    }
LABEL_58:
    v40 = v14;
    v41 = (unsigned int)v8;
    do
    {
      if ( *v40 )
        DXGCONTEXT::DestroyAllocation(this, *v40, (struct COREDEVICEACCESS *)a4);
      ++v40;
      --v41;
    }
    while ( v41 );
    v14 = (unsigned int *)v59;
    goto LABEL_63;
  }
  return (unsigned int)-1073741670;
}
