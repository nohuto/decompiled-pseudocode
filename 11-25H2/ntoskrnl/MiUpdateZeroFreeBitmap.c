/*
 * XREFs of MiUpdateZeroFreeBitmap @ 0x14044A678
 * Callers:
 *     MiReplenishPageSlist @ 0x1404EF270 (MiReplenishPageSlist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateZeroFreeBitmap(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 8);
  v4 = (unsigned __int64)(unsigned __int8)v3 >> 6;
  v5 = 1LL << (v3 & 0x3F);
  result = *(_QWORD *)(a1
                     + 16
                     * (((v3 >> 20) & 1) + 2 * (((v3 >> 18) & 3) + 4 * (((v3 >> 15) & 1) + 10LL * (HIWORD(v3) & 3))))
                     + 136);
  if ( a3 )
    _InterlockedOr64((volatile signed __int64 *)(result + 8 * v4), v5);
  else
    _InterlockedAnd64((volatile signed __int64 *)(result + 8 * v4), ~v5);
  return result;
}
