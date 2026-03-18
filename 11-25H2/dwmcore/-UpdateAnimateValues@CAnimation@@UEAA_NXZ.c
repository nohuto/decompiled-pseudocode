/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800AF9B0
 * Callers:
 *     ?UpdateAnimateResources@CComposition@@IEAAXXZ @ 0x1800AF840 (-UpdateAnimateResources@CComposition@@IEAAXXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x180207A5C (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B0590 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800B0930 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ @ 0x1800B11D0 (-CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18018CD80 (-GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x18018CDC0 (-GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180207BB0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x180259E20 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802BFC6C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  __int64 v1; // rax
  CAnimation *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rax
  __int64 (****v7)(void); // r14
  CSharedSectionAnimationPrimitiveBuffer *v8; // rcx
  unsigned __int64 (__fastcall *v9)(CAnimation *__hidden); // rax
  int Count; // eax
  __int64 (***v11)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v12)(CAnimation *__hidden, unsigned int); // rax
  CSharedSectionAnimationPrimitiveBuffer *v13; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v14)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *Primitive; // rsi
  __int64 (***v16)(void); // rcx
  __int64 (*v17)(void); // rax
  int v18; // eax
  __int64 (***v19)(void); // rcx
  unsigned int v20; // ebx
  __int64 (*v21)(void); // rax
  unsigned int v22; // eax
  __int64 (***v23)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v24)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v25; // rax
  const struct DwmAnimationPrimitive *v26; // r15
  __int64 v27; // rbx
  __int64 (***v28)(void); // rcx
  __int64 (*v29)(void); // rax
  unsigned int v30; // eax
  __int64 (***v31)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v32)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v33; // rax
  const struct DwmAnimationPrimitive *v34; // rax
  unsigned int v35; // ebx
  signed __int64 v36; // rdi
  __int64 (***v37)(void); // rcx
  __int64 (*v38)(void); // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // r13
  __int64 v42; // r12
  char AnimationValue; // bl
  signed __int64 v44; // r12
  const struct DwmAnimationPrimitive *v46; // rdx
  const struct DwmAnimationPrimitive *v47; // rbx
  int v48; // ecx
  __int64 (***v49)(void); // rcx
  unsigned __int64 v50; // r15
  __int64 v51; // rsi
  unsigned __int64 (__fastcall *v52)(CAnimation *__hidden); // rax
  int v53; // eax
  __int64 (***v54)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v55)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *v56; // r8
  unsigned __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 (*v61)(void); // rax
  LARGE_INTEGER v62; // rcx
  __int64 v63; // r12
  double LowPart; // xmm0_8
  double v65; // xmm3_8
  float v66; // xmm7_4
  __int64 (***v67)(void); // rsi
  bool (__fastcall *v68)(CAnimation *__hidden, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rax
  __int64 (**v69)(void); // rcx
  float v70; // esi
  signed __int64 v71; // r15
  float v72; // xmm6_4
  int v73; // eax
  unsigned int v74; // esi
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  void (__fastcall *v79)(__int64, __int64, __int64, float *); // rax
  __int64 v80; // r8
  unsigned int v81; // eax
  __int64 v82; // rcx
  __int64 (***v83)(void); // rcx
  __int64 (*v84)(void); // rax
  unsigned int v85; // eax
  __int64 (***v86)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v87)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v88; // rax
  const struct DwmAnimationPrimitive *v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r10
  __int64 (**v95)(void); // rax
  __int64 v96; // rdx
  int v97; // esi
  float v98; // xmm0_4
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // [rsp+38h] [rbp-C8h]
  int v102; // [rsp+40h] [rbp-C0h]
  float v103; // [rsp+48h] [rbp-B8h] BYREF
  float v104; // [rsp+50h] [rbp-B0h] BYREF
  signed __int64 v105; // [rsp+58h] [rbp-A8h]
  float v106; // [rsp+60h] [rbp-A0h] BYREF
  const struct DwmAnimationPrimitive *v107; // [rsp+68h] [rbp-98h]
  const struct DwmAnimationPrimitive *v108; // [rsp+70h] [rbp-90h]
  unsigned __int64 v109; // [rsp+78h] [rbp-88h] BYREF
  __int64 v110[2]; // [rsp+80h] [rbp-80h] BYREF
  CAnimation *v111; // [rsp+90h] [rbp-70h] BYREF
  char v112[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v113; // [rsp+B0h] [rbp-50h]
  __int64 v114; // [rsp+B8h] [rbp-48h]
  CAnimation **v115; // [rsp+C0h] [rbp-40h]
  __int64 v116; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v117; // [rsp+D0h] [rbp-30h]
  __int64 v118; // [rsp+D8h] [rbp-28h]
  float *v119; // [rsp+E0h] [rbp-20h]
  __int64 v120; // [rsp+E8h] [rbp-18h]
  float *v121; // [rsp+F0h] [rbp-10h]
  __int64 v122; // [rsp+F8h] [rbp-8h]

  v1 = *((_QWORD *)this - 6);
  v2 = this;
  v111 = this;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 312) + 24LL))(*(_QWORD *)(v1 + 312));
  v4 = *v3;
  if ( (unsigned __int64)*v3 < *((_QWORD *)v2 + 8) || !*((_DWORD *)v2 + 8) )
    return 0;
  v5 = *((_BYTE *)v2 + 224) == 0;
  v6 = *((_QWORD *)v2 + 15);
  *((_BYTE *)v2 + 220) = 1;
  v105 = v6;
  if ( v5 )
  {
    v6 += v4 - *((_QWORD *)v2 + 16);
    v105 = v6;
  }
  v110[0] = v6;
  v7 = (__int64 (****)(void))((char *)v2 + 176);
  v106 = 0.0;
  v8 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v2 + 22);
  v104 = 0.0;
  v109 = 0LL;
  v103 = 0.0;
  v9 = **(unsigned __int64 (__fastcall ***)(CAnimation *__hidden))v8;
  if ( v9 == CAnimation::GetPrimitivesCount )
  {
    v8 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v8 + 1);
    v9 = *(unsigned __int64 (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)v8 + 40LL);
LABEL_7:
    Count = ((__int64 (__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *, unsigned __int64 (__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden)))v9)(
              v8,
              CSharedSectionAnimationPrimitiveBuffer::GetCount);
    goto LABEL_8;
  }
  if ( v9 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_7;
  Count = CSharedSectionAnimationPrimitiveBuffer::GetCount(v8);
LABEL_8:
  if ( Count )
  {
    v11 = *v7;
    v12 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *__hidden, unsigned int))(**v7)[1];
    if ( v12 == CAnimation::GetPrimitive )
    {
      v13 = (CSharedSectionAnimationPrimitiveBuffer *)v11[1];
      v14 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v13 + 32LL);
      if ( v14 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v107 = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                       *((CSharedSectionBase **)v13 + 2),
                                                       *((unsigned int *)v13 + 7),
                                                       *((unsigned int *)v13 + 6));
        if ( !v107 )
          v107 = 0LL;
      }
      else
      {
        v107 = v14(v13, 0);
      }
      Primitive = v107;
    }
    else
    {
      if ( v12 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
        Primitive = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(
                      (CSharedSectionAnimationPrimitiveBuffer *)v11,
                      0);
      else
        Primitive = v12((CAnimation *)v11, 0);
      v107 = Primitive;
    }
  }
  else
  {
    Primitive = 0LL;
    v107 = 0LL;
  }
  v16 = *v7;
  v17 = ***v7;
  if ( (char *)v17 == (char *)CAnimation::GetPrimitivesCount )
  {
    v17 = (__int64 (*)(void))*((_QWORD *)*v16[1] + 5);
LABEL_16:
    v18 = v17();
    goto LABEL_17;
  }
  if ( (char *)v17 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_16;
  v18 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v16);
LABEL_17:
  v19 = *v7;
  v20 = v18 - 1;
  v21 = ***v7;
  if ( (char *)v21 == (char *)CAnimation::GetPrimitivesCount )
  {
    v21 = (__int64 (*)(void))*((_QWORD *)*v19[1] + 5);
LABEL_19:
    v22 = v21();
    goto LABEL_20;
  }
  if ( (char *)v21 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_19;
  v22 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v19);
LABEL_20:
  if ( v20 >= v22 )
    goto LABEL_142;
  v23 = *v7;
  v24 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**v7)[1];
  if ( v24 == CAnimation::GetPrimitive )
  {
    v23 = (__int64 (***)(void))v23[1];
    v24 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v23)[4];
    if ( v24 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v25 = (char *)CSharedSectionBase::ResolveAllocation(
                      (CSharedSectionBase *)v23[2],
                      *((unsigned int *)v23 + 7),
                      *((unsigned int *)v23 + 6));
      if ( v25 )
      {
        v26 = (const struct DwmAnimationPrimitive *)&v25[32 * v20];
LABEL_25:
        v108 = v26;
        goto LABEL_26;
      }
LABEL_142:
      v26 = 0LL;
      goto LABEL_25;
    }
    v90 = v20;
  }
  else
  {
    v90 = v20;
    if ( v24 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v108 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v23, v20);
      goto LABEL_26;
    }
  }
  v108 = v24((CSharedSectionAnimationPrimitiveBuffer *)v23, v90);
LABEL_26:
  if ( !Primitive )
    goto LABEL_44;
  v27 = *((unsigned int *)v2 + 46);
  if ( (_DWORD)v27 == -1 )
    goto LABEL_38;
  v28 = *v7;
  v29 = ***v7;
  if ( (char *)v29 == (char *)CAnimation::GetPrimitivesCount )
  {
    v29 = (__int64 (*)(void))*((_QWORD *)*v28[1] + 5);
LABEL_30:
    v30 = v29();
    goto LABEL_31;
  }
  if ( (char *)v29 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_30;
  v30 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v28);
LABEL_31:
  if ( (unsigned int)v27 >= v30 )
  {
LABEL_145:
    v34 = 0LL;
    goto LABEL_36;
  }
  v31 = *v7;
  v32 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**v7)[1];
  if ( v32 == CAnimation::GetPrimitive )
  {
    v31 = (__int64 (***)(void))v31[1];
    v32 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v31)[4];
    if ( v32 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v33 = (char *)CSharedSectionBase::ResolveAllocation(
                      (CSharedSectionBase *)v31[2],
                      *((unsigned int *)v31 + 7),
                      *((unsigned int *)v31 + 6));
      if ( v33 )
      {
        v34 = (const struct DwmAnimationPrimitive *)&v33[32 * v27];
        goto LABEL_36;
      }
      goto LABEL_145;
    }
    v91 = (unsigned int)v27;
  }
  else
  {
    v91 = (unsigned int)v27;
    if ( v32 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v34 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v31, v27);
      goto LABEL_36;
    }
  }
  v34 = v32((CSharedSectionAnimationPrimitiveBuffer *)v31, v91);
LABEL_36:
  if ( *((_QWORD *)v34 + 1) > v105 )
    *((_DWORD *)v2 + 46) = -1;
LABEL_38:
  v35 = *((_DWORD *)v2 + 46);
  v36 = v105;
  while ( 1 )
  {
    v37 = *v7;
    ++v35;
    v38 = ***v7;
    if ( (char *)v38 == (char *)CAnimation::GetPrimitivesCount )
    {
      v38 = (__int64 (*)(void))*((_QWORD *)*v37[1] + 5);
LABEL_41:
      v39 = v38();
      goto LABEL_42;
    }
    if ( (char *)v38 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
      goto LABEL_41;
    v39 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v37);
LABEL_42:
    if ( v35 >= v39 )
      break;
    v83 = *v7;
    v84 = ***v7;
    if ( (char *)v84 == (char *)CAnimation::GetPrimitivesCount )
    {
      v84 = (__int64 (*)(void))*((_QWORD *)*v83[1] + 5);
LABEL_109:
      v85 = v84();
      goto LABEL_110;
    }
    if ( (char *)v84 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
      goto LABEL_109;
    v85 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v83);
LABEL_110:
    if ( v35 >= v85 )
      goto LABEL_153;
    v86 = *v7;
    v87 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**v7)[1];
    if ( v87 == CAnimation::GetPrimitive )
    {
      v86 = (__int64 (***)(void))v86[1];
      v87 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v86)[4];
      if ( v87 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v88 = (char *)CSharedSectionBase::ResolveAllocation(
                        (CSharedSectionBase *)v86[2],
                        *((unsigned int *)v86 + 7),
                        *((unsigned int *)v86 + 6));
        if ( v88 )
        {
          v89 = (const struct DwmAnimationPrimitive *)&v88[32 * v35];
          goto LABEL_115;
        }
LABEL_153:
        v89 = 0LL;
        goto LABEL_115;
      }
      v92 = v35;
    }
    else
    {
      v92 = v35;
      if ( v87 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v89 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v86, v35);
        goto LABEL_115;
      }
    }
    v89 = v87((CSharedSectionAnimationPrimitiveBuffer *)v86, v92);
LABEL_115:
    if ( *((_QWORD *)v89 + 1) > v36 )
      break;
    *((_DWORD *)v7 + 2) = v35;
  }
  v40 = *((unsigned int *)v7 + 2);
  v41 = 0;
  v2 = v111;
  v42 = v110[0];
  if ( (_DWORD)v40 == -1 )
  {
LABEL_44:
    AnimationValue = 0;
    *((_BYTE *)v2 + 222) = 0;
LABEL_45:
    v44 = v105;
    goto LABEL_46;
  }
  v46 = v107;
  v47 = (const struct DwmAnimationPrimitive *)((char *)v107 + 32 * v40);
  v48 = *(_DWORD *)v47;
  if ( *(_DWORD *)v47 == 4 || v48 == 6 && v47 == v108 )
    v41 = 1;
  while ( 2 )
  {
    if ( ((v48 - 3) & 0xFFFFFFFC) == 0 && v48 != 4 )
    {
      if ( v46 == v47 )
        goto LABEL_81;
      v49 = *v7;
      v50 = 0LL;
      v51 = 0LL;
      v52 = (unsigned __int64 (__fastcall *)(CAnimation *__hidden))***v7;
      if ( v52 == CAnimation::GetPrimitivesCount )
      {
        v52 = (unsigned __int64 (__fastcall *)(CAnimation *__hidden))*((_QWORD *)*v49[1] + 5);
        goto LABEL_56;
      }
      if ( v52 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
        v53 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v49);
      else
LABEL_56:
        v53 = ((__int64 (*)(void))v52)();
      if ( !v53 )
        goto LABEL_143;
      v54 = *v7;
      v55 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**v7)[1];
      if ( v55 == CAnimation::GetPrimitive )
      {
        v54 = (__int64 (***)(void))v54[1];
        v55 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v54)[4];
        if ( v55 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
        {
          v56 = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                        (CSharedSectionBase *)v54[2],
                                                        *((unsigned int *)v54 + 7),
                                                        *((unsigned int *)v54 + 6));
          if ( v56 )
            goto LABEL_61;
LABEL_143:
          v56 = 0LL;
LABEL_61:
          switch ( *(_DWORD *)v47 )
          {
            case 3:
              v57 = *((_QWORD *)v47 + 2);
              if ( v57 )
                v50 = (v42 - *((_QWORD *)v47 + 1)) % v57;
              v51 = v50 + *((_QWORD *)v47 + 1) - v57;
              if ( v51 < *((_QWORD *)v56 + 1) )
              {
                v51 = *((_QWORD *)v47 + 1);
                v42 = v51;
                goto LABEL_70;
              }
              break;
            case 5:
              v58 = *((_QWORD *)v47 + 1);
              v59 = v42 - v58;
              v60 = v58 - *((_QWORD *)v56 + 1);
              if ( v59 <= v60 )
                v60 = v59;
              v51 = v58 - v60;
              break;
            case 6:
              v51 = *((_QWORD *)v47 + 1);
              v42 = v51;
LABEL_70:
              v46 = v107;
              while ( 1 )
              {
                v47 = (const struct DwmAnimationPrimitive *)((char *)v47 - 32);
                if ( *((_QWORD *)v47 + 1) <= v51 )
                  break;
                if ( v47 == v107 )
                  goto LABEL_81;
              }
              v48 = *(_DWORD *)v47;
              continue;
          }
          v42 = v51;
          if ( *((_QWORD *)v47 + 1) < v51 )
          {
LABEL_81:
            AnimationValue = 0;
            v41 = 0;
LABEL_100:
            *((_BYTE *)v2 + 222) = v41;
            goto LABEL_45;
          }
          goto LABEL_70;
        }
      }
      else if ( v55 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v56 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v54, 0);
        goto LABEL_61;
      }
      v56 = v55((CSharedSectionAnimationPrimitiveBuffer *)v54, 0);
      goto LABEL_61;
    }
    break;
  }
  if ( v48 != 1 )
  {
    if ( v48 == 2 )
    {
      v66 = CAnimationInterpolator::InterpolateSinusoidal((CAnimationInterpolator *)v7, v47, v42);
      goto LABEL_79;
    }
    if ( v48 == 4 )
    {
      v66 = *((float *)v47 + 4);
      goto LABEL_79;
    }
    goto LABEL_44;
  }
  v61 = (**v7)[3];
  if ( (char *)v61 == (char *)CAnimation::GetQPCFrequency )
    v62 = g_qpcFrequency;
  else
    v62.QuadPart = v61();
  v63 = v42 - *((_QWORD *)v47 + 1);
  if ( v62.QuadPart < 0 )
    LowPart = (double)(int)(v62.LowPart & 1 | ((unsigned __int64)v62.QuadPart >> 1))
            + (double)(int)(v62.LowPart & 1 | ((unsigned __int64)v62.QuadPart >> 1));
  else
    LowPart = (double)(int)v62.LowPart;
  v65 = (double)(int)v63 / LowPart;
  v66 = *((float *)v47 + 4) * (v65 * v65) * v65
      + *((float *)v47 + 5) * (v65 * v65)
      + *((float *)v47 + 6) * v65
      + *((float *)v47 + 7);
LABEL_79:
  if ( !_finite(v66) )
    goto LABEL_44;
  v67 = *v7;
  v68 = (bool (__fastcall *)(CAnimation *__hidden, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(**v7)[2];
  if ( v68 == CAnimation::GetHandoffData )
  {
    v69 = v67[13];
    AnimationValue = 1;
    if ( v69 && (v95 = v67[2], (__int64 (**)(void))v69[17] <= v95) )
    {
      v96 = (__int64)v67[14];
      if ( !*((_BYTE *)v67 + 177) )
        v96 += (char *)v95 - (char *)v67[15];
      AnimationValue = CAnimationInterpolator::GetAnimationValue(
                         (CAnimationInterpolator *)(v69 + 31),
                         v96,
                         (float *)v67 + 40,
                         0LL);
      if ( AnimationValue )
      {
        ReleaseInterface<IDXGIFactory7>(v67 + 13);
        goto LABEL_84;
      }
    }
    else
    {
LABEL_84:
      v103 = *((float *)v67 + 23);
      v104 = *((float *)v67 + 40);
      v109 = (unsigned __int64)v67[12];
      CAnimation::CheckAndSendHandoffPrevValueNotification((CAnimation *)(v67 - 15));
    }
  }
  else
  {
    AnimationValue = v68((CAnimation *)*v7, (enum DwmAnimationHandoffType::Enum *)&v103, &v104, &v109);
  }
  if ( !AnimationValue )
    goto LABEL_100;
  v70 = v103;
  if ( v103 != 0.0 )
  {
    v71 = v109;
    v72 = v66;
    AnimationValue = CAnimationInterpolator::EnsureHandoffCachedData((CAnimationInterpolator *)v7, v104, v109);
    if ( AnimationValue )
    {
      v97 = LODWORD(v70) - 1;
      if ( v97 )
      {
        if ( v97 == 1 )
          v72 = v66 + *((float *)v7 + 3);
      }
      else if ( v105 <= v71 )
      {
        if ( ((_BYTE)v7[3] & 1) != 0 )
        {
          v72 = (float)((float)(v66 - *((float *)v7 + 4)) * *((float *)v7 + 5)) + *((float *)v7 + 4);
        }
        else
        {
          if ( v71 < 0 )
            v98 = (float)(v71 & 1 | (unsigned int)((unsigned __int64)v71 >> 1))
                + (float)(v71 & 1 | (unsigned int)((unsigned __int64)v71 >> 1));
          else
            v98 = (float)(int)v71;
          v72 = (float)((float)(1.0 - (float)((float)(int)v105 / v98)) * *((float *)v7 + 3)) + v66;
        }
      }
    }
    if ( _finite(v72) )
      v66 = v72;
    else
      AnimationValue = 0;
    if ( !AnimationValue )
      goto LABEL_100;
  }
  v106 = v66;
  *((_BYTE *)v2 + 222) = v41;
  v44 = v105;
  v73 = *((_DWORD *)v2 + 8);
  v74 = 0;
  *(double *)v110 = (double)(int)v105 / (double)(int)g_qpcFrequency.LowPart;
  if ( v73 )
  {
    v75 = v110[0];
    do
    {
      v76 = *((_QWORD *)v2 + 1);
      v77 = *(_QWORD *)(v76 + 16LL * v74);
      v78 = *(unsigned int *)(v76 + 16LL * v74 + 8);
      v79 = *(void (__fastcall **)(__int64, __int64, __int64, float *))(*(_QWORD *)v77 + 96LL);
      if ( (char *)v79 == (char *)CKeyframeAnimation::SetProperty )
        CKeyframeAnimation::SetProperty(v77, v78, 18LL, &v106);
      else
        v79(v77, v78, 18LL, &v106);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      {
        v82 = *((_QWORD *)v2 + 1);
        v103 = v106;
        v110[0] = v75;
        v104 = *(float *)(v82 + 16LL * v74 + 8);
        v109 = *(_QWORD *)(v82 + 16LL * v74);
        v111 = (CAnimation *)((char *)v2 - 72);
        v113 = v110;
        v115 = &v111;
        v117 = &v109;
        v119 = &v104;
        v121 = &v103;
        v114 = 8LL;
        v116 = 8LL;
        v118 = 8LL;
        v120 = 4LL;
        v122 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_DCOMPEVENT_ANIMATION_UPDATE_VALUE,
          v80,
          6LL,
          v112);
      }
      v81 = *((_DWORD *)v2 + 8);
      ++v74;
    }
    while ( v74 < v81 );
    if ( v81 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 - 6) + 824LL) + 440LL) |= 2u;
  }
LABEL_46:
  if ( *((_DWORD *)v2 + 54) )
  {
    if ( *((_DWORD *)v2 + 53) )
    {
      v93 = *((unsigned int *)v2 + 34);
      if ( (unsigned int)v93 < *((_DWORD *)v2 + 26) )
      {
        LOBYTE(v102) = AnimationValue;
        do
        {
          if ( *(_QWORD *)(*((_QWORD *)v2 + 10) + 16 * v93) > v44 )
            break;
          v94 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 - 6) + 6416LL) + 72LL))(
                  *(_QWORD *)(*((_QWORD *)v2 - 6) + 6416LL),
                  1LL);
          if ( v94 )
          {
            v99 = *((_QWORD *)v2 + 10);
            v100 = 2LL * *((unsigned int *)v2 + 34);
            v110[0] = *((unsigned int *)v2 + 54);
            v110[1] = *((unsigned int *)v2 + 53);
            LODWORD(v101) = *(_DWORD *)(v99 + 8 * v100 + 12);
            CoreUICallSend(v94, v110, 2LL, 1LL, 0, &unk_180336E4C, *(_DWORD *)(v99 + 8 * v100 + 8), v101, v102);
          }
          v93 = (unsigned int)(*((_DWORD *)v2 + 34) + 1);
          *((_DWORD *)v2 + 34) = v93;
        }
        while ( (unsigned int)v93 < *((_DWORD *)v2 + 26) );
        AnimationValue = v102;
      }
    }
  }
  if ( *((_BYTE *)v2 + 222) )
  {
    if ( !*((_BYTE *)v2 + 223) )
      CAnimation::EndAnimation((CAnimation *)((char *)v2 - 72));
  }
  return AnimationValue;
}
