/*
 * XREFs of MiBitmapRangeZeroEx @ 0x140442114
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiBitmapRangeZeroEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  int v6; // ebx
  unsigned __int64 v7; // rcx
  __int64 i; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 j; // rax
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  memset(v15, 0, 32);
  v6 = 3;
  v7 = *(_QWORD *)(a1 + 8) + a2 / 8;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15[i] = v7;
  }
  v9 = 3LL;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_11;
    v10 = v15[--v9];
    --v6;
    v11 = MI_READ_PTE_LOCK_FREE(v10);
    if ( !v11 )
      break;
    if ( (v11 & 0x81) == 0x81 )
      goto LABEL_9;
  }
  v3 = 1;
LABEL_9:
  for ( j = (__int64)((v10 + 8) << 25) >> 16; v6; --v6 )
    j = j << 25 >> 16;
  if ( !j )
LABEL_11:
    j = ((v15[0] << 25) + 0x10000000LL) >> 16;
  *a3 = 8 * (j - *(_QWORD *)(a1 + 8));
  return v3;
}
