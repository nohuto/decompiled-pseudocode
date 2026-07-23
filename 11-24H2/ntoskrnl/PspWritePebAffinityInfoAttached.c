/*
 * XREFs of PspWritePebAffinityInfoAttached @ 0x140A38230
 * Callers:
 *     PspUpdatePebForAffinityChange @ 0x1408DF878 (PspUpdatePebForAffinityChange.c)
 * Callees:
 *     KeQueryPrimaryGroupAffinityProcess @ 0x1404805C4 (KeQueryPrimaryGroupAffinityProcess.c)
 */

__int64 __fastcall PspWritePebAffinityInfoAttached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 736);
  v6 = 0LL;
  v7 = *(__int64 **)(a1 + 784);
  if ( v7 )
    v6 = *v7;
  do
  {
    v10 = 0LL;
    if ( (*(_DWORD *)(a1 + 136) & 0x1000) != 0 )
      WORD4(v10) = *(_WORD *)(a1 + 416);
    else
      KeQueryPrimaryGroupAffinityProcess(a1, (__int64)&v10, a3, a4);
    v8 = v10;
    *(_QWORD *)(v5 + 312) = v10;
    if ( v6 )
      *(_DWORD *)(v6 + 192) = v8 | HIDWORD(v8);
    v11 = 0LL;
    if ( (*(_DWORD *)(a1 + 136) & 0x1000) != 0 )
    {
      result = *(unsigned __int16 *)(a1 + 416);
    }
    else
    {
      KeQueryPrimaryGroupAffinityProcess(a1, (__int64)&v11, a3, a4);
      result = WORD4(v11);
    }
  }
  while ( WORD4(v10) != (_WORD)result || v8 != (_QWORD)v11 );
  return result;
}
