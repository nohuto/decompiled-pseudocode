/*
 * XREFs of RtlpHpFixedVsFree @ 0x140498450
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpFixedVsFree(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v7; // r15
  char v8; // bp
  ULONG_PTR v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // r9
  __int64 *v12; // r10
  bool v13; // zf
  bool i; // zf
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v17; // [rsp+38h] [rbp-20h]

  v3 = (unsigned __int64)a3 >> 12;
  v4 = (a2 - a1) >> 12;
  v7 = a3;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    v8 = -1;
  else
    v8 = RtlpHpAcquireLockExclusive((int *)(a1 + 24), *(unsigned __int8 *)(a1 + 32));
  v9 = a1 ^ *(_QWORD *)(a1 + 56);
  v16 = *(_QWORD *)(a1 + 48);
  v17 = v9;
  if ( v4 >= v16 )
    goto LABEL_13;
  if ( v3 <= 1 )
  {
    if ( v3 == 1 && _bittest64((const signed __int64 *)(v17 + 8 * (v4 >> 6)), v4 & 0x3F) )
      goto LABEL_7;
LABEL_13:
    RtlpLogHeapFailure(8, a1, a2, v7, 0LL, 0LL);
    __fastfail(0x32u);
  }
  if ( v16 - v4 < v3 )
    goto LABEL_13;
  v10 = (__int64 *)(v17 + 8 * (v4 >> 6));
  v11 = *v10;
  v12 = (__int64 *)(v17 + 8 * ((v4 + v3 - 1) >> 6));
  if ( v10 == v12 )
  {
    v13 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v3) << v4) & v11) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v3) << v4;
  }
  else
  {
    for ( i = ((-1LL << v4) & v11) == -1LL << v4; ; i = v15 == -1 )
    {
      if ( !i )
        goto LABEL_13;
      v15 = *++v10;
      if ( v10 == v12 )
        break;
    }
    v13 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 + (unsigned __int8)v3 - 1)) & v15) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 + (unsigned __int8)v3 - 1);
  }
  if ( !v13 )
    goto LABEL_13;
LABEL_7:
  RtlClearBitsEx((__int64)&v16, v4, v3);
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) == 0 )
    RtlpHpReleaseLockExclusive(a1 + 24, *(unsigned __int8 *)(a1 + 32), v8);
}
