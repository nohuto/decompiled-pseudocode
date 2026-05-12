/*
 * XREFs of NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400F794C
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400F5F78 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     DhGetKeyLength @ 0x1400DD608 (DhGetKeyLength.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F3918 (NvmeControllerQueueIncrementProcessingCount.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400F8248 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueReceiveAuthChallenge(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdi
  char v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // eax
  char v13; // r9
  __int16 v14; // ax
  __int64 v15; // rdi
  char v16; // r11
  _BYTE *v17; // r8
  char v18; // dl
  char v19; // cl
  int v20; // ecx
  unsigned __int16 v21; // dx
  __int16 KeyLength; // ax
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // r9
  __int64 v26; // r8

  v2 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(a2 + 2) == 40 && (v5 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(unsigned int *)(a2 + 4LL * v6 + 120);
      if ( (unsigned int)v7 >= 0x80 && (unsigned int)v7 < *(_DWORD *)(a2 + 16) )
      {
        v8 = a2 + v7;
        if ( *(_DWORD *)(a2 + v7) == 67 )
          break;
      }
      if ( ++v6 >= v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v8 = 0LL;
  }
  memset_0((void *)(*(_QWORD *)(a1 + 96) + 1576LL), 0, 0x1000uLL);
  memset_0((void *)(v8 + 16), 0, 0x40uLL);
  *(_BYTE *)(v8 + 16) = 127;
  *(_BYTE *)(v8 + 20) = 6;
  *(_WORD *)(v8 + 57) = 257;
  *(_BYTE *)(v8 + 59) = -23;
  *(_DWORD *)(v8 + 60) = 4096;
  v11 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 4096;
  *(_QWORD *)(a2 + 64) = v11 + 1576;
  *(_DWORD *)(a2 + 24) = 64;
  *(_BYTE *)(v8 + 80) = 2;
  *(_WORD *)(v8 + 82) = 1;
  *(_WORD *)(v8 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueIncrementProcessingCount(a1);
  v12 = NvmeAdapterProcessControllerQueueRequestSync(a1, a2, v9, v10, 1, 0LL, 0LL, 0);
  v13 = v12;
  if ( v12 < 0 || *(_BYTE *)(a2 + 3) != 1 || (v14 = *(_WORD *)(v8 + 86), (v14 & 0xE00) != 0) || (v14 & 0x1FE) != 0 )
  {
    StorEtwNvmeControllerEvent(
      v2,
      1,
      2,
      (__int64)L"Authentication receive - challenge failed",
      L"Status",
      v13,
      L"SrbStatus",
      *(_BYTE *)(a2 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 1,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    return (unsigned int)-1073741823;
  }
  v15 = *(_QWORD *)(a1 + 96);
  v16 = *(_BYTE *)(v15 + 1576);
  v17 = (_BYTE *)(v15 + 1577);
  if ( !v16 && *v17 == 0xF1 )
  {
    StorEtwNvmeControllerEvent(
      v2,
      1,
      2,
      (__int64)L"Authentication receive - failure1 received",
      L"ReasonCode",
      *(_BYTE *)(v15 + 1582),
      L"ReasonExplanation",
      *(_BYTE *)(v15 + 1583),
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
    return (unsigned int)-1073741823;
  }
  v18 = 0;
  switch ( *(_BYTE *)(v15 + 1584) )
  {
    case 1:
      v18 = 32;
      break;
    case 2:
      v18 = 48;
      break;
    case 3:
      v18 = 64;
      break;
  }
  if ( v16 != 1 )
    goto LABEL_40;
  if ( *v17 != 1 )
    goto LABEL_40;
  if ( *(_WORD *)(v15 + 1580) != *(_WORD *)v15 )
    goto LABEL_40;
  if ( !*(_BYTE *)(v15 + 1584) )
    goto LABEL_40;
  if ( !v18 )
    goto LABEL_40;
  v19 = *(_BYTE *)(v15 + 1582);
  if ( !v19 || v19 != v18 )
    goto LABEL_40;
  v20 = *(unsigned __int8 *)(v15 + 1585);
  if ( !(_BYTE)v20 )
  {
    if ( !*(_WORD *)(v15 + 1586) )
      goto LABEL_35;
LABEL_40:
    StorEtwNvmeControllerEvent(
      v2,
      1,
      2,
      (__int64)L"Authentication receive - invalid challenge",
      L"AUTH_TYPE | AUTH_ID",
      *(_BYTE *)(v15 + 1577),
      L"T_ID | ExpectedTransactionId",
      *(_BYTE *)v15,
      L"HL",
      *(_BYTE *)(v15 + 1582),
      L"HashID",
      *(_BYTE *)(v15 + 1584),
      L"DHgID",
      *(_BYTE *)(v15 + 1585),
      L"DHVLEN",
      *(_WORD *)(v15 + 1586),
      L"SEQNUM",
      *(_DWORD *)(v15 + 1588),
      (void *)&word_140150F48,
      0);
    LOBYTE(v25) = 6;
    NvmeFabricControllerQueueSendAuthFailure(a1, a2, v26, v25);
    return (unsigned int)-1073741823;
  }
  if ( (unsigned __int8)(v20 - 1) > 2u )
    goto LABEL_40;
LABEL_35:
  v21 = *(_WORD *)(v15 + 1586);
  if ( (v21 & 3) != 0 )
    goto LABEL_40;
  if ( v21 > 0x400u )
    goto LABEL_40;
  KeyLength = DhGetKeyLength(v20);
  if ( (_WORD)v23 != KeyLength
    || !*(_DWORD *)(v15 + 1588)
    || v23 + (unsigned __int64)*(unsigned __int8 *)(v15 + 1582) + 16 > 0x1000 )
  {
    goto LABEL_40;
  }
  return v24;
}
