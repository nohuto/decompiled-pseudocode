/*
 * XREFs of ??0hresult_error@winrt@@QEAA@AEBU01@@Z @ 0x1800A6F24
 * Callers:
 *     ??0hresult_not_implemented@winrt@@QEAA@AEBU01@@Z @ 0x1800A6E3C (--0hresult_not_implemented@winrt@@QEAA@AEBU01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

winrt::hresult_error *__fastcall winrt::hresult_error::hresult_error(
        winrt::hresult_error *this,
        const struct winrt::hresult_error *a2)
{
  __int64 v3; // rcx

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = -1430532899;
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  v3 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
