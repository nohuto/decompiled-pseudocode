/*
 * XREFs of MiUnlockMdlWritePages @ 0x14023DBA0
 * Callers:
 *     MiUnlockFlushMdl @ 0x14023D228 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x14035A670 (MiFlushComplete.c)
 * Callees:
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiUnlockMdlWritePages(_DWORD *a1, int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  __int64 v12; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v14; // [rsp+30h] [rbp-78h]
  __int64 v15; // [rsp+38h] [rbp-70h]
  int v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  int v18; // [rsp+80h] [rbp-28h]
  __int64 v19; // [rsp+B0h] [rbp+8h] BYREF

  memset_0(v13, 0, 0x68uLL);
  v4 = *a2;
  v5 = 0LL;
  v6 = a1 + 12;
  v7 = (a1[8] + a1[11]) & 0xFFF;
  v8 = (unsigned int)a1[10] + 4095LL;
  v18 = 1;
  v19 = (v4 >> 63) & 0x43;
  v17 = 0LL;
  v14 = 0x3FFFFFFFFFLL;
  v15 = 0x3FFFFFFFFFLL;
  v16 = 0;
  v9 = (unsigned __int64)(v7 + v8) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v17 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  for ( ; v9; --v9 )
  {
    MiAddPageToInsertList(v13, &v19, *v6);
    if ( (++v5 & 0x3F) == 0 && KeShouldYieldProcessor() )
    {
      MiInsertPagesInList(v13, 0LL);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v12);
    }
    ++v6;
  }
  MiInsertPagesInList(v13, 0LL);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
