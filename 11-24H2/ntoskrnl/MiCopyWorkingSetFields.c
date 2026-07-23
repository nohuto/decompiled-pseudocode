/*
 * XREFs of MiCopyWorkingSetFields @ 0x14066AFB4
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140296808 (MiUnlockWorkingSetCoreExclusive.c)
 */

char __fastcall MiCopyWorkingSetFields(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  unsigned __int8 v10; // bp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 *v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v7 = &unk_140E388B0;
    v8 = &unk_140E388B8;
  }
  else
  {
    v7 = (_QWORD *)(a1 + 240);
    v8 = (_QWORD *)(a1 + 248);
  }
  v9 = &unk_140E38880;
  if ( (*(_DWORD *)(a2 + 184) & 0xF) != 1 )
    v9 = (_QWORD *)(a2 + 192);
  v10 = MiLockWorkingSetShared(a2, a2, a3, a4);
  MiLockWorkingSetCoreExclusive(a2, v11, v12, v13);
  v14 = 8LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *v7 = v9[6];
  *v8 = v9[7];
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  v15 = (__int64 *)(a2 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 16) = a3;
  v16 = (_QWORD *)(a1 + 40);
  do
  {
    v17 = *v15++;
    *v16++ = v17;
    --v14;
  }
  while ( v14 );
  MiUnlockWorkingSetCoreExclusive(a2);
  return MiUnlockWorkingSetShared(a2, v10);
}
