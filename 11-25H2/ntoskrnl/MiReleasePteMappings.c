/*
 * XREFs of MiReleasePteMappings @ 0x1402BF490
 * Callers:
 *     MiInsertCachedPte @ 0x140328E50 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1403F5470 (MiEmptyPteBins.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1402BFD60 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1402BFE00 (RtlInterlockedSetClearRunEx.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiTbFlushListPromoteThreshold @ 0x14042C8E0 (MiTbFlushListPromoteThreshold.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned __int64 v19; // rsi
  ULONG_PTR v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  ULONG_PTR v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  ULONG_PTR j; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  ULONG_PTR v35; // r10
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rdx
  volatile signed __int32 *v38; // r11
  unsigned int v39; // eax
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rbx
  __int64 v42; // r13
  unsigned __int64 v43; // r12
  int v44; // esi
  char v45; // r11
  unsigned __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r9
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  bool k; // zf
  ULONG_PTR v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r11
  ULONG_PTR v58; // rdx
  __int64 v59; // r9
  bool i; // zf
  __int64 v61; // r11
  unsigned __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  int v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  unsigned int v71; // eax
  signed __int32 v72[8]; // [rsp+0h] [rbp-100h] BYREF
  int v73; // [rsp+30h] [rbp-D0h]
  int v74; // [rsp+34h] [rbp-CCh]
  unsigned int v75; // [rsp+38h] [rbp-C8h]
  int v76; // [rsp+3Ch] [rbp-C4h]
  __int64 v77; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v80; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v82; // [rsp+68h] [rbp-98h]
  __int64 v83; // [rsp+80h] [rbp-80h] BYREF
  int v84; // [rsp+88h] [rbp-78h]
  int v85; // [rsp+8Ch] [rbp-74h]
  unsigned int v86; // [rsp+90h] [rbp-70h]
  int v87; // [rsp+94h] [rbp-6Ch]
  bool v88; // [rsp+98h] [rbp-68h]
  __int16 v89; // [rsp+99h] [rbp-67h]
  int v90; // [rsp+9Ch] [rbp-64h]
  __int64 v91; // [rsp+A0h] [rbp-60h]
  __int64 v92; // [rsp+A8h] [rbp-58h]

  memset_0(&v83, 0, 0xC8uLL);
  if ( a4 != 2 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0LL;
    v11 = *a2 >> 16;
    v77 = 0LL;
    v73 = 0;
    if ( a3 )
    {
      _InterlockedOr(v72, 0);
      v8 = KiTbFlushTimeStamp;
    }
    else
    {
      v9 = 1;
      v73 = 1;
    }
    v75 = v8;
    v12 = 0;
    v13 = 16LL;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      v12 = a4;
      v13 = 1LL;
    }
    v74 = v12;
    v15 = v11;
    v14 = v11 / v13;
    v81 = v13;
    v82 = v15 / v13;
    while ( 1 )
    {
      if ( v9 >= 2 )
        return v77;
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
          v54 = *(_QWORD *)(v20 + 8);
          if ( qword_140E2D940 )
          {
            if ( (v54 & 0x10) != 0 )
              v54 &= ~0x10uLL;
            else
              v54 &= ~qword_140E2D940;
          }
          v21 = HIDWORD(v54);
        }
        v10 += v21;
        v80 = v10;
        if ( !v19 )
        {
          v79 = 0LL;
LABEL_22:
          v24 = v10 / v13;
          if ( !v12 )
          {
            if ( BugCheckParameter4 >= *(_QWORD *)a1 )
              goto LABEL_76;
            if ( v24 > 1 )
            {
              if ( *(_QWORD *)a1 - BugCheckParameter4 < v24 )
                goto LABEL_76;
              v56 = *(_QWORD *)(a1 + 8);
              v57 = *(_QWORD *)(v56 + 8 * (BugCheckParameter4 >> 6));
              v58 = v56 + 8 * (BugCheckParameter4 >> 6);
              v59 = v56 + 8 * ((v24 + BugCheckParameter4 - 1) >> 6);
              if ( v58 == v59 )
              {
                if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << BugCheckParameter4) & v57) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << BugCheckParameter4 )
                  goto LABEL_76;
              }
              else
              {
                for ( i = ((-1LL << BugCheckParameter4) & v57) == -1LL << BugCheckParameter4; ; i = v61 == -1 )
                {
                  if ( !i )
                    goto LABEL_76;
                  v61 = *(_QWORD *)(v58 + 8);
                  v58 += 8LL;
                  if ( v58 == v59 )
                    break;
                }
                if ( (v61 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v24 + (unsigned __int8)BugCheckParameter4 - 1))) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v24 + (unsigned __int8)BugCheckParameter4 - 1) )
LABEL_76:
                  KeBugCheckEx(0xDAu, 0x504uLL, v20, v10, BugCheckParameter4);
              }
              v12 = v74;
            }
            else if ( v24 != 1
                   || !_bittest64(
                         (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                         BugCheckParameter4 & 0x3F) )
            {
              goto LABEL_76;
            }
          }
          if ( v9 )
          {
            if ( v19 && !v12 )
            {
              if ( v19 / v13 >= *(_QWORD *)a1 )
                KeBugCheckEx(0xDAu, 0x505uLL, v20, *(_QWORD *)v20, v19 / v13);
              v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
              if ( (v25 & 0xC01) != 0 || (v25 & 0x3E0) != 0 )
                goto LABEL_102;
              if ( v25 )
              {
                v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
                if ( qword_140E2D940 )
                {
                  if ( (v25 & 0x10) != 0 )
                    v26 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
                  else
                    v26 = v25 & ~qword_140E2D940;
                }
                v27 = v26 >> 25;
              }
              else
              {
                v27 = 0LL;
              }
              if ( v27 / v13 >= *(_QWORD *)a1 )
LABEL_102:
                KeBugCheckEx(0xDAu, 0x506uLL, v20, *(_QWORD *)v20, v25);
            }
            for ( j = 0LL; j < v10; ++j )
              *(_QWORD *)(v20 + 8 * j) = CLFS_LSN_NULL_EXT;
            if ( v12 )
            {
              if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
                BugCheckParameter4 *= 16LL;
              v29 = 16 * ((((_DWORD)v10 + 511) & 0xFFFFFE00) / v13);
              if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
                v29 = (((_DWORD)v10 + 511) & 0xFFFFFE00) / v13;
              v30 = *(_QWORD *)(a1 + 32) + 8 * BugCheckParameter4;
              _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), -(__int64)v29);
              v31 = v30 << 25;
              v32 = *(unsigned int *)(a1 + 44);
              v33 = (__int64)(v31 + (v29 << 28)) >> 16;
              if ( v12 == 1 )
              {
                v71 = 10;
                if ( (_DWORD)v32 == 8 )
                  v71 = 12;
                v32 = v71;
              }
              MiReturnSystemVa(v31 >> 16, v33, v32);
              goto LABEL_43;
            }
            v35 = BugCheckParameter4 & 0x1F;
            v36 = v10 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v10);
            v37 = v10 / v13;
            v38 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
            if ( v35 + v24 > 0x20 )
            {
              if ( (BugCheckParameter4 & 0x1F) != 0 )
              {
                _InterlockedAnd(v38, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v35));
                v37 = v24 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
                ++v38;
              }
              if ( v37 >= 0x20 )
              {
                v62 = v37 >> 5;
                v37 += -32LL * (v37 >> 5);
                do
                {
                  *v38++ = 0;
                  --v62;
                }
                while ( v62 );
              }
              if ( v37 )
              {
                v39 = -1 << v37;
LABEL_52:
                _InterlockedAnd(v38, v39);
              }
            }
            else
            {
              if ( v24 != 32 )
              {
                v39 = ~(((1 << v24) - 1) << v35);
                goto LABEL_52;
              }
              *v38 = 0;
            }
            if ( v36 > 0x200000 )
            {
              v40 = 32LL;
              k = (*(_DWORD *)(a1 + 40) & 1) == 0;
              v41 = 0LL;
              v76 = *(_DWORD *)(a1 + 40) & 1;
              if ( k )
                v40 = 512LL;
              v42 = BugCheckParameter4 & ~(v40 - 1);
              v43 = (~(v40 - 1) & (BugCheckParameter4 + v24 + v40 - 1)) - v42;
              if ( v43 )
              {
                v44 = v76;
                v45 = 64 - v40;
                v78 = 64 - v40;
                do
                {
                  v46 = v41 + v42;
                  if ( v41 + v42 < *(_QWORD *)a1 && *(_QWORD *)a1 - v46 >= v40 )
                  {
                    v47 = *(_QWORD *)(a1 + 8);
                    v48 = *(_QWORD *)(v47 + 8 * (v46 >> 6));
                    v49 = v47 + 8 * (v46 >> 6);
                    v50 = v47 + 8 * ((v46 + v40 - 1) >> 6);
                    if ( v49 == v50 )
                    {
                      v51 = 0xFFFFFFFFFFFFFFFFuLL >> v45 << v46;
LABEL_62:
                      if ( (v51 & v48) == 0 )
                      {
                        if ( (unsigned int)RtlInterlockedSetClearRunEx(a1, v41 + v42, v40) )
                        {
                          v52 = -16LL;
                          if ( !v44 )
                            v52 = -1LL;
                          _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v40 * v52);
                          MiReturnSystemPtes(a1, 0LL, v41 + v42, v40);
                        }
                        v45 = v78;
                      }
                    }
                    else
                    {
                      for ( k = ((-1LL << v46) & v48) == 0; k; k = v48 == 0 )
                      {
                        v48 = *(_QWORD *)(v49 + 8);
                        v49 += 8LL;
                        if ( v49 == v50 )
                        {
                          v51 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v46 + (unsigned __int8)v40 - 1);
                          goto LABEL_62;
                        }
                      }
                    }
                  }
                  v41 += v40;
                }
                while ( v41 < v43 );
                v19 = v79;
              }
              v9 = v73;
              v13 = v81;
              v10 = v80;
            }
LABEL_43:
            v77 += v10;
LABEL_44:
            v12 = v74;
            v10 = 0LL;
            goto LABEL_45;
          }
          v63 = (__int64)(v20 << 25) >> 16;
          if ( !v90 )
          {
            v64 = MiVaToFlushVm(v63);
            v85 = 20;
            v65 = v64;
            v86 = 8;
            v87 = 1;
            v83 = v64;
            v88 = (*(_DWORD *)(v64 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v64 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v64 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              v66 = v86;
              if ( (*(_DWORD *)(v65 + 184) & 0xF) == 0 )
              {
                v67 = 1;
                goto LABEL_115;
              }
            }
            else
            {
              v66 = 9;
            }
            v67 = 0;
LABEL_115:
            v84 = v67;
            v89 = 0;
            v86 = v66 & 0xFFFFFFDB;
            v90 = 0;
            v91 = 0LL;
            v92 = 0LL;
          }
          MiInsertTbFlushEntry(&v83, v63, v10, 0LL);
          if ( v90 == v85 || (v70 = MiTbFlushListPromoteThreshold(&v83), v91 + 1 >= v70) )
          {
            if ( !v89 )
              HIBYTE(v89) = (unsigned __int64)MiTbFlushListPromoteThreshold(&v83) < 0x400;
            MiFlushTbList(&v83, v68, v69);
            _InterlockedOr(v72, 0);
            if ( !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v75, (unsigned int)KiTbFlushTimeStamp, 0xFFFFFFFFLL) )
            {
              v10 = 0LL;
              goto LABEL_122;
            }
          }
          goto LABEL_44;
        }
        if ( qword_140E2D940 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140E2D940;
        }
        v19 >>= 25;
        v79 = v19;
        if ( !v19 )
          goto LABEL_22;
        v22 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
        if ( (*v22 & 2) != 0 )
        {
          v23 = 1LL;
        }
        else
        {
          v55 = v22[1];
          if ( qword_140E2D940 )
          {
            if ( (v55 & 0x10) != 0 )
              v55 &= ~0x10uLL;
            else
              v55 &= ~qword_140E2D940;
          }
          v23 = HIDWORD(v55);
        }
        if ( (v19 + v23) / v13 != BugCheckParameter4 )
          goto LABEL_22;
LABEL_45:
        v34 = v19 % v13;
        BugCheckParameter4 = v19 / v13;
      }
      while ( v19 / v13 );
      if ( v9 )
        goto LABEL_47;
LABEL_122:
      if ( v90 )
        MiFlushTbList(&v83, v34, BugCheckParameter4);
LABEL_47:
      v12 = v74;
      ++v9;
      v14 = v82;
      v73 = v9;
    }
  }
  return MiReleaseLargePdeMappings(a1, a2, a3);
}
