/*
 * XREFs of ?GetNextSource@DMMVIDEOPRESENTSOURCESET@@QEAAPEAVDMMVIDEOPRESENTSOURCE@@QEBV2@@Z @ 0x14004D1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTSOURCE *__fastcall DMMVIDEOPRESENTSOURCESET::GetNextSource(
        DMMVIDEOPRESENTSOURCESET *this,
        const struct DMMVIDEOPRESENTSOURCE *const a2)
{
  DMMVIDEOPRESENTSOURCESET *v4; // rdx
  struct DMMVIDEOPRESENTSOURCE *result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 183;
  }
  v4 = (DMMVIDEOPRESENTSOURCESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDEOPRESENTSOURCESET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDEOPRESENTSOURCESET *)((char *)this + 24) )
    return 0LL;
  return result;
}
