/*
 * XREFs of MiSetTrimWhileAgingState @ 0x140678C78
 * Callers:
 *     MiInitializeWorkingSetManagerParameters @ 0x140678930 (MiInitializeWorkingSetManagerParameters.c)
 *     MmSetTrimWhileAgingState @ 0x140678EB4 (MmSetTrimWhileAgingState.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
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
