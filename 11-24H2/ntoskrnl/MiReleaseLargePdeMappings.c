/*
 * XREFs of MiReleaseLargePdeMappings @ 0x14048CC64
 * Callers:
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x140446A68 (MiTbFlushTimeStampMayNeedFlush.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiReleaseLargePdeMappings(__int64 a1, _QWORD *a2, BOOL a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // r11d
  int v8; // eax
  int v9; // r9d
  __int64 DemandZeroPte; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 CurrentIrql; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  unsigned __int8 v21; // r13
  unsigned int v22; // r12d
  BOOL v23; // ebp
  signed __int32 v25[8]; // [rsp+0h] [rbp-198h] BYREF
  char v26; // [rsp+30h] [rbp-168h]
  BOOL MayNeedFlush; // [rsp+34h] [rbp-164h]
  int v28; // [rsp+38h] [rbp-160h]
  unsigned __int64 v29; // [rsp+40h] [rbp-158h]
  __int64 v30; // [rsp+48h] [rbp-150h]
  unsigned __int64 v31; // [rsp+50h] [rbp-148h]
  _DWORD *v32; // [rsp+58h] [rbp-140h]
  unsigned __int64 v33; // [rsp+60h] [rbp-138h]
  __int64 v34; // [rsp+68h] [rbp-130h]
  __int64 v35; // [rsp+70h] [rbp-128h]
  __int64 v36; // [rsp+78h] [rbp-120h]
  _BYTE v37[208]; // [rsp+80h] [rbp-118h] BYREF

  MayNeedFlush = a3;
  v32 = a2;
  memset_0(v37, 0, 0xC8uLL);
  v5 = *a2 >> 16;
  v6 = ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = v6;
  MiInitializeTbFlushList((__int64)v37, (__int64)&unk_140E38240, 20, 8, 1);
  v8 = v7 + 12;
  if ( *(_DWORD *)(a1 + 44) != v9 )
    v8 = v7 + 10;
  v28 = v8;
  DemandZeroPte = MiMakeDemandZeroPte((unsigned __int8)v7 + 16);
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  v15 = 0LL;
  v35 = 0LL;
  do
  {
    v16 = v6 + 8 * v5;
    v5 = *(_QWORD *)v16;
    if ( (*(_QWORD *)v16 & 2) != 0 )
    {
      v18 = 1LL;
    }
    else
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( qword_140E2DCC0 )
      {
        if ( (v17 & 0x10) != 0 )
          v17 &= ~0x10uLL;
        else
          v17 &= ~qword_140E2DCC0;
      }
      v18 = HIDWORD(v17);
    }
    if ( v5 )
    {
      if ( qword_140E2DCC0 )
      {
        if ( (v5 & 0x10) != 0 )
          v5 &= ~0x10uLL;
        else
          v5 &= ~qword_140E2DCC0;
      }
      v5 >>= 25;
    }
    v29 = v5;
    v30 = v18 + v13;
    v19 = 0LL;
    v33 = v18 << 21;
    v20 = (((__int64)((v16 << 25) - v15) >> 16 << 25) - v15) >> 16;
    v31 = v20;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v21 = 17;
      v26 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)&unk_140E38240);
    }
    else
    {
      v21 = MiLockWorkingSetShared((__int64)&unk_140E38240, CurrentIrql, v11, v12);
      v26 = v21;
    }
    v22 = 0;
    if ( v18 )
    {
      v23 = MayNeedFlush;
      while ( 1 )
      {
        if ( !v19 )
          goto LABEL_27;
        if ( (v16 & 0xFFF) == 0 )
          break;
LABEL_20:
        *(_QWORD *)v16 = DemandZeroPte;
        if ( v23 )
          MiInsertLargeTbFlushEntry((__int64)v37, 1, v16);
        ++v22;
        v16 += 8LL;
        if ( v22 >= v18 )
        {
          v5 = v29;
          v20 = v31;
          v21 = v26;
          goto LABEL_24;
        }
      }
      MiUnlockPageTableInternal((__int64)&unk_140E38240, v19);
LABEL_27:
      v19 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E38240, v19);
      goto LABEL_20;
    }
LABEL_24:
    MiUnlockPageTableInternal((__int64)&unk_140E38240, v19);
    MiUnlockWorkingSetShared((__int64)&unk_140E38240, v21);
    if ( MayNeedFlush )
    {
      MiFlushTbList((__int64)v37);
      if ( v5 )
      {
        _InterlockedOr(v25, 0);
        MayNeedFlush = MiTbFlushTimeStampMayNeedFlush((unsigned __int16)*v32, KiTbFlushTimeStamp, 0xFFFF);
      }
    }
    MiReturnSystemVa(v20, v20 + v33);
    v13 = v30;
    v6 = v34;
    v15 = v35;
    CurrentIrql = v36;
  }
  while ( v5 );
  return v30;
}
