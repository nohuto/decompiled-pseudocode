/*
 * XREFs of RtlCSparseBitmapStart @ 0x1800B9EF0
 * Callers:
 *     RtlHpHeapManagerStart @ 0x1800B9E8C (RtlHpHeapManagerStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x1800BA024 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800BB710 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(PVOID *BaseAddress, void *a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  char *v10; // rcx
  bool v11; // cc
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-40h]
  ULONG_PTR v14; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+10h] BYREF

  BaseAddress[3] = 0LL;
  BaseAddress[5] = 0LL;
  *((_BYTE *)BaseAddress + 49) = 0;
  *((_BYTE *)BaseAddress + 50) = a4;
  BaseAddress[2] = a2;
  *((_BYTE *)BaseAddress + 48) = a4 != 0;
  if ( (unsigned __int64)a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 2147483653LL;
  v5 = ((((unsigned __int64)a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = *((unsigned int *)BaseAddress + 13);
  RegionSize = v6;
  if ( ((v6 >> 12) + 7) >> 3 > v7 )
    return 2147483653LL;
  v14 = v6 + v5;
  result = RtlpHpEnvAllocVA(BaseAddress + 1, &v14, 4u, v12, (unsigned __int8)a4, 0LL);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v9, v14);
    v10 = (char *)BaseAddress[1] + v5;
    *((_BYTE *)BaseAddress + 51) = v9;
    v11 = RegionSize <= 0x1000;
    *BaseAddress = v10;
    if ( !v11 )
      return 0LL;
    result = RtlpHpEnvAllocVA(BaseAddress, &RegionSize, 4u, v13, *((unsigned __int8 *)BaseAddress + 50), 0LL);
    if ( (int)result >= 0 )
    {
      BaseAddress[7] = (PVOID)1;
      return 0LL;
    }
  }
  return result;
}
