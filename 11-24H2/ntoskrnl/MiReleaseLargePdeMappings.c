/*
 * XREFs of MiReleaseLargePdeMappings @ 0x140491DC4
 * Callers:
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x1404519BC (MiTbFlushTimeStampMayNeedFlush.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiReleaseLargePdeMappings(__int64 a1, _QWORD *a2, BOOL a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // r11d
  int v8; // eax
  int v9; // r9d
  __int64 DemandZeroPte; // rbx
  __int64 v11; // r11
  __int64 CurrentIrql; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbp
  unsigned __int8 v19; // r13
  unsigned int v20; // r12d
  BOOL v21; // ebp
  signed __int32 v23[8]; // [rsp+0h] [rbp-198h] BYREF
  char v24; // [rsp+30h] [rbp-168h]
  BOOL MayNeedFlush; // [rsp+34h] [rbp-164h]
  int v26; // [rsp+38h] [rbp-160h]
  unsigned __int64 v27; // [rsp+40h] [rbp-158h]
  __int64 v28; // [rsp+48h] [rbp-150h]
  unsigned __int64 v29; // [rsp+50h] [rbp-148h]
  _DWORD *v30; // [rsp+58h] [rbp-140h]
  unsigned __int64 v31; // [rsp+60h] [rbp-138h]
  __int64 v32; // [rsp+68h] [rbp-130h]
  __int64 v33; // [rsp+70h] [rbp-128h]
  __int64 v34; // [rsp+78h] [rbp-120h]
  _BYTE v35[208]; // [rsp+80h] [rbp-118h] BYREF

  MayNeedFlush = a3;
  v30 = a2;
  memset_0(v35, 0, 0xC8uLL);
  v5 = *a2 >> 16;
  v6 = ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = v6;
  MiInitializeTbFlushList((__int64)v35, (__int64)&unk_140E38100, 20, 8, 1);
  v8 = v7 + 12;
  if ( *(_DWORD *)(a1 + 44) != v9 )
    v8 = v7 + 10;
  v26 = v8;
  DemandZeroPte = MiMakeDemandZeroPte((unsigned __int8)v7 + 16);
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  v13 = 0LL;
  v33 = 0LL;
  do
  {
    v14 = v6 + 8 * v5;
    v5 = *(_QWORD *)v14;
    if ( (*(_QWORD *)v14 & 2) != 0 )
    {
      v16 = 1LL;
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 8);
      if ( qword_140E2DB80 )
      {
        if ( (v15 & 0x10) != 0 )
          v15 &= ~0x10uLL;
        else
          v15 &= ~qword_140E2DB80;
      }
      v16 = HIDWORD(v15);
    }
    if ( v5 )
    {
      if ( qword_140E2DB80 )
      {
        if ( (v5 & 0x10) != 0 )
          v5 &= ~0x10uLL;
        else
          v5 &= ~qword_140E2DB80;
      }
      v5 >>= 25;
    }
    v27 = v5;
    v28 = v16 + v11;
    v17 = 0LL;
    v31 = v16 << 21;
    v18 = (((__int64)((v14 << 25) - v13) >> 16 << 25) - v13) >> 16;
    v29 = v18;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v19 = 17;
      v24 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)&unk_140E38100);
    }
    else
    {
      v19 = MiLockWorkingSetShared((__int64)&unk_140E38100);
      v24 = v19;
    }
    v20 = 0;
    if ( v16 )
    {
      v21 = MayNeedFlush;
      while ( 1 )
      {
        if ( !v17 )
          goto LABEL_27;
        if ( (v14 & 0xFFF) == 0 )
          break;
LABEL_20:
        *(_QWORD *)v14 = DemandZeroPte;
        if ( v21 )
          MiInsertLargeTbFlushEntry((__int64)v35, 1, v14);
        ++v20;
        v14 += 8LL;
        if ( v20 >= v16 )
        {
          v5 = v27;
          v18 = v29;
          v19 = v24;
          goto LABEL_24;
        }
      }
      MiUnlockPageTableInternal((__int64)&unk_140E38100, v17);
LABEL_27:
      v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E38100, v17);
      goto LABEL_20;
    }
LABEL_24:
    MiUnlockPageTableInternal((__int64)&unk_140E38100, v17);
    MiUnlockWorkingSetShared((__int64)&unk_140E38100, v19);
    if ( MayNeedFlush )
    {
      MiFlushTbList((__int64)v35);
      if ( v5 )
      {
        _InterlockedOr(v23, 0);
        MayNeedFlush = MiTbFlushTimeStampMayNeedFlush((unsigned __int16)*v30, KiTbFlushTimeStamp, 0xFFFF);
      }
    }
    MiReturnSystemVa(v18, v18 + v31, v26);
    v11 = v28;
    v6 = v32;
    v13 = v33;
    LOBYTE(CurrentIrql) = v34;
  }
  while ( v5 );
  return v28;
}
