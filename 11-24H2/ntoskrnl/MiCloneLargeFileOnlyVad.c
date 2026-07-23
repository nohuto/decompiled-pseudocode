/*
 * XREFs of MiCloneLargeFileOnlyVad @ 0x1407F03A4
 * Callers:
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C2B90 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiCloneLargeFileOnlyVad(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 24);
  v7 = 0LL;
  v8 = 0LL;
  MiGetProtoPteAddress(a1, v2 | (v1 << 32), 0, (__int64 *)&v7);
  MiGetProtoPteAddress(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    0,
    (__int64 *)&v8);
  v4 = v7;
  v5 = 0LL;
  while ( (unsigned int)MiIncrementLargeSubsections(v4, *((unsigned int *)v4 + 11)) != -1 )
  {
    if ( v4 == v8 )
      return 0LL;
    v5 = v4;
    v4 = (__int64 *)v4[2];
  }
  if ( v5 )
    MiDecrementLargeSubsections(v7, v5);
  return 3221225626LL;
}
