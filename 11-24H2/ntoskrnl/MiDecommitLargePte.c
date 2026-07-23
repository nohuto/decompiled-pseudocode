/*
 * XREFs of MiDecommitLargePte @ 0x1404C1658
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiDecommitHandleValidPte @ 0x140297D80 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7974 (MiDecommitAddTbFlushEntries.c)
 */

__int64 __fastcall MiDecommitLargePte(__int64 a1)
{
  volatile __int64 *v2; // rcx
  unsigned int v3; // r15d
  volatile unsigned __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  char v6; // r12
  int v7; // r12d
  __int64 v8; // rbx
  volatile __int64 *v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  char v15; // dl
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  volatile __int64 *v17; // [rsp+68h] [rbp+10h]
  __int64 v18; // [rsp+70h] [rbp+18h]

  v2 = *(volatile __int64 **)(a1 + 88);
  v17 = v2;
  v3 = *(_DWORD *)(a1 + 96);
  v4 = *v2;
  v5 = *(_QWORD *)(a1 + 176);
  v6 = *v2;
  v18 = *(_QWORD *)(a1 + 24);
  v7 = v6 & 1;
  if ( !v7 && qword_140E2DCC0 )
  {
    if ( (v4 & 0x10) != 0 )
      v4 &= ~0x10uLL;
    else
      v4 &= ~qword_140E2DCC0;
  }
  v8 = (v4 >> 12) & 0xFFFFFFFFFFLL;
  v9 = v2;
  v10 = (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  do
  {
    if ( v3 )
      MiRewritePteWithLockBit(*(_QWORD *)(a1 + 32), 0, v9, v5);
    else
      *v9 = v5;
    ++v9;
    --v10;
  }
  while ( v10 );
  if ( !v5 && v3 != 3 )
    *(_DWORD *)(a1 + 112) += v3 != 0 ? 1 : 16;
  if ( v7 )
    MiDecommitAddTbFlushEntries(a1, v17, v3, (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16);
  v11 = 48 * v8 - 0x220000000000LL;
  result = *(_QWORD *)(v11 + 40);
  if ( result >= 0 )
  {
    v13 = v18;
    v16 = 0;
    v14 = *(_QWORD *)(v18 + 48);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    v15 = *(_BYTE *)(v11 + 34);
    v16 = *(_DWORD *)(v11 + 32);
    BYTE2(v16) = BYTE2(v16) & 0xF8 | 5;
    *(_DWORD *)(v11 + 32) = v16;
    *(_QWORD *)v11 = (v14 >> 3) ^ (*(_QWORD *)v11 ^ (v14 >> 3)) & 0xFFFFF00000000001uLL;
    *(_QWORD *)(v13 + 48) = v11;
    v16 = *(_DWORD *)(v11 + 32);
    BYTE2(v16) ^= (v15 ^ BYTE2(v16)) & 7;
    *(_DWORD *)(v11 + 32) = v16;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
