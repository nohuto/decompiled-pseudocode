/*
 * XREFs of MiProbeAndLockPages @ 0x140415B10
 * Callers:
 *     MmProbeAndLockPagesPrivate @ 0x140415AEC (MmProbeAndLockPagesPrivate.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(__int64 a1, char a2, int a3)
{
  NTSTATUS v6; // eax
  int v7; // eax
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  _BYTE v13[88]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+98h] [rbp-60h]
  __int64 v15; // [rsp+B0h] [rbp-48h]
  __int64 v16; // [rsp+B8h] [rbp-40h]
  PVOID P; // [rsp+C0h] [rbp-38h]

  memset_0(v13, 0, 0xB0uLL);
  v6 = MiProbeAndLockPrepare(
         (__int64)v13,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(unsigned int *)(a1 + 40),
         a2,
         a3,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
  v7 = MiProbeAndLockPacket((__int64)v13);
  v8 = MiProbeAndLockComplete((__int64)v13, v7);
  if ( P )
  {
    v9 = *((unsigned int *)P + 13);
    v10 = v15;
    v11 = P;
    v12 = v15 + (v9 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32));
    *((_DWORD *)P + 13) = v15 + v9;
    v11[34] = BYTE4(v12);
    if ( v16 != v10 )
      MiReturnFullProcessCommitment(v14);
    MiUnlockAndDereferenceVad(v11);
  }
  if ( v8 < 0 )
    RtlRaiseStatus(v8);
}
