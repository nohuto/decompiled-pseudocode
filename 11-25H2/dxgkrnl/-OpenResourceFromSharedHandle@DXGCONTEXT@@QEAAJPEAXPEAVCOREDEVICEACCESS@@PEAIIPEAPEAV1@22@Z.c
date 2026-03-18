/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1403CE630
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400396F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14003B098 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x14035DD88 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14035F14C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
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
  __int64 v13; // r9
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // r12d
  int v19; // r15d
  int v20; // edi
  struct DXGDEVICE *v21; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned int v23; // r12d
  int v24; // eax
  __int64 v25; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v27; // rcx
  struct DXGPROCESS *v28; // r15
  volatile signed __int32 *v30; // r14
  unsigned int v31; // ebx
  unsigned int v32; // eax
  __int64 v33; // r8
  int v34; // ecx
  struct _EX_RUNDOWN_REF *v35; // rdx
  unsigned int i; // r15d
  struct _EX_RUNDOWN_REF *v37; // rbx
  unsigned int v38; // r14d
  __int64 v39; // rbx
  __int64 v40; // r10
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ecx
  struct VIDMM_MULTI_ALLOC *Count; // r9
  int v45; // eax
  struct _EX_RUNDOWN_REF *v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h] BYREF
  void *v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h]
  void *v51; // [rsp+78h] [rbp-88h]
  void *v52; // [rsp+80h] [rbp-80h]
  void *v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int128 v55; // [rsp+98h] [rbp-68h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int *v58; // [rsp+C0h] [rbp-40h]
  unsigned int *v59; // [rsp+C8h] [rbp-38h]
  struct DXGPROCESS *v60; // [rsp+D0h] [rbp-30h]
  unsigned int *v61; // [rsp+D8h] [rbp-28h]
  _QWORD v62[10]; // [rsp+E0h] [rbp-20h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v63; // [rsp+130h] [rbp+30h] BYREF

  v59 = a7;
  v8 = (unsigned int)a2;
  v61 = a8;
  v48 = (__int64)a3;
  v49 = a2;
  v10 = 0LL;
  v58 = a4;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  memset(v62, 0, 0x48uLL);
  v11 = *((_QWORD *)this + 2);
  DWORD1(v55) = v8;
  LODWORD(v55) = *(_DWORD *)(v11 + 468);
  v12 = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v11, &v55, v8);
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
    WdLogGlobalForLineNumber = 6692;
    goto LABEL_14;
  }
  v14 = HIDWORD(v56);
  v15 = 80LL * HIDWORD(v56);
  if ( !is_mul_ok(HIDWORD(v56), 0x50uLL) )
    v15 = -1LL;
  v10 = (_DWORD *)operator new[](v15, 0x4B677844u, 256LL, v13);
  if ( !v10 )
    goto LABEL_38;
  v18 = DWORD1(v56);
  if ( DWORD1(v56) )
  {
    v51 = (void *)operator new[](DWORD1(v56), 0x4B677844u, 256LL, v17);
    if ( !v51 )
    {
      WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
      WdLogGlobalForLineNumber = 6709;
LABEL_37:
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
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
  v19 = DWORD2(v56);
  if ( DWORD2(v56) )
  {
    v52 = (void *)operator new[](DWORD2(v56), 0x4B677844u, 256LL, v17);
    if ( !v52 )
    {
      WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
      WdLogGlobalForLineNumber = 6722;
      goto LABEL_37;
    }
  }
  v20 = v56;
  if ( (_DWORD)v56 )
  {
    v53 = (void *)operator new[]((unsigned int)v56, 0x4B677844u, 256LL, v17);
    if ( !v53 )
    {
      WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
      WdLogGlobalForLineNumber = 6735;
      goto LABEL_37;
    }
  }
  v21 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  LODWORD(v62[0]) = *((_DWORD *)v21 + 117);
  HIDWORD(v62[0]) = (_DWORD)v49;
  v62[7] = v51;
  v62[5] = v52;
  v62[3] = v53;
  LODWORD(v62[1]) = v14;
  v62[2] = v10;
  LODWORD(v62[8]) = v18;
  LODWORD(v62[6]) = v19;
  LODWORD(v62[4]) = v20;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v16);
  v23 = 0;
  v24 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v21,
          (__int64)v62,
          HIDWORD(v62[0]),
          0LL,
          0,
          (struct COREDEVICEACCESS *)v48,
          0,
          CurrentProcess,
          0LL,
          0LL);
  v12 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(3LL, v24);
    WdLogGlobalForLineNumber = 6764;
    goto LABEL_14;
  }
  Current = DXGPROCESS::GetCurrent(v25);
  v27 = *((_QWORD *)this + 2);
  v28 = Current;
  v60 = Current;
  v12 = -1073741275;
  v50 = *(_QWORD *)(v27 + 16);
  while ( v23 < v14 )
  {
    v30 = (volatile signed __int32 *)((char *)v28 + 248);
    v31 = v10[20 * v23];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v28 + 248));
    v32 = (v31 >> 6) & 0xFFFFFF;
    if ( v32 < *((_DWORD *)v28 + 74)
      && (v33 = *((_QWORD *)v28 + 35), ((v31 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0x60))
      && (*(_DWORD *)(v33 + 16LL * v32 + 8) & 0x2000) == 0
      && (v34 = *(_DWORD *)(v33 + 16LL * v32 + 8) & 0x1F) != 0 )
    {
      if ( v34 == 5 )
      {
        v35 = *(struct _EX_RUNDOWN_REF **)(v33 + 16LL * v32);
        i = 0;
        goto LABEL_21;
      }
      WdLogSingleEntry0(2LL);
      i = 0;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      i = 0;
    }
    v35 = 0LL;
LABEL_21:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v35);
    _InterlockedDecrement(v30 + 4);
    ExReleasePushLockSharedEx(v30, 0LL);
    KeLeaveCriticalRegion();
    v37 = v46;
    if ( !v46 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6777;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"AllocRef.m_pAllocation != NULL",
        6777LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v37 = v46;
    }
    v38 = (LODWORD(v37[9].Count) >> 12) & 0x3F;
    v47 = 0;
    if ( v38 == *((_DWORD *)this + 97) )
    {
      v47 = 1;
LABEL_25:
      v12 = 0;
      if ( *((_BYTE *)this + 432) || *((_BYTE *)this + 433) )
      {
        memset(&v63, 0, sizeof(v63));
        v63.Protection.Value = 1LL;
        Count = (struct VIDMM_MULTI_ALLOC *)v37[3].Count;
        v39 = v50;
        v45 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                *(VIDMM_EXPORT **)(v50 + 760),
                *(struct VIDMM_GLOBAL **)(v50 + 768),
                0LL,
                Count,
                &v63,
                0,
                v38);
        v12 = v45;
        if ( v45 < 0 )
        {
          WdLogSingleEntry1(3LL, v45);
          WdLogGlobalForLineNumber = 6820;
LABEL_55:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
          goto LABEL_14;
        }
      }
      else
      {
        v39 = v50;
      }
      if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
      {
        v54 = 0LL;
        v49 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, void **))(*(_QWORD *)(*(_QWORD *)(v39 + 760) + 8LL) + 928LL))(
          *(_QWORD *)(v40 + 792),
          v38,
          &v54,
          &v49);
        v41 = *(_QWORD *)(v39 + 760);
        v48 = 0LL;
        v57 = 0LL;
        v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(v41 + 8) + 720LL))(
                *(_QWORD *)(v39 + 768),
                v54,
                v46 + 3,
                1LL,
                3,
                &v48,
                &v57);
        v12 = v42;
        if ( v42 < 0 )
        {
          WdLogSingleEntry1(3LL, v42);
          WdLogGlobalForLineNumber = 6853;
          goto LABEL_55;
        }
        if ( v42 == 259 )
        {
          (*(void (__fastcall **)(_QWORD, void **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v39 + 760) + 8LL) + 936LL))(
            *(_QWORD *)(v39 + 768),
            &v49,
            &v48,
            1LL);
          v12 = 0;
        }
      }
      v43 = v10[20 * v23];
      if ( v47 )
        *v58 = v43;
      else
        v59[i] = v43;
    }
    else
    {
      for ( i = 0; i < a5; ++i )
      {
        if ( v38 == *((_DWORD *)a6[i + 1] + 97) )
          goto LABEL_25;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
    v14 = HIDWORD(v56);
    ++v23;
    v28 = v60;
  }
  if ( v12 >= 0 )
    *v61 = v14;
LABEL_14:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v51);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v52);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v53);
  return (unsigned int)v12;
}
