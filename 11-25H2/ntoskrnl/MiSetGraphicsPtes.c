/*
 * XREFs of MiSetGraphicsPtes @ 0x140666BE8
 * Callers:
 *     MmSetGraphicsPtes @ 0x1407DBA70 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiSetGraphicsPtes(
        unsigned __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  ULONG_PTR *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // r12
  char v9; // di
  unsigned __int64 v10; // r15
  bool v11; // zf
  ULONG_PTR *v12; // rax
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int8 v14; // r13
  unsigned int v15; // edi
  ULONG_PTR v16; // rsi
  unsigned __int64 valid; // r8
  unsigned __int64 v19; // [rsp+60h] [rbp+8h]
  ULONG_PTR v20; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v11 = (a6 & 1) == 0;
  v19 = v10;
  a6 &= 1u;
  if ( !v11 )
  {
    v12 = &v20;
    if ( !a3 )
      v12 = 0LL;
    v6 = v12;
  }
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v14 = MiLockWorkingSetShared((__int64)p_Blink);
  v15 = (v9 & 2) == 0;
LABEL_6:
  if ( v15 < 2 )
  {
    v16 = v8;
    while ( 1 )
    {
      if ( v16 > v10 )
      {
        ++v15;
        goto LABEL_6;
      }
      if ( (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v19 )
        v10 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v16, &v20, 0);
      if ( valid != ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      if ( v15 )
        goto LABEL_17;
      while ( v16 <= v10 )
      {
        if ( *(_QWORD *)v16 )
        {
          v7 = -1073741800;
          MiUnlockPageTable((__int64)p_Blink, valid);
          goto LABEL_26;
        }
        v16 += 8LL;
      }
LABEL_20:
      MiUnlockPageTable((__int64)p_Blink, valid);
      if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared((__int64)p_Blink, v14);
        MiLockWorkingSetShared((__int64)p_Blink);
      }
      v16 = v10 + 8;
      v10 = v19;
    }
    if ( !v15 )
      goto LABEL_20;
LABEL_17:
    if ( !a6 && v6 )
      v6 += (((__int64)(v10 - v16) >> 3) + 1) / (v21 >> 12);
    goto LABEL_20;
  }
LABEL_26:
  MiUnlockWorkingSetShared((__int64)p_Blink, v14);
  return v7;
}
