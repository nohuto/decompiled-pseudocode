/*
 * XREFs of ?CreateHolographicManager@@YAJPEAVCComposition@@PEAPEAUIHolographicManager@@@Z @ 0x1800FCED4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180235098 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CreateHolographicManager(struct CComposition *a1, struct IHolographicManager **a2)
{
  __int64 result; // rax
  struct CHolographicManager *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = CHolographicManager::Create(a1, &v4);
  *a2 = v4;
  return result;
}
