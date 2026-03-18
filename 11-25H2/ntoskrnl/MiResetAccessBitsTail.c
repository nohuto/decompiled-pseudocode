/*
 * XREFs of MiResetAccessBitsTail @ 0x14049CCF0
 * Callers:
 *     <none>
 * Callees:
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1)
{
  MiAgeTrimListsTail(
    a1,
    (__int64 *)(*(_QWORD *)(a1 + 184) + 8LL),
    0LL,
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 4LL),
    (__int64)MiResetAccessBitsVpabCallback);
  return 0LL;
}
