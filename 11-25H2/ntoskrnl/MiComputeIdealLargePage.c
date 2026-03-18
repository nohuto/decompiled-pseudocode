/*
 * XREFs of MiComputeIdealLargePage @ 0x140686B50
 * Callers:
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetVadPte @ 0x140687718 (MiGetVadPte.c)
 */

char __fastcall MiComputeIdealLargePage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  ULONG_PTR VadPte; // rdi
  __int64 v12; // r11
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // r11
  unsigned __int64 valid; // r8
  _QWORD *i; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  ULONG_PTR j; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  int v25; // [rsp+20h] [rbp-48h]
  _QWORD *v26; // [rsp+28h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-38h]
  ULONG_PTR v28; // [rsp+38h] [rbp-30h]
  unsigned __int8 v29; // [rsp+70h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 48);
  v6 = ((unsigned __int64)v4 >> 19) & 3;
  v8 = MiVadPageSizes[v6];
  if ( v8 >= 0x10 && (v4 & 0x800000) != 0 )
  {
    v9 = -1LL;
    v25 = MiVadPageIndices[v6];
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    VadPte = MiGetVadPte(a1);
    v13 = v8;
    if ( v8 == 16 )
      v13 = 1LL;
    v14 = v13 * (512 - ((VadPte >> 3) & 0x1FF));
    v27 = MiGetVadPte(v12);
    v6 = MiGetVadPte(v15);
    v28 = v6;
    if ( VadPte != v27 || a3 < v14 )
    {
      v29 = MiLockWorkingSetShared((__int64)p_Blink);
      valid = MiLockLowestValidPageTableEx((__int64)p_Blink, VadPte, (ULONG_PTR *)&v26, 0);
      if ( valid == ((VadPte >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        for ( i = (_QWORD *)VadPte; ((unsigned __int16)i & 0xFFF) != 0 && i != (_QWORD *)v27; i = v26 )
        {
          v18 = 128LL;
          if ( v8 != 16 )
            v18 = 8LL;
          v26 = &i[v18 / 0xFFFFFFFFFFFFFFF8uLL];
          v19 = i[v18 / 0xFFFFFFFFFFFFFFF8uLL];
          if ( (*v26 & 1) != 0 )
          {
            v9 = ((v19 >> 12) & 0xFFFFFFFFFFLL) + v13 * ((__int64)(VadPte - (_QWORD)v26) >> 3);
            if ( v9 != -1 )
              goto LABEL_27;
            break;
          }
        }
        if ( a3 < v14 )
        {
          for ( j = VadPte + 8 * (a3 / v13); ; j = (ULONG_PTR)&v26[v21] )
          {
            v26 = (_QWORD *)j;
            if ( (j & 0xFFF) == 0 || j >= v28 )
              break;
            if ( (*(_QWORD *)j & 1) != 0 )
            {
              v22 = (*(_QWORD *)j >> 12) & 0xFFFFFFFFFFLL;
              v23 = v13 * ((__int64)((__int64)v26 - VadPte) >> 3);
              if ( v22 < v23 )
                v9 = -1LL;
              else
                v9 = v22 - v23;
              break;
            }
            v21 = 16LL;
            if ( v8 != 16 )
              v21 = 1LL;
          }
        }
      }
LABEL_27:
      MiUnlockPageTable((__int64)p_Blink, valid);
      LOBYTE(v6) = MiUnlockWorkingSetShared((__int64)p_Blink, v29);
      if ( v9 != -1 )
      {
        LOBYTE(v6) = v25;
        *(_DWORD *)(a4 + 48) = v25;
        *(_QWORD *)(a4 + 40) = v9;
      }
    }
  }
  return v6;
}
