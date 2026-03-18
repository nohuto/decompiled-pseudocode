/*
 * XREFs of ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18017BD30
 * Callers:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18007E6D0 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x18020EE40 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18024E950 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 * Callees:
 *     ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18017C470 (-GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x18017C4B0 (-GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802A62BC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802B661C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  CSharedSectionAnimationPrimitiveBuffer *v5; // rcx
  __int64 (*v7)(void); // rax
  int Count; // eax
  CSharedSectionAnimationPrimitiveBuffer *v9; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v10)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *Primitive; // r12
  CSharedSectionAnimationPrimitiveBuffer *v12; // rcx
  __int64 (*v13)(void); // rax
  int v14; // eax
  __int64 (***v15)(void); // rcx
  unsigned int v16; // ebx
  __int64 (*v17)(void); // rax
  unsigned int v18; // eax
  __int64 (***v19)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v20)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v21; // rax
  const struct DwmAnimationPrimitive *v22; // rsi
  __int64 v23; // rbx
  __int64 (***v24)(void); // rcx
  __int64 (*v25)(void); // rax
  unsigned int v26; // eax
  __int64 (***v27)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v28)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v29; // rax
  const struct DwmAnimationPrimitive *v30; // rax
  unsigned int i; // ebx
  CSharedSectionAnimationPrimitiveBuffer *v32; // rcx
  __int64 (*v33)(void); // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  bool v36; // r13
  unsigned __int8 v37; // di
  const struct DwmAnimationPrimitive *v39; // rbx
  int v40; // ecx
  CSharedSectionAnimationPrimitiveBuffer *v41; // rcx
  unsigned __int64 v42; // rbp
  __int64 v43; // rsi
  unsigned __int64 (__fastcall *v44)(CAnimation *__hidden); // rax
  int v45; // eax
  CSharedSectionAnimationPrimitiveBuffer *v46; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v47)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *v48; // r8
  unsigned __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 (*v53)(void); // rax
  LARGE_INTEGER v54; // rcx
  __int64 v55; // r15
  double LowPart; // xmm0_8
  double v57; // xmm3_8
  float v58; // xmm6_4
  CSharedSectionAnimationPrimitiveBuffer *v59; // rcx
  __int64 (*v60)(void); // rax
  unsigned int v61; // eax
  CSharedSectionAnimationPrimitiveBuffer *v62; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v63)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  char *v64; // rax
  const struct DwmAnimationPrimitive *v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  const struct DwmAnimationPrimitive *v69; // [rsp+20h] [rbp-58h]
  const struct DwmAnimationPrimitive *v70; // [rsp+80h] [rbp+8h]

  v5 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v7 = **(__int64 (***)(void))v5;
  if ( (char *)v7 == (char *)CAnimation::GetPrimitivesCount )
  {
    v7 = *(__int64 (**)(void))(**((_QWORD **)v5 + 1) + 40LL);
LABEL_3:
    Count = v7();
    goto LABEL_4;
  }
  if ( (char *)v7 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_3;
  Count = CSharedSectionAnimationPrimitiveBuffer::GetCount(v5);
LABEL_4:
  if ( !Count )
  {
LABEL_110:
    Primitive = 0LL;
    v69 = 0LL;
    goto LABEL_8;
  }
  v9 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v10 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
  if ( v10 == CAnimation::GetPrimitive )
  {
    v9 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v9 + 1);
    v10 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v9 + 32LL);
    if ( v10 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v69 = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                    *((CSharedSectionBase **)v9 + 2),
                                                    *((unsigned int *)v9 + 7),
                                                    *((unsigned int *)v9 + 6));
      Primitive = v69;
      if ( v69 )
        goto LABEL_8;
      goto LABEL_110;
    }
  }
  else if ( v10 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
    Primitive = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v9, 0);
    v69 = Primitive;
    goto LABEL_8;
  }
  Primitive = v10(v9, 0);
  v69 = Primitive;
LABEL_8:
  v12 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
  v13 = ***(__int64 (****)(void))this;
  if ( (char *)v13 == (char *)CAnimation::GetPrimitivesCount )
  {
    v13 = *(__int64 (**)(void))(**((_QWORD **)v12 + 1) + 40LL);
LABEL_10:
    v14 = v13();
    goto LABEL_11;
  }
  if ( (char *)v13 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_10;
  v14 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v12);
LABEL_11:
  v15 = *(__int64 (****)(void))this;
  v16 = v14 - 1;
  v17 = ***(__int64 (****)(void))this;
  if ( (char *)v17 == (char *)CAnimation::GetPrimitivesCount )
  {
    v17 = (__int64 (*)(void))*((_QWORD *)*v15[1] + 5);
LABEL_13:
    v18 = v17();
    goto LABEL_14;
  }
  if ( (char *)v17 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_13;
  v18 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v15);
LABEL_14:
  if ( v16 >= v18 )
    goto LABEL_111;
  v19 = *(__int64 (****)(void))this;
  v20 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
  if ( v20 == CAnimation::GetPrimitive )
  {
    v19 = (__int64 (***)(void))v19[1];
    v20 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v19)[4];
    if ( v20 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v21 = (char *)CSharedSectionBase::ResolveAllocation(
                      (CSharedSectionBase *)v19[2],
                      *((unsigned int *)v19 + 7),
                      *((unsigned int *)v19 + 6));
      if ( v21 )
      {
        v22 = (const struct DwmAnimationPrimitive *)&v21[32 * v16];
LABEL_19:
        v70 = v22;
        goto LABEL_20;
      }
LABEL_111:
      v22 = 0LL;
      goto LABEL_19;
    }
    v66 = v16;
  }
  else
  {
    v66 = v16;
    if ( v20 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v70 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v19, v16);
      goto LABEL_20;
    }
  }
  v70 = v20((CSharedSectionAnimationPrimitiveBuffer *)v19, v66);
LABEL_20:
  if ( !Primitive )
    return 0;
  v23 = *((unsigned int *)this + 2);
  if ( (_DWORD)v23 == -1 )
    goto LABEL_32;
  v24 = *(__int64 (****)(void))this;
  v25 = ***(__int64 (****)(void))this;
  if ( (char *)v25 == (char *)CAnimation::GetPrimitivesCount )
  {
    v25 = (__int64 (*)(void))*((_QWORD *)*v24[1] + 5);
LABEL_24:
    v26 = v25();
    goto LABEL_25;
  }
  if ( (char *)v25 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    goto LABEL_24;
  v26 = CSharedSectionAnimationPrimitiveBuffer::GetCount((CSharedSectionAnimationPrimitiveBuffer *)v24);
LABEL_25:
  if ( (unsigned int)v23 >= v26 )
  {
LABEL_113:
    v30 = 0LL;
    goto LABEL_30;
  }
  v27 = *(__int64 (****)(void))this;
  v28 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
  if ( v28 == CAnimation::GetPrimitive )
  {
    v27 = (__int64 (***)(void))v27[1];
    v28 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v27)[4];
    if ( v28 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v29 = (char *)CSharedSectionBase::ResolveAllocation(
                      (CSharedSectionBase *)v27[2],
                      *((unsigned int *)v27 + 7),
                      *((unsigned int *)v27 + 6));
      if ( v29 )
      {
        v30 = (const struct DwmAnimationPrimitive *)&v29[32 * v23];
        goto LABEL_30;
      }
      goto LABEL_113;
    }
    v67 = (unsigned int)v23;
  }
  else
  {
    v67 = (unsigned int)v23;
    if ( v28 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v30 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive((CSharedSectionAnimationPrimitiveBuffer *)v27, v23);
      goto LABEL_30;
    }
  }
  v30 = v28((CSharedSectionAnimationPrimitiveBuffer *)v27, v67);
LABEL_30:
  if ( *((_QWORD *)v30 + 1) > a2 )
    *((_DWORD *)this + 2) = -1;
LABEL_32:
  for ( i = *((_DWORD *)this + 2); ; *((_DWORD *)this + 2) = i )
  {
    v32 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
    ++i;
    v33 = ***(__int64 (****)(void))this;
    if ( (char *)v33 == (char *)CAnimation::GetPrimitivesCount )
    {
      v33 = *(__int64 (**)(void))(**((_QWORD **)v32 + 1) + 40LL);
LABEL_35:
      v34 = v33();
      goto LABEL_36;
    }
    if ( (char *)v33 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
      goto LABEL_35;
    v34 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v32);
LABEL_36:
    if ( i >= v34 )
      break;
    v59 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
    v60 = ***(__int64 (****)(void))this;
    if ( (char *)v60 == (char *)CAnimation::GetPrimitivesCount )
    {
      v60 = *(__int64 (**)(void))(**((_QWORD **)v59 + 1) + 40LL);
LABEL_79:
      v61 = v60();
      goto LABEL_80;
    }
    if ( (char *)v60 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
      goto LABEL_79;
    v61 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v59);
LABEL_80:
    if ( i >= v61 )
      goto LABEL_118;
    v62 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
    v63 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
    if ( v63 == CAnimation::GetPrimitive )
    {
      v62 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v62 + 1);
      v63 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v62 + 32LL);
      if ( v63 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v64 = (char *)CSharedSectionBase::ResolveAllocation(
                        *((CSharedSectionBase **)v62 + 2),
                        *((unsigned int *)v62 + 7),
                        *((unsigned int *)v62 + 6));
        if ( v64 )
        {
          v65 = (const struct DwmAnimationPrimitive *)&v64[32 * i];
          goto LABEL_85;
        }
LABEL_118:
        v65 = 0LL;
        goto LABEL_85;
      }
      v68 = i;
    }
    else
    {
      v68 = i;
      if ( v63 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v65 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v62, i);
        goto LABEL_85;
      }
    }
    v65 = v63(v62, v68);
LABEL_85:
    if ( *((_QWORD *)v65 + 1) > a2 )
      break;
  }
  v35 = *((unsigned int *)this + 2);
  v36 = 0;
  if ( (_DWORD)v35 == -1 )
    return 0;
  v37 = 1;
  v39 = (const struct DwmAnimationPrimitive *)((char *)v69 + 32 * v35);
  v40 = *(_DWORD *)v39;
  if ( *(_DWORD *)v39 == 4 || v40 == 6 && v39 == v70 )
    v36 = 1;
  while ( 2 )
  {
    if ( ((v40 - 3) & 0xFFFFFFFC) == 0 && v40 != 4 )
    {
      if ( v69 == v39 )
        return 0;
      v41 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
      v42 = 0LL;
      v43 = 0LL;
      v44 = ***(unsigned __int64 (__fastcall ****)(CAnimation *__hidden))this;
      if ( v44 == CAnimation::GetPrimitivesCount )
      {
        v44 = *(unsigned __int64 (__fastcall **)(CAnimation *__hidden))(**((_QWORD **)v41 + 1) + 40LL);
        goto LABEL_47;
      }
      if ( v44 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
        v45 = CSharedSectionAnimationPrimitiveBuffer::GetCount(v41);
      else
LABEL_47:
        v45 = ((__int64 (*)(void))v44)();
      if ( !v45 )
        goto LABEL_112;
      v46 = *(CSharedSectionAnimationPrimitiveBuffer **)this;
      v47 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)this + 8LL);
      if ( v47 == CAnimation::GetPrimitive )
      {
        v46 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)v46 + 1);
        v47 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v46 + 32LL);
        if ( v47 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
        {
          v48 = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                        *((CSharedSectionBase **)v46 + 2),
                                                        *((unsigned int *)v46 + 7),
                                                        *((unsigned int *)v46 + 6));
          if ( v48 )
          {
LABEL_52:
            if ( *(_DWORD *)v39 == 3 )
            {
              v49 = *((_QWORD *)v39 + 2);
              if ( v49 )
                v42 = (a2 - *((_QWORD *)v39 + 1)) % v49;
              v43 = v42 + *((_QWORD *)v39 + 1) - v49;
              if ( v43 < *((_QWORD *)v48 + 1) )
              {
                v43 = *((_QWORD *)v39 + 1);
                a2 = v43;
                goto LABEL_61;
              }
LABEL_60:
              a2 = v43;
              if ( *((_QWORD *)v39 + 1) >= v43 )
                goto LABEL_61;
              return 0;
            }
            if ( *(_DWORD *)v39 == 5 )
            {
              v50 = *((_QWORD *)v39 + 1);
              v51 = a2 - v50;
              v52 = v50 - *((_QWORD *)v48 + 1);
              if ( v51 <= v52 )
                v52 = v51;
              v43 = v50 - v52;
              goto LABEL_60;
            }
            if ( *(_DWORD *)v39 != 6 )
              goto LABEL_60;
            v43 = *((_QWORD *)v39 + 1);
            a2 = v43;
LABEL_61:
            while ( 1 )
            {
              v39 = (const struct DwmAnimationPrimitive *)((char *)v39 - 32);
              if ( *((_QWORD *)v39 + 1) <= v43 )
                break;
              if ( v39 == v69 )
                return 0;
            }
            v40 = *(_DWORD *)v39;
            continue;
          }
LABEL_112:
          v48 = 0LL;
          goto LABEL_52;
        }
      }
      else if ( v47 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v48 = CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v46, 0);
        goto LABEL_52;
      }
      v48 = v47(v46, 0);
      goto LABEL_52;
    }
    break;
  }
  switch ( v40 )
  {
    case 1:
      v53 = *(__int64 (**)(void))(**(_QWORD **)this + 24LL);
      if ( (char *)v53 == (char *)CAnimation::GetQPCFrequency )
        v54 = g_qpcFrequency;
      else
        v54.QuadPart = v53();
      v55 = a2 - *((_QWORD *)v39 + 1);
      if ( v54.QuadPart < 0 )
        LowPart = (double)(int)(v54.LowPart & 1 | ((unsigned __int64)v54.QuadPart >> 1))
                + (double)(int)(v54.LowPart & 1 | ((unsigned __int64)v54.QuadPart >> 1));
      else
        LowPart = (double)(int)v54.LowPart;
      v57 = (double)(int)v55 / LowPart;
      v58 = *((float *)v39 + 4) * (v57 * v57) * v57
          + *((float *)v39 + 5) * (v57 * v57)
          + *((float *)v39 + 6) * v57
          + *((float *)v39 + 7);
      break;
    case 2:
      v58 = CAnimationInterpolator::InterpolateSinusoidal(this, v39, a2);
      break;
    case 4:
      v58 = *((float *)v39 + 4);
      break;
    default:
      return 0;
  }
  if ( !_finite(v58) )
    return 0;
  *a3 = v58;
  if ( a4 )
    *a4 = v36;
  return v37;
}
