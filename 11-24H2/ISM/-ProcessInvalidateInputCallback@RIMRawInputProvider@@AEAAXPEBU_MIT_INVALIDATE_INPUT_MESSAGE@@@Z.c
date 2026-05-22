/*
 * XREFs of ?ProcessInvalidateInputCallback@RIMRawInputProvider@@AEAAXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z @ 0x1800792D0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3eec97e4abfde791949971aa1342b43e__void__MIT_INVALIDATE_INPUT_MESSAGE_const___::_Do_call @ 0x180092920 (std--_Func_impl_no_alloc__lambda_3eec97e4abfde791949971aa1342b43e__void__MIT_INVALIDATE_INPUT_ME.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RIMRawInputProvider::ProcessInvalidateInputCallback(
        RIMRawInputProvider *this,
        const struct _MIT_INVALIDATE_INPUT_MESSAGE *a2)
{
  __int64 v2; // r8
  __int64 *v3; // r9
  __int64 v4; // rax
  __int64 *v5; // rcx

  v2 = *(_QWORD *)a2;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = (__int64 *)*((_QWORD *)this + 5);
    if ( v3 && v3[10] == v2
      || (v3 = (__int64 *)*((_QWORD *)this + 6)) != 0LL && v3[10] == v2
      || (v3 = (__int64 *)*((_QWORD *)this + 7)) != 0LL && v3[10] == v2
      || (v3 = (__int64 *)*((_QWORD *)this + 9)) != 0LL && v3[10] == v2
      || (v3 = (__int64 *)*((_QWORD *)this + 8)) != 0LL && v3[10] == v2
      || (v3 = (__int64 *)*((_QWORD *)this + 10)) != 0LL && v3[10] == v2
      || (v3 = (__int64 *)*((_QWORD *)this + 11)) != 0LL && v3[10] == v2 )
    {
      v4 = *v3;
      v5 = v3;
LABEL_10:
      (*(void (__fastcall **)(__int64 *, _QWORD))(v4 + 56))(v5, *((_QWORD *)a2 + 1));
      return;
    }
    v5 = (__int64 *)*((_QWORD *)this + 15);
    if ( v5 && v5[10] == v2 )
    {
      v4 = *v5;
      goto LABEL_10;
    }
  }
}
