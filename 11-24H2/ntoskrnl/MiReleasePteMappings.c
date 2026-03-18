/*
 * XREFs of MiReleasePteMappings @ 0x140241200
 * Callers:
 *     MiInsertCachedPte @ 0x14028E4E0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1403FCDF4 (MiEmptyPteBins.c)
 * Callees:
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiReturnSystemPtes @ 0x140241AE0 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x140241B80 (RtlInterlockedSetClearRunEx.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiTbFlushListPromoteThreshold @ 0x140424950 (MiTbFlushListPromoteThreshold.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x1404519BC (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiReleasePteMappings(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  int v8; // ecx
  unsigned int v9; // r13d
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // rax
  int v12; // r10d
  unsigned __int64 v13; // r12
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // rtt
  ULONG_PTR BugCheckParameter4; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  ULONG_PTR v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  ULONG_PTR v31; // rax
  unsigned __int64 v32; // rax
  ULONG_PTR v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  ULONG_PTR j; // rcx
  ULONG_PTR v37; // r10
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  volatile signed __int32 *v40; // r11
  unsigned int v41; // eax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rbx
  __int64 v44; // r13
  unsigned __int64 v45; // r12
  int v46; // edi
  char v47; // r11
  unsigned __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  bool k; // zf
  __int64 v56; // rcx
  __int64 v57; // r11
  ULONG_PTR v58; // rdx
  __int64 v59; // r9
  bool i; // zf
  __int64 v61; // r11
  unsigned __int64 v62; // rcx
  __int64 v63; // rbx
  struct _LIST_ENTRY **v64; // rax
  struct _LIST_ENTRY **v65; // rdx
  int v66; // eax
  int v67; // ecx
  __int64 v68; // rdx
  unsigned __int64 v69; // rax
  unsigned int v70; // eax
  signed __int32 v71[8]; // [rsp+0h] [rbp-100h] BYREF
  int v72; // [rsp+30h] [rbp-D0h]
  int v73; // [rsp+34h] [rbp-CCh]
  unsigned int v74; // [rsp+38h] [rbp-C8h]
  int v75; // [rsp+3Ch] [rbp-C4h]
  __int64 v76; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v77; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v79; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v80; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v81; // [rsp+68h] [rbp-98h]
  struct _LIST_ENTRY **v82; // [rsp+80h] [rbp-80h] BYREF
  int v83; // [rsp+88h] [rbp-78h]
  int v84; // [rsp+8Ch] [rbp-74h]
  unsigned int v85; // [rsp+90h] [rbp-70h]
  int v86; // [rsp+94h] [rbp-6Ch]
  bool v87; // [rsp+98h] [rbp-68h]
  __int16 v88; // [rsp+99h] [rbp-67h]
  int v89; // [rsp+9Ch] [rbp-64h]
  __int64 v90; // [rsp+A0h] [rbp-60h]
  __int64 v91; // [rsp+A8h] [rbp-58h]

  memset_0(&v82, 0, 0xC8uLL);
  if ( a4 != 2 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0LL;
    v11 = *a2 >> 16;
    v76 = 0LL;
    v72 = 0;
    if ( a3 )
    {
      _InterlockedOr(v71, 0);
      v8 = KiTbFlushTimeStamp;
    }
    else
    {
      v9 = 1;
      v72 = 1;
    }
    v74 = v8;
    v12 = 0;
    v13 = 16LL;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      v12 = a4;
      v13 = 1LL;
    }
    v73 = v12;
    v15 = v11;
    v14 = v11 / v13;
    v80 = v13;
    v81 = v15 / v13;
    while ( 1 )
    {
      if ( v9 >= 2 )
        return v76;
      BugCheckParameter4 = v14;
      do
      {
        v18 = *(_QWORD *)(a1 + 32);
        v19 = *(_QWORD *)(v18 + 8 * BugCheckParameter4 * v13);
        v20 = v18 + 8 * BugCheckParameter4 * v13;
        if ( (v19 & 2) != 0 )
        {
          v21 = 1LL;
        }
        else
        {
          v31 = *(_QWORD *)(v20 + 8);
          if ( qword_140E2DB80 )
          {
            if ( (v31 & 0x10) != 0 )
              v31 &= ~0x10uLL;
            else
              v31 &= ~qword_140E2DB80;
          }
          v21 = HIDWORD(v31);
        }
        v10 += v21;
        v79 = v10;
        if ( !v19 )
        {
          v78 = 0LL;
LABEL_22:
          v24 = v10 / v13;
          if ( !v12 )
          {
            if ( BugCheckParameter4 >= *(_QWORD *)a1 )
              goto LABEL_43;
            if ( v24 > 1 )
            {
              if ( *(_QWORD *)a1 - BugCheckParameter4 < v24 )
                goto LABEL_43;
              v56 = *(_QWORD *)(a1 + 8);
              v57 = *(_QWORD *)(v56 + 8 * (BugCheckParameter4 >> 6));
              v58 = v56 + 8 * (BugCheckParameter4 >> 6);
              v59 = v56 + 8 * ((v24 + BugCheckParameter4 - 1) >> 6);
              if ( v58 == v59 )
              {
                if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << BugCheckParameter4) & v57) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << BugCheckParameter4 )
                  goto LABEL_43;
              }
              else
              {
                for ( i = ((-1LL << BugCheckParameter4) & v57) == -1LL << BugCheckParameter4; ; i = v61 == -1 )
                {
                  if ( !i )
                    goto LABEL_43;
                  v61 = *(_QWORD *)(v58 + 8);
                  v58 += 8LL;
                  if ( v58 == v59 )
                    break;
                }
                if ( (v61 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v24 + (unsigned __int8)BugCheckParameter4 - 1))) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v24 + (unsigned __int8)BugCheckParameter4 - 1) )
LABEL_43:
                  KeBugCheckEx(0xDAu, 0x504uLL, v20, v10, BugCheckParameter4);
              }
              v12 = v73;
            }
            else if ( v24 != 1
                   || !_bittest64(
                         (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                         BugCheckParameter4 & 0x3F) )
            {
              goto LABEL_43;
            }
          }
          if ( v9 )
          {
            if ( v19 && !v12 )
            {
              if ( v19 / v13 >= *(_QWORD *)a1 )
                KeBugCheckEx(0xDAu, 0x505uLL, v20, *(_QWORD *)v20, v19 / v13);
              v33 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
              if ( (v33 & 0xC01) != 0 || (v33 & 0x3E0) != 0 )
                goto LABEL_103;
              if ( v33 )
              {
                v34 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
                if ( qword_140E2DB80 )
                {
                  if ( (v33 & 0x10) != 0 )
                    v34 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
                  else
                    v34 = v33 & ~qword_140E2DB80;
                }
                v35 = v34 >> 25;
              }
              else
              {
                v35 = 0LL;
              }
              if ( v35 / v13 >= *(_QWORD *)a1 )
LABEL_103:
                KeBugCheckEx(0xDAu, 0x506uLL, v20, *(_QWORD *)v20, v33);
            }
            for ( j = 0LL; j < v10; ++j )
              *(_QWORD *)(v20 + 8 * j) = CLFS_LSN_NULL_EXT;
            if ( v12 )
            {
              if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
                BugCheckParameter4 *= 16LL;
              v25 = 16 * ((((_DWORD)v10 + 511) & 0xFFFFFE00) / v13);
              if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
                v25 = (((_DWORD)v10 + 511) & 0xFFFFFE00) / v13;
              v26 = *(_QWORD *)(a1 + 32) + 8 * BugCheckParameter4;
              _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), -(__int64)v25);
              v27 = v26 << 25;
              v28 = *(unsigned int *)(a1 + 44);
              v29 = (__int64)(v27 + (v25 << 28)) >> 16;
              if ( v12 == 1 )
              {
                v70 = 10;
                if ( (_DWORD)v28 == 8 )
                  v70 = 12;
                v28 = v70;
              }
              MiReturnSystemVa(v27 >> 16, v29, v28);
              goto LABEL_33;
            }
            v37 = BugCheckParameter4 & 0x1F;
            v38 = v10 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v10);
            v39 = v10 / v13;
            v40 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
            if ( v37 + v24 > 0x20 )
            {
              if ( (BugCheckParameter4 & 0x1F) != 0 )
              {
                _InterlockedAnd(v40, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v37));
                v39 = v24 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
                ++v40;
              }
              if ( v39 >= 0x20 )
              {
                v62 = v39 >> 5;
                v39 += -32LL * (v39 >> 5);
                do
                {
                  *v40++ = 0;
                  --v62;
                }
                while ( v62 );
              }
              if ( v39 )
              {
                v41 = -1 << v39;
LABEL_67:
                _InterlockedAnd(v40, v41);
              }
            }
            else
            {
              if ( v24 != 32 )
              {
                v41 = ~(((1 << v24) - 1) << v37);
                goto LABEL_67;
              }
              *v40 = 0;
            }
            if ( v38 > 0x200000 )
            {
              v42 = 32LL;
              k = (*(_DWORD *)(a1 + 40) & 1) == 0;
              v43 = 0LL;
              v75 = *(_DWORD *)(a1 + 40) & 1;
              if ( k )
                v42 = 512LL;
              v44 = BugCheckParameter4 & ~(v42 - 1);
              v45 = (~(v42 - 1) & (BugCheckParameter4 + v24 + v42 - 1)) - v44;
              if ( v45 )
              {
                v46 = v75;
                v47 = 64 - v42;
                v77 = 64 - v42;
                do
                {
                  v48 = v43 + v44;
                  if ( v43 + v44 < *(_QWORD *)a1 && *(_QWORD *)a1 - v48 >= v42 )
                  {
                    v49 = *(_QWORD *)(a1 + 8);
                    v50 = *(_QWORD *)(v49 + 8 * (v48 >> 6));
                    v51 = v49 + 8 * (v48 >> 6);
                    v52 = v49 + 8 * ((v48 + v42 - 1) >> 6);
                    if ( v51 == v52 )
                    {
                      v53 = 0xFFFFFFFFFFFFFFFFuLL >> v47 << v48;
LABEL_77:
                      if ( (v53 & v50) == 0 )
                      {
                        if ( (unsigned int)RtlInterlockedSetClearRunEx(a1, v43 + v44, v42) )
                        {
                          v54 = -16LL;
                          if ( !v46 )
                            v54 = -1LL;
                          _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v42 * v54);
                          MiReturnSystemPtes(a1, 0LL, v43 + v44, v42);
                        }
                        v47 = v77;
                      }
                    }
                    else
                    {
                      for ( k = ((-1LL << v48) & v50) == 0; k; k = v50 == 0 )
                      {
                        v50 = *(_QWORD *)(v51 + 8);
                        v51 += 8LL;
                        if ( v51 == v52 )
                        {
                          v53 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v48 + (unsigned __int8)v42 - 1);
                          goto LABEL_77;
                        }
                      }
                    }
                  }
                  v43 += v42;
                }
                while ( v43 < v45 );
                v19 = v78;
              }
              v9 = v72;
              v13 = v80;
              v10 = v79;
            }
LABEL_33:
            v76 += v10;
LABEL_34:
            v12 = v73;
            v10 = 0LL;
            goto LABEL_35;
          }
          v63 = (__int64)(v20 << 25) >> 16;
          if ( !v89 )
          {
            v64 = (struct _LIST_ENTRY **)MiVaToFlushVm(v63);
            v84 = 20;
            v65 = v64;
            v85 = 8;
            v86 = 1;
            v82 = v64;
            v87 = ((_DWORD)v64[23] & 0x800) != 0;
            if ( ((_DWORD)v64[23] & 0xF) != 0 || v64 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              v66 = v85;
              if ( ((_DWORD)v65[23] & 0xF) == 0 )
              {
                v67 = 1;
                goto LABEL_116;
              }
            }
            else
            {
              v66 = 9;
            }
            v67 = 0;
LABEL_116:
            v83 = v67;
            v88 = 0;
            v85 = v66 & 0xFFFFFFDB;
            v89 = 0;
            v90 = 0LL;
            v91 = 0LL;
          }
          MiInsertTbFlushEntry(&v82, v63, v10);
          if ( v89 == v84 || (v69 = MiTbFlushListPromoteThreshold(&v82), v90 + 1 >= v69) )
          {
            if ( !v88 )
              HIBYTE(v88) = (unsigned __int64)MiTbFlushListPromoteThreshold(&v82) < 0x400;
            MiFlushTbList(&v82, v68);
            _InterlockedOr(v71, 0);
            if ( !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v74, (unsigned int)KiTbFlushTimeStamp, 0xFFFFFFFFLL) )
            {
              v10 = 0LL;
              goto LABEL_123;
            }
          }
          goto LABEL_34;
        }
        if ( qword_140E2DB80 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140E2DB80;
        }
        v19 >>= 25;
        v78 = v19;
        if ( !v19 )
          goto LABEL_22;
        v22 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
        if ( (*v22 & 2) != 0 )
        {
          v23 = 1LL;
        }
        else
        {
          v32 = v22[1];
          if ( qword_140E2DB80 )
          {
            if ( (v32 & 0x10) != 0 )
              v32 &= ~0x10uLL;
            else
              v32 &= ~qword_140E2DB80;
          }
          v23 = HIDWORD(v32);
        }
        if ( (v19 + v23) / v13 != BugCheckParameter4 )
          goto LABEL_22;
LABEL_35:
        v30 = v19 % v13;
        BugCheckParameter4 = v19 / v13;
      }
      while ( v19 / v13 );
      if ( v9 )
        goto LABEL_37;
LABEL_123:
      if ( v89 )
        MiFlushTbList(&v82, v30);
LABEL_37:
      v12 = v73;
      ++v9;
      v14 = v81;
      v72 = v9;
    }
  }
  return MiReleaseLargePdeMappings(a1, a2, a3);
}
