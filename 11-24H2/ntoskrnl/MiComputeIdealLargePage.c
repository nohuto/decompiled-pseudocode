/*
 * XREFs of MiComputeIdealLargePage @ 0x140693080
 * Callers:
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetVadPte @ 0x140693C48 (MiGetVadPte.c)
 */

char __fastcall MiComputeIdealLargePage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int64 VadPte; // rdi
  __int64 v12; // r11
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 valid; // r8
  _QWORD *i; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  ULONG_PTR j; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  int v28; // [rsp+20h] [rbp-48h]
  _QWORD *v29; // [rsp+28h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-38h]
  ULONG_PTR v31; // [rsp+38h] [rbp-30h]
  unsigned __int8 v32; // [rsp+70h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 48);
  v6 = ((unsigned __int64)v4 >> 19) & 3;
  v8 = MiVadPageSizes[v6];
  if ( v8 >= 0x10 && (v4 & 0x800000) != 0 )
  {
    v9 = -1LL;
    v28 = MiVadPageIndices[v6];
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    VadPte = MiGetVadPte(a1);
    v13 = v8;
    if ( v8 == 16 )
      v13 = 1LL;
    v14 = v13 * (512 - ((VadPte >> 3) & 0x1FF));
    v30 = MiGetVadPte(v12);
    v6 = MiGetVadPte(v15);
    v31 = v6;
    if ( VadPte != v30 || a3 < v14 )
    {
      v32 = MiLockWorkingSetShared((__int64)p_Blink, v16, v17, v18);
      valid = MiLockLowestValidPageTableEx((__int64)p_Blink, VadPte, (ULONG_PTR *)&v29, 0);
      if ( valid == ((VadPte >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        for ( i = (_QWORD *)VadPte; ((unsigned __int16)i & 0xFFF) != 0 && i != (_QWORD *)v30; i = v29 )
        {
          v21 = 128LL;
          if ( v8 != 16 )
            v21 = 8LL;
          v29 = &i[v21 / 0xFFFFFFFFFFFFFFF8uLL];
          v22 = i[v21 / 0xFFFFFFFFFFFFFFF8uLL];
          if ( (*v29 & 1) != 0 )
          {
            v9 = ((v22 >> 12) & 0xFFFFFFFFFFLL) + v13 * ((__int64)(VadPte - (_QWORD)v29) >> 3);
            if ( v9 != -1 )
              goto LABEL_27;
            break;
          }
        }
        if ( a3 < v14 )
        {
          for ( j = VadPte + 8 * (a3 / v13); ; j = (ULONG_PTR)&v29[v24] )
          {
            v29 = (_QWORD *)j;
            if ( (j & 0xFFF) == 0 || j >= v31 )
              break;
            if ( (*(_QWORD *)j & 1) != 0 )
            {
              v25 = (*(_QWORD *)j >> 12) & 0xFFFFFFFFFFLL;
              v26 = v13 * ((__int64)((__int64)v29 - VadPte) >> 3);
              if ( v25 < v26 )
                v9 = -1LL;
              else
                v9 = v25 - v26;
              break;
            }
            v24 = 16LL;
            if ( v8 != 16 )
              v24 = 1LL;
          }
        }
      }
LABEL_27:
      MiUnlockPageTableInternal((__int64)p_Blink, valid);
      LOBYTE(v6) = MiUnlockWorkingSetShared((__int64)p_Blink, v32);
      if ( v9 != -1 )
      {
        LOBYTE(v6) = v28;
        *(_DWORD *)(a4 + 48) = v28;
        *(_QWORD *)(a4 + 40) = v9;
      }
    }
  }
  return v6;
}
