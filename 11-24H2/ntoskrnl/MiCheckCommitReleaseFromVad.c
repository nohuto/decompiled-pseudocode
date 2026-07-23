/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x14066AA50
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140269F40 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x14066AE54 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x14066AF14 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned __int64 v6; // r10
  __int64 v7; // rsi
  __int64 v9; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  char v13; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // rdx
  int v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h] BYREF
  __int64 v31; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]
  char i; // [rsp+A8h] [rbp+20h]

  v6 = (unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32;
  v7 = 0LL;
  v30 = 0LL;
  v9 = a3;
  v11 = 8 * ((*(unsigned int *)(a4 + 24) | v6) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v32 = v12;
  v13 = MiLockWorkingSetShared(a3, 0xFFFFFFFFFLL, 0xFFFFF68000000000uLL, a4);
  for ( i = v13; v11 <= v12; v13 = i )
  {
    NextPageTable = MiGetNextPageTable(v11, v12, v13, 0, &v29);
    v15 = NextPageTable;
    if ( NextPageTable != v11 )
    {
      v16 = NextPageTable ? (__int64)(NextPageTable - v11) >> 3 : ((__int64)(v12 - v11) >> 3) + 1;
      v7 += MiComputeCommitChargeForZeroPteRange(a4, v11, v16);
      if ( !v15 )
        break;
    }
    v11 = v15;
    v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = v12;
    v31 = v17;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v12 )
      v18 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v15 <= v18 )
    {
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v11);
        v20 = v19;
        if ( !v19 )
          break;
        if ( (v19 & 1) != 0 )
        {
          if ( (v19 & 0x200) == 0 || (*(_DWORD *)(a4 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v11) )
            goto LABEL_49;
          v22 = 48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( (*(_QWORD *)(v22 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v22 + 8) > 0 )
            goto LABEL_49;
          if ( *(_QWORD *)(a2 + 640) && MiLocateCloneAddress(a2, *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) )
            goto LABEL_49;
LABEL_48:
          ++v7;
          goto LABEL_49;
        }
        if ( (v19 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v19) )
          {
            v23 = v7 + 1;
            if ( ((v20 >> 5) & 5) != 5 )
              v23 = v7;
            v7 = v23;
            goto LABEL_49;
          }
          if ( MI_PROTO_FORMAT_COMBINED(v20) )
            goto LABEL_49;
          if ( *(_QWORD *)(a2 + 640) != v24 )
          {
            if ( qword_140E2DCC0 )
            {
              if ( (v20 & 0x10) != 0 )
                v20 &= ~0x10uLL;
              else
                v20 &= ~qword_140E2DCC0;
            }
            if ( MiLocateCloneAddress(a2, (__int64)v20 >> 16) )
              goto LABEL_49;
          }
          v21 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, &v30);
          goto LABEL_34;
        }
        if ( (v19 & 0x800) != 0 )
        {
          v25 = MiLockTransitionLeafPageEx(v11, 0LL, 0);
          if ( v25 )
          {
            if ( (*(_BYTE *)(v25 + 34) & 0x10) == 0
              && (*(_DWORD *)(v25 + 16) & 4) == 0
              && !(unsigned __int16)*(_DWORD *)(v25 + 32) )
            {
              ++*a6;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v11 -= 8LL;
          }
          goto LABEL_49;
        }
        if ( (v19 & 4) != 0 )
        {
          if ( !a5 )
            goto LABEL_49;
          v26 = !MiIsPteInStore(a1, v19);
        }
        else
        {
          v26 = ((v19 >> 5) & 0x1F) == 16;
        }
        if ( !v26 )
          goto LABEL_48;
LABEL_49:
        v11 += 8LL;
        if ( v11 > v18 )
        {
          v17 = v31;
          v12 = v32;
          goto LABEL_51;
        }
      }
      v21 = MiComputeCommitChargeForZeroPteRange(a4, v11, 1LL);
LABEL_34:
      v7 += v21;
      goto LABEL_49;
    }
LABEL_51:
    v27 = v17;
    v9 = a3;
    MiUnlockPageTableInternal(a3, v27);
  }
  MiUnlockWorkingSetShared(v9, v13);
  return v7;
}
