/*
 * XREFs of ?grow@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z @ 0x1401501EC
 * Callers:
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1401501A8 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1400030B0 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<Rtl::_KStringAtom *,1>::grow(unsigned int *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = *a1;
  if ( v2 >= a2 )
    return 1;
  v5 = 4LL;
  if ( a2 >= 4 )
    v5 = a2;
  v6 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  if ( v5 >= v6 )
    v6 = v5;
  return Rtl::KArray<Rtl::_KStringAtom *,1>::reserve(a1, v6);
}
