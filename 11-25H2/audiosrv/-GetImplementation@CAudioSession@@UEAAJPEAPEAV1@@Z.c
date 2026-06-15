/*
 * XREFs of ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x18007C7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::GetImplementation(CAudioSession *this, struct CAudioSession **a2)
{
  struct CAudioSession *v2; // rcx

  v2 = (CAudioSession *)((char *)this - 24);
  *a2 = v2;
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
