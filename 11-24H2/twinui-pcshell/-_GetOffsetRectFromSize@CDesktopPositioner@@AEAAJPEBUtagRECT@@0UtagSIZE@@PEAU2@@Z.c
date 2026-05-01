/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x18006B9CC
 * Callers:
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801EF8FC (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18051538C (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180515818 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18006C01C (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802CBC50 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  unsigned int v5; // esi
  unsigned __int32 v8; // r14d
  int WorkAreaFromRect; // ebx
  int v10; // eax
  LONG cx; // r13d
  int v12; // ebx
  LONG cy; // eax
  bool v14; // cc
  int SystemMetrics; // edi
  int v16; // edi
  struct tagRECT *v17; // rcx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  LONG left; // r10d
  __int64 v20; // r9
  int v21; // ecx
  unsigned int v22; // edx
  LONG v23; // r11d
  LONG v24; // ecx
  __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-60h]
  LONG v29; // [rsp+28h] [rbp-58h]
  struct tagRECT v31; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v32; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v33; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v34; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = 0;
  v8 = 1;
  *a5 = 0LL;
  v33 = 0LL;
  if ( !a3 )
    v8 = _InterlockedIncrement(&dword_1808CBFB0);
  v32 = 0LL;
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v32);
  if ( WorkAreaFromRect < 0 )
  {
    v26 = 1368LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    return (unsigned int)WorkAreaFromRect;
  }
  v31 = 0LL;
  v10 = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v31);
  WorkAreaFromRect = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F2,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v10);
    v26 = 1371LL;
    goto LABEL_21;
  }
  cx = a4.cx;
  LODWORD(v27) = v31.right - v31.left;
  HIDWORD(v27) = v31.bottom - v31.top;
  v12 = v31.right - v31.left;
  cy = a4.cy;
  v14 = a4.cx <= v31.right - v31.left;
  *(_QWORD *)&v31.left = v27;
  if ( !v14 )
    cx = v27;
  if ( a4.cy > v31.top )
    cy = v31.top;
  v29 = cy;
  SystemMetrics = GetSystemMetrics(32);
  v16 = GetSystemMetrics(30) + SystemMetrics;
  if ( a2 )
  {
    v17 = &v33;
    v33 = *a2;
  }
  else
  {
    v17 = &v34;
    v34 = 0LL;
  }
  ScaleFactorForRect = GetScaleFactorForRect(v17);
  left = v32.left;
  v20 = HIDWORD(*(_QWORD *)&v32.left);
  v21 = (int)(float)((float)(32 * ScaleFactorForRect) / 100.0);
  if ( a3 )
  {
    if ( cx + a3->left + v16 <= v32.right )
      left = a3->left;
    if ( v29 + a3->top + v21 <= v32.bottom )
      LODWORD(v20) = a3->top;
  }
  if ( (v12 - cx) / v16 == -1 )
    v22 = 0;
  else
    v22 = v8 % ((v12 - cx) / v16 + 1);
  v23 = v16 * v22 + left;
  if ( (v31.top - v29) / v21 != -1 )
    v5 = v8 % ((v31.top - v29) / v21 + 1);
  a5->left = v23;
  v24 = v20 + v5 * v21;
  a5->top = v24;
  a5->right = v23 + cx;
  a5->bottom = v24 + v29;
  return 0LL;
}
