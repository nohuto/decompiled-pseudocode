/*
 * XREFs of MiReleaseLargePdeMappings @ 0x140492BE8
 * Callers:
 *     MiReleasePteMappings @ 0x1402BF490 (MiReleasePteMappings.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8 (MiTbFlushTimeStampMayNeedFlush.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
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
  MiInitializeTbFlushList((__int64)v37, (__int64)&unk_140E37EC0, 20, 8, 1);
  v8 = v7 + 12;
  if ( *(_DWORD *)(a1 + 44) != v9 )
    v8 = v7 + 10;
  v28 = v8;
  DemandZeroPte = MiMakeDemandZeroPte((unsigned __int8)v7 + 16);
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  v13 = 0LL;
  v35 = 0LL;
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
      if ( qword_140E2D940 )
      {
        if ( (v15 & 0x10) != 0 )
          v15 &= ~0x10uLL;
        else
          v15 &= ~qword_140E2D940;
      }
      v16 = HIDWORD(v15);
    }
    if ( v5 )
    {
      if ( qword_140E2D940 )
      {
        if ( (v5 & 0x10) != 0 )
          v5 &= ~0x10uLL;
        else
          v5 &= ~qword_140E2D940;
      }
      v5 >>= 25;
    }
    v29 = v5;
    v30 = v16 + v11;
    v17 = 0LL;
    v33 = v16 << 21;
    v18 = (((__int64)((v14 << 25) - v13) >> 16 << 25) - v13) >> 16;
    v31 = v18;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v21 = 17;
      v26 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)&unk_140E37EC0);
    }
    else
    {
      v21 = MiLockWorkingSetShared((__int64)&unk_140E37EC0);
      v26 = v21;
    }
    v22 = 0;
    if ( v16 )
    {
      v23 = MayNeedFlush;
      while ( 1 )
      {
        if ( !v17 )
          goto LABEL_28;
        if ( (v14 & 0xFFF) == 0 )
          break;
LABEL_20:
        *(_QWORD *)v14 = DemandZeroPte;
        if ( v23 )
          MiInsertLargeTbFlushEntry((__int64)v37, 1, v14);
        ++v22;
        v14 += 8LL;
        if ( v22 >= v16 )
        {
          v5 = v29;
          v18 = v31;
          v21 = v26;
          goto LABEL_24;
        }
      }
      MiUnlockPageTable((__int64)&unk_140E37EC0, v17);
LABEL_28:
      v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37EC0, v17, v19, v20);
      goto LABEL_20;
    }
LABEL_24:
    MiUnlockPageTable((__int64)&unk_140E37EC0, v17);
    MiUnlockWorkingSetShared((__int64)&unk_140E37EC0, v21);
    if ( MayNeedFlush )
    {
      MiFlushTbList((__int64)v37);
      if ( v5 )
      {
        _InterlockedOr(v25, 0);
        MayNeedFlush = MiTbFlushTimeStampMayNeedFlush((unsigned __int16)*v32, KiTbFlushTimeStamp, 0xFFFF);
      }
    }
    MiReturnSystemVa(v18, v18 + v33);
    v11 = v30;
    v6 = v34;
    v13 = v35;
    LOBYTE(CurrentIrql) = v36;
  }
  while ( v5 );
  return v30;
}
