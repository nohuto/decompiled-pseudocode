/*
 * XREFs of MiCopyWorkingSetFields @ 0x140669DE4
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140AE66AC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140379DAC (MiUnlockWorkingSetCoreExclusive.c)
 */

char __fastcall MiCopyWorkingSetFields(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  _QWORD *v7; // r15
  _QWORD *v8; // rsi
  unsigned __int8 v9; // bp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v6 = &unk_140E38770;
    v7 = &unk_140E38778;
  }
  else
  {
    v6 = (_QWORD *)(a1 + 240);
    v7 = (_QWORD *)(a1 + 248);
  }
  v8 = &unk_140E38740;
  if ( (*(_DWORD *)(a2 + 184) & 0xF) != 1 )
    v8 = (_QWORD *)(a2 + 192);
  v9 = MiLockWorkingSetShared(a2);
  MiLockWorkingSetCoreExclusive(a2, v10, v11);
  v12 = 8LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *v6 = v8[6];
  *v7 = v8[7];
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  v13 = (__int64 *)(a2 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 16) = a3;
  v14 = (_QWORD *)(a1 + 40);
  do
  {
    v15 = *v13++;
    *v14++ = v15;
    --v12;
  }
  while ( v12 );
  MiUnlockWorkingSetCoreExclusive(a2);
  return MiUnlockWorkingSetShared(a2, v9);
}
