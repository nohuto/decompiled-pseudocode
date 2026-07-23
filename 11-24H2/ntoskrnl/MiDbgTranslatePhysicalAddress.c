/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x1406803F0
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 *     MiDbgPteWriteInProgress @ 0x1406801B8 (MiDbgPteWriteInProgress.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiCheckPhysicalAddressRange @ 0x1403F45B8 (MiCheckPhysicalAddressRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 *     MiFreezeIoPfnNode @ 0x14067707C (MiFreezeIoPfnNode.c)
 *     MiDbgPatchIdentity @ 0x140680100 (MiDbgPatchIdentity.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140680788 (MiDbgUnTranslatePhysicalAddress.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, int a2, int *a3)
{
  unsigned __int64 v3; // r12
  int v5; // ebp
  int v6; // edi
  __int16 v7; // bx
  unsigned __int64 v8; // rcx
  int v9; // r10d
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r8
  int v14; // esi
  unsigned __int8 CurrentIrql; // r14
  __int64 v16; // rcx
  __int64 v17; // r13
  volatile signed __int32 *v18; // r14
  int ProtectionPfnCompatible; // eax
  int v20; // ecx
  __int64 v21; // r9
  int *v22; // r14
  __int64 v23; // r8
  int v24; // edx
  char v25; // di
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 ValidPte; // rax
  int v31; // eax
  unsigned __int64 v33; // [rsp+20h] [rbp-48h]
  unsigned int v34; // [rsp+78h] [rbp+10h] BYREF

  v3 = qword_140E30318;
  v5 = a2 & 4;
  v6 = a2;
  v7 = a1;
  if ( (a2 & 4) != 0 )
    v3 = qword_140E30310;
  if ( !v3 || !(unsigned int)MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v10 = a3 + 10;
  v11 = v8 >> 12;
  v12 = (__int64)(v3 << 25) >> 16;
  v13 = (unsigned int)(v9 - 2);
  v33 = v11;
  *a3 = 0;
  *((_QWORD *)a3 + 5) = 0LL;
  v14 = (v6 & 0x40) != 0 ? 4 : 1;
  if ( v5 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v13);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = v9 - 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v10);
      v11 = v33;
      v10 = a3 + 10;
      v9 = 4;
      LODWORD(v13) = 2;
    }
  }
  *((_BYTE *)a3 + 4) = CurrentIrql;
  if ( v11 <= qword_140E2DD20 )
  {
    v16 = 6 * v11;
    if ( ((*(_QWORD *)(8 * v16 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v17 = 8 * v16 - 0x220000000000LL;
      v18 = (volatile signed __int32 *)(v17 + 24);
      if ( (v6 & 0x40000000) == 0 )
      {
        if ( !v5 )
        {
          v34 = 0;
          *a3 = v13;
          while ( _interlockedbittestandset64(v18, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v34);
            while ( *(__int64 *)v18 < 0 );
          }
          v10 = a3 + 10;
          goto LABEL_23;
        }
        *a3 = 1;
        if ( !_interlockedbittestandset64(v18, 0x3FuLL) )
        {
LABEL_23:
          if ( (unsigned int)MiDbgPatchIdentity(v17, v10, a3 + 12) )
          {
            if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
            {
              if ( *a3 == 1 || *a3 == 2 )
                _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
              return 0LL;
            }
            if ( (v6 & 1) != 0 )
              LOBYTE(v14) = 4;
          }
          *((_QWORD *)a3 + 2) = v17;
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v14, v17);
          v20 = *(_DWORD *)(v17 + 32);
          v12 = (__int64)(v3 << 25) >> 16;
          v14 = ProtectionPfnCompatible | 8;
          v21 = v33;
          if ( (BYTE2(v20) & 0xC0) != 0xC0 )
            v14 = ProtectionPfnCompatible;
          goto LABEL_63;
        }
        if ( (v6 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
          return 0LL;
        ++dword_140E30320;
      }
      *a3 = v9;
      goto LABEL_23;
    }
    v11 = v33;
  }
  v22 = a3 + 6;
  v23 = (__int64)(a3 + 6);
  if ( v5 )
  {
    *a3 = 8;
    if ( !(unsigned int)MiFreezeIoPfnNode(v11, 1uLL, v23) )
      return 0LL;
  }
  else
  {
    *a3 = 16;
    MiFreezeIoPfnNode(v11, 0LL, v23);
  }
  v21 = v33;
  v24 = 3;
  if ( *(_QWORD *)v22 )
    v24 = (*(_DWORD *)(*(_QWORD *)v22
                     + 4
                     * ((unsigned __int64)(2
                                         * (((unsigned int)v33 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78
                                                                                       - 12))
                                                                - 1))
                                          - *(_DWORD *)(*(_QWORD *)v22 + 24LL))) >> 5)
                     + 44) >> ((2
                              * ((v33 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1))
                               - *(_BYTE *)(*(_QWORD *)v22 + 24LL))) & 0x1F)) & 3;
  if ( v24 == 3 )
  {
    v24 = 0;
    if ( !v5 )
      v24 = 3;
    if ( (v6 & 0x28) == 0 )
      goto LABEL_46;
    v25 = v6 & 0xD7;
  }
  else
  {
    v25 = v6 & 0xC7;
    if ( v24 )
    {
      if ( v24 == 2 )
        LOBYTE(v6) = v25 | 0x20;
      else
        LOBYTE(v6) = v25 | 8;
      goto LABEL_46;
    }
  }
  LOBYTE(v6) = v25 | 0x10;
LABEL_46:
  if ( (v6 & 8) == 0 )
  {
    if ( (v6 & 0x10) != 0 )
    {
      v26 = __readcr4();
      if ( (v26 & 0x20080) != 0 )
      {
        __writecr4(v26 ^ 0x80);
        __writecr4(v26);
      }
      else
      {
        v27 = __readcr3();
        __writecr3(v27);
      }
      v14 |= 0x10u;
    }
    else
    {
      if ( (v6 & 0x20) == 0 )
      {
LABEL_70:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      v28 = __readcr4();
      if ( (v28 & 0x20080) != 0 )
      {
        __writecr4(v28 ^ 0x80);
        __writecr4(v28);
      }
      else
      {
        v29 = __readcr3();
        __writecr3(v29);
      }
      v14 |= 0x18u;
    }
  }
  if ( v24 == 3 )
    ++dword_140E30320;
LABEL_63:
  ValidPte = MiMakeValidPte(v3, v21, v14 | 0xA0000000);
  if ( (v6 & 0x41) != 0 )
    byte_140E30308 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, ValidPte, 0LL) )
    goto LABEL_70;
  v31 = *a3;
  *((_QWORD *)a3 + 1) = v3;
  if ( (v31 & 0x12) != 0 )
    KeFlushSingleTb(v12, 0, 2u);
  else
    KeFlushSingleCurrentTb(v12, 0);
  return (v7 & 0xFFF) + v12;
}
