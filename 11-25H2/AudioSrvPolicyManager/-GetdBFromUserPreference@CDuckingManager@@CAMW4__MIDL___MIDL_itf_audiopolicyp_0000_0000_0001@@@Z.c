/*
 * XREFs of ?GetdBFromUserPreference@CDuckingManager@@CAMW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@@Z @ 0x1800142C0
 * Callers:
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180030FAC (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CDuckingManager::GetdBFromUserPreference(int a1)
{
  switch ( a1 )
  {
    case 1:
      return FLOAT_N18_0;
    case 0:
      return FLOAT_N96_0;
    case 2:
      return FLOAT_N6_0;
  }
  return 0.0;
}
