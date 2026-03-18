/*
 * XREFs of ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x1801CD550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SynchronizedCommit(CChannel *this, void *a2)
{
  __int64 v2; // rsi
  CChannel *v3; // rbx

  v2 = *((_QWORD *)this + 8);
  v3 = this;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  LODWORD(v3) = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)v3 + 8) + 72LL))(*((_QWORD *)v3 + 8), a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  return (unsigned int)v3;
}
