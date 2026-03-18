/*
 * XREFs of ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800B0930
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800AF9B0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800B0930 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1801B4F60 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 * Callees:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800B0930 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ @ 0x1800B11D0 (-CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18018C640 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18018CD80 (-GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x18018CDC0 (-GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ.c)
 *     ?GetAnimationTime@CAnimation@@AEBA_J_K_N_J0@Z @ 0x1801DAA20 (-GetAnimationTime@CAnimation@@AEBA_J_K_N_J0@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802BFC6C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationInterpolator::GetAnimationValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  CSharedSectionAnimationPrimitiveBuffer *v5; // rcx
  float v7; // xmm9_4
  unsigned __int64 (__fastcall *v8)(CAnimation *__hidden); // rax
  int Count; // eax
  CSharedSectionAnimationPrimitiveBuffer *v10; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v11)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *Primitive; // r12
  CSharedSectionAnimationPrimitiveBuffer *v13; // rcx
  __int64 (*v14)(void); // rax
  int v15; // eax
  __int64 (***v16)(void); // rcx
  unsigned int v17; // ebx
  __int64 (*v18)(void); // rax
  unsigned int v19; // eax
  __int64 (***v20)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v21)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v22; // rax
  const struct DwmAnimationPrimitive *v23; // rbp
  __int64 v24; // rbx
  __int64 (***v25)(void); // rcx
  __int64 (*v26)(void); // rax
  unsigned int v27; // eax
  __int64 (***v28)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v29)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v30; // rax
  const struct DwmAnimationPrimitive *v31; // rax
  unsigned int i; // ebx
  CSharedSectionAnimationPrimitiveBuffer *v33; // rcx
  __int64 (*v34)(void); // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r15
  char v38; // r13
  unsigned __int8 AnimationValue; // bl
  CSharedSectionAnimationPrimitiveBuffer *v40; // rdi
  bool (__fastcall *v41)(CAnimation *__hidden, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rax
  __int64 v42; // rax
  int v43; // ebp
  bool InterpolatedValue; // di
  __int64 v45; // rbx
  float v46; // xmm6_4
  float v47; // xmm7_4
  int v48; // eax
  const struct DwmAnimationPrimitive *v50; // rdi
  int v51; // ecx
  CSharedSectionAnimationPrimitiveBuffer *v52; // rcx
  unsigned __int64 v53; // r14
  __int64 v54; // rbp
  unsigned __int64 (__fastcall *v55)(CAnimation *__hidden); // rax
  int v56; // eax
  CSharedSectionAnimationPrimitiveBuffer *v57; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v58)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *v59; // r8
  unsigned __int64 v60; // rcx
  __int64 v61; // rbp
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 (*v64)(void); // rax
  LARGE_INTEGER v65; // rcx
  double LowPart; // xmm0_8
  double v67; // xmm3_8
  CSharedSectionAnimationPrimitiveBuffer *v68; // rcx
  __int64 (*v69)(void); // rax
  unsigned int v70; // eax
  CSharedSectionAnimationPrimitiveBuffer *v71; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v72)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v73; // rax
  const struct DwmAnimationPrimitive *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  int v78; // ebp
  unsigned __int64 v79; // rdx
  __int64 AnimationTime; // rax
  float v81; // xmm2_4
  float v82; // xmm3_4
  char v83; // al
  float v84; // xmm7_4
  float v85; // xmm2_4
  float v86; // xmm0_4
  float v87; // [rsp+30h] [rbp-A8h] BYREF
  const struct DwmAnimationPrimitive *v88; // [rsp+38h] [rbp-A0h] BYREF
  const struct DwmAnimationPrimitive *v89; // [rsp+40h] [rbp-98h]
  unsigned __int64 v90[3]; // [rsp+48h] [rbp-90h] BYREF
  int v91; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v92; // [rsp+E8h] [rbp+10h]
  float *v93; // [rsp+F0h] [rbp+18h]
  bool *v94; // [rsp+F8h] [rbp+20h]

  v94 = a4;
  v93 = a3;
  v92 = a2;
  v91 = 0;
  v87 = 0.0;
  v5 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v90[0] = 0LL;
  v7 = 0.0;
  v8 = **(unsigned __int64 (__fastcall ***)(CAnimation *__hidden))v5;
  if ( v8 == CAnimation::GetPrimitivesCount )
  {
    v5 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v5 + 1);
    v8 = *(unsigned __int64 (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)v5 + 40LL);
LABEL_3:
    Count = ((__int64 (__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *, unsigned __int64 (__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden)))v8)(
              v5,
              CSharedSectionAnimationPrimitiveBuffer::GetCount);
    goto LABEL_4;
  }
  if ( v8 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_3;
  Count = CSharedSectionAnimationPrimitiveBuffer::GetCount(v5);
LABEL_4:
  if ( !Count )
  {
LABEL_124:
    v89 = 0LL;
    Primitive = 0LL;
    goto LABEL_8;
  }
  v10 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v11 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
  if ( v11 == CAnimation::GetPrimitive )
  {
    v10 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v10 + 1);
    v11 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v10 + 32LL);
    if ( v11 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v89 = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                    *((CSharedSectionBase **)v10 + 2),
                                                    *((unsigned int *)v10 + 7),
                                                    *((unsigned int *)v10 + 6));
      Primitive = v89;
      if ( v89 )
        goto LABEL_8;
      goto LABEL_124;
    }
  }
  else if ( v11 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
    Primitive = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v10, 0);
    v89 = Primitive;
    goto LABEL_8;
  }
  Primitive = v11(v10, 0);
  v89 = Primitive;
LABEL_8:
  v13 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v14 = ***(__int64 (****)(void))this;
  if ( (char *)v14 == (char *)CAnimation::GetPrimitivesCount )
  {
    v14 = *(__int64 (**)(void))(**((_QWORD **)v13 + 1) + 40LL);
LABEL_10:
    v15 = v14();
    goto LABEL_11;
  }
  if ( (char *)v14 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_10;
  v15 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v13);
LABEL_11:
  v16 = *(__int64 (****)(void))this;
  v17 = v15 - 1;
  v18 = ***(__int64 (****)(void))this;
  if ( (char *)v18 == (char *)CAnimation::GetPrimitivesCount )
  {
    v18 = (__int64 (*)(void))*((_QWORD *)*v16[1] + 5);
LABEL_13:
    v19 = v18();
    goto LABEL_14;
  }
  if ( (char *)v18 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_13;
  v19 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v16);
LABEL_14:
  if ( v17 >= v19 )
    goto LABEL_125;
  v20 = *(__int64 (****)(void))this;
  v21 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
  if ( v21 == CAnimation::GetPrimitive )
  {
    v20 = (__int64 (***)(void))v20[1];
    v21 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v20)[4];
    if ( v21 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v22 = (char *)CSharedSectionBase::ResolveAllocation(
                      (CSharedSectionBase *)v20[2],
                      *((unsigned int *)v20 + 7),
                      *((unsigned int *)v20 + 6));
      if ( v22 )
      {
        v23 = (const struct DwmAnimationPrimitive *)&v22[32 * v17];
LABEL_19:
        v88 = v23;
        goto LABEL_20;
      }
LABEL_125:
      v23 = 0LL;
      goto LABEL_19;
    }
    v75 = v17;
  }
  else
  {
    v75 = v17;
    if ( v21 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v88 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v20, v17);
      goto LABEL_20;
    }
  }
  v88 = v21((CSharedSectionAnimationPrimitiveBuffer *)v20, v75);
LABEL_20:
  if ( !Primitive )
    return 0;
  v24 = *((unsigned int *)this + 2);
  if ( (_DWORD)v24 == -1 )
    goto LABEL_32;
  v25 = *(__int64 (****)(void))this;
  v26 = ***(__int64 (****)(void))this;
  if ( (char *)v26 == (char *)CAnimation::GetPrimitivesCount )
  {
    v26 = (__int64 (*)(void))*((_QWORD *)*v25[1] + 5);
LABEL_24:
    v27 = v26();
    goto LABEL_25;
  }
  if ( (char *)v26 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_24;
  v27 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v25);
LABEL_25:
  if ( (unsigned int)v24 >= v27 )
  {
LABEL_127:
    v31 = 0LL;
    goto LABEL_30;
  }
  v28 = *(__int64 (****)(void))this;
  v29 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
  if ( v29 == CAnimation::GetPrimitive )
  {
    v28 = (__int64 (***)(void))v28[1];
    v29 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v28)[4];
    if ( v29 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v30 = (char *)CSharedSectionBase::ResolveAllocation(
                      (CSharedSectionBase *)v28[2],
                      *((unsigned int *)v28 + 7),
                      *((unsigned int *)v28 + 6));
      if ( v30 )
      {
        v31 = (const struct DwmAnimationPrimitive *)&v30[32 * v24];
        goto LABEL_30;
      }
      goto LABEL_127;
    }
    v76 = (unsigned int)v24;
  }
  else
  {
    v76 = (unsigned int)v24;
    if ( v29 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v31 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v28, v24);
      goto LABEL_30;
    }
  }
  v31 = v29((CSharedSectionAnimationPrimitiveBuffer *)v28, v76);
LABEL_30:
  if ( *((_QWORD *)v31 + 1) > a2 )
    *((_DWORD *)this + 2) = -1;
LABEL_32:
  for ( i = *((_DWORD *)this + 2); ; *((_DWORD *)this + 2) = i )
  {
    v33 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
    ++i;
    v34 = ***(__int64 (****)(void))this;
    if ( (char *)v34 == (char *)CAnimation::GetPrimitivesCount )
    {
      v34 = *(__int64 (**)(void))(**((_QWORD **)v33 + 1) + 40LL);
LABEL_35:
      v35 = v34();
      goto LABEL_36;
    }
    if ( (char *)v34 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
      goto LABEL_35;
    v35 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v33);
LABEL_36:
    if ( i >= v35 )
      break;
    v68 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
    v69 = ***(__int64 (****)(void))this;
    if ( (char *)v69 == (char *)CAnimation::GetPrimitivesCount )
    {
      v69 = *(__int64 (**)(void))(**((_QWORD **)v68 + 1) + 40LL);
LABEL_93:
      v70 = v69();
      goto LABEL_94;
    }
    if ( (char *)v69 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
      goto LABEL_93;
    v70 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v68);
LABEL_94:
    if ( i >= v70 )
      goto LABEL_132;
    v71 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
    v72 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
    if ( v72 == CAnimation::GetPrimitive )
    {
      v71 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v71 + 1);
      v72 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v71 + 32LL);
      if ( v72 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v73 = (char *)CSharedSectionBase::ResolveAllocation(
                        *((CSharedSectionBase **)v71 + 2),
                        *((unsigned int *)v71 + 7),
                        *((unsigned int *)v71 + 6));
        if ( v73 )
        {
          v74 = (const struct DwmAnimationPrimitive *)&v73[32 * i];
          goto LABEL_99;
        }
LABEL_132:
        v74 = 0LL;
        goto LABEL_99;
      }
      v77 = i;
    }
    else
    {
      v77 = i;
      if ( v72 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v74 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v71, i);
        goto LABEL_99;
      }
    }
    v74 = v72(v71, v77);
LABEL_99:
    if ( *((_QWORD *)v74 + 1) > a2 )
      break;
  }
  v36 = *((unsigned int *)this + 2);
  v37 = a2;
  v38 = 0;
  if ( (_DWORD)v36 == -1 )
    return 0;
  AnimationValue = 1;
  v50 = (const struct DwmAnimationPrimitive *)((char *)v89 + 32 * v36);
  v51 = *(_DWORD *)v50;
  if ( *(_DWORD *)v50 == 4 || v51 == 6 && v50 == v88 )
    v38 = 1;
LABEL_56:
  if ( ((v51 - 3) & 0xFFFFFFFC) != 0 || v51 == 4 )
  {
    switch ( v51 )
    {
      case 1:
        v64 = *(__int64 (**)(void))(**(_QWORD **)this + 24LL);
        if ( (char *)v64 == (char *)CAnimation::GetQPCFrequency )
          v65 = g_qpcFrequency;
        else
          v65.QuadPart = v64();
        if ( v65.QuadPart < 0 )
          LowPart = (double)(int)(v65.LowPart & 1 | ((unsigned __int64)v65.QuadPart >> 1))
                  + (double)(int)(v65.LowPart & 1 | ((unsigned __int64)v65.QuadPart >> 1));
        else
          LowPart = (double)(int)v65.LowPart;
        v67 = (double)((int)v37 - *((_DWORD *)v50 + 2)) / LowPart;
        v7 = *((float *)v50 + 4) * (v67 * v67) * v67
           + *((float *)v50 + 5) * (v67 * v67)
           + *((float *)v50 + 6) * v67
           + *((float *)v50 + 7);
        break;
      case 2:
        v7 = CAnimationInterpolator::InterpolateSinusoidal(this, v50, v37);
        break;
      case 4:
        v7 = *((float *)v50 + 4);
        break;
      default:
        return 0;
    }
    if ( !_finite(v7) )
      return 0;
    if ( !v94 )
      goto LABEL_39;
    *v94 = v38;
LABEL_40:
    v40 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
    v41 = *(bool (__fastcall **)(CAnimation *__hidden, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(**(_QWORD **)this + 16LL);
    if ( v41 == CAnimation::GetHandoffData )
    {
      v42 = *((_QWORD *)v40 + 13);
      AnimationValue = 1;
      if ( !v42 )
        goto LABEL_42;
      v79 = *((_QWORD *)v40 + 2);
      if ( *(_QWORD *)(v42 + 136) > v79 )
        goto LABEL_42;
      AnimationTime = CAnimation::GetAnimationTime(
                        (CSharedSectionAnimationPrimitiveBuffer *)((char *)v40 - 120),
                        v79,
                        *((_BYTE *)v40 + 177),
                        *((_QWORD *)v40 + 14),
                        *((_QWORD *)v40 + 15));
      AnimationValue = CAnimationInterpolator::GetAnimationValue(
                         (CAnimationInterpolator *)(*((_QWORD *)v40 + 13) + 248LL),
                         AnimationTime,
                         (float *)v40 + 40,
                         0LL);
      if ( AnimationValue )
      {
        ReleaseInterface<IDXGIFactory7>((char *)v40 + 104);
LABEL_42:
        v91 = *((_DWORD *)v40 + 23);
        v87 = *((float *)v40 + 40);
        v90[0] = *((_QWORD *)v40 + 12);
        CAnimation::CheckAndSendHandoffPrevValueNotification((CSharedSectionAnimationPrimitiveBuffer *)((char *)v40 - 120));
      }
    }
    else
    {
      AnimationValue = v41(*(CAnimation **)this, (enum DwmAnimationHandoffType::Enum *)&v91, &v87, v90);
    }
    if ( !AnimationValue )
      return AnimationValue;
    v43 = v91;
    if ( !v91 )
      goto LABEL_52;
    InterpolatedValue = 1;
    v45 = v90[0];
    v46 = v7;
    v47 = v87;
    if ( (*((_BYTE *)this + 24) & 2) == 0
      && (LODWORD(v88) = 0,
          InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, (float *)&v88, 0LL))
      && (InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, v45, (float *)this + 4, 0LL)) )
    {
      v81 = *((float *)this + 4);
      v82 = v81 - *(float *)&v88;
      v83 = *((_BYTE *)this + 24);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v81 - *(float *)&v88) & _xmm) >= 0.0000011920929 )
      {
        *((_BYTE *)this + 24) = v83 | 1;
        v85 = (float)(v81 - v47) / v82;
        *((float *)this + 5) = v85;
        if ( !_finite(v85) )
        {
          InterpolatedValue = 0;
          goto LABEL_47;
        }
      }
      else
      {
        *((_BYTE *)this + 24) = v83 & 0xFE;
      }
      v84 = v47 - *(float *)&v88;
      *((_BYTE *)this + 24) |= 2u;
      *((float *)this + 3) = v84;
    }
    else if ( !InterpolatedValue )
    {
      goto LABEL_47;
    }
    v78 = v43 - 1;
    if ( v78 )
    {
      if ( v78 == 1 )
        v46 = v7 + *((float *)this + 3);
    }
    else if ( v92 <= v45 )
    {
      if ( (*((_BYTE *)this + 24) & 1) != 0 )
      {
        v46 = (float)((float)(v7 - *((float *)this + 4)) * *((float *)this + 5)) + *((float *)this + 4);
      }
      else
      {
        if ( v45 < 0 )
          v86 = (float)(v45 & 1 | (unsigned int)((unsigned __int64)v45 >> 1))
              + (float)(v45 & 1 | (unsigned int)((unsigned __int64)v45 >> 1));
        else
          v86 = (float)(int)v45;
        v46 = (float)((float)(1.0 - (float)((float)(int)v92 / v86)) * *((float *)this + 3)) + v7;
      }
    }
LABEL_47:
    v48 = _finite(v46);
    if ( v48 )
      v7 = v46;
    AnimationValue = 0;
    if ( v48 )
      AnimationValue = InterpolatedValue;
    if ( !AnimationValue )
      return AnimationValue;
LABEL_52:
    *v93 = v7;
    return AnimationValue;
  }
  if ( v89 == v50 )
    return 0;
  v52 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v53 = 0LL;
  v54 = 0LL;
  v55 = ***(unsigned __int64 (__fastcall ****)(CAnimation *__hidden))this;
  if ( v55 == CAnimation::GetPrimitivesCount )
  {
    v55 = *(unsigned __int64 (__fastcall **)(CAnimation *__hidden))(**((_QWORD **)v52 + 1) + 40LL);
    goto LABEL_61;
  }
  if ( v55 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
    v56 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v52);
  else
LABEL_61:
    v56 = ((__int64 (*)(void))v55)();
  if ( !v56 )
    goto LABEL_126;
  v57 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v58 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
  if ( v58 != CAnimation::GetPrimitive )
  {
    if ( v58 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v59 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v57, 0);
      goto LABEL_66;
    }
    goto LABEL_133;
  }
  v57 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v57 + 1);
  v58 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v57 + 32LL);
  if ( v58 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
LABEL_133:
    v59 = v58(v57, 0);
    goto LABEL_66;
  }
  v59 = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                *((CSharedSectionBase **)v57 + 2),
                                                *((unsigned int *)v57 + 7),
                                                *((unsigned int *)v57 + 6));
  if ( v59 )
    goto LABEL_66;
LABEL_126:
  v59 = 0LL;
LABEL_66:
  if ( *(_DWORD *)v50 == 3 )
  {
    v60 = *((_QWORD *)v50 + 2);
    if ( v60 )
      v53 = (v37 - *((_QWORD *)v50 + 1)) % v60;
    v54 = v53 + *((_QWORD *)v50 + 1) - v60;
    if ( v54 < *((_QWORD *)v59 + 1) )
    {
      v54 = *((_QWORD *)v50 + 1);
      v37 = v54;
      goto LABEL_75;
    }
    goto LABEL_74;
  }
  if ( *(_DWORD *)v50 == 5 )
  {
    v61 = *((_QWORD *)v50 + 1);
    v62 = v37 - v61;
    v63 = v61 - *((_QWORD *)v59 + 1);
    if ( v62 <= v63 )
      v63 = v62;
    v54 = v61 - v63;
LABEL_74:
    v37 = v54;
    if ( *((_QWORD *)v50 + 1) >= v54 )
      goto LABEL_75;
    return 0;
  }
  if ( *(_DWORD *)v50 != 6 )
    goto LABEL_74;
  v54 = *((_QWORD *)v50 + 1);
  v37 = v54;
  do
  {
LABEL_75:
    v50 = (const struct DwmAnimationPrimitive *)((char *)v50 - 32);
    if ( *((_QWORD *)v50 + 1) <= v54 )
    {
      v51 = *(_DWORD *)v50;
      goto LABEL_56;
    }
  }
  while ( v50 != v89 );
  AnimationValue = 0;
LABEL_39:
  if ( AnimationValue )
    goto LABEL_40;
  return AnimationValue;
}
