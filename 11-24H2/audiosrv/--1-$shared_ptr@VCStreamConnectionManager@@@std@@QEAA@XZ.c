/*
 * XREFs of ??1?$shared_ptr@VCStreamConnectionManager@@@std@@QEAA@XZ @ 0x1800CB8E0
 * Callers:
 *     AudioServerCreateStreamConnection$dtor$0 @ 0x18017088D (AudioServerCreateStreamConnection$dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CStreamConnectionManager>::~shared_ptr<CStreamConnectionManager>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
