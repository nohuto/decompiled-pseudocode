/*
 * XREFs of MiReleasePteMappings @ 0x140209350
 * Callers:
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x1403F67B4 (MiEmptyPteBins.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x140209C30 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x140209CD0 (RtlInterlockedSetClearRunEx.c)
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiTbFlushListPromoteThreshold @ 0x140418800 (MiTbFlushListPromoteThreshold.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x140446A68 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  ULONG_PTR v30; // rax
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  ULONG_PTR j; // rcx
  ULONG_PTR v36; // r10
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rdx
  volatile signed __int32 *v39; // r11
  unsigned int v40; // eax
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rbx
  __int64 v43; // r13
  unsigned __int64 v44; // r12
  int v45; // edi
  char v46; // r11
  unsigned __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r9
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  bool k; // zf
  __int64 v55; // rcx
  __int64 v56; // r11
  ULONG_PTR v57; // rdx
  __int64 v58; // r9
  bool i; // zf
  __int64 v60; // r11
  unsigned __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // eax
  int v66; // ecx
  unsigned __int64 v67; // rax
  unsigned int v68; // eax
  signed __int32 v69[8]; // [rsp+0h] [rbp-100h] BYREF
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+34h] [rbp-CCh]
  unsigned int v72; // [rsp+38h] [rbp-C8h]
  int v73; // [rsp+3Ch] [rbp-C4h]
  __int64 v74; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v75; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v76; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v77; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v78; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v79; // [rsp+68h] [rbp-98h]
  __int64 v80; // [rsp+80h] [rbp-80h] BYREF
  int v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+8Ch] [rbp-74h]
  unsigned int v83; // [rsp+90h] [rbp-70h]
  int v84; // [rsp+94h] [rbp-6Ch]
  bool v85; // [rsp+98h] [rbp-68h]
  __int16 v86; // [rsp+99h] [rbp-67h]
  int v87; // [rsp+9Ch] [rbp-64h]
  __int64 v88; // [rsp+A0h] [rbp-60h]
  __int64 v89; // [rsp+A8h] [rbp-58h]

  memset_0(&v80, 0, 0xC8uLL);
  if ( a4 != 2 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0LL;
    v11 = *a2 >> 16;
    v74 = 0LL;
    v70 = 0;
    if ( a3 )
    {
      _InterlockedOr(v69, 0);
      v8 = KiTbFlushTimeStamp;
    }
    else
    {
      v9 = 1;
      v70 = 1;
    }
    v72 = v8;
    v12 = 0;
    v13 = 16LL;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      v12 = a4;
      v13 = 1LL;
    }
    v71 = v12;
    v15 = v11;
    v14 = v11 / v13;
    v78 = v13;
    v79 = v15 / v13;
    while ( 1 )
    {
      if ( v9 >= 2 )
        return v74;
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
          v30 = *(_QWORD *)(v20 + 8);
          if ( qword_140E2DCC0 )
          {
            if ( (v30 & 0x10) != 0 )
              v30 &= ~0x10uLL;
            else
              v30 &= ~qword_140E2DCC0;
          }
          v21 = HIDWORD(v30);
        }
        v10 += v21;
        v77 = v10;
        if ( !v19 )
        {
          v76 = 0LL;
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
              v55 = *(_QWORD *)(a1 + 8);
              v56 = *(_QWORD *)(v55 + 8 * (BugCheckParameter4 >> 6));
              v57 = v55 + 8 * (BugCheckParameter4 >> 6);
              v58 = v55 + 8 * ((v24 + BugCheckParameter4 - 1) >> 6);
              if ( v57 == v58 )
              {
                if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << BugCheckParameter4) & v56) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << BugCheckParameter4 )
                  goto LABEL_43;
              }
              else
              {
                for ( i = ((-1LL << BugCheckParameter4) & v56) == -1LL << BugCheckParameter4; ; i = v60 == -1 )
                {
                  if ( !i )
                    goto LABEL_43;
                  v60 = *(_QWORD *)(v57 + 8);
                  v57 += 8LL;
                  if ( v57 == v58 )
                    break;
                }
                if ( (v60 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v24 + (unsigned __int8)BugCheckParameter4 - 1))) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v24 + (unsigned __int8)BugCheckParameter4 - 1) )
LABEL_43:
                  KeBugCheckEx(0xDAu, 0x504uLL, v20, v10, BugCheckParameter4);
              }
              v12 = v71;
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
              v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
              if ( (v32 & 0xC01) != 0 || (v32 & 0x3E0) != 0 )
                goto LABEL_103;
              if ( v32 )
              {
                v33 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
                if ( qword_140E2DCC0 )
                {
                  if ( (v32 & 0x10) != 0 )
                    v33 = v32 & 0xFFFFFFFFFFFFFFEFuLL;
                  else
                    v33 = v32 & ~qword_140E2DCC0;
                }
                v34 = v33 >> 25;
              }
              else
              {
                v34 = 0LL;
              }
              if ( v34 / v13 >= *(_QWORD *)a1 )
LABEL_103:
                KeBugCheckEx(0xDAu, 0x506uLL, v20, *(_QWORD *)v20, v32);
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
                v68 = 10;
                if ( (_DWORD)v28 == 8 )
                  v68 = 12;
                v28 = v68;
              }
              MiReturnSystemVa(v27 >> 16, v29, v28);
              goto LABEL_33;
            }
            v36 = BugCheckParameter4 & 0x1F;
            v37 = v10 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v10);
            v38 = v10 / v13;
            v39 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
            if ( v36 + v24 > 0x20 )
            {
              if ( (BugCheckParameter4 & 0x1F) != 0 )
              {
                _InterlockedAnd(v39, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v36));
                v38 = v24 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
                ++v39;
              }
              if ( v38 >= 0x20 )
              {
                v61 = v38 >> 5;
                v38 += -32LL * (v38 >> 5);
                do
                {
                  *v39++ = 0;
                  --v61;
                }
                while ( v61 );
              }
              if ( v38 )
              {
                v40 = -1 << v38;
LABEL_67:
                _InterlockedAnd(v39, v40);
              }
            }
            else
            {
              if ( v24 != 32 )
              {
                v40 = ~(((1 << v24) - 1) << v36);
                goto LABEL_67;
              }
              *v39 = 0;
            }
            if ( v37 > 0x200000 )
            {
              v41 = 32LL;
              k = (*(_DWORD *)(a1 + 40) & 1) == 0;
              v42 = 0LL;
              v73 = *(_DWORD *)(a1 + 40) & 1;
              if ( k )
                v41 = 512LL;
              v43 = BugCheckParameter4 & ~(v41 - 1);
              v44 = (~(v41 - 1) & (BugCheckParameter4 + v24 + v41 - 1)) - v43;
              if ( v44 )
              {
                v45 = v73;
                v46 = 64 - v41;
                v75 = 64 - v41;
                do
                {
                  v47 = v42 + v43;
                  if ( v42 + v43 < *(_QWORD *)a1 && *(_QWORD *)a1 - v47 >= v41 )
                  {
                    v48 = *(_QWORD *)(a1 + 8);
                    v49 = *(_QWORD *)(v48 + 8 * (v47 >> 6));
                    v50 = v48 + 8 * (v47 >> 6);
                    v51 = v48 + 8 * ((v47 + v41 - 1) >> 6);
                    if ( v50 == v51 )
                    {
                      v52 = 0xFFFFFFFFFFFFFFFFuLL >> v46 << v47;
LABEL_77:
                      if ( (v52 & v49) == 0 )
                      {
                        if ( (unsigned int)RtlInterlockedSetClearRunEx(a1, v42 + v43, v41) )
                        {
                          v53 = -16LL;
                          if ( !v45 )
                            v53 = -1LL;
                          _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v41 * v53);
                          MiReturnSystemPtes(a1, 0LL, v42 + v43, v41);
                        }
                        v46 = v75;
                      }
                    }
                    else
                    {
                      for ( k = ((-1LL << v47) & v49) == 0; k; k = v49 == 0 )
                      {
                        v49 = *(_QWORD *)(v50 + 8);
                        v50 += 8LL;
                        if ( v50 == v51 )
                        {
                          v52 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v47 + (unsigned __int8)v41 - 1);
                          goto LABEL_77;
                        }
                      }
                    }
                  }
                  v42 += v41;
                }
                while ( v42 < v44 );
                v19 = v76;
              }
              v9 = v70;
              v13 = v78;
              v10 = v77;
            }
LABEL_33:
            v74 += v10;
LABEL_34:
            v12 = v71;
            v10 = 0LL;
            goto LABEL_35;
          }
          v62 = (__int64)(v20 << 25) >> 16;
          if ( !v87 )
          {
            v63 = MiVaToFlushVm(v62);
            v82 = 20;
            v64 = v63;
            v83 = 8;
            v84 = 1;
            v80 = v63;
            v85 = (*(_DWORD *)(v63 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v63 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v63 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              v65 = v83;
              if ( (*(_DWORD *)(v64 + 184) & 0xF) == 0 )
              {
                v66 = 1;
                goto LABEL_116;
              }
            }
            else
            {
              v65 = 9;
            }
            v66 = 0;
LABEL_116:
            v81 = v66;
            v86 = 0;
            v83 = v65 & 0xFFFFFFDB;
            v87 = 0;
            v88 = 0LL;
            v89 = 0LL;
          }
          MiInsertTbFlushEntry(&v80, v62, v10);
          if ( v87 == v82 || (v67 = MiTbFlushListPromoteThreshold(&v80), v88 + 1 >= v67) )
          {
            if ( !v86 )
              HIBYTE(v86) = (unsigned __int64)MiTbFlushListPromoteThreshold(&v80) < 0x400;
            MiFlushTbList(&v80);
            _InterlockedOr(v69, 0);
            if ( !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v72, (unsigned int)KiTbFlushTimeStamp, 0xFFFFFFFFLL) )
            {
              v10 = 0LL;
              goto LABEL_123;
            }
          }
          goto LABEL_34;
        }
        if ( qword_140E2DCC0 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140E2DCC0;
        }
        v19 >>= 25;
        v76 = v19;
        if ( !v19 )
          goto LABEL_22;
        v22 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19);
        if ( (*v22 & 2) != 0 )
        {
          v23 = 1LL;
        }
        else
        {
          v31 = v22[1];
          if ( qword_140E2DCC0 )
          {
            if ( (v31 & 0x10) != 0 )
              v31 &= ~0x10uLL;
            else
              v31 &= ~qword_140E2DCC0;
          }
          v23 = HIDWORD(v31);
        }
        if ( (v19 + v23) / v13 != BugCheckParameter4 )
          goto LABEL_22;
LABEL_35:
        BugCheckParameter4 = v19 / v13;
      }
      while ( v19 / v13 );
      if ( v9 )
        goto LABEL_37;
LABEL_123:
      if ( v87 )
        MiFlushTbList(&v80);
LABEL_37:
      v12 = v71;
      ++v9;
      v14 = v79;
      v70 = v9;
    }
  }
  return MiReleaseLargePdeMappings(a1, a2, a3);
}
