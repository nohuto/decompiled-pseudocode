/*
 * XREFs of ?Create@XPlex@XWinRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18008AC70
 * Callers:
 *     ?NewNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAJAEBW4WindowPosition@ContentManagement@@IIPEAPEAVCNode@12@@Z @ 0x18009AFF4 (-NewNode@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18003C5AC (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

struct XWinRT::XPlex *__fastcall XWinRT::XPlex::Create(
        struct XWinRT::XPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  struct XWinRT::XPlex *result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( (int)ULongLongMult(a2, a3, &v5) < 0 )
    return 0LL;
  if ( v5 + 8 < v5 )
    return 0LL;
  result = (struct XWinRT::XPlex *)malloc(v5 + 8);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = *a1;
  *a1 = result;
  return result;
}
