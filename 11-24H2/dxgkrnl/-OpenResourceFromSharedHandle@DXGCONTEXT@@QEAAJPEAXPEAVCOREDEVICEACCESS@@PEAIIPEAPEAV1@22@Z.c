/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x140389AA4
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x140389364 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400392F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140039658 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403530D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14038AAAC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        void *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int a5,
        struct DXGCONTEXT **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // ebx
  _DWORD *v10; // r13
  __int64 v11; // rcx
  int v12; // edi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r12d
  int v17; // r15d
  int v18; // edi
  struct DXGDEVICE *v19; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned int v21; // r12d
  int v22; // eax
  __int64 v23; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v25; // rcx
  struct DXGPROCESS *v26; // r15
  volatile signed __int32 *v28; // r14
  unsigned int v29; // ebx
  unsigned int v30; // eax
  __int64 v31; // r8
  int v32; // ecx
  struct _EX_RUNDOWN_REF *v33; // rdx
  unsigned int i; // r15d
  struct _EX_RUNDOWN_REF *v35; // rbx
  unsigned int v36; // r14d
  __int64 v37; // rbx
  __int64 v38; // r10
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // ecx
  struct VIDMM_MULTI_ALLOC *Count; // r9
  int v43; // eax
  struct _EX_RUNDOWN_REF *v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  void *v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  void *v49; // [rsp+78h] [rbp-88h]
  void *v50; // [rsp+80h] [rbp-80h]
  void *v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int128 v53; // [rsp+98h] [rbp-68h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int *v56; // [rsp+C0h] [rbp-40h]
  unsigned int *v57; // [rsp+C8h] [rbp-38h]
  struct DXGPROCESS *v58; // [rsp+D0h] [rbp-30h]
  unsigned int *v59; // [rsp+D8h] [rbp-28h]
  _QWORD v60[10]; // [rsp+E0h] [rbp-20h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v61; // [rsp+130h] [rbp+30h] BYREF

  v57 = a7;
  v8 = (unsigned int)a2;
  v59 = a8;
  v46 = (__int64)a3;
  v47 = a2;
  v10 = 0LL;
  v56 = a4;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  memset(v60, 0, 0x48uLL);
  v11 = *((_QWORD *)this + 2);
  DWORD1(v53) = v8;
  LODWORD(v53) = *(_DWORD *)(v11 + 468);
  v12 = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v11, &v53, v8);
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
    WdLogGlobalForLineNumber = 6727;
    goto LABEL_14;
  }
  v13 = HIDWORD(v54);
  v14 = 80LL * HIDWORD(v54);
  if ( !is_mul_ok(HIDWORD(v54), 0x50uLL) )
    v14 = -1LL;
  v10 = (_DWORD *)operator new[](v14, 0x4B677844u, 256LL);
  if ( !v10 )
    goto LABEL_38;
  v16 = DWORD1(v54);
  if ( DWORD1(v54) )
  {
    v49 = (void *)operator new[](DWORD1(v54), 0x4B677844u, 256LL);
    if ( !v49 )
    {
      WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
      WdLogGlobalForLineNumber = 6744;
LABEL_37:
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Failed memory allocation",
        *((_QWORD *)this + 2),
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_38:
      v12 = -1073741670;
      goto LABEL_14;
    }
  }
  v17 = DWORD2(v54);
  if ( DWORD2(v54) )
  {
    v50 = (void *)operator new[](DWORD2(v54), 0x4B677844u, 256LL);
    if ( !v50 )
    {
      WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
      WdLogGlobalForLineNumber = 6757;
      goto LABEL_37;
    }
  }
  v18 = v54;
  if ( (_DWORD)v54 )
  {
    v51 = (void *)operator new[]((unsigned int)v54, 0x4B677844u, 256LL);
    if ( !v51 )
    {
      WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
      WdLogGlobalForLineNumber = 6770;
      goto LABEL_37;
    }
  }
  v19 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  LODWORD(v60[0]) = *((_DWORD *)v19 + 117);
  HIDWORD(v60[0]) = (_DWORD)v47;
  v60[7] = v49;
  v60[5] = v50;
  v60[3] = v51;
  LODWORD(v60[1]) = v13;
  v60[2] = v10;
  LODWORD(v60[8]) = v16;
  LODWORD(v60[6]) = v17;
  LODWORD(v60[4]) = v18;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15);
  v21 = 0;
  v22 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v19,
          (__int64)v60,
          HIDWORD(v60[0]),
          0LL,
          0,
          (struct COREDEVICEACCESS *)v46,
          0,
          CurrentProcess,
          0LL,
          0LL);
  v12 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry1(3LL, v22);
    WdLogGlobalForLineNumber = 6799;
    goto LABEL_14;
  }
  Current = DXGPROCESS::GetCurrent(v23);
  v25 = *((_QWORD *)this + 2);
  v26 = Current;
  v58 = Current;
  v12 = -1073741275;
  v48 = *(_QWORD *)(v25 + 16);
  while ( v21 < v13 )
  {
    v28 = (volatile signed __int32 *)((char *)v26 + 248);
    v29 = v10[20 * v21];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v26 + 248));
    v30 = (v29 >> 6) & 0xFFFFFF;
    if ( v30 < *((_DWORD *)v26 + 74)
      && (v31 = *((_QWORD *)v26 + 35), ((v29 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0x60))
      && (*(_DWORD *)(v31 + 16LL * v30 + 8) & 0x2000) == 0
      && (v32 = *(_DWORD *)(v31 + 16LL * v30 + 8) & 0x1F) != 0 )
    {
      if ( v32 == 5 )
      {
        v33 = *(struct _EX_RUNDOWN_REF **)(v31 + 16LL * v30);
        i = 0;
        goto LABEL_21;
      }
      WdLogSingleEntry0(2LL);
      i = 0;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      i = 0;
    }
    v33 = 0LL;
LABEL_21:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v33);
    _InterlockedDecrement(v28 + 4);
    ExReleasePushLockSharedEx(v28, 0LL);
    KeLeaveCriticalRegion();
    v35 = v44;
    if ( !v44 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6812;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"AllocRef.m_pAllocation != NULL",
        6812LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v35 = v44;
    }
    v36 = (LODWORD(v35[9].Count) >> 12) & 0x3F;
    v45 = 0;
    if ( v36 == *((_DWORD *)this + 97) )
    {
      v45 = 1;
LABEL_25:
      v12 = 0;
      if ( *((_BYTE *)this + 432) || *((_BYTE *)this + 433) )
      {
        memset(&v61, 0, sizeof(v61));
        v61.Protection.Value = 1LL;
        Count = (struct VIDMM_MULTI_ALLOC *)v35[3].Count;
        v37 = v48;
        v43 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                *(VIDMM_EXPORT **)(v48 + 760),
                *(struct VIDMM_GLOBAL **)(v48 + 768),
                0LL,
                Count,
                &v61,
                0,
                v36);
        v12 = v43;
        if ( v43 < 0 )
        {
          WdLogSingleEntry1(3LL, v43);
          WdLogGlobalForLineNumber = 6855;
LABEL_55:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
          goto LABEL_14;
        }
      }
      else
      {
        v37 = v48;
      }
      if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
      {
        v52 = 0LL;
        v47 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, void **))(*(_QWORD *)(*(_QWORD *)(v37 + 760) + 8LL) + 928LL))(
          *(_QWORD *)(v38 + 792),
          v36,
          &v52,
          &v47);
        v39 = *(_QWORD *)(v37 + 760);
        v46 = 0LL;
        v55 = 0LL;
        v40 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(v39 + 8) + 720LL))(
                *(_QWORD *)(v37 + 768),
                v52,
                v44 + 3,
                1LL,
                3,
                &v46,
                &v55);
        v12 = v40;
        if ( v40 < 0 )
        {
          WdLogSingleEntry1(3LL, v40);
          WdLogGlobalForLineNumber = 6888;
          goto LABEL_55;
        }
        if ( v40 == 259 )
        {
          (*(void (__fastcall **)(_QWORD, void **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v37 + 760) + 8LL) + 936LL))(
            *(_QWORD *)(v37 + 768),
            &v47,
            &v46,
            1LL);
          v12 = 0;
        }
      }
      v41 = v10[20 * v21];
      if ( v45 )
        *v56 = v41;
      else
        v57[i] = v41;
    }
    else
    {
      for ( i = 0; i < a5; ++i )
      {
        if ( v36 == *((_DWORD *)a6[i + 1] + 97) )
          goto LABEL_25;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
    v13 = HIDWORD(v54);
    ++v21;
    v26 = v58;
  }
  if ( v12 >= 0 )
    *v59 = v13;
LABEL_14:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v49);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v50);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v51);
  return (unsigned int)v12;
}
