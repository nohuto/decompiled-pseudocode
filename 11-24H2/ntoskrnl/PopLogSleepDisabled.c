/*
 * XREFs of PopLogSleepDisabled @ 0x14099E748
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x140747D60 (PopUpdateUpgradeInProgress.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x14099FBA0 (PopLogDisabledSleepReason.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x140C69F98 (PopInitPlatformSettings.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PopGetReasonListByReasonCode @ 0x14099FFEC (PopGetReasonListByReasonCode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
    Pool2 = ExAllocatePool2(0x100uLL, a4 + 32, 0x66756263u);
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
      v11 = (_QWORD *)qword_140F0B578;
      if ( *(__int64 **)qword_140F0B578 != &PowerStateDisableReasonListHead )
        __fastfail(3u);
      *v10 = &PowerStateDisableReasonListHead;
      v10[1] = v11;
      *v11 = v10;
      qword_140F0B578 = (__int64)v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
