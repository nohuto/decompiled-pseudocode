/*
 * XREFs of MiMapBackgroundPagesToZero @ 0x140210430
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiMapBackgroundPagesToZero(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  unsigned int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  ULONG_PTR *v7; // r9
  unsigned __int64 v8; // rsi
  unsigned int v9; // r13d
  __int64 v10; // r15
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // ecx
  int v15; // r8d
  int v16; // r8d
  unsigned __int64 v17; // rcx
  ULONG_PTR ValidPte; // rbx
  unsigned int v19; // ecx
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int v28; // eax
  _BOOL8 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-98h]
  unsigned __int64 v33; // [rsp+28h] [rbp-90h]
  ULONG_PTR *v34; // [rsp+28h] [rbp-90h]
  unsigned __int64 v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+40h] [rbp-78h]
  unsigned __int64 UltraMapping; // [rsp+48h] [rbp-70h]
  __int64 v39; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 v41; // [rsp+60h] [rbp-58h]
  unsigned __int8 v44; // [rsp+D0h] [rbp+18h]
  unsigned __int64 BugCheckParameter2; // [rsp+D8h] [rbp+20h]
  int BugCheckParameter2a; // [rsp+D8h] [rbp+20h]

  v2 = (_QWORD *)a1;
  v3 = a2;
  v4 = a1;
  if ( !*(_DWORD *)(a1 + 320) && !*(_BYTE *)(a1 + 326) )
  {
    v26 = a1;
    if ( !*(_BYTE *)(a1 + 324) )
      v26 = *(_QWORD *)(a1 + 584);
    if ( v26 )
      v4 = v26;
  }
  v39 = a2;
  v5 = MiPageSizes[v39];
  v6 = v5 * *(unsigned int *)(v4 + 280);
  v37 = v5;
  v40 = v6;
  UltraMapping = MiGetUltraMapping(a1 + 32 * (a2 + 14LL), a2, v6, 0LL);
  v35 = UltraMapping;
  v8 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v3 <= 1 )
  {
    v24 = 2 - v3;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v24;
    }
    while ( v24 );
  }
  v9 = 0;
  v10 = 0LL;
  if ( *(_DWORD *)(v4 + 280) )
  {
    v41 = v5 << 12;
    do
    {
      BugCheckParameter2 = (*(_QWORD *)(8 * v10 + v4 + 24) >> 12) & 0x3FFFFFFFFFLL;
      v32 = 48 * BugCheckParameter2 - 0x220000000000LL;
      v11 = MiSafeLockPage(BugCheckParameter2, v32, 0xFFFFDE0000000000uLL, v7);
      v44 = v11;
      if ( (*(_QWORD *)(8 * v10 + v4 + 24) & 1) != 0 )
      {
        if ( v11 != 17 )
          MiUnlockPage(v32, v11);
        ++dword_140EF49D0;
      }
      else
      {
        if ( v37 == 1 && (HIWORD(*(_DWORD *)(v32 + 32)) & 0xC0) == 0xC0 )
        {
          MiFinalizePageAttribute(v32, 1LL, 1LL);
          v27 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL));
          v28 = MiPageToNode(BugCheckParameter2);
          v12 = BugCheckParameter2;
          v29 = 0LL;
          v30 = *(_QWORD *)(v27 + 16) + 57216LL * v28;
          if ( BugCheckParameter2 < 0x100000 )
            v29 = v3 != 3;
          v31 = 32 * (v29 + 40LL * v3);
          _InterlockedDecrement64((volatile signed __int64 *)(v31 + v30 + 48));
          _InterlockedIncrement64((volatile signed __int64 *)(v31 + v30 + 32));
        }
        else
        {
          v12 = BugCheckParameter2;
        }
        if ( !v9 )
        {
          v2[36] = v8;
          v2[37] = UltraMapping;
          v2[38] = UltraMapping + (v6 << 12) - 1;
        }
        v13 = 48 * BugCheckParameter2 - 0x220000000000LL;
        v14 = 4;
        if ( BYTE2(*(_DWORD *)(v32 + 32)) < 0x40u )
        {
          v14 = 12;
        }
        else if ( (HIWORD(*(_DWORD *)(v32 + 32)) & 0xC0) == 0x80 )
        {
          v14 = 28;
        }
        v15 = -1543503872;
        if ( v3 > 1 )
          v15 = -1610612736;
        v16 = v14 | v15;
        v17 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v33 = v17;
        if ( v3 <= 1 )
        {
          v25 = 2 - v3;
          do
          {
            v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v25;
          }
          while ( v25 );
          v33 = v17;
        }
        ValidPte = MiMakeValidPte(v17, v12, v16);
        v19 = 0;
        v36 = MiPtesToSupportLargePageSizes[v39];
        BugCheckParameter2a = 0;
        if ( v36 )
        {
          v20 = v33;
          v21 = 0LL;
          v22 = MiPtesToSupportLargePageSizes[v39];
          do
          {
            v7 = (ULONG_PTR *)(v20 + 8 * v21);
            v34 = v7;
            if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v7 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v7, ValidPte);
              v19 = BugCheckParameter2a;
              v22 = v36;
              v7 = v34;
            }
            *v7 = ValidPte;
            BugCheckParameter2a = ++v19;
            ValidPte = (ValidPte + 4096) ^ ((ValidPte + 4096) ^ ValidPte) & 0xFFF0000000000FFFuLL;
            v21 = v19;
          }
          while ( v19 < v22 );
          v2 = (_QWORD *)a1;
          v3 = a2;
          v6 = v40;
          v13 = v32;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v44 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
          __writecr8(v44);
        }
        v9 = 1;
      }
      v10 = (unsigned int)(v10 + 1);
      v35 += v41;
    }
    while ( (unsigned int)v10 < *(_DWORD *)(v4 + 280) );
  }
  return v9;
}
