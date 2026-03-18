/*
 * XREFs of ?vDeleteMoveRegionHelper@METAREGION@@AEAAXXZ @ 0x14033E4C8
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401DB914 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall METAREGION::vDeleteMoveRegionHelper(METAREGION *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    v2 = *((_QWORD *)this + 4);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *((_QWORD *)this + 1) )
  {
    v2 = *((_QWORD *)this + 1);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
