/*
 * XREFs of IopProbeAndLockPages_0 @ 0x14042AF44
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MmUpdateMdlTracker @ 0x14042B0A4 (MmUpdateMdlTracker.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  NTSTATUS v9; // eax
  int v10; // eax
  NTSTATUS v11; // ebx
  __int64 result; // rax
  __int64 v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE v17[88]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+98h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-48h]
  __int64 v20; // [rsp+B8h] [rbp-40h]
  PVOID P; // [rsp+C0h] [rbp-38h]

  memset_0(v17, 0, 0xB0uLL);
  v9 = MiProbeAndLockPrepare(
         (__int64)v17,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(unsigned int *)(a1 + 40),
         a2 != 0,
         a3 != 0,
         1);
  if ( v9 < 0 )
    RtlRaiseStatus(v9);
  v10 = MiProbeAndLockPacket((__int64)v17);
  v11 = MiProbeAndLockComplete((__int64)v17, v10);
  if ( P )
  {
    v13 = v19;
    v14 = P;
    v15 = v20;
    v16 = v19 + (*((unsigned int *)P + 13) | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32));
    *((_DWORD *)P + 13) += v19;
    v14[34] = BYTE4(v16);
    if ( v15 != v13 )
      MiReturnFullProcessCommitment(v18);
    MiUnlockAndDereferenceVad(v14);
  }
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
