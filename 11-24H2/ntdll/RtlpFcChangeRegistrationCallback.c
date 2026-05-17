/*
 * XREFs of RtlpFcChangeRegistrationCallback @ 0x180107430
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFcChangeRegistrationCallback(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 32), (volatile signed __int32 **)a2, a3);
  (*(void (__fastcall **)(_QWORD))(a2 + 16))(*(_QWORD *)(a2 + 24));
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
}
