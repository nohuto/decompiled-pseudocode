/*
 * XREFs of NtTerminateEnclave @ 0x1407F8730
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiTerminateEnclave @ 0x1407F8028 (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  __int64 v2; // r9
  __int64 v6; // rax
  void *v7; // rdi
  NTSTATUS v8; // ebx
  NTSTATUS v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v6 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0LL, &v9, v2);
  v7 = (void *)v6;
  if ( !v6 )
    return v9;
  if ( (*(_DWORD *)(v6 + 48) & 0xC200000) == 0x8200000
    && (PVOID)((*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12) == BaseAddress )
  {
    v8 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v6, Flags);
  }
  else
  {
    v8 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v7);
  return v8;
}
