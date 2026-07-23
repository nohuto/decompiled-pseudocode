/*
 * XREFs of MiMapBackgroundPagesToZero @ 0x140331C80
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiMapBackgroundPagesToZero(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // r13
  ULONG_PTR v10; // r15
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r11
  __int64 v13; // r9
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 LeafVa; // rdx
  int v20; // r10d
  unsigned __int64 v21; // rcx
  bool v22; // cc
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  ULONG_PTR *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned int v35; // eax
  _BOOL8 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // [rsp+20h] [rbp-A8h]
  int v40; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v41; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+30h] [rbp-98h]
  ULONG_PTR *v43; // [rsp+30h] [rbp-98h]
  unsigned __int64 v44; // [rsp+38h] [rbp-90h]
  unsigned __int64 v45; // [rsp+40h] [rbp-88h]
  __int64 v46; // [rsp+48h] [rbp-80h]
  __int64 v47; // [rsp+50h] [rbp-78h]
  unsigned __int64 UltraMapping; // [rsp+58h] [rbp-70h]
  __int64 v49; // [rsp+60h] [rbp-68h]
  __int64 v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+70h] [rbp-58h]
  unsigned __int8 v54; // [rsp+E0h] [rbp+18h]
  unsigned int v55; // [rsp+E8h] [rbp+20h]
  unsigned int v56; // [rsp+E8h] [rbp+20h]

  v2 = (_QWORD *)a1;
  v3 = a2;
  v4 = a1;
  v46 = a1;
  if ( !*(_DWORD *)(a1 + 320) && !*(_BYTE *)(a1 + 326) )
  {
    v33 = a1;
    if ( !*(_BYTE *)(a1 + 324) )
      v33 = *(_QWORD *)(a1 + 584);
    if ( v33 )
      v4 = v33;
    v46 = v4;
  }
  v49 = a2;
  v5 = MiPageSizes[v49];
  v6 = v5 * *(unsigned int *)(v4 + 280);
  v47 = v5;
  v50 = v6;
  UltraMapping = MiGetUltraMapping(a1 + 32 * (a2 + 14LL), a2, v6, 0LL);
  v44 = UltraMapping;
  v7 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = v7;
  if ( v3 <= 1 )
  {
    v31 = 2 - v3;
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v31;
    }
    while ( v31 );
    v45 = v7;
  }
  result = 0LL;
  v9 = 0LL;
  v55 = 0;
  if ( *(_DWORD *)(v4 + 280) )
  {
    v51 = v5 << 12;
    do
    {
      v10 = (*(_QWORD *)(8 * v9 + v4 + 24) >> 12) & 0x3FFFFFFFFFLL;
      v39 = 48 * v10 - 0x220000000000LL;
      v11 = MiSafeLockPage(v10);
      v12 = v11;
      v54 = v11;
      if ( (*(_QWORD *)(8 * v9 + v4 + 24) & 1) != 0 )
      {
        if ( v11 != 17 )
          MiUnlockPage(v39, v11);
        ++dword_140EF4ED0;
      }
      else
      {
        v13 = 48 * v10 - 0x220000000000LL;
        if ( v47 == 1 && (HIWORD(*(_DWORD *)(v39 + 32)) & 0xC0) == 0xC0 )
        {
          MiFinalizePageAttribute(v39, 1LL, 1LL);
          v34 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v39 + 40) >> 43) & 0x3FFLL));
          v35 = MiPageToNode(v10);
          v36 = 0LL;
          v37 = *(_QWORD *)(v34 + 16) + 57216LL * v35;
          if ( v10 < 0x100000 )
            v36 = v3 != 3;
          v38 = 32 * (v36 + 40LL * v3);
          _InterlockedDecrement64((volatile signed __int64 *)(v38 + v37 + 48));
          _InterlockedIncrement64((volatile signed __int64 *)(v38 + v37 + 32));
          v13 = 48 * v10 - 0x220000000000LL;
          v12 = v54;
        }
        if ( !v55 )
        {
          v2[36] = v7;
          v2[37] = UltraMapping;
          v2[38] = UltraMapping + (v6 << 12) - 1;
        }
        v14 = 4;
        if ( BYTE2(*(_DWORD *)(v13 + 32)) < 0x40u )
        {
          v14 = 12;
        }
        else if ( (HIWORD(*(_DWORD *)(v13 + 32)) & 0xC0) == 0x80 )
        {
          v14 = 28;
        }
        v15 = -1543503872;
        if ( v3 > 1 )
          v15 = -1610612736;
        v16 = v14 | v15;
        v40 = v14 | v15;
        v17 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v42 = v17;
        if ( v3 <= 1 )
        {
          v32 = 2 - v3;
          do
          {
            v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v32;
          }
          while ( v32 );
          v42 = v17;
        }
        v18 = (v10 << 12) | MmProtectToPteMask[v16 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
        if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v21 = (v10 << 12) | MmProtectToPteMask[v16 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
          v20 = v16 & 0x4000000;
        }
        else
        {
          if ( v17 >= 0xFFFFF6FB40000000uLL && v17 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v17 == 0xFFFFF6FB7DBEDF68uLL )
            {
              v18 = (v10 << 12) | MmProtectToPteMask[v16 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
            }
            else if ( (v16 & 0x4000000) == 0 )
            {
              v18 = (v10 << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v16 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
            }
            v30 = MiUserPdeOrAbove(v17);
            v13 = 48 * v10 - 0x220000000000LL;
            v12 = v54;
            if ( v30 )
              v18 |= 4uLL;
          }
          LeafVa = (__int64)(v17 << 25) >> 16;
          v20 = v40 & 0x4000000;
          if ( (v40 & 0x4000000) != 0 )
            LeafVa = MiGetLeafVa((__int64)(v17 << 25) >> 16);
          v21 = v18 | 4;
          v22 = LeafVa <= 0x7FFFFFFEFFFFLL;
          v16 = v40;
          if ( !v22 )
            v21 = v18;
        }
        v56 = 0;
        v23 = v21 | 0x42;
        if ( v16 >= 0 )
          v23 = v21;
        v24 = ((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v23) & 0xFFFFFFFFFFFFFEFFuLL;
        v25 = v24 | 0x80;
        if ( !v20 )
          v25 = v24;
        v26 = v25 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        v41 = MiPtesToSupportLargePageSizes[v49];
        if ( v41 )
        {
          v27 = v42;
          v28 = 0LL;
          do
          {
            v29 = (ULONG_PTR *)(v27 + 8 * v28);
            v43 = v29;
            if ( _bittest64(&MiFlags, 0x24u) && (v26 & 0x20) == 0 && (unsigned __int64)v29 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v29, v26, 128LL);
              v29 = v43;
            }
            *v29 = v26;
            v26 = (v26 + 4096) ^ ((v26 + 4096) ^ v26) & 0xFFF0000000000FFFuLL;
            v28 = ++v56;
          }
          while ( v56 < v41 );
          v7 = v45;
          v2 = (_QWORD *)a1;
          v4 = v46;
          v3 = a2;
          v6 = v50;
          v13 = v39;
          v12 = v54;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v12 < 2u )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
            v12 = v54;
          }
          __writecr8(v12);
        }
        v55 = 1;
      }
      v9 = (unsigned int)(v9 + 1);
      v44 += v51;
    }
    while ( (unsigned int)v9 < *(_DWORD *)(v4 + 280) );
    return v55;
  }
  return result;
}
