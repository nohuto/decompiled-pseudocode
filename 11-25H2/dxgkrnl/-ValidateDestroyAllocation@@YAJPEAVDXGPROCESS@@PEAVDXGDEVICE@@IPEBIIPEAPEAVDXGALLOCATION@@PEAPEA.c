/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x140411038
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14002B980 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Feature_1276945721__private_IsEnabledDeviceUsageNoInline @ 0x14006BAE0 (Feature_1276945721__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402E0234 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E1770 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct _EX_RUNDOWN_REF **a6,
        struct DXGRESOURCE **a7)
{
  struct _EX_RUNDOWN_REF **v8; // r13
  __int64 v10; // r14
  char *v11; // rbx
  unsigned int v12; // esi
  unsigned int *v13; // rdi
  int v14; // edx
  struct _EX_RUNDOWN_REF *v15; // rdx
  struct DXGDEVICE *v17; // r9
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // r14
  ULONG_PTR Count; // r8
  unsigned int v21; // edx
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // rsi
  const unsigned int *v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // r14d
  int v28; // edx
  struct _EX_RUNDOWN_REF *v29; // rdx
  struct _EX_RUNDOWN_REF *v30; // r8
  struct DXGDEVICE *v31; // r9
  ULONG_PTR v32; // rcx
  int v33; // edx
  struct _EX_RUNDOWN_REF *v34; // rdx
  struct _EX_RUNDOWN_REF *v35; // rdi
  char v36; // si
  struct _EX_RUNDOWN_REF *v37; // r12
  __int64 v38; // r15
  const unsigned int *v39; // rax
  unsigned __int64 v40; // rsi
  ULONG_PTR v41; // r14
  __int64 v42; // rax
  __int64 v43; // rsi
  char v44; // [rsp+50h] [rbp-B0h]
  char v45; // [rsp+51h] [rbp-AFh]
  struct _EX_RUNDOWN_REF *v46; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGRESOURCE *v47; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v48; // [rsp+68h] [rbp-98h]
  struct DXGALLOCATION *v49; // [rsp+70h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF **v50; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v51; // [rsp+84h] [rbp-7Ch]
  const unsigned int *v52; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION **v54; // [rsp+98h] [rbp-68h]
  struct _EX_RUNDOWN_REF *v55; // [rsp+A0h] [rbp-60h] BYREF
  struct _EX_RUNDOWN_REF *v56; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v57; // [rsp+B0h] [rbp-50h]
  const unsigned int *v58; // [rsp+B8h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+C0h] [rbp-40h] BYREF
  char v60[8]; // [rsp+C8h] [rbp-38h] BYREF
  DXGPUSHLOCK *v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+D8h] [rbp-28h]
  _DWORD v63[4]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v64[4]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = a6;
  v50 = a6;
  v53 = (struct _EX_RUNDOWN_REF *)a7;
  v52 = a4;
  v10 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v47, 0LL);
  v44 = 0;
  v48 = 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v60, a1);
  if ( (_DWORD)v10 )
  {
    v11 = (char *)a1 + 280;
    v12 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
    v13 = (unsigned int *)(v11 + 16);
    if ( v12 < *((_DWORD *)v11 + 4)
      && (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v12 + 8) & 0x60)
      && (*(_DWORD *)(*(_QWORD *)v11 + 16LL * v12 + 8) & 0x2000) == 0 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v12 + 8) & 0x1F;
      if ( v14 )
      {
        if ( v14 == 4 )
        {
          v15 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v11 + 16LL * v12);
          goto LABEL_9;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v15 = 0LL;
LABEL_9:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v55, v15);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v47, &v55);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v55);
    if ( !v47 )
    {
      WdLogSingleEntry3(3LL, a2, v10, -1073741811LL);
      WdLogGlobalForLineNumber = 9399;
LABEL_11:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v47);
      return 3221225485LL;
    }
    if ( (unsigned int)Feature_1276945721__private_IsEnabledDeviceUsageNoInline()
      && v12 < *v13
      && (*(_DWORD *)(*(_QWORD *)v11 + 16LL * v12 + 8) & 0x4000) != 0 )
    {
      WdLogSingleEntry3(3LL, a2, v10, -1073741267LL);
      v63[2] = 0;
      WdLogGlobalForLineNumber = 9411;
      v63[0] = 58022139;
      v63[1] = 4;
      RtlLogUnexpectedCodepath(v63);
      goto LABEL_73;
    }
    v17 = (struct DXGDEVICE *)*((_QWORD *)v47 + 1);
    if ( v17 != a2 )
    {
      WdLogSingleEntry4(3LL, a2, v47, v17, -1073741811LL);
      WdLogGlobalForLineNumber = 9431;
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v56, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v47, &v56);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
      goto LABEL_73;
    }
    if ( v12 < *v13 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v12 + 8);
      if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v12 + 8) & 0x60)
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v11 + 16LL * (((unsigned int)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    v19 = (struct _EX_RUNDOWN_REF *)v47;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v49, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v47, (struct _EX_RUNDOWN_REF **)&v49);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
    ExReleaseRundownProtection(v19 + 9);
    ExWaitForRundownProtectionRelease(v19 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v19[10]);
    DXGPUSHLOCK::AcquireExclusive(v61);
    Count = v19[3].Count;
    v62 = 2;
    while ( Count )
    {
      v21 = *(_DWORD *)(Count + 16);
      if ( v21 )
      {
        v22 = (v21 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v22 < *v13 )
        {
          v23 = *(_DWORD *)(*(_QWORD *)v11 + 16 * v22 + 8);
          if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v11 + 16 * v22 + 8) & 0x60)
            && (v23 & 0x2000) == 0
            && (v23 & 0x1F) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)v11 + 16LL * ((v21 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
      }
      Count = *(_QWORD *)(Count + 64);
    }
    ExInitializeRundownProtection(v19 + 9);
    ExAcquireRundownProtection(v19 + 9);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v50, v19);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v47, (struct _EX_RUNDOWN_REF **)&v50);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v50);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v60);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v19[10]);
    v53->Count = (ULONG_PTR)v47;
LABEL_64:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v47);
    return 0LL;
  }
  v57 = 0LL;
  v24 = a5;
  v45 = 0;
  v48 = 0;
  if ( !a5 )
  {
LABEL_62:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
    if ( a5 )
    {
      do
      {
        v34 = *v8;
        v49 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50, v34);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v49, (struct _EX_RUNDOWN_REF **)&v50);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v50);
        v35 = (struct _EX_RUNDOWN_REF *)v49;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v49, &v59);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v59);
        ExReleaseRundownProtection(v35 + 11);
        ExWaitForRundownProtectionRelease(v35 + 11);
        ExInitializeRundownProtection(v35 + 11);
        DxgkReferenceDxgAllocation(v35);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v53, v35);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v49, &v53);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
        ++v8;
        --v24;
      }
      while ( v24 );
    }
    goto LABEL_64;
  }
  v25 = v52;
  v11 = (char *)a1 + 280;
  v54 = (struct DXGALLOCATION **)a6;
  v58 = v52;
  v13 = (unsigned int *)(v11 + 16);
  while ( 1 )
  {
    v26 = *v25;
    v27 = (v26 >> 6) & 0xFFFFFF;
    v51 = v26;
    if ( v27 >= *v13 )
      goto LABEL_42;
    if ( ((v26 >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v27 + 8) & 0x60) )
      goto LABEL_42;
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 16LL * v27 + 8) & 0x2000) != 0 )
      goto LABEL_42;
    v28 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v27 + 8) & 0x1F;
    if ( !v28 )
      goto LABEL_42;
    if ( v28 != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_42:
      v29 = 0LL;
      goto LABEL_43;
    }
    v29 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v11 + 16LL * v27);
LABEL_43:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v29);
    if ( !v46 )
      break;
    if ( (unsigned int)Feature_1276945721__private_IsEnabledDeviceUsageNoInline()
      && v27 < *v13
      && (*(_DWORD *)(*(_QWORD *)v11 + 16LL * v27 + 8) & 0x4000) != 0 )
    {
      WdLogSingleEntry3(3LL, a2, v51, -1073741267LL);
      v64[2] = 0;
      WdLogGlobalForLineNumber = 9522;
      v64[0] = 58022139;
      v64[1] = 5;
      RtlLogUnexpectedCodepath(v64);
      goto LABEL_72;
    }
    v30 = v46;
    v31 = (struct DXGDEVICE *)v46[1].Count;
    if ( v31 != a2 )
    {
      WdLogSingleEntry4(3LL, a2, v46, v31, -1073741811LL);
      WdLogGlobalForLineNumber = 9542;
      goto LABEL_72;
    }
    if ( !v45 )
    {
      v57 = v46[5].Count;
      v45 = 1;
    }
    v32 = v46[5].Count;
    if ( v32 != v57 )
    {
      WdLogSingleEntry2(3LL, a2, -1073741811LL);
      WdLogGlobalForLineNumber = 9561;
      goto LABEL_72;
    }
    if ( v32 )
    {
      if ( (*(_DWORD *)(v32 + 4) & 1) != 0 )
      {
        WdLogSingleEntry2(3LL, a2, -1073741811LL);
        WdLogGlobalForLineNumber = 9575;
        goto LABEL_72;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v32 + 72)) )
      {
        v36 = 1;
        v44 = 1;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
        goto LABEL_74;
      }
      LODWORD(v46[9].Count) |= 0x100000u;
      v30 = v46;
    }
    if ( v27 < *v13 )
    {
      v33 = *(_DWORD *)(*(_QWORD *)v11 + 16LL * v27 + 8);
      if ( ((v51 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v11 + 16LL * v27 + 8) & 0x60)
        && (v33 & 0x2000) == 0
        && (v33 & 0x1F) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v11 + 16LL * ((v51 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        v30 = v46;
      }
    }
    *v54 = (struct DXGALLOCATION *)v30;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
    ++v54;
    v25 = v58 + 1;
    ++v48;
    ++v58;
    if ( v48 >= a5 )
    {
      v8 = v50;
      goto LABEL_62;
    }
  }
  WdLogSingleEntry3(3LL, a2, v51, -1073741811LL);
  WdLogGlobalForLineNumber = 9510;
LABEL_72:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
LABEL_73:
  v36 = 0;
LABEL_74:
  if ( v47 )
    goto LABEL_11;
  if ( v48 )
  {
    v37 = (struct _EX_RUNDOWN_REF *)v50;
    v38 = v48;
    v39 = v52;
    v44 = v36;
    do
    {
      v40 = *v39;
      v41 = v37->Count;
      v42 = (*v39 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v42 < *v13
        && (((unsigned int)v40 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v11 + 16 * v42 + 8) & 0x60)
        && (*(_DWORD *)(*(_QWORD *)v11 + 16 * v42 + 8) & 0x1F) != 0 )
      {
        v43 = 2 * ((v40 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 8 * v43 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)v11 + 8 * v43 + 8) &= ~0x2000u;
      }
      if ( (*(_DWORD *)(v41 + 72) & 0x100000) != 0 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v41 + 40) + 72LL));
        *(_DWORD *)(v41 + 72) &= ~0x100000u;
      }
      ++v37;
      v39 = ++v52;
      --v38;
    }
    while ( v38 );
  }
  if ( !v44 )
    goto LABEL_11;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v47);
  return 255LL;
}
