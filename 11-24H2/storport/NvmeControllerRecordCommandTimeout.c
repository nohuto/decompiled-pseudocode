/*
 * XREFs of NvmeControllerRecordCommandTimeout @ 0x140137698
 * Callers:
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

int __fastcall NvmeControllerRecordCommandTimeout(__int64 a1, _OWORD *a2, __int16 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx

  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL) + 8LL)
     + 112LL * *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL) + 4LL);
  *(_QWORD *)v5 = MEMORY[0xFFFFF78000000014];
  *(_WORD *)(v5 + 96) = a3;
  *(_OWORD *)(v5 + 16) = *a2;
  *(_OWORD *)(v5 + 32) = a2[1];
  *(_OWORD *)(v5 + 48) = a2[2];
  *(_OWORD *)(v5 + 64) = a2[3];
  *(_QWORD *)(v5 + 80) = *(_QWORD *)(a4 + 24);
  *(_WORD *)(v5 + 100) = *(_WORD *)(a4 + 52);
  *(_WORD *)(v5 + 102) = *(_WORD *)(a4 + 58);
  *(_BYTE *)(v5 + 104) = *(_BYTE *)(a4 + 60);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(a4 + 64);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a4 + 88);
  *(_WORD *)(v5 + 98) = *(_WORD *)(a4 + 56);
  *(_DWORD *)(v5 + 92) = *(_DWORD *)(a4 + 48);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
  ++*(_BYTE *)(v6 + 4);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
  if ( *(_BYTE *)(v7 + 4) >= *(_BYTE *)(v7 + 5) )
    *(_BYTE *)(v7 + 4) = 1;
  return StorEtwNvmeControllerEvent(
           a1,
           1,
           3,
           (__int64)L"Controller command timeout",
           L"QueueId",
           a3,
           L"NamespaceId",
           *(_DWORD *)(a4 + 88),
           L"CDW0",
           *(_DWORD *)a2,
           L"TransferSizeInBytes",
           *(_DWORD *)(a4 + 48),
           (void *)&word_140150F48,
           0,
           (void *)&word_140150F48,
           0,
           (void *)&word_140150F48,
           0,
           (void *)&word_140150F48,
           0);
}
