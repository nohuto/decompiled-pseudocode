/*
 * XREFs of ExpPartitionCreatePoolDelayed @ 0x1408F898C
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     ExpPartitionCreatePoolInternal @ 0x1408F7C7C (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePoolDelayed(__int64 a1, USHORT *a2, int a3)
{
  __int64 v3; // r11
  __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx

  v3 = a3;
  v5 = 0LL;
  v7 = (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a2) + 8 * v3) >> 1) & 0x7FLL;
  v8 = KeNodeBlock[v7];
  v9 = (char *)&KiNodeInit + 824 * v7;
  v10 = 0LL;
  if ( (char *)v8 != v9 )
    v10 = (unsigned __int16 *)v8;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v10);
  if ( (*(_QWORD *)(v11 + 8 * v3) & 1) == 0 )
    v5 = *(_QWORD *)(v11 + 8 * v3);
  return ExpPartitionCreatePoolInternal(a1, (2 * *(_DWORD *)(v5 + 716)) >> 1, *(_DWORD *)(v5 + 720), a2, v3);
}
