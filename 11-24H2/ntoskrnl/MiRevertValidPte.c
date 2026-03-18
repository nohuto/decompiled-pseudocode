/*
 * XREFs of MiRevertValidPte @ 0x140237FA0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140488B2C (MI_SET_PTE_SHADOW_STACK.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 */

void __fastcall MiRevertValidPte(__int64 a1, volatile __int64 *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  unsigned int v10; // r10d
  __int64 v11; // rdx
  volatile __int64 v12; // rbx
  int v13; // ecx
  unsigned int v14; // esi
  __int64 ValidPte; // rax
  ULONG_PTR v16; // rbp
  int v17; // edi
  volatile __int64 *v18; // rsi
  __int64 v19; // r12
  BOOL v20; // ebp
  ULONG_PTR v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  char v24; // bl
  __int64 v25; // r15
  __int64 v26; // rdi
  unsigned __int64 v27; // r8
  volatile signed __int32 *v28; // rsi
  __int64 v29; // r15
  __int64 LeafVa; // rax
  __int64 v31; // rdx
  ULONG_PTR v32; // [rsp+20h] [rbp-78h] BYREF
  signed __int64 v33; // [rsp+28h] [rbp-70h] BYREF
  __int64 v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  volatile __int64 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  unsigned int v39; // [rsp+A0h] [rbp+8h]
  unsigned int v41; // [rsp+B8h] [rbp+20h]

  v33 = 0LL;
  v7 = a3;
  v41 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
  {
    v27 = ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 19) & 3;
    v10 = MiVadPageIndices[v27];
    v39 = v10;
    if ( v10 <= 1 )
      v41 = 2 - v10;
    v31 = 16LL;
    v34 = MiVadPageSizes[v27];
    if ( v34 != 16 )
      v31 = 1LL;
    v36 = v31;
    v11 = v34;
    if ( v34 == 16 )
      v11 = 1LL;
  }
  else
  {
    v10 = 3;
    v39 = 3;
    v11 = 1LL;
    v34 = 1LL;
    v36 = 1LL;
  }
  v35 = v11;
  v12 = *a2;
  v37 = v12;
  v38 = (__int64)((_QWORD)a2 << 25) >> 16;
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
  if ( a4 > qword_140E2DBE0 || (*(_QWORD *)(48 * a4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
  {
    v32 = 0LL;
    v14 = v7 | 0x4000000;
    if ( v10 > 1 )
      v14 = v7;
    ValidPte = MiMakeValidPte(a2, a4, v14);
    v33 = ValidPte;
LABEL_12:
    if ( (v14 & 4) != 0 )
      v33 = ValidPte | 0x42;
    goto LABEL_22;
  }
  v16 = 48 * a4 - 0x220000000000LL;
  if ( (MiFlags & 0x20000) != 0 && (v7 & 2) != 0 )
  {
    if ( v11 )
    {
      v28 = (volatile signed __int32 *)(v16 + 24);
      v29 = v11;
      do
      {
        LODWORD(v32) = 0;
        while ( _interlockedbittestandset64(v28, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v32);
          while ( *(__int64 *)v28 < 0 );
        }
        if ( !(unsigned int)MiGetPagePrivilege(v16, 1, 0LL) )
          MiMarkPfnVerified(v16, 7LL);
        _InterlockedAnd64((volatile signed __int64 *)v28, 0x7FFFFFFFFFFFFFFFuLL);
        v16 += 48LL;
        v28 += 12;
        --v29;
      }
      while ( v29 );
      LOBYTE(v12) = v37;
      v11 = v35;
      v10 = v39;
    }
    v16 += -48 * v11;
  }
  v14 = v7 | 0x4000000;
  if ( v10 > 1 )
    v14 = v7;
  ValidPte = MiMakeValidPte(a2, a4, v14);
  v33 = ValidPte;
  v32 = v16;
  if ( !v16 )
    goto LABEL_12;
  v32 = v16;
  if ( (MiFlags & 0x1000000) != 0 && (v12 & 0x42) == 0x40 )
  {
    MI_SET_PTE_SHADOW_STACK(&v33);
    v32 = v16;
  }
LABEL_22:
  v17 = 0;
  v18 = a2;
  v19 = v36;
  v20 = (*(_DWORD *)(a1 + 48) & 0x600000) == 6291456;
  do
  {
    if ( v20 && (*v18 & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa(v18);
      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, LeafVa, a1);
      v20 = 0;
    }
    v21 = v33 & 0xFFF0000000000FFFuLL | ((a4 & 0xFFFFFFFFFFLL) << 12);
    v33 = v21;
    if ( !v17 )
    {
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
        || (v22 = *v18, v21 = v33, (v33 & 0x40) == 0) && (v22 & 0x40) != 0
        || (v33 & 2) == 0 && (v22 & 2) != 0
        || v33 < 0 && v22 >= 0 )
      {
        v17 = 1;
      }
    }
    ++a4;
    if ( v39 <= 1 )
      MiRewritePteWithLockBit((__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, 0, v18, v33);
    else
      MiWriteValidPteNewProtection((ULONG_PTR)v18, v21);
    ++v18;
    --v19;
  }
  while ( v19 );
  v24 = v37;
  v25 = v32;
  if ( v17 )
  {
    if ( !v41 )
    {
      v26 = v34;
      MiInsertTbFlushEntry(a5, v38, v34);
      goto LABEL_38;
    }
    MiInsertLargeTbFlushEntry(a5, v41, a2);
  }
  v26 = v34;
LABEL_38:
  if ( v26 == 1
    && (v24 & 0x42) != 0
    && v25
    && ((*(_DWORD *)(a1 + 48) & 0x70) != 0x40 || (unsigned int)MiRotatedToFrameBuffer(a2)) )
  {
    MiLockPageAndSetDirty(v25, 1LL, v23);
  }
}
