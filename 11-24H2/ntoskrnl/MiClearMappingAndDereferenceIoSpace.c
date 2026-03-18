/*
 * XREFs of MiClearMappingAndDereferenceIoSpace @ 0x14028E960
 * Callers:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MmMapMdl @ 0x140676C90 (MmMapMdl.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiVaIsUltra @ 0x140395710 (MiVaIsUltra.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C6618 (MiZeroAndFlushGoodCitizen.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  int v14; // r9d
  unsigned __int64 v15; // rtt
  __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  int v20; // r13d
  __int64 v21; // rax
  char *v22; // rcx
  unsigned __int8 v23; // r15
  ULONG_PTR v24; // r12
  unsigned __int64 v25; // rsi
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rsi
  __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-188h]
  __int64 v34; // [rsp+38h] [rbp-180h]
  ULONG_PTR v35; // [rsp+40h] [rbp-178h]
  char *v36; // [rsp+48h] [rbp-170h]
  unsigned __int64 v37; // [rsp+50h] [rbp-168h]
  __int64 v38; // [rsp+58h] [rbp-160h]
  __int64 v39; // [rsp+60h] [rbp-158h]
  unsigned __int64 v40; // [rsp+68h] [rbp-150h]
  __int64 v41; // [rsp+70h] [rbp-148h]
  _QWORD v42[32]; // [rsp+80h] [rbp-138h] BYREF

  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = 1LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = 1LL;
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  v8 = v7;
  if ( v7 > 0 )
  {
    v32 = (unsigned int)v7;
    do
    {
      v5 <<= 9;
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v32;
    }
    while ( v32 );
    v39 = v5;
  }
  IsUltra = MiVaIsUltra(a1);
  v10 = 0LL;
  if ( !IsUltra )
    v10 = &unk_140E38100;
  v34 = (__int64)v10;
  DemandZeroPte = MiMakeDemandZeroPte(16LL);
  v37 = v4;
  v13 = 0LL;
  v40 = a2 % v5;
  v14 = 0;
  v35 = 0LL;
  v15 = a2;
  LODWORD(v16) = 0;
  v33 = 0;
  v17 = v5;
  v18 = v4;
  v38 = v5;
  v19 = v6;
  v20 = v8;
  v21 = 8 * (v15 / v5);
  v41 = v21;
  v22 = (char *)(v6 + v21);
  v36 = (char *)(v6 + v21);
  if ( v8 < 1 )
    goto LABEL_5;
  v37 = v4;
  v38 = v5;
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
  v17 = v39;
  v18 = v4;
  v21 = v41;
  v13 = 0LL;
  v22 = v36;
  v14 = 0;
  v12 = v34;
  v38 = v39;
  v37 = v4;
  while ( 1 )
  {
    if ( v19 < (unsigned __int64)v22 )
    {
      v37 = ((v17 * (((unsigned __int64)(v21 - 1) >> 3) + 1)) << 12) + v18;
      while ( v20 >= 1 && v12 )
      {
        if ( v13 )
        {
          if ( (v19 & 0xFFF) != 0 )
            break;
          MiZeroAndFlushGoodCitizen(v12, v13, v23, v14, 1);
          v12 = v34;
          v33 = 0;
        }
        v24 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v35 = v24;
        MiLockNestedPageTable(v12, v24);
        v22 = v36;
LABEL_10:
        if ( *(_QWORD *)v19 )
        {
          v25 = (*(_QWORD *)v19 >> 12) & 0xFFFFFFFFFFLL;
          if ( v20 >= 1 )
          {
            MiRewritePteWithLockBit(v34, 0, (volatile __int64 *)v19, DemandZeroPte);
            v26 = ++v33;
          }
          else
          {
            v26 = v33;
            *(_QWORD *)v19 = CLFS_LSN_NULL_EXT;
          }
          if ( v25 > qword_140E2DBE0 || (*(_QWORD *)(48 * v25 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          {
            if ( (_DWORD)v16 && (v30 = v42[2 * (unsigned int)(v16 - 1) + 1], v30 == v25) )
            {
              v42[2 * (unsigned int)(v16 - 1) + 1] = v38 + v30;
            }
            else
            {
              v27 = 2LL * (unsigned int)v16;
              LODWORD(v16) = v16 + 1;
              v42[v27] = v25;
              v42[v27 + 1] = v25 + v38;
              if ( (_DWORD)v16 == 16 )
              {
                if ( v20 >= 1 && v34 && v26 )
                {
                  MiZeroAndFlushGoodCitizen(v34, v24, v23, v26, 1);
                  LODWORD(v24) = 0;
                  v33 = 0;
                  v35 = 0LL;
                }
                v31 = v42;
                v16 = 16LL;
                do
                {
                  MiDereferenceIoPages(1LL, *v31, v31[1] - *v31);
                  v31 += 2;
                  --v16;
                }
                while ( v16 );
              }
            }
          }
          v22 = v36;
        }
        v12 = v34;
        v19 += 8LL;
        if ( v19 >= (unsigned __int64)v22 )
          goto LABEL_19;
        v13 = v35;
        v14 = v33;
      }
      LODWORD(v24) = v35;
      goto LABEL_10;
    }
    LODWORD(v24) = 0;
LABEL_19:
    v12 = v34;
    if ( v20 >= 1 && v34 )
    {
      MiZeroAndFlushGoodCitizen(v34, v24, v23, v33, 0);
      v12 = v34;
    }
    if ( !v40 )
      break;
    v17 = 1LL;
    v38 = 1LL;
    v20 = 0;
    v19 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 0LL;
    v21 = 8 * v40;
    v35 = 0LL;
    v14 = 0;
    v40 = 0LL;
    v18 = v37;
    v22 = (char *)(v21 + v19);
    v36 = (char *)(v21 + v19);
    v33 = 0;
LABEL_5:
    v23 = 17;
  }
  v28 = (unsigned int)v16;
  if ( (_DWORD)v16 )
  {
    v29 = v42;
    do
    {
      MiDereferenceIoPages(1LL, *v29, v29[1] - *v29);
      v29 += 2;
      --v28;
    }
    while ( v28 );
  }
}
