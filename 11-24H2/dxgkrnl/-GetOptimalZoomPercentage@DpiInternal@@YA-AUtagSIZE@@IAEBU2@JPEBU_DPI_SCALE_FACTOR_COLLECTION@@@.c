/*
 * XREFs of ?GetOptimalZoomPercentage@DpiInternal@@YA?AUtagSIZE@@IAEBU2@JPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x140055A08
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1400554C8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall DpiInternal::GetOptimalZoomPercentage(
        DpiInternal *this,
        _DWORD *a2,
        const struct tagSIZE *a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v5; // r8
  bool v6; // zf
  int v7; // eax
  __int64 v9; // [rsp+0h] [rbp-18h]

  v4 = (int)a3;
  if ( (_DWORD)this == 0xFFFF )
  {
    v5 = (unsigned int)(*(_DWORD *)(a4 + 8) - 1);
    if ( *(_DWORD *)(a4 + 8) != 1 )
    {
      do
      {
        if ( (unsigned int)(100 * v4) / *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * v5) >= 0x2D0 )
          break;
        v6 = (_DWORD)v5 == 1;
        v5 = (unsigned int)(v5 - 1);
      }
      while ( !v6 );
    }
    v7 = 100;
    if ( (_DWORD)v5 )
      v7 = *(_DWORD *)(*(_QWORD *)(a4 + 24) + 4LL * (unsigned int)(v5 - 1)) + 1;
    LODWORD(v9) = v7;
    HIDWORD(v9) = v7;
  }
  else
  {
    LODWORD(v9) = 100 * *a2 * (int)this / 26880;
    HIDWORD(v9) = 100 * a2[1] * (int)this / 26880;
  }
  return (struct tagSIZE)v9;
}
