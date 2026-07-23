/*
 * XREFs of MiRevertValidPte @ 0x140212130
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140483C1C (MI_SET_PTE_SHADOW_STACK.c)
 */

__int64 __fastcall MiRevertValidPte(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  unsigned int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // ecx
  unsigned int v14; // esi
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v16; // rbp
  int v17; // edi
  __int64 *v18; // rsi
  __int64 v19; // r12
  BOOL v20; // ebp
  __int64 v21; // rax
  __int64 result; // rax
  char v23; // bl
  ULONG_PTR v24; // r15
  __int64 v25; // rdi
  unsigned __int64 v26; // r8
  volatile signed __int32 *v27; // rsi
  __int64 v28; // r15
  unsigned __int64 LeafVa; // rax
  __int64 v30; // rdx
  ULONG_PTR v31; // [rsp+20h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-70h] BYREF
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]
  unsigned int v38; // [rsp+A0h] [rbp+8h]
  unsigned int v40; // [rsp+B8h] [rbp+20h]

  BugCheckParameter2 = 0LL;
  v7 = a3;
  v40 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
  {
    v26 = ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 19) & 3;
    v10 = MiVadPageIndices[v26];
    v38 = v10;
    if ( v10 <= 1 )
      v40 = 2 - v10;
    v30 = 16LL;
    v33 = MiVadPageSizes[v26];
    if ( v33 != 16 )
      v30 = 1LL;
    v35 = v30;
    v11 = v33;
    if ( v33 == 16 )
      v11 = 1LL;
  }
  else
  {
    v10 = 3;
    v38 = 3;
    v11 = 1LL;
    v33 = 1LL;
    v35 = 1LL;
  }
  v34 = v11;
  v12 = *a2;
  v36 = v12;
  v37 = (__int64)((_QWORD)a2 << 25) >> 16;
  v13 = v7 & 0x18;
  if ( (v12 & 0x18) == 8 )
  {
    v7 |= 0x18u;
    if ( v13 == 24 )
      v7 = a3;
  }
  else if ( (v12 & 0x10) != 0 )
  {
    if ( v13 != 8 )
      v7 = v7 & 0xFFFFFFE7 | 8;
  }
  else if ( (v7 & 0x18) != 0 )
  {
    v7 &= 0xFFFFFFE7;
  }
  if ( a4 > qword_140E2DD20 || (*(_QWORD *)(48 * a4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
  {
    v31 = 0LL;
    v14 = v7 | 0x4000000;
    if ( v10 > 1 )
      v14 = v7;
    ValidPte = MiMakeValidPte(a2, a4, v14);
    BugCheckParameter2 = ValidPte;
LABEL_12:
    if ( (v14 & 4) != 0 )
      BugCheckParameter2 = ValidPte | 0x42;
    goto LABEL_22;
  }
  v16 = 48 * a4 - 0x220000000000LL;
  if ( (MiFlags & 0x20000) != 0 && (v7 & 2) != 0 )
  {
    if ( v11 )
    {
      v27 = (volatile signed __int32 *)(v16 + 24);
      v28 = v11;
      do
      {
        LODWORD(v31) = 0;
        while ( _interlockedbittestandset64(v27, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v31);
          while ( *(__int64 *)v27 < 0 );
        }
        if ( !(unsigned int)MiGetPagePrivilege(v16) )
          MiMarkPfnVerified(v16, 7LL);
        _InterlockedAnd64((volatile signed __int64 *)v27, 0x7FFFFFFFFFFFFFFFuLL);
        v16 += 48LL;
        v27 += 12;
        --v28;
      }
      while ( v28 );
      LOBYTE(v12) = v36;
      v11 = v34;
      v10 = v38;
    }
    v16 += -48 * v11;
  }
  v14 = v7 | 0x4000000;
  if ( v10 > 1 )
    v14 = v7;
  ValidPte = MiMakeValidPte(a2, a4, v14);
  BugCheckParameter2 = ValidPte;
  v31 = v16;
  if ( !v16 )
    goto LABEL_12;
  v31 = v16;
  if ( (MiFlags & 0x1000000) != 0 && (v12 & 0x42) == 0x40 )
  {
    MI_SET_PTE_SHADOW_STACK((ULONG_PTR)&BugCheckParameter2);
    v31 = v16;
  }
LABEL_22:
  v17 = 0;
  v18 = a2;
  v19 = v35;
  v20 = (*(_DWORD *)(a1 + 48) & 0x600000) == 6291456;
  do
  {
    if ( v20 && (*v18 & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa(v18);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, a1);
      v20 = 0;
    }
    BugCheckParameter2 = BugCheckParameter2 & 0xFFF0000000000FFFuLL | ((a4 & 0xFFFFFFFFFFLL) << 12);
    if ( !v17 )
    {
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
        || (v21 = *v18, (BugCheckParameter2 & 0x40) == 0) && (v21 & 0x40) != 0
        || (BugCheckParameter2 & 2) == 0 && (v21 & 2) != 0
        || (BugCheckParameter2 & 0x8000000000000000uLL) != 0LL && v21 >= 0 )
      {
        v17 = 1;
      }
    }
    ++a4;
    if ( v38 <= 1 )
      result = MiRewritePteWithLockBit(
                 &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
                 0LL,
                 v18,
                 BugCheckParameter2);
    else
      result = MiWriteValidPteNewProtection((ULONG_PTR)v18);
    ++v18;
    --v19;
  }
  while ( v19 );
  v23 = v36;
  v24 = v31;
  if ( v17 )
  {
    if ( !v40 )
    {
      v25 = v33;
      result = MiInsertTbFlushEntry(a5, v37, v33);
      goto LABEL_38;
    }
    result = MiInsertLargeTbFlushEntry(a5, v40, a2);
  }
  v25 = v33;
LABEL_38:
  if ( v25 == 1 && (v23 & 0x42) != 0 )
  {
    if ( v24 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x40 )
        return MiLockPageAndSetDirty(v24, 1LL);
      result = MiRotatedToFrameBuffer(a2);
      if ( (_DWORD)result )
        return MiLockPageAndSetDirty(v24, 1LL);
    }
  }
  return result;
}
