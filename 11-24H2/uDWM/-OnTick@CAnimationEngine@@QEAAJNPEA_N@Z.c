/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180027170
 * Callers:
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x1800269E0 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180027060 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18006E0E4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180072534 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18007260C (-OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  char v4; // r14
  int started; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int i; // ebx
  __int64 v10; // rdi
  unsigned int j; // r15d
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // r13
  unsigned int v18; // r15d
  __int64 v19; // r12
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  float *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v29; // eax
  int v30; // eax
  float v31; // xmm0_4
  int v32; // eax
  int v33; // eax
  unsigned int v34; // r8d
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  float v40; // xmm0_4
  float v41; // xmm0_4
  __int64 v42; // rdx
  int v43; // eax
  unsigned int v44; // r12d
  __int64 v45; // r9
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  float v50; // xmm0_4
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  float v55; // xmm0_4
  int v56; // eax
  int v57; // eax
  float v58; // xmm0_4
  float v59; // xmm0_4
  __int64 v60; // rdx
  int v61; // eax
  char v62; // [rsp+38h] [rbp-D0h]
  unsigned int v63; // [rsp+3Ch] [rbp-CCh] BYREF
  float v64; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v65; // [rsp+44h] [rbp-C4h]
  __int64 v66; // [rsp+48h] [rbp-C0h]
  __int64 v67; // [rsp+50h] [rbp-B8h]
  double v68; // [rsp+58h] [rbp-B0h] BYREF
  double v69; // [rsp+60h] [rbp-A8h]
  double v70; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+70h] [rbp-98h]
  __int64 v72; // [rsp+80h] [rbp-88h]
  __int64 v73; // [rsp+88h] [rbp-80h]
  bool *v74; // [rsp+90h] [rbp-78h]
  __int64 v75; // [rsp+98h] [rbp-70h]
  __int64 v76; // [rsp+A8h] [rbp-60h]
  __int64 v77; // [rsp+B8h] [rbp-50h]
  __int64 v78; // [rsp+C8h] [rbp-40h]
  __int64 v79; // [rsp+D8h] [rbp-30h]
  __int64 v80; // [rsp+E8h] [rbp-20h]
  __int64 v81; // [rsp+F8h] [rbp-10h]
  __int64 v82; // [rsp+108h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v83; // [rsp+118h] [rbp+10h]
  __int64 v84; // [rsp+120h] [rbp+18h]
  __int128 v85; // [rsp+128h] [rbp+20h] BYREF
  __int128 v86; // [rsp+138h] [rbp+30h] BYREF
  __int128 v87; // [rsp+148h] [rbp+40h]
  __int64 v88; // [rsp+158h] [rbp+50h]
  double v89; // [rsp+160h] [rbp+58h] BYREF
  double v90; // [rsp+168h] [rbp+60h]
  double v91; // [rsp+170h] [rbp+68h]
  double v92[4]; // [rsp+178h] [rbp+70h] BYREF

  v74 = a3;
  v83 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v62 = 0;
  *((double *)this + 13) = a2;
  started = CAnimationEngine::StartAnimations(this);
  v7 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x13Fu, 0LL);
    goto LABEL_30;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
         *((_QWORD *)this + 1),
         v6,
         0LL);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x142u, 0LL);
    goto LABEL_30;
  }
  for ( i = 0; ; ++i )
  {
    LODWORD(v66) = i;
    if ( i >= *((_DWORD *)this + 16) )
    {
      v27 = CAnimationEngine::StopAnimations(this);
      v7 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x20Eu, 0LL);
      }
      else if ( v4 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v74 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_30;
    }
    v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * i);
    v84 = v10;
    if ( v10 )
      CMILRefCountBase::AddRef((CMILRefCountBase *)v10);
    if ( *(_BYTE *)(v10 + 48) && !*(_BYTE *)(v10 + 49) )
      break;
LABEL_32:
    CBaseObject::Release((CBaseObject *)v10);
  }
  ++*(_DWORD *)(v10 + 24);
  for ( j = 0; ; j = v18 + 1 )
  {
    v65 = j;
    if ( j >= *(_DWORD *)(v10 + 20) )
    {
      i = v66;
      goto LABEL_32;
    }
    v12 = j;
    v67 = j;
    v13 = *(__int64 **)(*(_QWORD *)(v10 + 40) + 8LL * j);
    v14 = *v13;
    v15 = *(_QWORD *)v13[1];
    v16 = *(_QWORD *)v13[5];
    v17 = *(_QWORD *)v13[4];
    v71 = v17;
    v72 = *(_QWORD *)v13[6];
    v73 = *(_QWORD *)v13[7];
    CAnimationEngine::CTransitionVisualSet::OnTick((CAnimationEngine::CTransitionVisualSet *)v10);
    v63 = 0;
    if ( *(_DWORD *)(v10 + 24) <= 1u )
    {
      v64 = 0.0;
      v37 = **(_QWORD **)(*(_QWORD *)(v10 + 40) + 8 * v12);
      if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v37 + 48LL))(v37, &v64) >= 0 && v64 == 0.0 )
      {
        v85 = 0LL;
        LODWORD(v86) = 0;
        *(_QWORD *)((char *)&v86 + 4) = 1065353216LL;
        v38 = **(_QWORD **)(*(_QWORD *)(v10 + 40) + 8 * v12);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v38 + 168LL))(v38, &v85);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
    if ( v15 )
    {
      v33 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 24LL))(v15, &v63);
      v7 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x17Bu, 0LL);
        goto LABEL_40;
      }
      v34 = v63;
      if ( v63 == 2 )
      {
        v35 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 40LL))(v15, &v68);
        v7 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x17Eu, 0LL);
          goto LABEL_40;
        }
        v85 = 0LL;
        v86 = 0LL;
        *(_QWORD *)&v87 = 0LL;
        DWORD2(v87) = 0;
        *((float *)&v86 + 1) = v68;
        *((float *)&v86 + 2) = v69;
        v36 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 144LL))(v14, &v85);
        v7 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x184u, 0LL);
          goto LABEL_40;
        }
      }
      else if ( v63 == 3 )
      {
        v44 = 0;
        v45 = v67;
        while ( 1 )
        {
          if ( v44 >= v34 )
          {
            v17 = v71;
            break;
          }
          v46 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8 * v45) + 8LL * (int)v44 + 8);
          if ( v46 )
          {
            v64 = 0.0;
            v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v46 + 200LL))(v46, 0LL, &v64);
            v7 = v47;
            if ( v47 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x192u, 0LL);
              goto LABEL_40;
            }
            v48 = **(_QWORD **)(*(_QWORD *)(v10 + 40) + 8 * v67);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 240LL))(v48, LODWORD(v64));
            v49 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v46 + 40LL))(v46, &v89, 3LL);
            v7 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x197u, 0LL);
              goto LABEL_40;
            }
            v85 = 0LL;
            LODWORD(v86) = 0;
            v87 = 0LL;
            v88 = 0LL;
            v50 = v89;
            *((float *)&v86 + 1) = v50;
            *((float *)&v86 + 2) = v90;
            *((float *)&v86 + 3) = v91;
            v51 = **(_QWORD **)(*(_QWORD *)(v10 + 40) + 8 * v67);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 240LL))(v51, LODWORD(v64));
            v52 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 176LL))(v14, &v85);
            v7 = v52;
            if ( v52 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x19Fu, 0LL);
              goto LABEL_40;
            }
            v34 = v63;
            v45 = v67;
          }
          ++v44;
        }
      }
    }
    if ( !v16 )
    {
LABEL_14:
      v18 = v65;
      goto LABEL_15;
    }
    v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v63);
    v7 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x1ABu, 0LL);
      goto LABEL_40;
    }
    if ( v63 == 2 )
    {
      v30 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v16 + 40LL))(v16, &v68, 2LL);
      v7 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x1AEu, 0LL);
        goto LABEL_40;
      }
      v85 = 0uLL;
      LODWORD(v86) = 0;
      LODWORD(v87) = 0;
      v31 = v68;
      *((float *)&v86 + 1) = v31;
      *((_QWORD *)&v86 + 1) = COERCE_UNSIGNED_INT(v69);
      v18 = v65;
      v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v65) + 64LL);
      DWORD1(v87) = v75;
      v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v65) + 64LL);
      DWORD2(v87) = HIDWORD(v76);
      v32 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 152LL))(v14, &v85);
      v7 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x1B6u, 0LL);
        goto LABEL_40;
      }
    }
    else
    {
      if ( v63 != 3 )
        goto LABEL_14;
      v39 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v16 + 40LL))(v16, &v89, 3LL);
      v7 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x1BAu, 0LL);
        goto LABEL_40;
      }
      v85 = 0LL;
      LODWORD(v86) = 0;
      v87 = 0LL;
      v88 = 0LL;
      v40 = v89;
      *((float *)&v86 + 1) = v40;
      *((float *)&v86 + 2) = v90;
      v41 = v91;
      *((float *)&v86 + 3) = v41;
      v18 = v65;
      v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v65) + 64LL);
      HIDWORD(v87) = v77;
      v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v65) + 64LL);
      LODWORD(v88) = HIDWORD(v78);
      v42 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v65);
      v71 = *(_QWORD *)(v42 + 64);
      HIDWORD(v88) = *(_DWORD *)(v42 + 72);
      v43 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 184LL))(v14, &v85);
      v7 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x1C4u, 0LL);
        goto LABEL_40;
      }
    }
LABEL_15:
    if ( v17 )
    {
      v53 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v63);
      v7 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x1CEu, 0LL);
        goto LABEL_40;
      }
      if ( v63 == 2 )
      {
        v54 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v17 + 40LL))(v17, &v68, 2LL);
        v7 = v54;
        if ( v54 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v54, 0x1D1u, 0LL);
          goto LABEL_40;
        }
        v85 = 0uLL;
        LODWORD(v86) = 0;
        LODWORD(v87) = 0;
        v55 = v68;
        *((float *)&v86 + 1) = v55;
        *((_QWORD *)&v86 + 1) = COERCE_UNSIGNED_INT(v69);
        v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v18) + 76LL);
        DWORD1(v87) = v79;
        v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v18) + 76LL);
        DWORD2(v87) = HIDWORD(v80);
        v56 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 160LL))(v14, &v85);
        v7 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v56, 0x1D9u, 0LL);
          goto LABEL_40;
        }
      }
      else if ( v63 == 3 )
      {
        v57 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v17 + 40LL))(v17, &v89, 3LL);
        v7 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v57, 0x1DDu, 0LL);
          goto LABEL_40;
        }
        v85 = 0LL;
        LODWORD(v86) = 0;
        v87 = 0LL;
        v88 = 0LL;
        v58 = v89;
        *((float *)&v86 + 1) = v58;
        *((float *)&v86 + 2) = v90;
        v59 = v91;
        *((float *)&v86 + 3) = v59;
        v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v18) + 76LL);
        HIDWORD(v87) = v81;
        v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v18) + 76LL);
        LODWORD(v88) = HIDWORD(v82);
        v60 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL * v18);
        v71 = *(_QWORD *)(v60 + 76);
        HIDWORD(v88) = *(_DWORD *)(v60 + 84);
        v61 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 192LL))(v14, &v85);
        v7 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v61, 0x1E6u, 0LL);
          goto LABEL_40;
        }
      }
    }
    v19 = v72;
    if ( v72 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v72 + 24LL))(v72, &v63);
      v7 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x1F0u, 0LL);
        goto LABEL_40;
      }
      v70 = 0.0;
      v21 = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v19 + 40LL))(v19, &v70, v63);
      v7 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x1F4u, 0LL);
        goto LABEL_40;
      }
      v85 = 0LL;
      LODWORD(v86) = 0;
      *(_QWORD *)((char *)&v86 + 4) = COERCE_UNSIGNED_INT(v70);
      v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 168LL))(v14, &v85);
      v7 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x1F9u, 0LL);
        goto LABEL_40;
      }
    }
    if ( v73 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v73 + 40LL))(v73, v92, 4LL);
      v7 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x1FEu, 0LL);
        goto LABEL_40;
      }
      v85 = 0LL;
      v86 = 0LL;
      v87 = 0LL;
      LODWORD(v88) = 0;
      v24 = 0LL;
      v25 = (float *)&v86 + 1;
      do
        *v25++ = v92[v24++];
      while ( v24 < 4 );
      v26 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 200LL))(v14, &v85);
      v7 = v26;
      if ( v26 < 0 )
        break;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 248LL))(v14) | v62;
    v62 = v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x206u, 0LL);
LABEL_40:
  CBaseObject::Release((CBaseObject *)v10);
LABEL_30:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
