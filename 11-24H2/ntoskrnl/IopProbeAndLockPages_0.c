/*
 * XREFs of IopProbeAndLockPages_0 @ 0x140438384
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x140282248 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x140282460 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140282730 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MmUpdateMdlTracker @ 0x1404384E4 (MmUpdateMdlTracker.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18[14]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-48h]
  __int64 v20; // [rsp+B8h] [rbp-40h]
  PVOID P; // [rsp+C0h] [rbp-38h]

  memset_0(v18, 0, 0xB0uLL);
  v9 = MiProbeAndLockPrepare(
         (__int64)v18,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(unsigned int *)(a1 + 40),
         a2 != 0,
         a3 != 0,
         1);
  if ( v9 < 0 )
    RtlRaiseStatus(v9);
  v10 = MiProbeAndLockPacket((__int64)v18);
  v11 = MiProbeAndLockComplete(v18, v10);
  if ( P )
  {
    v13 = v19;
    v14 = P;
    v15 = v20;
    v16 = v19 + (*((unsigned int *)P + 13) | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32));
    *((_DWORD *)P + 13) += v19;
    v14[34] = BYTE4(v16);
    v17 = v15 - v13;
    if ( v17 )
      MiReturnFullProcessCommitment(v18[11], v17);
    MiUnlockAndDereferenceVad(v14);
  }
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
