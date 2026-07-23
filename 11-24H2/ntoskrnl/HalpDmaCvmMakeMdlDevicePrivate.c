/*
 * XREFs of HalpDmaCvmMakeMdlDevicePrivate @ 0x1406FDA68
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 * Callees:
 *     HalpDmaCvmSetPageShareability @ 0x1406FDBFC (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaCvmMakeMdlDevicePrivate(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 40);
  v7 = 0LL;
  v3 = 0LL;
  v4 = (v1 >> 12) + ((v1 & 0xFFF) != 0);
  while ( v3 < v4 )
  {
    v5 = *(_QWORD *)(a1 + 8 * v3 + 48) << 12;
    if ( (v5 & qword_140FC0D48) != 0 )
    {
      result = HalpDmaCvmSetPageShareability(v5, 1LL, 0LL, &v7);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 8 * v3 + 48) = v7 >> 12;
    }
    ++v3;
  }
  return 0LL;
}
