/*
 * XREFs of MiFillUserPhysicalMdl @ 0x140683174
 * Callers:
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiInitializeAwePfn @ 0x1404F3848 (MiInitializeAwePfn.c)
 *     MiDemotePfnListChain @ 0x14069341C (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiFillUserPhysicalMdl(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *v9; // rbx
  __int64 *v10; // rdi
  __int64 *i; // rdx
  _QWORD *v13; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 *v17; // r15
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v9 = a2;
  do
  {
    while ( (_QWORD *)*v9 != v9 )
      MiDemotePfnListChain(a2, 2LL);
    ++v4;
    v9 += 3;
  }
  while ( v4 < 2 );
  v10 = a2 + 6;
  for ( i = (__int64 *)a2[6]; i != v10; i = (__int64 *)*i )
  {
    if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(i + 0x44000000000LL) >> 4) + 16 > a3 )
      return 3221225485LL;
  }
  *(_WORD *)(a1 + 10) |= 2u;
  v13 = (_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(i) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)i);
  }
  v15 = *v10;
  if ( (__int64 *)*v10 != v10 )
  {
    v16 = a4 >> 3;
    do
    {
      v17 = *(__int64 **)v15;
      v18 = 0;
      *v13++ = 0xAAAAAAAAAAAAAAABuLL * ((v15 + 0x220000000000LL) >> 4);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      *(_QWORD *)v15 = 0LL;
      *(_QWORD *)v15 = v16 ^ (*(_QWORD *)v15 ^ v16) & 0xFFFFF00000000001uLL;
      MiInitializeAwePfn(v15);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = (__int64)v17;
    }
    while ( v17 != v10 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
