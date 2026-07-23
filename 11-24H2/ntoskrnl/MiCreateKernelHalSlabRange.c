/*
 * XREFs of MiCreateKernelHalSlabRange @ 0x140C5B3A0
 * Callers:
 *     <none>
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiConvertActiveLargePageToSmall @ 0x1402EDFDC (MiConvertActiveLargePageToSmall.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateKernelHalSlabRange(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 result; // rax
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( (unsigned __int64)v2 < v3 )
  {
    v4 = (*v2 >> 12) & 0xFFFFFFFFFFLL;
    v5 = 48 * v4 - 0x220000000000LL;
    if ( (*(_QWORD *)(v5 + 40) & 0x10000000000LL) != 0 )
    {
      MiConvertActiveLargePageToSmall(48 * v4 - 0x220000000000LL, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
      }
      v8 = v5 + 24;
      v9 = 512LL;
      do
      {
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v13);
          while ( *(__int64 *)v8 < 0 );
        }
        v13 = *(_DWORD *)(v8 + 8);
        LOWORD(v13) = v13 - 1;
        *(_DWORD *)(v8 + 8) = v13;
        _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
        v8 += 48LL;
        --v9;
      }
      while ( v9 );
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v10 = MiPageToNode(v4);
    v11 = MiPageToNode(v4 + 511);
    if ( v10 != v11 )
      KeBugCheckEx(0x1Au, 0x3030317uLL, v4, v10, v11);
    result = MiCreateBootSlabEntries(qword_140E38D50 + 16856 + 57216LL * v10, v4, 512LL, 1);
    if ( (int)result < 0 )
      return result;
    ++v2;
  }
  return 0LL;
}
