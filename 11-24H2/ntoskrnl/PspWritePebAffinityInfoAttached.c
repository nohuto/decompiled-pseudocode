/*
 * XREFs of PspWritePebAffinityInfoAttached @ 0x140A429F0
 * Callers:
 *     PspUpdatePebForAffinityChange @ 0x14090815C (PspUpdatePebForAffinityChange.c)
 * Callees:
 *     KeQueryPrimaryGroupAffinityProcess @ 0x1404850B4 (KeQueryPrimaryGroupAffinityProcess.c)
 */

__int64 __fastcall PspWritePebAffinityInfoAttached(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 736);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 784);
  if ( v4 )
    v3 = *v4;
  do
  {
    v7 = 0LL;
    if ( (*(_DWORD *)(a1 + 136) & 0x1000) != 0 )
      WORD4(v7) = *(_WORD *)(a1 + 416);
    else
      KeQueryPrimaryGroupAffinityProcess(a1, (__int64)&v7);
    v5 = v7;
    *(_QWORD *)(v2 + 312) = v7;
    if ( v3 )
      *(_DWORD *)(v3 + 192) = v5 | HIDWORD(v5);
    v8 = 0LL;
    if ( (*(_DWORD *)(a1 + 136) & 0x1000) != 0 )
    {
      result = *(unsigned __int16 *)(a1 + 416);
    }
    else
    {
      KeQueryPrimaryGroupAffinityProcess(a1, (__int64)&v8);
      result = WORD4(v8);
    }
  }
  while ( WORD4(v7) != (_WORD)result || v5 != (_QWORD)v8 );
  return result;
}
