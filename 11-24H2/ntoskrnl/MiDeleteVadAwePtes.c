/*
 * XREFs of MiDeleteVadAwePtes @ 0x1404B4D2C
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDeleteLargeUserPde @ 0x1404B4B44 (MiDeleteLargeUserPde.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiCompareTbFlushTimeStamp @ 0x14044D95C (MiCompareTbFlushTimeStamp.c)
 *     MiGetAweViewPageSize @ 0x1404B4F9C (MiGetAweViewPageSize.c)
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 */

__int64 __fastcall MiDeleteVadAwePtes(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 AweViewPageSize; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rbp
  unsigned __int64 *v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int128 v27; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+50h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 184);
  v27 = 0LL;
  v28 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 40LL);
  v7 = *(_QWORD *)(v6 + 32);
  AweViewPageSize = MiGetAweViewPageSize(v6);
  if ( !AweViewPageSize )
    AweViewPageSize = *(_QWORD *)(v7 + 16);
  v9 = 1LL;
  if ( AweViewPageSize == 16 )
    v9 = 16LL;
  v10 = 0LL;
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  v12 = v11;
  if ( (v11 & 1) != 0 )
  {
    v10 = 1LL;
  }
  else if ( (v11 & 0x800) == 0 && (v11 & 0x3E0) == 0x300 )
  {
    HIDWORD(v13) = HIDWORD(v11);
    if ( qword_140E2DCC0 )
    {
      if ( (v11 & 0x10) != 0 )
        HIDWORD(v13) = HIDWORD(v11);
      else
        v13 = v11 & ~qword_140E2DCC0;
    }
    if ( MiCompareTbFlushTimeStamp(SHIDWORD(v13)) )
      v10 = 1LL;
  }
  v14 = 0;
  if ( !a3 )
  {
    v15 = *(_QWORD *)(a1 + 128);
    v16 = v9;
    v17 = (_QWORD *)(8 * v9 + a2);
    if ( v15 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v15 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    while ( (unsigned __int64)&v17[v16 - 1] <= v15 && *v17 == v12 )
    {
      v18 = v10 + 1;
      ++v14;
      v17 = (_QWORD *)((char *)v17 + v16 * 8);
      if ( !v10 )
        v18 = 0LL;
      v10 = v18;
    }
  }
  v19 = v14 + 1;
  *(_DWORD *)(a1 + 12) = v9 * v19 - 1;
  v20 = (unsigned int)v9 * v10;
  MiWriteAwePtes(v6, 0, v19, 0, a2, 0, (__int64)&v27);
  v21 = (unsigned __int64 *)v27;
  if ( (_QWORD)v27 )
  {
    if ( (*(_DWORD *)(v7 + 8) & 8) != 0 )
    {
      v22 = *(_QWORD *)(v3 + 96);
      MiLockHugePfnInternal(v27);
      v23 = *v21;
      if ( v22 )
      {
        v24 = ((v22 - qword_140E30100) >> 3 << 17) ^ (((v22 - qword_140E30100) >> 3 << 17) ^ v23) & 0xFFFFFF800001FFFFuLL;
      }
      else
      {
        *(_QWORD *)(v3 + 104) = v21;
        v24 = v23 & 0xFFFFFF800001FFFFuLL;
      }
      *v21 = v24;
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v21 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v21 - qword_140E30100) >> 3) & 0x1F)));
    }
    else
    {
      v25 = *(_QWORD *)(v3 + 96);
      if ( v25 )
        **((_QWORD **)&v27 + 1) = (v25 >> 3) ^ (**((_QWORD **)&v27 + 1) ^ (v25 >> 3)) & 0xFFFFF00000000001uLL;
      else
        *(_QWORD *)(v3 + 104) = *((_QWORD *)&v27 + 1);
    }
    *(_QWORD *)(v3 + 96) = v21;
    if ( BYTE4(v28) )
      *(_BYTE *)(v3 + 116) = 1;
  }
  return v20;
}
