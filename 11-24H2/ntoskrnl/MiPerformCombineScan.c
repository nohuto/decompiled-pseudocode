/*
 * XREFs of MiPerformCombineScan @ 0x1403D6ED0
 * Callers:
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // r11d
  unsigned __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r8

  v6 = 1;
  v7 = 0xDE5DF13F878608F5uLL;
  v8 = 512;
  do
  {
    v9 = (unsigned int)(v8 - 8);
    v5 = (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16;
    v7 = *(_QWORD *)(v5 + 8 * v9)
       + __ROR8__(
           *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 - 7))
         + __ROR8__(
             *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 - 6))
           + __ROR8__(
               *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 - 5)) ^ __ROR8__(
                                                                  *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 - 4))
                                                                + __ROR8__(
                                                                    *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 - 3))
                                                                  + __ROR8__(
                                                                      *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 - 2))
                                                                    + __ROR8__(
                                                                        *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 - 1))
                                                                      + __ROR8__(v7, 2),
                                                                        3),
                                                                      5),
                                                                    7),
                                                                  11),
               13),
             17),
           19);
    v8 -= 8;
  }
  while ( (_DWORD)v9 );
  *(_QWORD *)(a4 + 8) = v7;
  if ( !v7 )
    return 0;
  return v6;
}
