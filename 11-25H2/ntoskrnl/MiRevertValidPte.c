/*
 * XREFs of MiRevertValidPte @ 0x140380260
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140489418 (MI_SET_PTE_SHADOW_STACK.c)
 */

void __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  unsigned int v10; // r10d
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // esi
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v16; // rbp
  __int64 v17; // r15
  int v18; // edi
  volatile __int64 *v19; // rsi
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
  unsigned __int64 LeafVa; // rax
  __int64 v31; // rcx
  ULONG_PTR v32; // [rsp+20h] [rbp-78h] BYREF
  ULONG_PTR v33; // [rsp+28h] [rbp-70h] BYREF
  __int64 v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v38; // [rsp+50h] [rbp-48h]
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
    v11 = v34;
    if ( v34 == 16 )
      v11 = 1LL;
    else
      v31 = 1LL;
    v36 = v31;
    v35 = v11;
  }
  else
  {
    v10 = 3;
    v39 = 3;
    v11 = 1LL;
    v35 = 1LL;
    v34 = 1LL;
    v36 = 1LL;
  }
  v12 = *(_QWORD *)a2;
  v37 = v12;
  v38 = (__int64)(a2 << 25) >> 16;
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
  if ( a4 > qword_140E2D9A0 || (*(_QWORD *)(48 * a4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
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
  v17 = v36;
  v18 = 0;
  v19 = (volatile __int64 *)a2;
  v20 = (*(_DWORD *)(a1 + 48) & 0x600000) == 6291456;
  do
  {
    if ( v20 && (*v19 & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa((unsigned __int64)v19);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, a1);
      v20 = 0;
    }
    v21 = v33 & 0xFFF0000000000FFFuLL | ((a4 & 0xFFFFFFFFFFLL) << 12);
    v33 = v21;
    if ( !v18 )
    {
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
        || (v22 = *v19, v21 = v33, (v33 & 0x40) == 0) && (v22 & 0x40) != 0
        || (v33 & 2) == 0 && (v22 & 2) != 0
        || (v33 & 0x8000000000000000uLL) != 0 && v22 >= 0 )
      {
        v18 = 1;
      }
    }
    ++a4;
    if ( v39 <= 1 )
      MiRewritePteWithLockBit((__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, 0, v19, v33);
    else
      MiWriteValidPteNewProtection((ULONG_PTR)v19, v21);
    ++v19;
    --v17;
  }
  while ( v17 );
  v24 = v37;
  v25 = v32;
  if ( v18 )
  {
    if ( !v41 )
    {
      v26 = v34;
      MiInsertTbFlushEntry(a5, v38, v34, 0);
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
