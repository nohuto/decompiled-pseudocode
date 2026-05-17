/*
 * XREFs of RtlCSparseBitmapStart @ 0x1800B9EF0
 * Callers:
 *     RtlHpHeapManagerStart @ 0x1800B9E8C (RtlHpHeapManagerStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x1800BA024 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800BB710 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // cc
  unsigned __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 49) = 0;
  *(_BYTE *)(a1 + 50) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 48) = a4 != 0;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 2147483653LL;
  v5 = (((a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = *(unsigned int *)(a1 + 52);
  v13 = v6;
  if ( ((v6 >> 12) + 7) >> 3 > v7 )
    return 2147483653LL;
  v12 = v6 + v5;
  result = RtlpHpEnvAllocVA((int)a1 + 8, (unsigned int)&v12, 0, 1056768, 4);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v9, v12);
    v10 = v5 + *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 51) = v9;
    v11 = v13 <= 0x1000;
    *(_QWORD *)a1 = v10;
    if ( !v11 )
      return 0LL;
    result = RtlpHpEnvAllocVA(a1, (unsigned int)&v13, 0, 1073745920, 4);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)(a1 + 56) = 1LL;
      return 0LL;
    }
  }
  return result;
}
