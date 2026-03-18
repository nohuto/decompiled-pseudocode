/*
 * XREFs of ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x140112FCC
 * Callers:
 *     ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140112F00 (-SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 * Callees:
 *     ??$GetNewTValue@_N@CManipulationMarshaler@DirectComposition@@IEAA_N_N0W4ManipulationMarshalerFlag@01@PEA_N@Z @ 0x14011307C (--$GetNewTValue@_N@CManipulationMarshaler@DirectComposition@@IEAA_N_N0W4ManipulationMarshalerFla.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBoolProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  int v5; // r8d
  int v6; // r8d
  char v7; // cl
  __int64 v8; // r10
  unsigned int v9; // r11d
  char v10; // al
  char New; // al
  __int64 v13; // r10

  v5 = a3 - 4;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return (unsigned int)-1073741811;
      LOBYTE(v6) = a4;
      v7 = 4
         * DirectComposition::CManipulationMarshaler::GetNewTValue<bool>(
             (_DWORD)this,
             (*((_BYTE *)this + 108) & 4) != 0,
             v6,
             a4,
             (__int64)a5);
      v10 = *(_BYTE *)(v8 + 108) & 0xFB;
    }
    else
    {
      v7 = 2
         * DirectComposition::CManipulationMarshaler::GetNewTValue<bool>(
             (_DWORD)this,
             (*((_BYTE *)this + 108) & 2) != 0,
             (unsigned __int8)a4,
             a4,
             (__int64)a5);
      v10 = *(_BYTE *)(v8 + 108) & 0xFD;
    }
    *(_BYTE *)(v8 + 108) = v7 | v10;
  }
  else
  {
    New = DirectComposition::CManipulationMarshaler::GetNewTValue<bool>(
            (_DWORD)this,
            *((_BYTE *)this + 108) & 1,
            (unsigned __int8)a4,
            a4,
            (__int64)a5);
    *(_BYTE *)(v13 + 108) = New | *(_BYTE *)(v13 + 108) & 0xFE;
  }
  return v9;
}
