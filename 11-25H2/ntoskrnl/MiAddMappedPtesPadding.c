/*
 * XREFs of MiAddMappedPtesPadding @ 0x14066B030
 * Callers:
 *     MiAddMappedPtes @ 0x140323A90 (MiAddMappedPtes.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 */

char __fastcall MiAddMappedPtesPadding(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // r14
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebx
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int8 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v7 = a4;
  v8 = a3;
  v10 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = a7;
  v12 = *(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 44);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
  v14 = v13 + 8 * a6;
  while ( v12 < v14 )
  {
    *(_QWORD *)v7 = MiMakePrototypePteDirect(v12);
    ++v11;
    v7 += 8LL;
    if ( v7 >= a5 )
      break;
    if ( (v7 & 0xFFF) == 0 )
    {
      if ( v11 )
      {
        MiIncreaseUsedPtes(v13, v10, v11, 2);
        v11 = 0;
      }
      MiUnlockWorkingSetOptimal(a2, v10, v8);
      v16 = MiLockWorkingSetOptimal(a2, v7, &v18, v15);
      v8 = v18;
      v10 = v16;
    }
    v12 += 8LL;
  }
  if ( v11 )
    MiIncreaseUsedPtes(v13, v10, v11, 2);
  return MiUnlockWorkingSetOptimal(a2, v10, v8);
}
