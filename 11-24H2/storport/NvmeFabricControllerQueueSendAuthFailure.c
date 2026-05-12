/*
 * XREFs of NvmeFabricControllerQueueSendAuthFailure @ 0x1400F8248
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400F5F78 (NvmeFabricControllerQueueAuthenticate.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400F794C (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400F7DF8 (NvmeFabricControllerQueueReceiveAuthResult1.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F3918 (NvmeControllerQueueIncrementProcessingCount.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

int __fastcall NvmeFabricControllerQueueSendAuthFailure(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r15
  unsigned int v8; // r8d
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbx
  char v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // eax
  char v17; // dl
  __int16 v18; // cx
  int result; // eax

  v4 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(a2 + 2) == 40 && (v8 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = *(unsigned int *)(a2 + 4LL * v9 + 120);
      if ( (unsigned int)v10 >= 0x80 && (unsigned int)v10 < *(_DWORD *)(a2 + 16) )
      {
        v11 = a2 + v10;
        if ( *(_DWORD *)(a2 + v10) == 67 )
          break;
      }
      if ( ++v9 >= v8 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v11 = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 96);
  memset_0((void *)(v12 + 1577), 0, 0xFFFuLL);
  *(_WORD *)(v12 + 1576) = -4096;
  *(_WORD *)(v12 + 1580) = **(_WORD **)(a1 + 96);
  *(_BYTE *)(v12 + 1582) = 1;
  *(_BYTE *)(v12 + 1583) = a4;
  memset_0((void *)(v11 + 16), 0, 0x40uLL);
  *(_BYTE *)(v11 + 16) = 127;
  *(_DWORD *)(v11 + 60) = 8;
  *(_BYTE *)(v11 + 20) = 5;
  *(_WORD *)(v11 + 57) = 257;
  *(_BYTE *)(v11 + 59) = -23;
  v15 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 8;
  *(_QWORD *)(a2 + 64) = v15 + 1576;
  *(_DWORD *)(a2 + 24) = 128;
  *(_BYTE *)(v11 + 80) = 2;
  *(_WORD *)(v11 + 82) = 2;
  *(_WORD *)(v11 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueIncrementProcessingCount(a1);
  v16 = NvmeAdapterProcessControllerQueueRequestSync(a1, a2, v13, v14, 1, 0LL, 0LL, 0);
  v17 = v16;
  if ( v16 < 0 )
    return StorEtwNvmeControllerEvent(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0);
  if ( *(_BYTE *)(a2 + 3) != 1 )
    return StorEtwNvmeControllerEvent(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0);
  v18 = *(_WORD *)(v11 + 86);
  if ( (v18 & 0xE00) != 0 )
    return StorEtwNvmeControllerEvent(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0);
  result = 510;
  if ( (v18 & 0x1FE) != 0 )
    return StorEtwNvmeControllerEvent(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0,
             (void *)&word_140150F48,
             0);
  return result;
}
