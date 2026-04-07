/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18003A2D0
 * Callers:
 *     ?CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18000BBA0 (-CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18003ABE0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        float a4)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  char v6; // r11
  __int64 v7; // r9
  float v8; // xmm6_4
  unsigned int v12; // r12d
  char v13; // cl
  unsigned int v14; // ebp
  __int64 v15; // r10
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  char v18; // dl
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rcx
  int v22; // ebp
  int v23; // eax
  int v24; // r14d
  unsigned int i; // r8d
  _QWORD *v26; // rdi
  unsigned int v27; // r10d
  char v28; // cl
  unsigned int v29; // r14d
  __int64 v30; // rbp
  _QWORD *v31; // r9
  _QWORD *v32; // r8
  char v33; // dl
  __int64 v34; // r14
  __int64 v35; // rbp
  __int64 v36; // rcx
  int v37; // ebp
  int v38; // eax
  int v39; // r14d
  bool v40; // zf
  float v41; // xmm0_4
  int v42; // eax
  __int64 v43; // rbx
  int v45; // eax
  void *v46; // [rsp+30h] [rbp-58h] BYREF
  void *Src; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  v5 = (char *)this + 312;
  v6 = 0;
  v7 = *((unsigned int *)this + 84);
  v8 = a4;
  v12 = 0;
  if ( (_DWORD)v7 == *((_DWORD *)a2 + 6) )
  {
    v13 = 1;
    v14 = 0;
    if ( !(_DWORD)v7 )
      goto LABEL_20;
    v15 = 0LL;
    while ( v13 )
    {
      ++v14;
      v16 = (_QWORD *)(v15 + *(_QWORD *)a2);
      v17 = (_QWORD *)(v15 + *(_QWORD *)v5);
      v15 += 8LL;
      v18 = 0;
      if ( *v17 == *v16 )
        v18 = v13;
      v13 = v18;
      if ( v14 >= (unsigned int)v7 )
      {
        if ( v18 )
          goto LABEL_20;
        break;
      }
    }
  }
  if ( (_DWORD)v7 )
  {
    v19 = 0LL;
    v20 = v7;
    do
    {
      v21 = *(_QWORD *)(v19 + *(_QWORD *)v5);
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v21)(v21, 1LL);
        *(_QWORD *)(v19 + *(_QWORD *)v5) = 0LL;
      }
      v19 += 8LL;
      --v20;
    }
    while ( v20 );
  }
  *((_DWORD *)v5 + 6) = 0;
  v22 = *((_DWORD *)a2 + 6);
  Src = *(void **)a2;
  v23 = DynArrayImpl<0>::Grow((_DWORD)v5, 8, v22, 0, (__int64)&Src);
  v24 = v23;
  v12 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x238u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x62u, 0LL);
    return v12;
  }
  memcpy_0((void *)(*(_QWORD *)v5 + (unsigned int)(8 * *((_DWORD *)v5 + 6))), Src, (unsigned int)(8 * v22));
  *((_DWORD *)v5 + 6) += v22;
  for ( i = 0; i < *((_DWORD *)v5 + 6); ++i )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL * i) + 8LL));
  v6 = 1;
LABEL_20:
  v26 = (_QWORD *)((char *)this + 344);
  v27 = *((_DWORD *)this + 92);
  if ( v27 == *((_DWORD *)a3 + 6) )
  {
    v28 = 1;
    v29 = 0;
    if ( !v27 )
      goto LABEL_39;
    v30 = 0LL;
    while ( v28 )
    {
      ++v29;
      v31 = (_QWORD *)(v30 + *(_QWORD *)a3);
      v32 = (_QWORD *)(v30 + *v26);
      v30 += 8LL;
      v33 = 0;
      if ( *v32 == *v31 )
        v33 = v28;
      v28 = v33;
      if ( v29 >= v27 )
      {
        if ( v33 )
          goto LABEL_39;
        break;
      }
    }
  }
  if ( v27 )
  {
    v34 = 0LL;
    v35 = *((unsigned int *)this + 92);
    do
    {
      v36 = *(_QWORD *)(v34 + *v26);
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v36)(v36, 1LL);
        *(_QWORD *)(v34 + *v26) = 0LL;
      }
      v34 += 8LL;
      --v35;
    }
    while ( v35 );
  }
  *((_DWORD *)this + 92) = 0;
  v37 = *((_DWORD *)a3 + 6);
  v46 = *(void **)a3;
  v38 = DynArrayImpl<0>::Grow((int)this + 344, 8, v37, 0, (__int64)&v46);
  v39 = v38;
  v12 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x238u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x68u, 0LL);
    return v12;
  }
  memcpy_0((void *)(*v26 + (unsigned int)(8 * *((_DWORD *)this + 92))), v46, (unsigned int)(8 * v37));
  *((_DWORD *)this + 92) += v37;
  if ( *((_DWORD *)this + 92) )
  {
    do
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*v26 + 8LL * v4++) + 8LL));
    while ( v4 < *((_DWORD *)this + 92) );
  }
  v6 = 1;
LABEL_39:
  if ( *((float *)this + 101) == a4 )
  {
    if ( !v6 )
      return v12;
    goto LABEL_43;
  }
  v40 = *((_DWORD *)this + 94) == 1;
  v41 = *((float *)this + 100);
  *((float *)this + 101) = a4;
  if ( v40 )
    v8 = FLOAT_1_0;
  *((float *)this + 100) = v8;
  if ( v6 )
  {
LABEL_43:
    v42 = *((_DWORD *)this + 22);
    if ( (v42 & 0x8000) == 0 )
    {
      v43 = *((_QWORD *)this + 3);
      for ( *((_DWORD *)this + 22) = v42 | 0x8000; v43; v43 = *(_QWORD *)(v43 + 24) )
      {
        if ( (*(_BYTE *)(v43 + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      }
    }
    return v12;
  }
  if ( v41 != v8 )
  {
    v45 = *((_DWORD *)this + 22);
    if ( (v45 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 22) = v45 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  return v12;
}
