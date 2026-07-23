/*
 * XREFs of RtlCSparseBitmapStart @ 0x140604674
 * Callers:
 *     RtlpHpVaMgrCtxStart @ 0x14060319C (RtlpHpVaMgrCtxStart.c)
 *     RtlHpKInitializeHeapManager @ 0x140658BE8 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     RtlpEnvRegisterFaultRange @ 0x140604BA0 (RtlpEnvRegisterFaultRange.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  ULONG_PTR v12; // [rsp+20h] [rbp-48h]
  ULONG_PTR v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]
  unsigned __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 49) = 1;
  *(_BYTE *)(a1 + 50) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 48) = a4 != 0;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 2147483653LL;
  v6 = (((a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = *(unsigned int *)(a1 + 52);
  v19 = v7;
  if ( ((v7 >> 12) + 7) >> 3 > v8 )
    return 2147483653LL;
  v18 = v7 + v6;
  v9 = (__int64 *)(a1 + 8);
  LODWORD(v12) = 4;
  result = RtlpHpEnvAllocVA((ULONG_PTR *)(a1 + 8), (__int64 *)&v18, 0LL, 1056768, v12, v14, (unsigned __int8)a4, v16, 0);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v10, v18);
    v11 = *v9;
    *(_BYTE *)(a1 + 51) = v10;
    result = RtlpEnvRegisterFaultRange(v11, v6);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)a1 = v6 + *v9;
      if ( v7 <= 0x1000 )
      {
        LODWORD(v13) = 4;
        result = RtlpHpEnvAllocVA(
                   (ULONG_PTR *)a1,
                   (__int64 *)&v19,
                   0LL,
                   1073745920,
                   v13,
                   v15,
                   *(unsigned __int8 *)(a1 + 50),
                   v17,
                   0);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a1 + 56) = 1LL;
      }
      return 0LL;
    }
  }
  return result;
}
