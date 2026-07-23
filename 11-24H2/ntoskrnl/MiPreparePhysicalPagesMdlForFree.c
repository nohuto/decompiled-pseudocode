/*
 * XREFs of MiPreparePhysicalPagesMdlForFree @ 0x140683A44
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPreparePhysicalPagesMdlForFree(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // r8
  _QWORD *v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rbx
  int v10; // edx
  unsigned __int8 v11; // cl
  __int64 result; // rax
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 44) = 0;
  v2 = (_QWORD *)(a1 + 48);
  if ( a2 != 1 )
  {
    v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
    v4 = &v2[a2 * v3];
    do
    {
      --v3;
      v5 = 1LL;
      v4 -= a2;
      *v4 = v2[v3];
      while ( v5 < a2 )
      {
        v4[v5] = v4[v5 - 1] + 1LL;
        ++v5;
      }
    }
    while ( v3 );
    LODWORD(a2) = *(_DWORD *)(a1 + 40) * a2;
    *(_DWORD *)(a1 + 40) = a2;
  }
  v6 = 0LL;
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  for ( ; v7; --v7 )
  {
    v9 = 48LL * *v2 - 0x220000000000LL;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL | 1;
    *(_QWORD *)(v9 + 24) &= ~0x4000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v6 & 0x7F) == 0 && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v11 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 2;
        KiRaiseIrqlProcessIrqlFlags(v11, v10);
      }
    }
    ++v2;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
