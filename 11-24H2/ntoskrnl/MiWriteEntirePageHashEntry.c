/*
 * XREFs of MiWriteEntirePageHashEntry @ 0x14039E750
 * Callers:
 *     MiWritePageFileHash @ 0x14039E350 (MiWritePageFileHash.c)
 *     MiUpdatePageFileBlockOwner @ 0x1404889B8 (MiUpdatePageFileBlockOwner.c)
 *     MiLateWritePageHash @ 0x1404C9F30 (MiLateWritePageHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWriteEntirePageHashEntry(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_DWORD *)a1 = result;
  if ( dword_140E37290 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
    result = a2[1];
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}
