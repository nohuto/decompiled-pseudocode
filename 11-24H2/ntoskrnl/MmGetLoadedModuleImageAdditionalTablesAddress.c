/*
 * XREFs of MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403EA010
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x14042C688 (MiUpdateDriverLoadInProgress.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x14059BD5C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x1405A10E4 (IopMarkPagesForLoadedDriverInformation.c)
 *     MmMarkImageForHiberPhase @ 0x140B6312C (MmMarkImageForHiberPhase.c)
 *     MiMarkHotPatchForHiberPhase @ 0x140B633F0 (MiMarkHotPatchForHiberPhase.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B63450 (MiMarkHotPatchesForHiberPhase.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MmGetLoadedModuleImageAdditionalTablesAddress(__int64 a1, int *a2)
{
  unsigned __int64 v2; // r9
  int v3; // r10d
  unsigned __int64 v4; // r8
  int v5; // r11d
  __int64 v6; // rbx
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-30h]
  unsigned __int64 v15; // [rsp+8h] [rbp-28h]
  unsigned __int64 v16; // [rsp+10h] [rbp-20h]
  unsigned __int64 v17; // [rsp+18h] [rbp-18h]
  __int64 v18; // [rsp+20h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 == PsNtosImageBase || v2 == PsHalImageBase )
    v3 = dword_140E374AC;
  else
    v3 = dword_140E374AC + dword_140E374B0;
  *a2 = v3;
  if ( !v3 )
    return 0LL;
  v4 = v2 + *(unsigned int *)(a1 + 64);
  v5 = 4;
  v15 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 4LL;
  do
  {
    v7 = *(&v14 + v6--);
    --v5;
    v8 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v9 = *(_QWORD *)v7;
      if ( (v8 & 1) == 0 )
        return v4;
      if ( ((v8 & 0x42) == 0 || (v8 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v13 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v13 & 0x20) != 0 )
              LOBYTE(v9) = v8 | 0x20;
            LOBYTE(v8) = v9 | 0x42;
            if ( (v13 & 0x42) == 0 )
              LOBYTE(v8) = v9;
          }
        }
      }
    }
    if ( (v8 & 1) == 0 )
      break;
    if ( (v8 & 0x80u) != 0LL )
    {
      if ( v5 )
        return (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      return v4;
    }
  }
  while ( v6 != 1 );
  return v4;
}
