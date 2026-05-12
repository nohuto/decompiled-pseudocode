/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x14001D620
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall StorUpdateCrashDumpPowerReady(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // r14
  unsigned __int8 v4; // si
  char v5; // bp
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  int *v12; // rcx
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // rcx
  __int64 result; // rax
  int v17; // eax

  v1 = *(_QWORD *)(a1 + 5016);
  v3 = 1;
  v4 = 1;
  v5 = 1;
  if ( *(char *)(a1 + 108) < 0 )
    goto LABEL_7;
  if ( *(_DWORD *)(a1 + 348) == 4 && !*(_DWORD *)(a1 + 100) )
  {
    v17 = *(_DWORD *)(a1 + 392);
    if ( v17 == 5 || v17 == 17 )
      goto LABEL_7;
    if ( (*(_BYTE *)(a1 + 107) & 0x50) == 0x50 )
    {
      v3 = 0;
      goto LABEL_8;
    }
  }
  v6 = *(_QWORD *)(a1 + 4960);
  if ( !v6 )
    goto LABEL_14;
  v7 = *(int **)(v6 + 8);
  v8 = *v7;
  if ( *v7 == 1 )
  {
    v9 = v7[2];
    v10 = v7 + 4;
    if ( !v9 )
      v10 = 0LL;
  }
  else
  {
    if ( v8 == 2 )
    {
      if ( !v7[2] )
        goto LABEL_7;
    }
    else if ( v8 != 3 || !v7[2] )
    {
      goto LABEL_7;
    }
    v10 = v7 + 6;
  }
  if ( !v10 )
  {
LABEL_7:
    v3 = 0;
    goto LABEL_8;
  }
  if ( *v10 < 2u )
  {
    if ( *v10 == 1 && (*(_BYTE *)(a1 + 107) & 0x40) != 0 && *(_DWORD *)(v6 + 16) )
    {
      v3 = 0;
      goto LABEL_8;
    }
  }
  else if ( *(_DWORD *)(v6 + 16) > v10[9] )
  {
    v3 = 0;
    goto LABEL_8;
  }
LABEL_14:
  if ( !v1
    || (*(_BYTE *)(v1 + 506) & 4) != 0
    || *(_DWORD *)(v1 + 548) == 4 && !*(_DWORD *)(v1 + 1044) && (*(_BYTE *)(v1 + 505) & 0x44) == 0x44 )
  {
    v4 = 0;
    goto LABEL_8;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v1) )
  {
    v11 = *(_QWORD *)(v1 + 1872);
    v12 = *(int **)(v11 + 8);
    v13 = *v12;
    if ( *v12 == 1 )
    {
      v14 = v12[2];
      v15 = v12 + 4;
      if ( !v14 )
        v15 = 0LL;
    }
    else
    {
      if ( v13 == 2 )
      {
        if ( !v12[2] )
          goto LABEL_21;
      }
      else if ( v13 != 3 || !v12[2] )
      {
        goto LABEL_21;
      }
      v15 = v12 + 6;
    }
    if ( v15 )
    {
      if ( *v15 >= 2u )
      {
        if ( *(_DWORD *)(v11 + 16) > v15[9] )
          v4 = 0;
      }
      else if ( *v15 == 1 && (*(_BYTE *)(v1 + 505) & 0x40) != 0 && *(_DWORD *)(v11 + 16) )
      {
        goto LABEL_21;
      }
LABEL_28:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v1 + 1864));
      if ( v4 )
        goto LABEL_29;
LABEL_8:
      v5 = 0;
      goto LABEL_29;
    }
LABEL_21:
    v4 = 0;
    goto LABEL_28;
  }
LABEL_29:
  result = v4;
  *(_BYTE *)(a1 + 4893) = v3;
  if ( v1 )
  {
    *(_BYTE *)(v1 + 1862) = v4;
    *(_BYTE *)(v1 + 1863) = v5;
  }
  return result;
}
