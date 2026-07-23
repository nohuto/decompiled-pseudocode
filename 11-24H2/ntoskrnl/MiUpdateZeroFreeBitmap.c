/*
 * XREFs of MiUpdateZeroFreeBitmap @ 0x1404392C0
 * Callers:
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateZeroFreeBitmap(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v3 = *(unsigned int *)(a2 + 8);
  v4 = (unsigned __int64)(unsigned __int8)v3 >> 6;
  v5 = HIWORD(*(_DWORD *)(a2 + 8)) & 3;
  v6 = 1LL << (*(_DWORD *)(a2 + 8) & 0x3F);
  result = *(_QWORD *)(a1
                     + 16
                     * (((v3 >> 20) & 1)
                      + 2
                      * ((((unsigned __int64)(unsigned int)v3 >> 18) & 3)
                       + 4 * ((((unsigned int)v3 >> 15) & 1) + 10 * v5)))
                     + 136);
  if ( a3 )
    _InterlockedOr64((volatile signed __int64 *)(result + 8 * v4), v6);
  else
    _InterlockedAnd64((volatile signed __int64 *)(result + 8 * v4), ~v6);
  return result;
}
