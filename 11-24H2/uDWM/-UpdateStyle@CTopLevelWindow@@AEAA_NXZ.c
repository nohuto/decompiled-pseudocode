/*
 * XREFs of ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002B8E0
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180029060 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 * Callees:
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18002BA00 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002BC00 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 */

char __fastcall CTopLevelWindow::UpdateStyle(CTopLevelWindow *this)
{
  char v2; // di
  int CurrentStyle; // eax
  float *v4; // rcx
  char result; // al
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm1_4

  v2 = 0;
  CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((_QWORD *)this + 89), 0LL);
  if ( CurrentStyle != *((_DWORD *)this + 146) )
  {
    *((_DWORD *)this + 146) = CurrentStyle;
    v2 = 1;
  }
  if ( (int)CTopLevelWindow::UpdateColorizationColor(this) < 0 )
    return v2;
  v4 = (float *)*((_QWORD *)this + 72);
  if ( !v4
    || (*(_BYTE *)(*((_QWORD *)this + 89) + 736LL) & 8) == 0
    || !*((_DWORD *)this + 151) && !*((_DWORD *)this + 153) && !*((_DWORD *)this + 152) && !*((_DWORD *)this + 154) )
  {
    return v2;
  }
  v6 = v4[8] * v4[4];
  v7 = v4[8] * v4[5];
  v8 = v4[8] * v4[6];
  if ( 1.0 == *((float *)this + 176)
    && v6 == *((float *)this + 173)
    && v7 == *((float *)this + 174)
    && v8 == *((float *)this + 175) )
  {
    return v2;
  }
  *((float *)this + 173) = v6;
  result = 1;
  *((float *)this + 174) = v7;
  *((float *)this + 175) = v8;
  *((_DWORD *)this + 176) = 1065353216;
  return result;
}
