/*
 * XREFs of NvmeControllerReset @ 0x1400F488C
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 *     NvmeControllerResetWorkItemCallback @ 0x1400F4D80 (NvmeControllerResetWorkItemCallback.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     StorCheckDpcWatchdogTimerExpire @ 0x14008EE70 (StorCheckDpcWatchdogTimerExpire.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     IsNvmeControllerGone @ 0x1400BE914 (IsNvmeControllerGone.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E18E4 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E20B4 (NvmeAdapterEnableFabricController.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F3814 (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x140138030 (NvmeAdapterProcessStorageEventNotification.c)
 */

__int64 __fastcall NvmeControllerReset(__int64 a1, char a2, int a3)
{
  unsigned int v3; // kr00_4
  char v4; // r13
  int v5; // esi
  unsigned int v6; // r12d
  int v7; // edi
  __int64 v8; // rbx
  int v9; // r15d
  bool v10; // zf
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // r13
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-B9h] BYREF
  int *v30; // [rsp+20h] [rbp-99h]
  int v31[4]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-9h]
  __int128 v33[5]; // [rsp+C0h] [rbp+7h] BYREF
  int v34; // [rsp+120h] [rbp+67h] BYREF
  char v35; // [rsp+128h] [rbp+6Fh]
  int v36; // [rsp+130h] [rbp+77h]
  unsigned int v37; // [rsp+138h] [rbp+7Fh]

  v36 = a3;
  v35 = a2;
  v37 = 0;
  v3 = *(_DWORD *)(a1 + 1220);
  v32 = 0LL;
  v34 = 0;
  v31[0] = 0;
  v4 = *(_BYTE *)(a1 + 1728);
  v5 = 0;
  v6 = v3 / 0xA;
  v7 = 0;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = a3;
  v10 = (*(_BYTE *)(a1 + 136) & 2) == 0;
  v35 = v4;
  if ( v10 )
  {
    if ( v4 == 1 )
    {
      NvmeControllerQueryStorMQProperty(a1, 0x14u, 4LL, 0);
      v30 = &v34;
      NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
      LOBYTE(v14) = v34;
    }
    else
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL);
      v13 = *(_QWORD *)(a1 + 920);
      v37 = v12;
      v14 = *(_DWORD *)(v13 + 28);
      v34 = v14;
    }
    v15 = v37;
    if ( (v37 & 1) == 0 || (v14 & 1) != 0 )
      goto LABEL_25;
    v16 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( (v14 & 1) != 0 )
        {
LABEL_19:
          v15 = v37;
          goto LABEL_20;
        }
        if ( IsNvmeControllerGone(a1) )
          break;
        if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
        {
LABEL_23:
          v7 = 4;
          goto LABEL_39;
        }
        StorDelayExecution(0x2710u);
        if ( v4 == 1 )
        {
          v30 = &v34;
          NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
          LOBYTE(v14) = v34;
        }
        else
        {
          v14 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
          v34 = v14;
        }
        if ( ++v16 >= v6 )
          goto LABEL_19;
      }
LABEL_24:
      v7 = 1;
      goto LABEL_39;
    }
LABEL_20:
    if ( (v14 & 1) != 0 || v16 != v6 )
    {
LABEL_25:
      v17 = v15 & 0xFFFFFFFE;
      v37 = v17;
      if ( v4 == 1 )
      {
        NvmeControllerSetStorMQProperty(a1, 20LL, 4LL);
        v30 = &v34;
        v18 = a1 + 920;
        NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
        LOBYTE(v19) = v34;
      }
      else
      {
        v18 = a1 + 920;
        *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) = v17;
        _InterlockedOr(v29, 0);
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
        v34 = v19;
      }
      v20 = 0;
      if ( v6 )
      {
        while ( (v19 & 1) != 0 )
        {
          if ( IsNvmeControllerGone(a1) )
            goto LABEL_24;
          if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
            goto LABEL_23;
          StorDelayExecution(0x2710u);
          if ( v35 == 1 )
          {
            v30 = &v34;
            NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
            LOBYTE(v19) = v34;
          }
          else
          {
            v19 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
            v34 = v19;
          }
          if ( ++v20 >= v6 )
            goto LABEL_36;
        }
      }
      else
      {
LABEL_36:
        if ( (v19 & 1) != 0 && v20 == v6 )
          v7 = 3;
      }
    }
    else
    {
      v7 = 2;
    }
LABEL_39:
    v9 = v36;
    goto LABEL_40;
  }
  v5 = NvmeAdapterDisableFabricController(a1, 0);
  if ( v5 >= 0 )
  {
    v5 = NvmeAdapterEnableFabricController(a1, v31);
    if ( v5 < 0 )
      v7 = 6;
  }
  else
  {
    v7 = 5;
  }
LABEL_40:
  v21 = *(_QWORD *)(a1 + 1288);
  if ( v21 )
  {
    v22 = *(_QWORD *)(v21 + 32);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 16);
      if ( v23 )
      {
        v24 = *(unsigned __int8 *)(v23 + 62);
        if ( v7 )
          ++*(_DWORD *)(v23 + 12);
        else
          ++*(_DWORD *)(v23 + 8);
        v25 = 2 * v24;
        *(_QWORD *)(*(_QWORD *)(v23 + 64) + 8 * v25) = v8;
        *(_DWORD *)(*(_QWORD *)(v23 + 64) + 8 * v25 + 8) = v9;
        *(_DWORD *)(*(_QWORD *)(v23 + 64) + 8 * v25 + 12) = v7;
        if ( ++*(_BYTE *)(v23 + 62) >= *(_BYTE *)(v23 + 63) )
          *(_BYTE *)(v23 + 62) = 1;
      }
    }
  }
  v26 = *(_QWORD *)(a1 + 136);
  if ( (v26 & 2) == 0 )
  {
    if ( v7 )
    {
      switch ( v7 )
      {
        case 1:
          v5 = -1073741810;
          break;
        case 2:
        case 3:
          v5 = -2147483631;
          break;
        case 4:
          v5 = -1073741595;
          break;
        default:
          v5 = -1073741823;
          break;
      }
      goto LABEL_55;
    }
    v5 = 0;
LABEL_62:
    StorEtwNvmeControllerEvent(
      a1,
      v9 != 2,
      4,
      (__int64)L"Controller reset succeeded",
      L"ResetReason",
      v9,
      L"Flags",
      v26,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    *(_QWORD *)&v32 = v32 | 0x200;
    v28 = *(_QWORD *)(a1 + 128);
    v33[0] = v32;
    NvmeAdapterProcessStorageEventNotification(v28, v33, 0LL, 0LL);
    return (unsigned int)v5;
  }
  if ( v5 >= 0 )
    goto LABEL_62;
LABEL_55:
  StorEtwNvmeControllerEvent(
    a1,
    1,
    2,
    (__int64)L"Controller reset failed",
    L"ResetReason",
    v9,
    L"FailureReason",
    v7,
    L"Status",
    v5,
    L"Flags",
    v26,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0);
  return (unsigned int)v5;
}
