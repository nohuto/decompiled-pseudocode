/*
 * XREFs of ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802B367C
 * Callers:
 *     ?SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1_N@Z @ 0x1802B3CCC (-SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV-$TMilRect_@HUtagRECT@@UD.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x1801D6188 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CCursorState::PaddedBitmap::Reset(void **this, unsigned int a2, char a3)
{
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 > 0x400 )
    return 2147942487LL;
  if ( a2 > *((_DWORD *)this + 3) )
  {
    v13 = 0LL;
    v7 = HrAlloc(4 * a2 * (unsigned __int64)a2, &v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x140,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\..\\cursor\\CursorState.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
    operator delete(*this);
    *this = v13;
    *((_DWORD *)this + 3) = a2;
  }
  *((_DWORD *)this + 2) = 4 * a2;
  if ( a3 )
  {
    v9 = a2 * a2;
    if ( v9 )
    {
      v10 = v9;
      v11 = *this;
      while ( v10 )
      {
        *v11++ = -16777216;
        --v10;
      }
    }
  }
  else
  {
    memset_0(*this, 0, a2 * 4 * a2);
  }
  return 0LL;
}
