/*
 * XREFs of MiResetAccessBitsTail @ 0x14049C0A0
 * Callers:
 *     <none>
 * Callees:
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1)
{
  MiAgeTrimListsTail(
    a1,
    (__int64 *)(*(_QWORD *)(a1 + 184) + 8LL),
    0LL,
    *(unsigned int *)(*(_QWORD *)(a1 + 184) + 4LL),
    (__int64)MiResetAccessBitsVpabCallback);
  return 0LL;
}
