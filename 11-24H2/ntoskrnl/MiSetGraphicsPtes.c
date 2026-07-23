/*
 * XREFs of MiSetGraphicsPtes @ 0x140673868
 * Callers:
 *     MmSetGraphicsPtes @ 0x1407EBEE0 (MmSetGraphicsPtes.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
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
  unsigned __int64 v16; // rsi
  unsigned __int64 valid; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]
  ULONG_PTR v23; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+20h]

  v24 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v11 = (a6 & 1) == 0;
  v22 = v10;
  a6 &= 1u;
  if ( !v11 )
  {
    v12 = &v23;
    if ( !a3 )
      v12 = 0LL;
    v6 = v12;
  }
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v14 = MiLockWorkingSetShared((__int64)p_Blink, a2, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
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
      if ( (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v22 )
        v10 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v16, &v23, 0);
      if ( valid != ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      if ( v15 )
        goto LABEL_17;
      while ( v16 <= v10 )
      {
        if ( *(_QWORD *)v16 )
        {
          v7 = -1073741800;
          MiUnlockPageTableInternal((__int64)p_Blink, valid);
          goto LABEL_26;
        }
        v16 += 8LL;
      }
LABEL_20:
      MiUnlockPageTableInternal((__int64)p_Blink, valid);
      if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared((__int64)p_Blink, v14);
        MiLockWorkingSetShared((__int64)p_Blink, v18, v19, v20);
      }
      v16 = v10 + 8;
      v10 = v22;
    }
    if ( !v15 )
      goto LABEL_20;
LABEL_17:
    if ( !a6 && v6 )
      v6 += (((__int64)(v10 - v16) >> 3) + 1) / (v24 >> 12);
    goto LABEL_20;
  }
LABEL_26:
  MiUnlockWorkingSetShared((__int64)p_Blink, v14);
  return v7;
}
