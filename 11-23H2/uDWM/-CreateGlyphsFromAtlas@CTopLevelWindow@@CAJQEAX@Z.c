/*
 * XREFs of ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180039D60
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800532CC (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18003A080 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateGlyphsFromAtlas(void *const a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r10
  void *v3; // r15
  unsigned int v4; // ecx
  unsigned int *v5; // r9
  char *v6; // r12
  unsigned int v7; // r13d
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // edi
  __int64 *v13; // rsi
  HRESULT ThemeRect; // ebx
  LONG top; // ecx
  unsigned int v16; // ebp
  unsigned int v17; // ebp
  unsigned int v18; // edi
  int v19; // r14d
  struct CBitmapSource *AtlasImageFromTheme; // r15
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned int v27; // esi
  unsigned int v28; // [rsp+30h] [rbp-88h]
  unsigned int v29; // [rsp+34h] [rbp-84h]
  unsigned int *v31; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-70h]
  __int64 v33; // [rsp+50h] [rbp-68h]
  struct tagRECT rc; // [rsp+60h] [rbp-58h] BYREF
  struct tagRECT pRect; // [rsp+70h] [rbp-48h] BYREF

  v29 = 0;
  v1 = 0;
  v32 = 0LL;
  v2 = 0LL;
  v3 = a1;
  while ( !*(_QWORD *)(v2 + CTopLevelWindow::s_rgpwfWindowFrames) )
  {
LABEL_25:
    ++v1;
    v2 += 8LL;
    v29 = v1;
    v32 = v2;
    if ( v1 >= 6 )
      return 0LL;
  }
  v4 = 0;
  v5 = (unsigned int *)&unk_18011E5A8;
  v28 = 0;
  v31 = (unsigned int *)&unk_18011E5A8;
  while ( 1 )
  {
    v6 = v1 - 4 <= 1 ? (char *)&unk_18011E5A0 + 8 * v4 + 4 * v4 + 4 : (char *)&unk_18011E5A0 + 12 * v4;
    if ( *v6 )
      break;
LABEL_24:
    v5 += 3;
    v4 = v28 + 1;
    v31 = v5;
    v28 = v4;
    if ( v4 >= 0xA )
      goto LABEL_25;
  }
  v7 = 0;
  v33 = 0LL;
  v8 = 0LL;
  while ( 2 )
  {
    v9 = (unsigned __int8)*v6;
    v10 = v8 + *v5 + *(_QWORD *)(v2 + CTopLevelWindow::s_rgpwfWindowFrames);
    v11 = DynArrayImpl<0>::Grow((int)v10 + 200, 8, 4, 0, 0LL);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1A7u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, v12, 0x3E1u, 0LL);
      v27 = v12;
      goto LABEL_32;
    }
    *(_DWORD *)(v10 + 224) += 4;
    v13 = *(__int64 **)(v10 + 200);
    ThemeRect = GetThemeRect(v3, v9, 0, 8002, &pRect);
    if ( ThemeRect >= 0 )
    {
      top = pRect.top;
      v16 = pRect.bottom - pRect.top;
      if ( pRect.bottom - pRect.top < 0 )
        v16 = 0;
      v17 = v16 >> 2;
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        rc.left = pRect.left;
        rc.right = pRect.right;
        rc.top = v19 + top;
        rc.bottom = v17 + v19 + top;
        InflateRect(&rc, -1, -1);
        AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(v3);
        v21 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                104LL);
        v22 = v21;
        if ( !v21 )
        {
          ThemeRect = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xABu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, -2147024882, 0x3CDu, 0LL);
          goto LABEL_30;
        }
        *(_DWORD *)(v21 + 8) = 1;
        *(_QWORD *)v21 = &CBitmapSource::`vftable';
        *(_QWORD *)(v21 + 16) = 0LL;
        *(_QWORD *)(v21 + 96) = 0LL;
        *(_DWORD *)(v21 + 80) = 0x80000000;
        *(_DWORD *)(v21 + 88) = 0x80000000;
        *(_DWORD *)(v21 + 84) = 0x80000000;
        *(_DWORD *)(v21 + 92) = 0x80000000;
        v23 = *((_QWORD *)AtlasImageFromTheme + 2);
        *(_QWORD *)(v22 + 16) = v23;
        if ( v23 )
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
        *(struct tagRECT *)(v22 + 80) = rc;
        v24 = *(_DWORD *)(v22 + 88) - *(_DWORD *)(v22 + 80);
        if ( v24 < 0 )
          v24 = 0;
        *(_DWORD *)(v22 + 24) = v24;
        v25 = *(_DWORD *)(v22 + 92) - *(_DWORD *)(v22 + 84);
        if ( v25 < 0 )
          v25 = 0;
        v3 = a1;
        ++v18;
        *(_DWORD *)(v22 + 28) = v25;
        v19 += v17;
        *v13++ = v22;
        if ( v18 >= 4 )
          break;
        top = pRect.top;
      }
      ++v7;
      v5 = v31;
      v8 = v33 + 320;
      v2 = v32;
      ++v6;
      v33 += 320LL;
      if ( v7 < 4 )
        continue;
      v1 = v29;
      goto LABEL_24;
    }
    break;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, ThemeRect, 0x3B2u, 0LL);
LABEL_30:
  v27 = ThemeRect;
  v12 = ThemeRect;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, ThemeRect, 0x3E9u, 0LL);
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x286u, 0LL);
  return v27;
}
