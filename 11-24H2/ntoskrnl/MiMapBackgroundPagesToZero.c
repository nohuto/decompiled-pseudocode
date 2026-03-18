/*
 * XREFs of MiMapBackgroundPagesToZero @ 0x14020B740
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x140238638 (MiUserPdeOrAbove.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiMapBackgroundPagesToZero(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r13
  ULONG_PTR v12; // r15
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r11
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 LeafVa; // rdx
  int v21; // r10d
  unsigned __int64 v22; // rcx
  bool v23; // cc
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  ULONG_PTR *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rbx
  unsigned int v36; // eax
  _BOOL8 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // [rsp+20h] [rbp-A8h]
  int v41; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+30h] [rbp-98h]
  ULONG_PTR *v44; // [rsp+30h] [rbp-98h]
  unsigned __int64 v45; // [rsp+38h] [rbp-90h]
  unsigned __int64 v46; // [rsp+40h] [rbp-88h]
  __int64 v47; // [rsp+48h] [rbp-80h]
  __int64 v48; // [rsp+50h] [rbp-78h]
  unsigned __int64 UltraMapping; // [rsp+58h] [rbp-70h]
  __int64 v50; // [rsp+60h] [rbp-68h]
  __int64 v51; // [rsp+68h] [rbp-60h]
  __int64 v52; // [rsp+70h] [rbp-58h]
  unsigned __int8 v55; // [rsp+E0h] [rbp+18h]
  unsigned int v56; // [rsp+E8h] [rbp+20h]
  unsigned int v57; // [rsp+E8h] [rbp+20h]

  v2 = (_QWORD *)a1;
  v3 = a2;
  v4 = a1;
  v47 = a1;
  if ( !*(_DWORD *)(a1 + 320) && !*(_BYTE *)(a1 + 326) )
  {
    v34 = a1;
    if ( !*(_BYTE *)(a1 + 324) )
      v34 = *(_QWORD *)(a1 + 584);
    if ( v34 )
      v4 = v34;
    v47 = v4;
  }
  v50 = a2;
  v5 = MiPageSizes[v50];
  v6 = v5 * *(unsigned int *)(v4 + 280);
  v48 = v5;
  v51 = v6;
  UltraMapping = MiGetUltraMapping(a1 + 32 * (a2 + 14LL), a2, v6, 0LL);
  v8 = 0x7FFFFFFFF8LL;
  v45 = UltraMapping;
  v9 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v46 = v9;
  if ( v3 <= 1 )
  {
    v32 = 2 - v3;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v32;
    }
    while ( v32 );
    v46 = v9;
  }
  result = 0LL;
  v11 = 0LL;
  v56 = 0;
  if ( *(_DWORD *)(v4 + 280) )
  {
    v52 = v5 << 12;
    do
    {
      v12 = (*(_QWORD *)(8 * v11 + v4 + 24) >> 12) & 0x3FFFFFFFFFLL;
      v40 = 48 * v12 - 0x220000000000LL;
      v13 = MiSafeLockPage(v12, 0xFFFFDE0000000000uLL, v8, v7);
      v14 = v13;
      v55 = v13;
      if ( (*(_QWORD *)(8 * v11 + v4 + 24) & 1) != 0 )
      {
        if ( v13 != 17 )
          MiUnlockPage(v40, v13);
        ++dword_140EF4CB0;
      }
      else
      {
        v7 = 48 * v12 - 0x220000000000LL;
        if ( v48 == 1 && (HIWORD(*(_DWORD *)(v40 + 32)) & 0xC0) == 0xC0 )
        {
          MiFinalizePageAttribute(v40, 1LL, 1LL);
          v35 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v40 + 40) >> 43) & 0x3FFLL));
          v36 = MiPageToNode(v12);
          v37 = 0LL;
          v38 = *(_QWORD *)(v35 + 16) + 57216LL * v36;
          if ( v12 < 0x100000 )
            v37 = v3 != 3;
          v39 = 32 * (v37 + 40LL * v3);
          _InterlockedDecrement64((volatile signed __int64 *)(v39 + v38 + 48));
          _InterlockedIncrement64((volatile signed __int64 *)(v39 + v38 + 32));
          v7 = 48 * v12 - 0x220000000000LL;
          v14 = v55;
        }
        if ( !v56 )
        {
          v2[36] = v9;
          v2[37] = UltraMapping;
          v2[38] = UltraMapping + (v6 << 12) - 1;
        }
        v15 = 4;
        if ( BYTE2(*(_DWORD *)(v7 + 32)) < 0x40u )
        {
          v15 = 12;
        }
        else if ( (HIWORD(*(_DWORD *)(v7 + 32)) & 0xC0) == 0x80 )
        {
          v15 = 28;
        }
        v16 = -1543503872;
        if ( v3 > 1 )
          v16 = -1610612736;
        v17 = v15 | v16;
        v41 = v15 | v16;
        v18 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v43 = v18;
        if ( v3 <= 1 )
        {
          v33 = 2 - v3;
          do
          {
            v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v33;
          }
          while ( v33 );
          v43 = v18;
        }
        v19 = (v12 << 12) | MmProtectToPteMask[v17 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
        if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v22 = (v12 << 12) | MmProtectToPteMask[v17 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
          v21 = v17 & 0x4000000;
        }
        else
        {
          if ( v18 >= 0xFFFFF6FB40000000uLL && v18 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v18 == 0xFFFFF6FB7DBEDF68uLL )
            {
              v19 = (v12 << 12) | MmProtectToPteMask[v17 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
            }
            else if ( (v17 & 0x4000000) == 0 )
            {
              v19 = (v12 << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v17 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
            }
            v31 = MiUserPdeOrAbove();
            v7 = 48 * v12 - 0x220000000000LL;
            v14 = v55;
            if ( v31 )
              v19 |= 4uLL;
          }
          LeafVa = (__int64)(v18 << 25) >> 16;
          v21 = v41 & 0x4000000;
          if ( (v41 & 0x4000000) != 0 )
            LeafVa = MiGetLeafVa((__int64)(v18 << 25) >> 16);
          v22 = v19 | 4;
          v23 = LeafVa <= 0x7FFFFFFEFFFFLL;
          v17 = v41;
          if ( !v23 )
            v22 = v19;
        }
        v8 = (unsigned __int64)(unsigned __int8)word_140E2ED84 << 8;
        v57 = 0;
        v24 = v22 | 0x42;
        if ( v17 >= 0 )
          v24 = v22;
        v25 = v8 ^ (v8 ^ v24) & 0xFFFFFFFFFFFFFEFFuLL;
        v26 = v25 | 0x80;
        if ( !v21 )
          v26 = v25;
        v27 = v26 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        v42 = MiPtesToSupportLargePageSizes[v50];
        if ( v42 )
        {
          v28 = v43;
          v29 = 0LL;
          do
          {
            v30 = (ULONG_PTR *)(v28 + 8 * v29);
            v44 = v30;
            if ( _bittest64(&MiFlags, 0x24u) && (v27 & 0x20) == 0 && (unsigned __int64)v30 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v30, v27);
              v30 = v44;
            }
            *v30 = v27;
            v27 = (v27 + 4096) ^ ((v27 + 4096) ^ v27) & 0xFFF0000000000FFFuLL;
            v29 = ++v57;
          }
          while ( v57 < v42 );
          v9 = v46;
          v2 = (_QWORD *)a1;
          v4 = v47;
          v3 = a2;
          v6 = v51;
          v7 = v40;
          v14 = v55;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v14 < 2u )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
            v14 = v55;
          }
          __writecr8(v14);
        }
        v56 = 1;
      }
      v11 = (unsigned int)(v11 + 1);
      v45 += v52;
    }
    while ( (unsigned int)v11 < *(_DWORD *)(v4 + 280) );
    return v56;
  }
  return result;
}
