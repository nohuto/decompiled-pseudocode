/*
 * XREFs of MiInitializePfnListHead @ 0x140438BF4
 * Callers:
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePfnListHead(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  result = 0x3FFFFFFFFFLL;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
