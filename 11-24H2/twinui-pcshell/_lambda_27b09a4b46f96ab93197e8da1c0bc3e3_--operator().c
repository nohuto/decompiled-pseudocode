/*
 * XREFs of _lambda_27b09a4b46f96ab93197e8da1c0bc3e3_::operator() @ 0x1801A63B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::Run @ 0x1801F71F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall lambda_27b09a4b46f96ab93197e8da1c0bc3e3_::operator()(__int64 *a1)
{
  __int64 v1; // r14
  _QWORD *result; // rax
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v6; // rax

  v1 = *a1;
  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 232LL))(a1[1]);
  if ( *result )
  {
    v4 = *((_DWORD *)a1 + 4);
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 136LL);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 232LL))(a1[1]);
    result = (_QWORD *)v5(v1, *v6, v4);
    if ( !*((_DWORD *)a1 + 4) )
      return (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[1] + 224LL))(a1[1], 0LL);
  }
  return result;
}
