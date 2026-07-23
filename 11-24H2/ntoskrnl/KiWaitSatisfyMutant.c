/*
 * XREFs of KiWaitSatisfyMutant @ 0x14032DC50
 * Callers:
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiWaitSatisfyMutant(int *a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // al
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *result; // rax
  int v8; // [rsp+0h] [rbp-28h]

  if ( *((_BYTE *)a1 + 49) )
    --*(_WORD *)(a2 + 484);
  if ( *(_QWORD *)(a3 + 8) == a2 )
    v3 = *(_BYTE *)(a3 + 14522);
  else
    v3 = 0;
  v8 = *a1;
  BYTE2(v8) = v3;
  *a1 = v8;
  v4 = *((_BYTE *)a1 + 48);
  *((_QWORD *)a1 + 5) = a2;
  if ( (v4 & 1) != 0 )
  {
    *((_BYTE *)a1 + 48) = v4 & 0xFE;
    *(_QWORD *)(a2 + 200) |= 0x80uLL;
  }
  if ( (a1[12] & 2) != 0 )
    *(_QWORD *)(a2 + 976) = a1;
  else
    *(_QWORD *)(a2 + 976) = 0LL;
  v5 = a2 + 776;
  v6 = a1 + 6;
  result = *(_QWORD **)(v5 + 8);
  if ( *result != v5 )
    __fastfail(3u);
  *v6 = v5;
  v6[1] = result;
  *result = v6;
  *(_QWORD *)(v5 + 8) = v6;
  return result;
}
