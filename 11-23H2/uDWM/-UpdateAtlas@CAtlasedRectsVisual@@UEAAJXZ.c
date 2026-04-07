/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180045020
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BC44 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ??$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z @ 0x180038B90 (--$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180041EA0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  __int32 *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r13
  char v18; // al
  RECT *v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // r8
  int v23; // eax
  int v24; // edi
  __int64 v25; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rdx
  __int64 v31; // r8
  int v32; // r9d
  unsigned int v33; // [rsp+20h] [rbp-78h]
  unsigned int v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  __int64 v36; // [rsp+40h] [rbp-58h]
  RECT *lprc2; // [rsp+48h] [rbp-50h]
  __m128i si128; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v3 = *((unsigned int *)this + 68);
  if ( !(_DWORD)v3 )
  {
LABEL_24:
    (*(void (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 40LL))(this);
    goto LABEL_25;
  }
  v4 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  lprc2 = 0LL;
  v5 = (__int32 *)*((_QWORD *)this + 35);
  if ( v5 )
  {
    si128.m128i_i32[0] = *v5;
    si128.m128i_i32[1] = v5[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 32) - v5[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 33) - v5[3];
    lprc2 = (RECT *)&si128;
  }
  v6 = CCompositor::CreateProxy<CAtlasedRectsGroupProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v35);
  v2 = v6;
  if ( v6 < 0 )
  {
    v33 = 186;
LABEL_46:
    v32 = v6;
    goto LABEL_49;
  }
  v7 = 8 * v3;
  if ( !is_mul_ok(v3, 8uLL) )
    v7 = -1LL;
  v36 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v7);
  if ( !v36 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xBCu, 0LL);
    goto LABEL_25;
  }
  v8 = 0;
  v34 = 0;
  v9 = 0;
  v10 = 0LL;
  do
  {
    v11 = v4;
    v12 = v4;
    v13 = *(_QWORD *)(v10 + *((_QWORD *)this + 31));
    v14 = *(_QWORD *)(v13 + 72);
    if ( !v14 )
    {
      v4 = 0LL;
      if ( v12 )
        v4 = v11;
      v17 = v4;
      goto LABEL_18;
    }
    v15 = *(_QWORD *)(v14 + 16);
    v16 = v15;
    if ( v4 )
      v16 = v4;
    v4 = v16;
    v17 = v16;
    if ( !v15 )
      goto LABEL_18;
    v18 = *(_BYTE *)(v13 + 116);
    v19 = lprc2;
    if ( lprc2 )
    {
      if ( !v18 )
        goto LABEL_42;
      if ( !EqualRect((const RECT *)(v13 + 100), lprc2) )
      {
        v19 = lprc2;
LABEL_42:
        *(_BYTE *)(v13 + 116) = 1;
        *(RECT *)(v13 + 100) = *v19;
LABEL_43:
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v13, 1, 0x2000u);
      }
    }
    else if ( v18 )
    {
      *(_BYTE *)(v13 + 116) = 0;
      goto LABEL_43;
    }
    v6 = CAtlasedImage::Validate(*(CAtlasedImage **)(v10 + *((_QWORD *)this + 31)));
    v2 = v6;
    if ( v6 < 0 )
    {
      v33 = 205;
      goto LABEL_46;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CAtlasedRectsVisual *, _QWORD))(*(_QWORD *)this + 216LL))(
           this,
           *(_QWORD *)(v10 + *((_QWORD *)this + 31))) )
    {
      *(_QWORD *)(v36 + 8LL * v34) = *(_QWORD *)(*(_QWORD *)(v10 + *((_QWORD *)this + 31)) + 88LL);
      v8 = ++v34;
    }
    else
    {
      v8 = v34;
    }
LABEL_18:
    ++v9;
    v10 += 8LL;
  }
  while ( v9 < (unsigned int)v3 );
  v20 = v35;
  v21 = 0LL;
  if ( v8 )
  {
    v27 = v8;
    v28 = 4LL * v8;
    if ( !is_mul_ok(v8, 4uLL) )
      v28 = -1LL;
    v29 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v28,
            v11);
    v21 = v29;
    if ( v29 )
    {
      v30 = (_DWORD *)v29;
      v31 = v36;
      do
      {
        *v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 16LL) + 24LL);
        v31 += 8LL;
        ++v30;
        --v27;
      }
      while ( v27 );
      v8 = v34;
      goto LABEL_20;
    }
    v2 = -2147024882;
    v24 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, 0LL);
  }
  else
  {
LABEL_20:
    if ( v17 )
      v22 = *(unsigned int *)(*(_QWORD *)(v17 + 16) + 24LL);
    else
      v22 = 0LL;
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int))(**(_QWORD **)(*(_QWORD *)(v20 + 16)
                                                                                                  + 16LL)
                                                                                    + 848LL))(
            *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v20 + 16) + 24LL),
            v22,
            v21,
            v8);
    v24 = v23;
    v2 = v23;
    if ( v23 >= 0 )
    {
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v21);
      v2 = 0;
      goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x30u, 0LL);
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v21);
  }
  v33 = 214;
  v32 = v24;
LABEL_49:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v33, 0LL);
LABEL_25:
  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v36);
  v25 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v25)(v25, 1LL);
  }
  return v2;
}
