/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800395C0
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180052AB0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800532CC (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800537F4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 * Callees:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18003A080 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct CBitmapSource **a5)
{
  void *v9; // r13
  HRESULT ThemeRect; // ebx
  LONG top; // ecx
  unsigned int v12; // eax
  unsigned int v13; // esi
  int v14; // edx
  int v15; // r15d
  struct CBitmapSource *AtlasImageFromTheme; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v23; // [rsp+40h] [rbp-88h]
  struct tagRECT rc; // [rsp+58h] [rbp-70h] BYREF
  struct tagRECT pRect; // [rsp+68h] [rbp-60h] BYREF

  v9 = a1;
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, ThemeRect, 0x3B2u, 0LL);
    return (unsigned int)ThemeRect;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(v9, 0LL, iPartId, 0, 3601, 0LL, a4);
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, ThemeRect, 0x3B6u, 0LL);
      return (unsigned int)ThemeRect;
    }
  }
  top = pRect.top;
  v12 = pRect.bottom - pRect.top;
  if ( pRect.bottom - pRect.top < 0 )
    v12 = 0;
  v13 = 0;
  v23 = v12 / a3;
  v14 = v12 / a3;
  v15 = 0;
  while ( 1 )
  {
    rc.left = pRect.left;
    rc.right = pRect.right;
    rc.top = v15 + top;
    rc.bottom = v14 + v15 + top;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(v9);
    v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            104LL);
    v18 = v17;
    if ( !v17 )
      break;
    *(_DWORD *)(v17 + 8) = 1;
    *(_QWORD *)v17 = &CBitmapSource::`vftable';
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_QWORD *)(v17 + 96) = 0LL;
    *(_DWORD *)(v17 + 80) = 0x80000000;
    *(_DWORD *)(v17 + 88) = 0x80000000;
    *(_DWORD *)(v17 + 84) = 0x80000000;
    *(_DWORD *)(v17 + 92) = 0x80000000;
    v19 = *((_QWORD *)AtlasImageFromTheme + 2);
    *(_QWORD *)(v18 + 16) = v19;
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    *(struct tagRECT *)(v18 + 80) = rc;
    v20 = *(_DWORD *)(v18 + 88) - *(_DWORD *)(v18 + 80);
    if ( v20 < 0 )
      v20 = 0;
    *(_DWORD *)(v18 + 24) = v20;
    v21 = *(_DWORD *)(v18 + 92) - *(_DWORD *)(v18 + 84);
    if ( v21 < 0 )
      v21 = 0;
    *(_DWORD *)(v18 + 28) = v21;
    if ( a4 )
      *(struct _MARGINS *)(v18 + 32) = *a4;
    v14 = v23;
    ++v13;
    *a5 = (struct CBitmapSource *)v18;
    v15 += v23;
    ++a5;
    if ( v13 >= a3 )
      return 0LL;
    top = pRect.top;
    v9 = a1;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xABu, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, -2147024882, 0x3CDu, 0LL);
  return 2147942414LL;
}
