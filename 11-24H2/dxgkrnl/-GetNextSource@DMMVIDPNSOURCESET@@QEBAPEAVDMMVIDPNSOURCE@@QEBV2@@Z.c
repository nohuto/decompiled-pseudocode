/*
 * XREFs of ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x140043580
 * Callers:
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140311AA4 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCESET::GetNextSource(
        DMMVIDPNSOURCESET *this,
        const struct DMMVIDPNSOURCE *const a2)
{
  DMMVIDPNSOURCESET *v4; // rdx
  struct DMMVIDPNSOURCE *result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1275;
  }
  v4 = (DMMVIDPNSOURCESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNSOURCESET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDPNSOURCESET *)((char *)this + 24) )
    return 0LL;
  return result;
}
