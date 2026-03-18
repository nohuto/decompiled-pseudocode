/*
 * XREFs of MiClearMappingAndDereferenceIoSpace @ 0x1403292C0
 * Callers:
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiVaIsUltra @ 0x14041B6C0 (MiVaIsUltra.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C5D98 (MiZeroAndFlushGoodCitizen.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall MiClearMappingAndDereferenceIoSpace(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  int v7; // eax
  int v8; // r12d
  int IsUltra; // eax
  void *v10; // r11
  ULONG_PTR DemandZeroPte; // rbx
  __int64 v12; // r11
  ULONG_PTR v13; // r10
  __int64 v14; // r9
  unsigned __int64 v15; // rtt
  __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  int v20; // r13d
  __int64 v21; // rax
  char *v22; // rcx
  unsigned __int8 v23; // r15
  __int64 v24; // r8
  ULONG_PTR v25; // r12
  unsigned __int64 v26; // rsi
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  unsigned int v34; // [rsp+30h] [rbp-188h]
  __int64 v35; // [rsp+38h] [rbp-180h]
  ULONG_PTR v36; // [rsp+40h] [rbp-178h]
  char *v37; // [rsp+48h] [rbp-170h]
  unsigned __int64 v38; // [rsp+50h] [rbp-168h]
  __int64 v39; // [rsp+58h] [rbp-160h]
  __int64 v40; // [rsp+60h] [rbp-158h]
  unsigned __int64 v41; // [rsp+68h] [rbp-150h]
  __int64 v42; // [rsp+70h] [rbp-148h]
  _QWORD v43[32]; // [rsp+80h] [rbp-138h] BYREF

  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = 1LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = 1LL;
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  v8 = v7;
  if ( v7 > 0 )
  {
    v33 = (unsigned int)v7;
    do
    {
      v5 <<= 9;
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v33;
    }
    while ( v33 );
    v40 = v5;
  }
  IsUltra = MiVaIsUltra(a1);
  v10 = 0LL;
  if ( !IsUltra )
    v10 = &unk_140E37EC0;
  v35 = (__int64)v10;
  DemandZeroPte = MiMakeDemandZeroPte(16LL);
  v38 = v4;
  v13 = 0LL;
  v41 = a2 % v5;
  v14 = 0LL;
  v36 = 0LL;
  v15 = a2;
  LODWORD(v16) = 0;
  v34 = 0;
  v17 = v5;
  v18 = v4;
  v39 = v5;
  v19 = v6;
  v20 = v8;
  v21 = 8 * (v15 / v5);
  v42 = v21;
  v22 = (char *)(v6 + v21);
  v37 = (char *)(v6 + v21);
  if ( v8 < 1 )
    goto LABEL_5;
  v38 = v4;
  v39 = v5;
  if ( !v12 )
    goto LABEL_5;
  if ( KeGetCurrentIrql() == 2 )
  {
    v23 = 17;
    MiLockWorkingSetSharedAtDpc(v12);
  }
  else
  {
    v23 = MiLockWorkingSetShared(v12);
  }
  v17 = v40;
  v18 = v4;
  v21 = v42;
  v13 = 0LL;
  v22 = v37;
  v14 = 0LL;
  v12 = v35;
  v39 = v40;
  v38 = v4;
  while ( 1 )
  {
    if ( v19 < (unsigned __int64)v22 )
    {
      v24 = ((v17 * (((unsigned __int64)(v21 - 1) >> 3) + 1)) << 12) + v18;
      v38 = v24;
      while ( v20 >= 1 && v12 )
      {
        if ( v13 )
        {
          if ( (v19 & 0xFFF) != 0 )
            break;
          MiZeroAndFlushGoodCitizen(v12, v13, v23, v14, 1);
          v12 = v35;
          v34 = 0;
        }
        v25 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v36 = v25;
        MiLockNestedPageTable(v12, v25, v24, v14);
        v22 = v37;
LABEL_10:
        if ( *(_QWORD *)v19 )
        {
          v26 = (*(_QWORD *)v19 >> 12) & 0xFFFFFFFFFFLL;
          if ( v20 >= 1 )
          {
            MiRewritePteWithLockBit(v35, 0, (volatile __int64 *)v19, DemandZeroPte);
            v27 = ++v34;
          }
          else
          {
            v27 = v34;
            *(_QWORD *)v19 = CLFS_LSN_NULL_EXT;
          }
          if ( v26 > qword_140E2D9A0 || (*(_QWORD *)(48 * v26 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          {
            if ( (_DWORD)v16 && (v31 = v43[2 * (unsigned int)(v16 - 1) + 1], v31 == v26) )
            {
              v43[2 * (unsigned int)(v16 - 1) + 1] = v39 + v31;
            }
            else
            {
              v28 = 2LL * (unsigned int)v16;
              LODWORD(v16) = v16 + 1;
              v43[v28] = v26;
              v43[v28 + 1] = v26 + v39;
              if ( (_DWORD)v16 == 16 )
              {
                if ( v20 >= 1 && v35 && v27 )
                {
                  MiZeroAndFlushGoodCitizen(v35, v25, v23, v27, 1);
                  LODWORD(v25) = 0;
                  v34 = 0;
                  v36 = 0LL;
                }
                v32 = v43;
                v16 = 16LL;
                do
                {
                  MiDereferenceIoPages(1LL, *v32, v32[1] - *v32);
                  v32 += 2;
                  --v16;
                }
                while ( v16 );
              }
            }
          }
          v22 = v37;
        }
        v12 = v35;
        v19 += 8LL;
        if ( v19 >= (unsigned __int64)v22 )
          goto LABEL_19;
        v13 = v36;
        v14 = v34;
      }
      LODWORD(v25) = v36;
      goto LABEL_10;
    }
    LODWORD(v25) = 0;
LABEL_19:
    v12 = v35;
    if ( v20 >= 1 && v35 )
    {
      MiZeroAndFlushGoodCitizen(v35, v25, v23, v34, 0);
      v12 = v35;
    }
    if ( !v41 )
      break;
    v17 = 1LL;
    v39 = 1LL;
    v20 = 0;
    v19 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 0LL;
    v21 = 8 * v41;
    v36 = 0LL;
    v14 = 0LL;
    v41 = 0LL;
    v18 = v38;
    v22 = (char *)(v21 + v19);
    v37 = (char *)(v21 + v19);
    v34 = 0;
LABEL_5:
    v23 = 17;
  }
  v29 = (unsigned int)v16;
  if ( (_DWORD)v16 )
  {
    v30 = v43;
    do
    {
      MiDereferenceIoPages(1LL, *v30, v30[1] - *v30);
      v30 += 2;
      --v29;
    }
    while ( v29 );
  }
}
