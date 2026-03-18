/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x14040C2D8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14002D5E0 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x14032CC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  __int64 v11; // r14
  char *v12; // rbx
  unsigned int v13; // edi
  unsigned int *v14; // rsi
  int v15; // edx
  struct _EX_RUNDOWN_REF *v16; // rdx
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // r14
  ULONG_PTR Count; // r8
  unsigned int v21; // edx
  __int64 v22; // rax
  int v23; // r9d
  const unsigned int *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // edi
  int v27; // edx
  struct _EX_RUNDOWN_REF *v28; // rdx
  struct _EX_RUNDOWN_REF *v29; // r8
  struct DXGDEVICE *v30; // r9
  ULONG_PTR v31; // rcx
  int v32; // edx
  __int64 v33; // rsi
  struct _EX_RUNDOWN_REF *v34; // rdx
  struct _EX_RUNDOWN_REF *v35; // rdi
  char v36; // di
  struct _EX_RUNDOWN_REF *v37; // r12
  __int64 v38; // r15
  const unsigned int *v39; // rax
  unsigned __int64 v40; // rdi
  ULONG_PTR v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdi
  char v44; // [rsp+50h] [rbp-B0h]
  char v45; // [rsp+51h] [rbp-AFh]
  struct DXGRESOURCE *v46; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v48; // [rsp+68h] [rbp-98h]
  struct DXGALLOCATION *v49; // [rsp+70h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF **v50; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v51; // [rsp+84h] [rbp-7Ch]
  struct _EX_RUNDOWN_REF *v52; // [rsp+88h] [rbp-78h] BYREF
  struct DXGALLOCATION **v53; // [rsp+90h] [rbp-70h]
  const unsigned int *v54; // [rsp+98h] [rbp-68h]
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
  v52 = (struct _EX_RUNDOWN_REF *)a7;
  v54 = a4;
  v11 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v46, 0LL);
  v44 = 0;
  v48 = 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v60, a1);
  if ( (_DWORD)v11 )
  {
    v12 = (char *)a1 + 280;
    v13 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    v14 = (unsigned int *)(v12 + 16);
    if ( v13 < *((_DWORD *)v12 + 4)
      && (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v12 + 16LL * v13 + 8) & 0x60)
      && (*(_DWORD *)(*(_QWORD *)v12 + 16LL * v13 + 8) & 0x2000) == 0 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)v12 + 16LL * v13 + 8) & 0x1F;
      if ( v15 )
      {
        if ( v15 == 4 )
        {
          v16 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v12 + 16LL * v13);
          goto LABEL_9;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v16 = 0LL;
LABEL_9:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v55, v16);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v46, &v55);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v55);
    if ( !v46 )
    {
      WdLogSingleEntry3(3LL, a2, v11, -1073741811LL);
      WdLogGlobalForLineNumber = 9447;
LABEL_11:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v46);
      return 3221225485LL;
    }
    if ( v13 < *v14 && (*(_DWORD *)(*(_QWORD *)v12 + 16LL * v13 + 8) & 0x4000) != 0 )
    {
      WdLogSingleEntry3(3LL, a2, v11, -1073741267LL);
      v63[2] = 0;
      WdLogGlobalForLineNumber = 9457;
      v63[0] = 58022139;
      v63[1] = 4;
      RtlLogUnexpectedCodepath(v63);
      goto LABEL_72;
    }
    if ( *((struct DXGDEVICE **)v46 + 1) != a2 )
    {
      WdLogSingleEntry4(3LL, a2, v46, *((_QWORD *)v46 + 1), -1073741811LL);
      WdLogGlobalForLineNumber = 9476;
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v56, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v46, &v56);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
      goto LABEL_72;
    }
    if ( v13 < *v14 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)v12 + 16LL * v13 + 8);
      if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v12 + 16LL * v13 + 8) & 0x60)
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v12 + 16LL * (((unsigned int)v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    v19 = (struct _EX_RUNDOWN_REF *)v46;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v49, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v46, (struct _EX_RUNDOWN_REF **)&v49);
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
        if ( (unsigned int)v22 < *v14 )
        {
          v23 = *(_DWORD *)(*(_QWORD *)v12 + 16 * v22 + 8);
          if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v12 + 16 * v22 + 8) & 0x60)
            && (v23 & 0x2000) == 0
            && (v23 & 0x1F) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)v12 + 16LL * ((v21 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
      }
      Count = *(_QWORD *)(Count + 64);
    }
    ExInitializeRundownProtection(v19 + 9);
    ExAcquireRundownProtection(v19 + 9);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v50, v19);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v46, (struct _EX_RUNDOWN_REF **)&v50);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v50);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v60);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v19[10]);
    v52->Count = (ULONG_PTR)v46;
LABEL_63:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v46);
    return 0LL;
  }
  v57 = 0LL;
  v45 = 0;
  v48 = 0;
  if ( !a5 )
  {
LABEL_60:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
    if ( a5 )
    {
      v33 = a5;
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
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v52, v35);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v49, &v52);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v52);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
        ++v8;
        --v33;
      }
      while ( v33 );
    }
    goto LABEL_63;
  }
  v12 = (char *)a1 + 280;
  v53 = (struct DXGALLOCATION **)a6;
  v24 = a4;
  v58 = a4;
  v14 = (unsigned int *)(v12 + 16);
  while ( 1 )
  {
    v25 = *v24;
    v26 = (v25 >> 6) & 0xFFFFFF;
    v51 = v25;
    if ( v26 >= *v14 )
      goto LABEL_41;
    if ( ((v25 >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v12 + 16LL * v26 + 8) & 0x60) )
      goto LABEL_41;
    if ( (*(_DWORD *)(*(_QWORD *)v12 + 16LL * v26 + 8) & 0x2000) != 0 )
      goto LABEL_41;
    v27 = *(_DWORD *)(*(_QWORD *)v12 + 16LL * v26 + 8) & 0x1F;
    if ( !v27 )
      goto LABEL_41;
    if ( v27 != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_41:
      v28 = 0LL;
      goto LABEL_42;
    }
    v28 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v12 + 16LL * v26);
LABEL_42:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v47, v28);
    v29 = v47;
    if ( !v47 )
      break;
    if ( v26 < *v14 && (*(_DWORD *)(*(_QWORD *)v12 + 16LL * v26 + 8) & 0x4000) != 0 )
    {
      WdLogSingleEntry3(3LL, a2, v51, -1073741267LL);
      v64[2] = 0;
      WdLogGlobalForLineNumber = 9565;
      v64[0] = 58022139;
      v64[1] = 5;
      RtlLogUnexpectedCodepath(v64);
      goto LABEL_71;
    }
    v30 = (struct DXGDEVICE *)v47[1].Count;
    if ( v30 != a2 )
    {
      WdLogSingleEntry4(3LL, a2, v47, v30, -1073741811LL);
      WdLogGlobalForLineNumber = 9584;
      goto LABEL_71;
    }
    if ( !v45 )
    {
      v57 = v47[5].Count;
      v45 = 1;
    }
    v31 = v47[5].Count;
    if ( v31 != v57 )
    {
      WdLogSingleEntry2(3LL, a2, -1073741811LL);
      WdLogGlobalForLineNumber = 9603;
      goto LABEL_71;
    }
    if ( v31 )
    {
      if ( (*(_DWORD *)(v31 + 4) & 1) != 0 )
      {
        WdLogSingleEntry2(3LL, a2, -1073741811LL);
        WdLogGlobalForLineNumber = 9617;
        goto LABEL_71;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v31 + 72)) )
      {
        v36 = 1;
        v44 = 1;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
        goto LABEL_73;
      }
      LODWORD(v47[9].Count) |= 0x100000u;
      v29 = v47;
    }
    if ( v26 < *v14 )
    {
      v32 = *(_DWORD *)(*(_QWORD *)v12 + 16LL * v26 + 8);
      if ( ((v51 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v12 + 16LL * v26 + 8) & 0x60)
        && (v32 & 0x2000) == 0
        && (v32 & 0x1F) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v12 + 16LL * ((v51 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        v29 = v47;
      }
    }
    *v53 = (struct DXGALLOCATION *)v29;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
    ++v53;
    v24 = v58 + 1;
    ++v48;
    ++v58;
    if ( v48 >= a5 )
    {
      v8 = v50;
      goto LABEL_60;
    }
  }
  WdLogSingleEntry3(3LL, a2, v51, -1073741811LL);
  WdLogGlobalForLineNumber = 9555;
LABEL_71:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
LABEL_72:
  v36 = 0;
LABEL_73:
  if ( v46 )
    goto LABEL_11;
  if ( v48 )
  {
    v37 = (struct _EX_RUNDOWN_REF *)v50;
    v38 = v48;
    v39 = v54;
    v44 = v36;
    do
    {
      v40 = *v39;
      v41 = v37->Count;
      v42 = (*v39 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v42 < *v14
        && (((unsigned int)v40 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v12 + 16 * v42 + 8) & 0x60)
        && (*(_DWORD *)(*(_QWORD *)v12 + 16 * v42 + 8) & 0x1F) != 0 )
      {
        v43 = 2 * ((v40 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(*(_QWORD *)v12 + 8 * v43 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)v12 + 8 * v43 + 8) &= ~0x2000u;
      }
      if ( (*(_DWORD *)(v41 + 72) & 0x100000) != 0 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v41 + 40) + 72LL));
        *(_DWORD *)(v41 + 72) &= ~0x100000u;
      }
      ++v37;
      v39 = ++v54;
      --v38;
    }
    while ( v38 );
  }
  if ( !v44 )
    goto LABEL_11;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v46);
  return 255LL;
}
