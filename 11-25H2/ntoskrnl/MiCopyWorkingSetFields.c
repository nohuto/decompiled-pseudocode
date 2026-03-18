/*
 * XREFs of MiCopyWorkingSetFields @ 0x14065E2C4
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140A47A3C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14037F48C (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 */

char __fastcall MiCopyWorkingSetFields(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  _QWORD *v7; // r15
  _QWORD *v8; // rsi
  unsigned __int8 v9; // bp
  __int64 v10; // rdx
  __int64 *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v6 = &unk_140E38530;
    v7 = &unk_140E38538;
  }
  else
  {
    v6 = (_QWORD *)(a1 + 240);
    v7 = (_QWORD *)(a1 + 248);
  }
  v8 = &unk_140E38500;
  if ( (*(_DWORD *)(a2 + 184) & 0xF) != 1 )
    v8 = (_QWORD *)(a2 + 192);
  v9 = MiLockWorkingSetShared(a2);
  MiLockWorkingSetCoreExclusive(a2);
  v10 = 8LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *v6 = v8[6];
  *v7 = v8[7];
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  v11 = (__int64 *)(a2 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 16) = a3;
  v12 = (_QWORD *)(a1 + 40);
  do
  {
    v13 = *v11++;
    *v12++ = v13;
    --v10;
  }
  while ( v10 );
  MiUnlockWorkingSetCoreExclusive(a2);
  return MiUnlockWorkingSetShared(a2, v9);
}
