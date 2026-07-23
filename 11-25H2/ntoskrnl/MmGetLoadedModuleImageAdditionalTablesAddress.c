/*
 * XREFs of MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403E09E0
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x140410330 (MiUpdateDriverLoadInProgress.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x14059864C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14059D904 (IopMarkPagesForLoadedDriverInformation.c)
 *     MmMarkImageForHiberPhase @ 0x140B52FFC (MmMarkImageForHiberPhase.c)
 *     MiMarkHotPatchForHiberPhase @ 0x140B532A0 (MiMarkHotPatchForHiberPhase.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B53300 (MiMarkHotPatchesForHiberPhase.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MmGetLoadedModuleImageAdditionalTablesAddress(__int64 a1, int *a2)
{
  unsigned __int64 v2; // r9
  void *v3; // rt1
  int v4; // r10d
  char *v5; // r8
  int v6; // r11d
  __int64 v7; // rbx
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  __int64 v11; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-30h]
  unsigned __int64 v16; // [rsp+8h] [rbp-28h]
  unsigned __int64 v17; // [rsp+10h] [rbp-20h]
  unsigned __int64 v18; // [rsp+18h] [rbp-18h]
  __int64 v19; // [rsp+20h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(void **)&KeNumberProcessorsGroup0[9];
  if ( (void *)v2 == v3 || (PVOID)v2 == PsHalImageBase )
    v4 = dword_140E3726C;
  else
    v4 = dword_140E3726C + dword_140E37270;
  *a2 = v4;
  if ( !v4 )
    return 0LL;
  v5 = (char *)(v2 + *(unsigned int *)(a1 + 64));
  v6 = 4;
  v16 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 4LL;
  while ( 1 )
  {
    v8 = *(&v15 + v7--);
    --v6;
    v9 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v11 = *(_QWORD *)v8;
      if ( (v9 & 1) == 0 )
        return (unsigned __int64)v5;
      if ( ((v9 & 0x42) == 0 || (v9 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v14 = *(_QWORD *)(KernelWaitTime + 8 * ((v8 >> 3) & 0x1FF));
            if ( (v14 & 0x20) != 0 )
              LOBYTE(v11) = v9 | 0x20;
            LOBYTE(v9) = v11 | 0x42;
            if ( (v14 & 0x42) == 0 )
              LOBYTE(v9) = v11;
          }
        }
      }
    }
    if ( (v9 & 1) == 0 )
      return (unsigned __int64)v5;
    if ( (v9 & 0x80u) != 0LL )
      break;
    if ( v7 == 1 )
      return (unsigned __int64)v5;
  }
  if ( v6 )
    return (unsigned __int64)(v5 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  return (unsigned __int64)v5;
}
