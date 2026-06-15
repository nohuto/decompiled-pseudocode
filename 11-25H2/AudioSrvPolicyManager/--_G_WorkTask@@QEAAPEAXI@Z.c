/*
 * XREFs of ??_G_WorkTask@@QEAAPEAXI@Z @ 0x18002F864
 * Callers:
 *     ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x18002ECA8 (--1-$unique_ptr@U_WorkTask@@U-$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ.c)
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800311F0 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_WorkTask *__fastcall _WorkTask::`scalar deleting destructor'(_WorkTask *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
