/*
 * XREFs of MiLockPoolCommitPageTable @ 0x14034BC80
 * Callers:
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x14034C910 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPoolCommitPageTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rbp
  ULONG_PTR v5; // rdi
  signed int v6; // eax
  unsigned __int64 v7; // rcx
  __int64 i; // rdx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r9
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned __int64 valid; // rax
  __int64 v15; // [rsp+28h] [rbp-40h]
  _OWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0LL;
  v4 = *(_QWORD *)(a1 + 72);
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = MiFastLockLeafPageTable(v4, v5, 0);
  if ( v6 )
  {
    v7 = v5;
    memset(v16, 0, sizeof(v16));
    for ( i = 0LL; i < 4; ++i )
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v16 + i) = v7;
    }
    v9 = *((_QWORD *)v16 + v6);
    v10 = (_QWORD *)*(&v15 + v6);
    v17 = v10;
    if ( v9 )
    {
      v11 = v9;
      v12 = v6;
      if ( v6 == 1 )
        goto LABEL_6;
      if ( v6 != 2 )
      {
        v12 = 0;
        goto LABEL_14;
      }
      goto LABEL_11;
    }
  }
  valid = MiLockLowestValidPageTableEx(v4, a2, (ULONG_PTR *)&v17, 0);
  v10 = v17;
  v11 = valid;
  if ( v17 != (_QWORD *)a2 )
  {
    if ( v17 != (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    {
LABEL_13:
      v12 = 0;
      if ( !v11 )
        goto LABEL_7;
LABEL_14:
      MiUnlockPageTableInternal(v4, v11);
      v11 = 0LL;
      goto LABEL_7;
    }
    v12 = 2;
LABEL_11:
    if ( (*v10 & 1) != 0 )
    {
      if ( (*v10 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x5302uLL, v5, 0LL, 0LL);
      if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
        KeBugCheckEx(0x1Au, 0x5303uLL, v5, 0LL, 0LL);
    }
    else if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
    {
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  v12 = 1;
LABEL_6:
  if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
    KeBugCheckEx(0x1Au, 0x5301uLL, v5, 0LL, 0LL);
LABEL_7:
  *(_QWORD *)(a1 + 88) = v11;
  return v12;
}
