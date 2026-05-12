/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1400220F0
 * Callers:
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpTelemetryConstructErrorEntry @ 0x140022400 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x140022A14 (StorpTelemetrySendUnitUniqueErrorData.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  __int128 v6; // xmm2
  int v7; // eax
  __int64 v8; // xmm4_8
  __int128 v9; // xmm3
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // edx
  char v13; // cl
  int v14; // eax
  char v15; // dl
  unsigned __int8 v16; // r8
  int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 i; // dl
  __int64 v23; // r8
  _OWORD *v24; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-80h] BYREF
  __int128 v30; // [rsp+50h] [rbp-68h]
  __int128 v31; // [rsp+60h] [rbp-58h]
  __int128 PerformanceFrequency; // [rsp+70h] [rbp-48h] BYREF
  __int128 v33; // [rsp+80h] [rbp-38h]
  __int64 v34; // [rsp+90h] [rbp-28h]

  PerformanceFrequency = 0LL;
  v34 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v33 = 0LL;
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, (union _LARGE_INTEGER)&PerformanceFrequency);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2472), &LockHandle);
  v6 = *(_OWORD *)(a1 + 2496);
  v7 = *(_DWORD *)(a1 + 2480);
  v28 = *(_QWORD *)(a1 + 2528);
  v8 = v28;
  v9 = *(_OWORD *)(a1 + 2512);
  v10 = v33;
  *(_OWORD *)(a1 + 2496) = PerformanceFrequency;
  v11 = v34;
  *(_OWORD *)(a1 + 2512) = v10;
  *(_QWORD *)(a1 + 2528) = v11;
  v30 = v6;
  v31 = v9;
  if ( v7 != -1 )
    *(_DWORD *)(a1 + 2480) = v7 + 1;
  if ( a4 )
  {
    if ( *(_BYTE *)(a4 + 2) == 40 )
      v12 = *(_DWORD *)(a4 + 20);
    else
      v12 = *(unsigned __int8 *)(a4 + 2);
    if ( v12 )
    {
      v13 = BYTE5(PerformanceFrequency);
      goto LABEL_11;
    }
  }
  else
  {
    v12 = 0;
  }
  v13 = BYTE5(PerformanceFrequency);
  if ( ((BYTE5(PerformanceFrequency) - 8) & 0x5F) != 0 )
  {
LABEL_11:
    if ( v12 || ((v13 - 10) & 0x5F) != 0 )
      goto LABEL_13;
  }
  v14 = *(_DWORD *)(a1 + 2484);
  if ( v14 != -1 )
    *(_DWORD *)(a1 + 2484) = v14 + 1;
LABEL_13:
  v15 = BYTE3(PerformanceFrequency);
  v16 = BYTE4(PerformanceFrequency);
  if ( BYTE3(PerformanceFrequency) == 93 )
  {
    switch ( BYTE4(PerformanceFrequency) )
    {
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x32:
      case 0x42:
      case 0x43:
        v26 = *(_DWORD *)(a1 + 2488);
        if ( v26 != -1 )
          *(_DWORD *)(a1 + 2488) = v26 + 1;
        break;
      default:
        break;
    }
  }
  if ( BYTE2(PerformanceFrequency) == 3 )
  {
    if ( v16 > 1u || v15 != 50 )
      goto LABEL_16;
LABEL_73:
    v27 = *(_DWORD *)(a1 + 2492);
    if ( v27 != -1 )
      *(_DWORD *)(a1 + 2492) = v27 + 1;
    goto LABEL_16;
  }
  if ( BYTE2(PerformanceFrequency) != 4 )
    goto LABEL_16;
  if ( v15 != 3 )
  {
    switch ( v15 )
    {
      case 9:
        if ( v16 > 1u )
          goto LABEL_16;
        break;
      case 21:
        if ( v16 != 1 )
          goto LABEL_16;
        break;
      case 25:
        if ( v16 > 3u )
          goto LABEL_16;
        break;
      case 50:
        if ( v16 > 1u )
          goto LABEL_16;
        break;
      case 62:
        if ( (unsigned __int8)(v16 - 3) > 1u )
          goto LABEL_16;
        break;
      default:
        if ( (unsigned __int8)(v15 - 65) <= 1u )
          goto LABEL_73;
        if ( v15 == 68 )
        {
          if ( v16 )
            goto LABEL_16;
        }
        else if ( v15 != 76 && (v15 != 85 || v16) )
        {
          goto LABEL_16;
        }
        break;
    }
    goto LABEL_73;
  }
  if ( !v16 )
    goto LABEL_73;
LABEL_16:
  v17 = *(_DWORD *)(a1 + 2480);
  if ( ((v17 + 1) & 0xFFFFFFFD) != 0 )
  {
    v18 = v17 - 1;
    if ( (unsigned int)(v17 - 1) <= 0xA )
    {
      v20 = (unsigned int)(v17 - 2);
    }
    else
    {
      v19 = rand();
      v6 = v30;
      v9 = v31;
      v8 = v28;
      v20 = v19 % v18;
    }
    if ( (unsigned int)v20 < 0xA )
    {
      v21 = 5 * v20;
      *(_OWORD *)(a1 + 8 * v21 + 2536) = v6;
      *(_OWORD *)(a1 + 8 * v21 + 2552) = v9;
      *(_QWORD *)(a1 + 8 * v21 + 2568) = v8;
    }
  }
  for ( i = 0; i < 0xAu; ++i )
  {
    v23 = a1 + 40LL * i;
    v24 = (_OWORD *)(v23 + 2936);
    if ( *(_WORD *)(a1 + 2496) == *(_WORD *)(v23 + 2936)
      && *(_BYTE *)(a1 + 2498) == *(_BYTE *)(v23 + 2938)
      && *(_BYTE *)(a1 + 2499) == *(_BYTE *)(v23 + 2939)
      && *(_BYTE *)(a1 + 2500) == *(_BYTE *)(v23 + 2940) )
    {
      ++*(_DWORD *)(v23 + 2968);
      break;
    }
    if ( !*(_BYTE *)(v23 + 2936)
      && !*(_BYTE *)(v23 + 2937)
      && !*(_BYTE *)(v23 + 2938)
      && !*(_BYTE *)(v23 + 2939)
      && !*(_BYTE *)(v23 + 2940) )
    {
      *v24 = *(_OWORD *)(a1 + 2496);
      *(_OWORD *)(v23 + 2952) = *(_OWORD *)(a1 + 2512);
      *(_QWORD *)(v23 + 2968) = *(_QWORD *)(a1 + 2528);
      *(_DWORD *)(v23 + 2968) = 1;
      if ( *(_DWORD *)(a1 + 3432) != 15 || ((*(_BYTE *)v24 - 6) & 0xFD) != 0 )
        StorpTelemetrySendUnitUniqueErrorData(a1, v23 + 2936);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
