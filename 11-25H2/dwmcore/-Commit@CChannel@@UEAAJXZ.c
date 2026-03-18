/*
 * XREFs of ?Commit@CChannel@@UEAAJXZ @ 0x1801E0E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::Commit(CChannel *this)
{
  __int64 v1; // rdi
  CChannel *v2; // rbx

  v1 = *((_QWORD *)this + 8);
  v2 = this;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v2 + 8) + 72LL))(*((_QWORD *)v2 + 8), 0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 80LL))(v1);
  return (unsigned int)v2;
}
