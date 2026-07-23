/*
 * XREFs of HsaFlushTb @ 0x1405700F0
 * Callers:
 *     <none>
 * Callees:
 *     HsaFlushTbInternal @ 0x14043E458 (HsaFlushTbInternal.c)
 */

void __fastcall HsaFlushTb(
        _QWORD *a1,
        int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  HsaFlushTbInternal(a1, a2, a3, 0, a4, a5, a6, a7);
}
