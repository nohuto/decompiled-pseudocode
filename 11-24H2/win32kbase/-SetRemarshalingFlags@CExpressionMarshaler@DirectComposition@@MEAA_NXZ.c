/*
 * XREFs of ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x140143240
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x14019DA70 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CExpressionMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= ~0x800u;
  v1 = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 41) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 16) && *((_QWORD *)this + 18) )
  {
    return 1;
  }
  return v1;
}
