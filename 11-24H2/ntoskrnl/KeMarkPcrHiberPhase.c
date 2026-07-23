/*
 * XREFs of KeMarkPcrHiberPhase @ 0x140B57410
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

void __fastcall KeMarkPcrHiberPhase(size_t *Address)
{
  size_t v1; // rdi
  char *v2; // r15
  ULONG_PTR v3; // r9
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rbx
  ULONG_PTR v7; // r14
  void *v8; // rbx
  _QWORD **v9; // rsi
  __int64 v10; // rbp
  _QWORD *i; // rbx
  void *v12; // r8
  __int64 v13; // rbp
  _QWORD **v14; // rsi
  _QWORD *j; // rbx
  unsigned int v16; // ecx
  void *v17; // r8
  void *v18; // r8
  _QWORD *v19; // rsi
  void *v20; // rdi
  ULONG_PTR v21; // rbx
  PVOID *k; // rbx

  v1 = Address[4];
  v2 = (char *)Address[1];
  if ( *(_DWORD *)(v1 + 36) )
  {
    v3 = ((((_DWORD)KeNumberProcessors_0 + 910) << 6) & 0xFFFFF000) + 28672;
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, Address, 0xD080uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v1, 0xCF00uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, v2, 0x68uLL, 0x6370654Bu);
    Address = &KiBootProcessorIdtSize;
    v3 = 0LL;
  }
  PoSetHiberRange(0LL, 0x10000u, Address, v3, 0x6370654Bu);
  v4 = 1;
  v5 = 8LL;
  do
  {
    v6 = *(_QWORD *)&v2[v5 + 28];
    if ( v4 == 1 || v4 == 2 || v4 - 3 <= 1 )
    {
      v7 = (unsigned int)KeIstStackSize;
      if ( KiKvaShadow )
      {
        PoSetHiberRange(0LL, 0x10000u, (PVOID)(v6 - 464), 0x200uLL, 0x6370654Bu);
        v8 = (void *)(*(_QWORD *)(v6 + 8) - v7 + 32);
      }
      else
      {
        v8 = (void *)(v6 - (unsigned int)KeIstStackSize);
      }
      PoSetHiberRange(0LL, 0x10000u, v8, v7, 0x6370654Bu);
      if ( (_BYTE)KiKernelCetEnabled )
        PoSetHiberRange(
          0LL,
          0x10000u,
          (PVOID)(*(_QWORD *)(*(_QWORD *)(v1 + 39856) + v5) - 4088LL),
          0x1000uLL,
          0x7373654Bu);
    }
    ++v4;
    v5 += 8LL;
  }
  while ( v4 <= 4 );
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 360), *(unsigned __int16 *)(v1 + 358), 0x7370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 344), *(unsigned __int16 *)(v1 + 342), 0x7370654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 14496) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeKernelStackSize),
    (unsigned int)KeKernelStackSize,
    0x7473654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 34664) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeExceptionStackSize),
    (unsigned int)KeExceptionStackSize,
    0x6573654Bu);
  v9 = (_QWORD **)(v1 + 14400);
  v10 = 2LL;
  do
  {
    for ( i = *v9; i; i = (_QWORD *)*i )
      PoSetHiberRange(0LL, 0x10000u, i - 1, 0x40uLL, 0x7064654Bu);
    v9 += 6;
    --v10;
  }
  while ( v10 );
  v12 = *(void **)(v1 + 14352);
  if ( v12 )
  {
    PoSetHiberRange(0LL, 0x10000u, v12, 0x10uLL, 0x7264654Bu);
    PoSetHiberRange(
      0LL,
      0x10000u,
      *(PVOID *)(*(_QWORD *)(v1 + 14352) + 8LL),
      8 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 14352) + 4LL) >> 5),
      0x7264654Bu);
    v13 = *(_QWORD *)(v1 + 14352);
    v14 = *(_QWORD ***)(v13 + 8);
    for ( j = v14; j; PoSetHiberRange(0LL, 0x10000u, j, 0x20uLL, 0x7264654Bu) )
    {
      j = (_QWORD *)*j;
      if ( ((unsigned __int8)j & 1) != 0 )
        break;
LABEL_27:
      if ( !j )
        goto LABEL_29;
    }
    for ( ++v14;
          (unsigned __int64)v14 < *(_QWORD *)(v13 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v13 + 4) >> 5);
          ++v14 )
    {
      j = *v14;
      if ( ((unsigned __int8)*v14 & 1) == 0 )
        goto LABEL_27;
    }
  }
LABEL_29:
  v16 = 1232;
  if ( (KeFeatureBits & 0x800000) != 0 )
    v16 = KeXStateLength + 815;
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 36800), v16, 0x7873654Bu);
  v17 = *(void **)(v1 + 1728);
  if ( v17 )
    PoSetHiberRange(
      0LL,
      0x10000u,
      v17,
      MEMORY[0xFFFFF78000000600]
    - (unsigned __int64)MEMORY[0xFFFFF780000003E8]
    + (unsigned int)KiIptSaveAreaLength
    + 64LL,
      0x7373654Bu);
  v18 = *(void **)(v1 + 34880);
  if ( v18 )
    PoSetHiberRange(0LL, 0x10000u, v18, 0x578uLL, 0x7349654Bu);
  if ( qword_140F103D8 )
    PoSetHiberRange(0LL, 0x10000u, qword_140F103D8, 16 * (unsigned int)(unsigned __int8)qword_140F103C8, 0x7272744Du);
  if ( qword_140F103E0 )
    PoSetHiberRange(0LL, 0x10000u, qword_140F103E0, 0x58uLL, 0x7272744Du);
  v19 = *(_QWORD **)(v1 + 8);
  v20 = (void *)((v19[6] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  v21 = v19[7] - (_QWORD)v20;
  PoSetHiberRange(0LL, 0x10000u, v19, 0x798uLL, 0x6874654Bu);
  PoSetHiberRange(0LL, 0x10000u, v20, v21, 0x7473654Bu);
  for ( k = (PVOID *)KeBugCheckReasonCallbackListHead; k != &KeBugCheckReasonCallbackListHead; k = (PVOID *)*k )
    PoSetHiberRange(0LL, 0x10000u, k, 0x30uLL, 0x7473654Bu);
  if ( (_BYTE)KiKernelCetEnabled )
    PoSetHiberRange(
      0LL,
      0x10000u,
      (PVOID)((v19[132] & 0xFFFFFFFFFFFFF000uLL) + 4096),
      v19[131] - ((v19[132] & 0xFFFFFFFFFFFFF000uLL) + 4096) - 4096,
      0x7373654Bu);
  PoSetHiberRange(0LL, 0x10000u, ExLeapSecondData, 0x1000uLL, 0x706C7845u);
}
