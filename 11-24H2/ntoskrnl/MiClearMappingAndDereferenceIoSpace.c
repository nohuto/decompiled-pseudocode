/*
 * XREFs of MiClearMappingAndDereferenceIoSpace @ 0x14029E560
 * Callers:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MmMapMdl @ 0x140677E60 (MmMapMdl.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiVaIsUltra @ 0x1403F4490 (MiVaIsUltra.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404BFA78 (MiZeroAndFlushGoodCitizen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiClearMappingAndDereferenceIoSpace(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  int v7; // eax
  int v8; // r12d
  int IsUltra; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // r11
  __int64 DemandZeroPte; // rbx
  __int64 v15; // r11
  ULONG_PTR v16; // r10
  int v17; // r9d
  unsigned __int64 v18; // rtt
  __int64 v19; // rbp
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdi
  int v23; // r13d
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // r15
  ULONG_PTR v27; // r12
  unsigned __int64 v28; // rsi
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rcx
  int v36; // [rsp+30h] [rbp-188h]
  __int64 v37; // [rsp+38h] [rbp-180h]
  ULONG_PTR v38; // [rsp+40h] [rbp-178h]
  unsigned __int64 v39; // [rsp+48h] [rbp-170h]
  unsigned __int64 v40; // [rsp+50h] [rbp-168h]
  __int64 v41; // [rsp+58h] [rbp-160h]
  __int64 v42; // [rsp+60h] [rbp-158h]
  unsigned __int64 v43; // [rsp+68h] [rbp-150h]
  __int64 v44; // [rsp+70h] [rbp-148h]
  _QWORD v45[32]; // [rsp+80h] [rbp-138h] BYREF

  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = 1LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = 1LL;
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  v8 = v7;
  if ( v7 > 0 )
  {
    v35 = (unsigned int)v7;
    do
    {
      v5 <<= 9;
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v35;
    }
    while ( v35 );
    v42 = v5;
  }
  IsUltra = MiVaIsUltra(a1);
  v13 = 0LL;
  if ( !IsUltra )
    v13 = &unk_140E38240;
  v37 = (__int64)v13;
  DemandZeroPte = MiMakeDemandZeroPte(16LL, v10, v11, v12);
  v40 = v4;
  v16 = 0LL;
  v43 = a2 % v5;
  v17 = 0;
  v38 = 0LL;
  v18 = a2;
  LODWORD(v19) = 0;
  v36 = 0;
  v20 = v5;
  v21 = v4;
  v41 = v5;
  v22 = v6;
  v23 = v8;
  v24 = 8 * (v18 / v5);
  v44 = v24;
  v25 = v6 + v24;
  v39 = v6 + v24;
  if ( v8 < 1 )
    goto LABEL_5;
  v40 = v4;
  v41 = v5;
  if ( !v15 )
    goto LABEL_5;
  if ( KeGetCurrentIrql() == 2 )
  {
    v26 = 17;
    MiLockWorkingSetSharedAtDpc(v15);
  }
  else
  {
    v26 = MiLockWorkingSetShared(v15, v5, v4, 0LL);
  }
  v20 = v42;
  v21 = v4;
  v24 = v44;
  v16 = 0LL;
  v25 = v39;
  v17 = 0;
  v15 = v37;
  v41 = v42;
  v40 = v4;
  while ( 1 )
  {
    if ( v22 < v25 )
    {
      v40 = ((v20 * (((unsigned __int64)(v24 - 1) >> 3) + 1)) << 12) + v21;
      while ( v23 >= 1 && v15 )
      {
        if ( v16 )
        {
          if ( (v22 & 0xFFF) != 0 )
            break;
          MiZeroAndFlushGoodCitizen(v15, v16, v26, v17, 1);
          v15 = v37;
          v36 = 0;
        }
        v27 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v38 = v27;
        MiLockNestedPageTable(v15, v27);
        v25 = v39;
LABEL_10:
        if ( *(_QWORD *)v22 )
        {
          v28 = (*(_QWORD *)v22 >> 12) & 0xFFFFFFFFFFLL;
          if ( v23 >= 1 )
          {
            MiRewritePteWithLockBit(v37, 0LL, v22, DemandZeroPte);
            v29 = ++v36;
          }
          else
          {
            v29 = v36;
            *(_QWORD *)v22 = CLFS_LSN_NULL_EXT;
          }
          if ( v28 > qword_140E2DD20 || (*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          {
            if ( (_DWORD)v19 && (v33 = v45[2 * (unsigned int)(v19 - 1) + 1], v33 == v28) )
            {
              v45[2 * (unsigned int)(v19 - 1) + 1] = v41 + v33;
            }
            else
            {
              v30 = 2LL * (unsigned int)v19;
              LODWORD(v19) = v19 + 1;
              v45[v30] = v28;
              v45[v30 + 1] = v28 + v41;
              if ( (_DWORD)v19 == 16 )
              {
                if ( v23 >= 1 && v37 && v29 )
                {
                  MiZeroAndFlushGoodCitizen(v37, v27, v26, v29, 1);
                  LODWORD(v27) = 0;
                  v36 = 0;
                  v38 = 0LL;
                }
                v34 = v45;
                v19 = 16LL;
                do
                {
                  MiDereferenceIoPages(1LL, *v34, v34[1] - *v34);
                  v34 += 2;
                  --v19;
                }
                while ( v19 );
              }
            }
          }
          v25 = v39;
        }
        v15 = v37;
        v22 += 8LL;
        if ( v22 >= v25 )
          goto LABEL_19;
        v16 = v38;
        v17 = v36;
      }
      LODWORD(v27) = v38;
      goto LABEL_10;
    }
    LODWORD(v27) = 0;
LABEL_19:
    v15 = v37;
    if ( v23 >= 1 && v37 )
    {
      MiZeroAndFlushGoodCitizen(v37, v27, v26, v36, 0);
      v15 = v37;
    }
    if ( !v43 )
      break;
    v20 = 1LL;
    v41 = 1LL;
    v23 = 0;
    v22 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = 0LL;
    v24 = 8 * v43;
    v38 = 0LL;
    v17 = 0;
    v43 = 0LL;
    v21 = v40;
    v25 = v24 + v22;
    v39 = v24 + v22;
    v36 = 0;
LABEL_5:
    v26 = 17;
  }
  v31 = (unsigned int)v19;
  if ( (_DWORD)v19 )
  {
    v32 = v45;
    do
    {
      MiDereferenceIoPages(1LL, *v32, v32[1] - *v32);
      v32 += 2;
      --v31;
    }
    while ( v31 );
  }
}
