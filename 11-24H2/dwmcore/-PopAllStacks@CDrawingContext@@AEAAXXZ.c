/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180057310
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x1800F68F8 (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18013984C (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180079FD4 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800FA260 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1801967E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // eax
  int v3; // r14d
  __int64 v4; // rbp
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  void **v12; // rdi
  unsigned int i; // esi
  void *v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdi
  void *v40; // rsi
  int v41; // r9d
  void *v42; // rdi
  void *v43; // rsi
  int v44; // r9d
  void *v45; // rsi
  int v46; // r9d
  void *v47; // rsi
  int v48; // r9d
  void *v49; // rsi
  int v50; // r9d
  void *v51; // rsi
  int v52; // r9d
  int v53; // eax
  void *v54; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 68) = 0;
  v2 = *((_DWORD *)this + 70);
  v3 = -2147024882;
  v4 = 64LL;
  if ( v2 != 10 )
  {
    v5 = v2 + 1;
    goto LABEL_3;
  }
  v29 = *((_DWORD *)this + 71);
  v30 = 64LL;
  if ( v29 > 0x40 )
    v30 = v29;
  if ( (unsigned __int64)(3 * v30) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_45;
  }
  if ( (unsigned int)(3 * v30) > *((_DWORD *)this + 69) )
  {
LABEL_45:
    *((_DWORD *)this + 71) = 0;
    v5 = 0;
    goto LABEL_3;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v30 <= 0x10 )
  {
    v50 = -2147024809;
    goto LABEL_101;
  }
  v49 = MIDL_user_allocate(16LL * (unsigned int)v30);
  if ( !v49 )
  {
    v50 = -2147024882;
LABEL_101:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x11Eu, 0LL);
    goto LABEL_45;
  }
  operator delete(*((void **)this + 33));
  v5 = 0;
  *((_QWORD *)this + 33) = v49;
  *((_DWORD *)this + 69) = v30;
  *((_DWORD *)this + 71) = 0;
LABEL_3:
  *((_DWORD *)this + 70) = v5;
  *((_DWORD *)this + 74) = 0;
  v6 = *((_DWORD *)this + 76);
  if ( v6 != 8 )
  {
    v7 = v6 + 1;
    goto LABEL_5;
  }
  v34 = *((_DWORD *)this + 77);
  v35 = 8LL;
  if ( v34 > 8 )
    v35 = v34;
  if ( (unsigned __int64)(3 * v35) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_60;
  }
  if ( (unsigned int)(3 * v35) > *((_DWORD *)this + 75) )
  {
LABEL_60:
    *((_DWORD *)this + 77) = 0;
    v7 = 0;
    goto LABEL_5;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v35 <= 0x44 )
  {
    v46 = -2147024809;
    goto LABEL_93;
  }
  v45 = MIDL_user_allocate(68LL * (unsigned int)v35);
  if ( !v45 )
  {
    v46 = -2147024882;
LABEL_93:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x11Eu, 0LL);
    goto LABEL_60;
  }
  operator delete(*((void **)this + 36));
  v7 = 0;
  *((_QWORD *)this + 36) = v45;
  *((_DWORD *)this + 75) = v35;
  *((_DWORD *)this + 77) = 0;
LABEL_5:
  *((_DWORD *)this + 76) = v7;
  *((_DWORD *)this + 80) = 0;
  v8 = *((_DWORD *)this + 82);
  if ( v8 != 10 )
  {
    v9 = v8 + 1;
    goto LABEL_7;
  }
  v31 = *((_DWORD *)this + 83);
  v32 = 64LL;
  if ( v31 > 0x40 )
    v32 = v31;
  if ( (unsigned __int64)(3 * v32) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_50;
  }
  if ( (unsigned int)(3 * v32) > *((_DWORD *)this + 81) )
  {
LABEL_50:
    *((_DWORD *)this + 83) = 0;
    v9 = 0;
    goto LABEL_7;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 <= 1 )
  {
    v41 = -2147024809;
    goto LABEL_82;
  }
  v40 = MIDL_user_allocate((unsigned int)v32);
  if ( !v40 )
  {
    v41 = -2147024882;
LABEL_82:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x11Eu, 0LL);
    goto LABEL_50;
  }
  operator delete(*((void **)this + 39));
  v9 = 0;
  *((_QWORD *)this + 39) = v40;
  *((_DWORD *)this + 81) = v32;
  *((_DWORD *)this + 83) = 0;
LABEL_7:
  *((_DWORD *)this + 82) = v9;
  *((_DWORD *)this + 86) = 0;
  v10 = *((_DWORD *)this + 88);
  if ( v10 != 10 )
  {
    v11 = v10 + 1;
    goto LABEL_9;
  }
  v38 = *((_DWORD *)this + 89);
  v39 = 64LL;
  if ( v38 > 0x40 )
    v39 = v38;
  if ( (unsigned __int64)(3 * v39) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_71;
  }
  if ( (unsigned int)(3 * v39) > *((_DWORD *)this + 87) )
  {
LABEL_71:
    *((_DWORD *)this + 89) = 0;
    v11 = 0;
    goto LABEL_9;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v39 <= 4 )
  {
    v48 = -2147024809;
    goto LABEL_97;
  }
  v47 = MIDL_user_allocate(4 * v39);
  if ( !v47 )
  {
    v48 = -2147024882;
LABEL_97:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x11Eu, 0LL);
    goto LABEL_71;
  }
  operator delete(*((void **)this + 42));
  v11 = 0;
  *((_QWORD *)this + 42) = v47;
  *((_DWORD *)this + 87) = v39;
  *((_DWORD *)this + 89) = 0;
LABEL_9:
  *((_DWORD *)this + 88) = v11;
  while ( *((_DWORD *)this + 96) )
    CDrawingContext::PopLayerInternal(this);
  v12 = (void **)((char *)this + 432);
  for ( i = 0; i < *((_DWORD *)this + 114); ++i )
  {
    v24 = *((_QWORD *)*v12 + 2 * i);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v14 = *v12;
  *((_DWORD *)this + 114) = 0;
  if ( v14 != *((void **)this + 55) )
  {
    operator delete(v14);
    *((_QWORD *)this + 54) = *((_QWORD *)this + 55);
    *((_DWORD *)this + 113) = *((_DWORD *)this + 112);
  }
  v15 = *((_QWORD *)this + 53);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    *((_QWORD *)this + 53) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 66);
  *((_DWORD *)this + 138) = 0;
  if ( v16 != *((void **)this + 67) )
  {
    operator delete(v16);
    *((_QWORD *)this + 66) = *((_QWORD *)this + 67);
    *((_DWORD *)this + 137) = *((_DWORD *)this + 136);
  }
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 182) = 0;
  v17 = *((_DWORD *)this + 184);
  if ( v17 != 10 )
  {
    v18 = v17 + 1;
    goto LABEL_19;
  }
  v25 = *((_DWORD *)this + 185);
  v26 = 64LL;
  if ( v25 > 0x40 )
    v26 = v25;
  if ( (unsigned __int64)(3 * v26) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_35;
  }
  if ( (unsigned int)(3 * v26) > *((_DWORD *)this + 183) )
  {
LABEL_35:
    *((_DWORD *)this + 185) = 0;
    v18 = 0;
    goto LABEL_19;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v26 <= 0x18 )
  {
    v44 = -2147024809;
    goto LABEL_89;
  }
  v43 = MIDL_user_allocate(24 * v26);
  if ( !v43 )
  {
    v44 = -2147024882;
LABEL_89:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x11Eu, 0LL);
    goto LABEL_35;
  }
  operator delete(*((void **)this + 90));
  v18 = 0;
  *((_QWORD *)this + 90) = v43;
  *((_DWORD *)this + 183) = v26;
  *((_DWORD *)this + 185) = 0;
LABEL_19:
  *((_DWORD *)this + 184) = v18;
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 744));
  *((_DWORD *)this + 792) = 0;
  v19 = *((_DWORD *)this + 794);
  if ( v19 == 10 )
  {
    v36 = *((_DWORD *)this + 795);
    v37 = 64LL;
    if ( v36 > 0x40 )
      v37 = v36;
    if ( (unsigned __int64)(3 * v37) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    else if ( (unsigned int)(3 * v37) <= *((_DWORD *)this + 793) )
    {
      v54 = 0LL;
      v53 = HrMalloc(4uLL, (unsigned int)v37, &v54);
      if ( v53 >= 0 )
      {
        operator delete(*((void **)this + 395));
        *((_QWORD *)this + 395) = v54;
        *((_DWORD *)this + 793) = v37;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x11Eu, 0LL);
      }
    }
    *((_DWORD *)this + 795) = 0;
    v20 = 0;
  }
  else
  {
    v20 = v19 + 1;
  }
  *((_DWORD *)this + 794) = v20;
  *((_DWORD *)this + 822) = 0;
  v21 = *((_DWORD *)this + 824);
  if ( v21 != 10 )
  {
    v22 = v21 + 1;
    goto LABEL_23;
  }
  v27 = *((_DWORD *)this + 825);
  v28 = 64LL;
  if ( v27 > 0x40 )
    v28 = v27;
  if ( (unsigned __int64)(3 * v28) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_40;
  }
  if ( (unsigned int)(3 * v28) > *((_DWORD *)this + 823) )
  {
LABEL_40:
    *((_DWORD *)this + 825) = 0;
    v22 = 0;
    goto LABEL_23;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v28 <= 0x10 )
  {
    v52 = -2147024809;
    goto LABEL_105;
  }
  v51 = MIDL_user_allocate(16LL * (unsigned int)v28);
  if ( !v51 )
  {
    v52 = -2147024882;
LABEL_105:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x11Eu, 0LL);
    goto LABEL_40;
  }
  operator delete(*((void **)this + 410));
  v22 = 0;
  *((_QWORD *)this + 410) = v51;
  *((_DWORD *)this + 823) = v28;
  *((_DWORD *)this + 825) = 0;
LABEL_23:
  *((_DWORD *)this + 824) = v22;
  *((_DWORD *)this + 798) = 0;
  v23 = *((_DWORD *)this + 800);
  if ( v23 != 10 )
  {
    *((_DWORD *)this + 800) = v23 + 1;
    return;
  }
  v33 = *((_DWORD *)this + 801);
  if ( v33 > 0x40 )
    v4 = v33;
  if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_55;
  }
  if ( (unsigned int)(3 * v4) > *((_DWORD *)this + 799) )
  {
LABEL_55:
    *((_QWORD *)this + 400) = 0LL;
    return;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 <= 1 )
  {
    v3 = -2147024809;
    goto LABEL_85;
  }
  v42 = MIDL_user_allocate((unsigned int)v4);
  if ( !v42 )
  {
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x11Eu, 0LL);
    goto LABEL_55;
  }
  operator delete(*((void **)this + 398));
  *((_QWORD *)this + 398) = v42;
  *((_DWORD *)this + 799) = v4;
  *((_QWORD *)this + 400) = 0LL;
}
