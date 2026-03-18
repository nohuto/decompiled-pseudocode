/*
 * XREFs of ?CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1401DB524
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1401DBA7C (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1401DB358 (--PWin81@@YA_NAEBUtagSIZE@@0@Z.c)
 */

void __fastcall Win81::CalculateMinMaxOverride(Win81 *this, __int64 a2, struct tagSIZE a3, int *a4)
{
  int v4; // r10d
  __int64 i; // r11
  unsigned int j; // r8d
  unsigned int v7; // ecx
  int v8; // r8d
  _DWORD *v9; // r9
  int v10; // [rsp+3Ch] [rbp+14h]
  __int64 v11; // [rsp+40h] [rbp+18h]
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v10 = HIDWORD(a2);
  *(_DWORD *)a3.cx = 0;
  v4 = a2;
  *a4 = 0;
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    if ( dword_140100780[i] == (_DWORD)this )
    {
      *(_DWORD *)a3.cx = -(int)i;
      for ( j = 4; j > (unsigned int)i; j = v8 - 1 )
      {
        v7 = dword_140100780[j];
        LODWORD(v11) = 100 * v4 / v7;
        HIDWORD(v11) = 100 * v10 / v7;
        v12 = v11;
        if ( Win81::operator>=(&v12, dword_1400A8248) )
        {
          *v9 = v8 - i;
          return;
        }
      }
      return;
    }
  }
}
