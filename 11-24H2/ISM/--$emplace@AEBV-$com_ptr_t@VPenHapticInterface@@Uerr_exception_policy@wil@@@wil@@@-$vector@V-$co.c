/*
 * XREFs of ??$emplace@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180188028
 * Callers:
 *     ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018835C (-AttachInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 * Callees:
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010B360 (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAAEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@AEBV23@@Z @ 0x180187DA0 (--$_Emplace_back_with_unused_capacity@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180187DCC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801881B0 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801882F0 (--4-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::emplace<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> const &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
  {
    *a2 = std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> const &>(
            a1,
            a3,
            a4);
  }
  else
  {
    if ( (_QWORD *)a3 == v4 )
    {
      std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::_Emplace_back_with_unused_capacity<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> const &>(
        (__int64)a1,
        a4);
    }
    else
    {
      wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
        v11,
        a4);
      v8 = v4 - 1;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      a1[1] += 8LL;
      while ( v8 != (_QWORD *)a3 )
        wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::operator=(--v4, --v8);
      wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::operator=(a3, v11);
      wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(v11);
    }
    *a2 = a3;
  }
  return a2;
}
