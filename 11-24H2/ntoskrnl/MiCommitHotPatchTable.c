/*
 * XREFs of MiCommitHotPatchTable @ 0x14067E0B4
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MmCommitHotPatchTable @ 0x1407F6688 (MmCommitHotPatchTable.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitHotPatchTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r12
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 p_Blink; // r12
  unsigned int v10; // r15d
  __int64 v11; // rdx
  int v12; // ebx
  __int64 DemandZeroPte; // rdi
  __int64 v14; // rsi
  ULONG_PTR v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 v23; // [rsp+28h] [rbp-50h]
  ULONG_PTR v24; // [rsp+30h] [rbp-48h]
  unsigned __int8 v26; // [rsp+98h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process);
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
    v10 = 0;
    v23 = a2;
    v11 = a3 + (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32));
    *(_DWORD *)(a1 + 52) += a3;
    *(_BYTE *)(a1 + 34) = BYTE4(v11);
    v12 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    DemandZeroPte = MiMakeDemandZeroPte(1);
    v14 = MiMakeDemandZeroPte(3);
    v22 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v22;
    v24 = v22 + 8 * (a3 - 1);
    v26 = MiLockWorkingSetShared(p_Blink, v16, v17, v18);
    if ( v22 <= v24 )
    {
      v20 = v23;
      v19 = v22;
      do
      {
        if ( v20 == a2 || (v15 & 0xFFF) == 0 )
        {
          if ( v10 )
          {
            MiIncreaseUsedPtes(v19, v8, v10, 2LL);
            v10 = 0;
          }
          if ( v8 )
            MiUnlockPageTableInternal(p_Blink, v8);
          v8 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v15, v12, v26, 0);
          v19 = v22;
        }
        v21 = DemandZeroPte;
        if ( (((_BYTE)v15 - (_BYTE)v19) & 8) == 0 )
          v21 = v14;
        ++v10;
        *(_QWORD *)v15 = v21;
        v20 += 4096LL;
        v15 += 8LL;
      }
      while ( v15 <= v24 );
    }
    MiIncreaseUsedPtes(v19, v8, v10, 2LL);
    MiUnlockPageTableInternal(p_Blink, v8);
    MiUnlockWorkingSetShared(p_Blink, v26);
    return 0LL;
  }
  return result;
}
