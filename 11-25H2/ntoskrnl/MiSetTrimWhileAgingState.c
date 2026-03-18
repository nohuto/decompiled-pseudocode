/*
 * XREFs of MiSetTrimWhileAgingState @ 0x14066D36C
 * Callers:
 *     MiInitializeWorkingSetManagerParameters @ 0x14066D024 (MiInitializeWorkingSetManagerParameters.c)
 *     MmSetTrimWhileAgingState @ 0x14066D5A8 (MmSetTrimWhileAgingState.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // r9

  v2 = *(_QWORD *)(a1 + 17600);
  v3 = a1 + 18816;
  v4 = a2;
  v5 = MiLockWorkingSetExclusive(a1 + 18816);
  switch ( v4 )
  {
    case 0u:
      *(_QWORD *)(v2 + 72) = 0LL;
      goto LABEL_11;
    case 1u:
      *(_QWORD *)(v2 + 64) = -1LL;
      *(_QWORD *)(v2 + 72) = 204800LL;
      break;
    case 2u:
      *(_QWORD *)(v2 + 72) = 204800LL;
      *(_QWORD *)(v2 + 64) = 51200LL;
      break;
    case 3u:
      *(_QWORD *)(v2 + 72) = 204800LL;
      *(_QWORD *)(v2 + 64) = 12800LL;
      break;
    case 4u:
      *(_QWORD *)(v2 + 72) = 384000LL;
LABEL_11:
      *(_QWORD *)(v2 + 64) = 0LL;
      break;
  }
  *(_WORD *)(v2 + 278) = *(_WORD *)((char *)&a2 + 1);
  *(_DWORD *)(v2 + 80) = v4;
  MiUnlockWorkingSetExclusive(v3, v5);
}
