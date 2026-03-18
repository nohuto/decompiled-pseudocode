/*
 * XREFs of PopLogSleepDisabled @ 0x1409B80F8
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x140749A30 (PopUpdateUpgradeInProgress.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x1409B9550 (PopLogDisabledSleepReason.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x140C67E1C (PopInitPlatformSettings.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PopGetReasonListByReasonCode @ 0x1409B999C (PopGetReasonListByReasonCode.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopLogSleepDisabled(int a1, char a2, const void *a3, size_t a4)
{
  unsigned int v8; // edi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  v8 = 0;
  if ( PopGetReasonListByReasonCode() )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 24) = a1;
      if ( (a2 & 1) != 0 )
        *(_BYTE *)(Pool2 + 16) = 1;
      if ( (a2 & 2) != 0 )
        *(_BYTE *)(Pool2 + 17) = 1;
      if ( (a2 & 4) != 0 )
        *(_BYTE *)(Pool2 + 18) = 1;
      if ( (a2 & 8) != 0 )
        *(_BYTE *)(Pool2 + 19) = 1;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(Pool2 + 22) = 1;
      if ( (a2 & 0x20) != 0 )
        *(_BYTE *)(Pool2 + 20) = 1;
      if ( a4 )
      {
        *(_DWORD *)(Pool2 + 28) = a4;
        memmove((void *)(Pool2 + 32), a3, a4);
      }
      v11 = (_QWORD *)qword_140F0B828;
      if ( *(__int64 **)qword_140F0B828 != &PowerStateDisableReasonListHead )
        __fastfail(3u);
      *v10 = &PowerStateDisableReasonListHead;
      v10[1] = v11;
      *v11 = v10;
      qword_140F0B828 = (__int64)v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
