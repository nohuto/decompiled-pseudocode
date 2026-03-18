/*
 * XREFs of MiCommitHotPatchTable @ 0x140671714
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407E56B0 (MiPrepareToHotPatchImage.c)
 *     MmCommitHotPatchTable @ 0x1407E6108 (MmCommitHotPatchTable.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
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
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+28h] [rbp-50h]
  ULONG_PTR v21; // [rsp+30h] [rbp-48h]
  unsigned __int8 v23; // [rsp+98h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
    v10 = 0;
    v20 = a2;
    v11 = a3 + (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32));
    *(_DWORD *)(a1 + 52) += a3;
    *(_BYTE *)(a1 + 34) = BYTE4(v11);
    v12 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    DemandZeroPte = MiMakeDemandZeroPte(1);
    v14 = MiMakeDemandZeroPte(3);
    v19 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v19;
    v21 = v19 + 8 * (a3 - 1);
    v23 = MiLockWorkingSetShared(p_Blink);
    if ( v19 <= v21 )
    {
      v17 = v20;
      v16 = v19;
      do
      {
        if ( v17 == a2 || (v15 & 0xFFF) == 0 )
        {
          if ( v10 )
          {
            MiIncreaseUsedPtes(v16, v8, v10, 2);
            v10 = 0;
          }
          if ( v8 )
            MiUnlockPageTable(p_Blink, v8);
          v8 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v15, v12, v23, 0);
          v16 = v19;
        }
        v18 = DemandZeroPte;
        if ( (((_BYTE)v15 - (_BYTE)v16) & 8) == 0 )
          v18 = v14;
        ++v10;
        *(_QWORD *)v15 = v18;
        v17 += 4096LL;
        v15 += 8LL;
      }
      while ( v15 <= v21 );
    }
    MiIncreaseUsedPtes(v16, v8, v10, 2);
    MiUnlockPageTable(p_Blink, v8);
    MiUnlockWorkingSetShared(p_Blink, v23);
    return 0LL;
  }
  return result;
}
