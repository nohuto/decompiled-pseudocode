/*
 * XREFs of _lambda_2332646ee2da4bd34a0bd6e9819a3d8e_::operator() @ 0x1802CEE40
 * Callers:
 *     CCLambdaAdapter_int_(__cdecl_)(HDC_____unsigned_short___int_tagRECT___unsigned_int___int64)_6_::Adapt__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___ @ 0x180687630 (CCLambdaAdapter_int_(__cdecl_)(HDC_____unsigned_short___int_tagRECT___unsigned_int___int64)_6_--.c)
 * Callees:
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1802089E8 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1806879BC (-ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z.c)
 *     ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x180687A78 (-ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z.c)
 */

__int64 __fastcall lambda_2332646ee2da4bd34a0bd6e9819a3d8e_::operator()(
        int **a1,
        HDC a2,
        WCHAR *a3,
        int a4,
        struct tagRECT *lprc,
        UINT format)
{
  HGDIOBJ CurrentObject; // rdi
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // rdx
  __int64 v14; // rdi
  unsigned int v15; // ebp
  __int64 WindowDpiAwarenessContext; // rax
  unsigned int DpiForWindow; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  LOGFONTW *v20; // rcx
  LONG v21; // r10d
  HFONT FontIndirectW; // rax
  HGDIOBJ v23; // rbx
  HFONT v25; // [rsp+30h] [rbp-B8h] BYREF
  _DWORD pv[24]; // [rsp+40h] [rbp-A8h] BYREF

  CurrentObject = GetCurrentObject(a2, 6u);
  if ( !CurrentObject )
    return 1LL;
  memset_0(pv, 0, 0x5CuLL);
  if ( GetObjectW(CurrentObject, 92, pv) <= 0 )
    return 1LL;
  v11 = **a1;
  if ( v11 == 1 )
  {
    v12 = DPIToPPIHelpers::ScaleByPPI((unsigned int)*a1[2], *(_QWORD *)a1[3], 1LL);
LABEL_13:
    *a1[1] = v12;
    goto LABEL_14;
  }
  if ( !v11 )
  {
    v13 = *(unsigned int **)a1[4];
    if ( v13 )
    {
      v18 = *v13;
      v19 = (unsigned int)*a1[2];
    }
    else
    {
      v14 = *(_QWORD *)a1[3];
      v15 = *a1[2];
      WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v14);
      if ( (unsigned int)AreDpiAwarenessContextsEqual(WindowDpiAwarenessContext, -4LL) )
        DpiForWindow = GetDpiForWindow(v14);
      else
        DpiForWindow = GetDpiForSystem();
      v18 = DpiForWindow;
      v19 = v15;
    }
    v12 = DPIToPPIHelpers::ScaleBySpecificDPI(v19, v18, 1LL);
    goto LABEL_13;
  }
LABEL_14:
  v20 = (LOGFONTW *)a1[2];
  v21 = *a1[1];
  if ( v21 == v20->lfHeight && v21 == pv[0] )
  {
    DrawTextExW(a2, a3, a4, lprc, format, 0LL);
  }
  else
  {
    v20->lfHeight = v21;
    FontIndirectW = CreateFontIndirectW(v20);
    v25 = FontIndirectW;
    if ( FontIndirectW )
    {
      v23 = SelectObject(a2, FontIndirectW);
      DrawTextExW(a2, a3, a4, lprc, format, 0LL);
      SelectObject(a2, v23);
    }
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)&v25);
  }
  return 1LL;
}
