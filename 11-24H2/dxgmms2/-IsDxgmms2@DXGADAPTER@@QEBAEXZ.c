/*
 * XREFs of ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14001C068
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14001BF64 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::IsDxgmms2(DXGADAPTER *this)
{
  unsigned __int8 result; // al

  if ( *((int *)this + 684) >= 0x2000 )
    return 1;
  result = 0;
  if ( *((_BYTE *)this + 3036) )
    return 1;
  return result;
}
