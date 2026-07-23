/*
 * XREFs of IvtFlushTb @ 0x14056B940
 * Callers:
 *     <none>
 * Callees:
 *     IvtFlushTbInternal @ 0x140372B58 (IvtFlushTbInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall IvtFlushTb(
        __int64 a1,
        int a2,
        int a3,
        struct _EX_RUNDOWN_REF *a4,
        _QWORD *a5,
        unsigned int a6,
        __int64 a7)
{
  _BYTE v11[4]; // [rsp+50h] [rbp-78h] BYREF
  int v12; // [rsp+54h] [rbp-74h]
  int v13; // [rsp+80h] [rbp-48h]

  memset_0(v11, 0, 0x70uLL);
  v12 = 2;
  v13 = a3;
  IvtFlushTbInternal(a1, 0LL, a2, (__int64)v11, 0, a4, a5, a6, a7);
}
