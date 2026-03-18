/*
 * XREFs of MiIncrementCombinedPte @ 0x14023AE9C
 * Callers:
 *     MiMapImageScpCfgPages @ 0x1402A69D0 (MiMapImageScpCfgPages.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 * Callees:
 *     MiReferenceCloneProto @ 0x14023AF4C (MiReferenceCloneProto.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiIncrementCombinedPte(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  int v4; // ebp
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  unsigned int v8; // esi

  v3 = a2;
  v4 = a1;
  v5 = *(_QWORD *)(((a2 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a3 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
  }
  v8 = MiReferenceCloneProto(v4, *(_QWORD *)v5, v3, 0, 0LL);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 392));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
