/*
 * XREFs of MiUnlockMdlWritePages @ 0x140257B30
 * Callers:
 *     MiUnlockFlushMdl @ 0x1402571C0 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x140259230 (MiFlushComplete.c)
 * Callees:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned __int64 v13[4]; // [rsp+20h] [rbp-88h] BYREF
  int v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+80h] [rbp-28h]
  __int64 v17; // [rsp+B0h] [rbp+8h] BYREF

  memset_0(v13, 0, 0x68uLL);
  v4 = *a2;
  v5 = 0LL;
  v6 = a1 + 12;
  v7 = (a1[8] + a1[11]) & 0xFFF;
  v8 = (unsigned int)a1[10] + 4095LL;
  v16 = 1;
  v17 = (v4 >> 63) & 0x43;
  v15 = 0LL;
  v13[2] = 0x3FFFFFFFFFLL;
  v13[3] = 0x3FFFFFFFFFLL;
  v14 = 0;
  v9 = (unsigned __int64)(v7 + v8) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v15 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  for ( ; v9; --v9 )
  {
    MiAddPageToInsertList(v13, &v17, *v6);
    if ( (++v5 & 0x3F) == 0 && KeShouldYieldProcessor() )
    {
      MiInsertPagesInList(v13, 0);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v12, 2LL);
    }
    ++v6;
  }
  MiInsertPagesInList(v13, 0);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
