/*
 * XREFs of ?reset@?$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z @ 0x14004AB94
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall auto_ptr<DMMVIDPNTARGET>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( a2 != v4 && v4 )
    result = (**v4)(v4, 1LL);
  *a1 = a2;
  return result;
}
