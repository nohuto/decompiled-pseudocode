/*
 * XREFs of MiWriteEntirePageHashEntry @ 0x140426940
 * Callers:
 *     MiUpdatePageFileBlockOwner @ 0x140269EDC (MiUpdatePageFileBlockOwner.c)
 *     MiWritePageFileHash @ 0x140426540 (MiWritePageFileHash.c)
 *     MiLateWritePageHash @ 0x1404C3280 (MiLateWritePageHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWriteEntirePageHashEntry(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_DWORD *)a1 = result;
  if ( dword_140E373D0 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
    result = a2[1];
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}
