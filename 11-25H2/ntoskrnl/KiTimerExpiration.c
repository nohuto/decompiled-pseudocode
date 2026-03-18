/*
 * XREFs of KiTimerExpiration @ 0x1402EF3C0
 * Callers:
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x1405C2D90 (KiTimerExpirationDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

int __fastcall KiTimerExpiration(__int64 a1, int a2, unsigned __int64 a3, char a4, _DWORD *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v9; // rax
  bool v10; // zf
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned int v14; // ebx
  int v15; // r12d
  int v16; // ebp
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  int v21; // r13d
  int v22; // r9d
  unsigned __int64 *v23; // rdi
  _QWORD *v24; // r12
  __int64 v25; // rcx
  int v26; // r12d
  unsigned int v27; // edx
  unsigned int v28; // r8d
  int v29; // r9d
  unsigned __int64 *v30; // rdi
  _QWORD *v31; // rbp
  unsigned int v32; // r12d
  volatile signed __int64 *v33; // r9
  _QWORD *v34; // rcx
  ULONG_PTR v35; // rdx
  unsigned int v36; // r13d
  volatile signed __int64 *v37; // rdx
  _QWORD *v38; // rcx
  ULONG_PTR v39; // r13
  __int64 v40; // rax
  unsigned int v41; // r8d
  _QWORD *v42; // r11
  _QWORD *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r8d
  ULONG_PTR BugCheckParameter4; // r11
  __int64 v47; // r9
  unsigned __int64 v48; // r9
  unsigned int v49; // ebp
  volatile signed __int32 *v50; // rcx
  __int64 v51; // r9
  unsigned __int64 v52; // r11
  volatile signed __int32 *v53; // rcx
  unsigned int v54; // r12d
  __int64 v55; // r11
  unsigned int v56; // eax
  unsigned int v57; // r12d
  unsigned int v58; // ebp
  char v60; // [rsp+30h] [rbp-108h]
  char v61; // [rsp+30h] [rbp-108h]
  unsigned int v62; // [rsp+34h] [rbp-104h]
  unsigned int v63; // [rsp+38h] [rbp-100h]
  unsigned int v64; // [rsp+3Ch] [rbp-FCh]
  unsigned int v65; // [rsp+3Ch] [rbp-FCh]
  int v67; // [rsp+44h] [rbp-F4h]
  unsigned __int64 v68; // [rsp+48h] [rbp-F0h]
  int v69; // [rsp+50h] [rbp-E8h]
  unsigned __int16 v70; // [rsp+50h] [rbp-E8h]
  volatile signed __int32 *v71; // [rsp+50h] [rbp-E8h]
  unsigned int v72; // [rsp+58h] [rbp-E0h]
  int v73; // [rsp+58h] [rbp-E0h]
  volatile signed __int64 *v74; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v75; // [rsp+60h] [rbp-D8h]
  int v76; // [rsp+68h] [rbp-D0h]
  int v77; // [rsp+6Ch] [rbp-CCh]
  unsigned int v78; // [rsp+6Ch] [rbp-CCh]
  unsigned __int64 v79; // [rsp+70h] [rbp-C8h]
  volatile signed __int32 *v80; // [rsp+70h] [rbp-C8h]
  _QWORD *v81; // [rsp+78h] [rbp-C0h]
  ULONG_PTR v82; // [rsp+78h] [rbp-C0h]
  __int64 v83; // [rsp+88h] [rbp-B0h]
  __int64 v84; // [rsp+88h] [rbp-B0h]
  __int64 v85; // [rsp+90h] [rbp-A8h]
  unsigned __int16 v86; // [rsp+90h] [rbp-A8h]
  unsigned int v88; // [rsp+A0h] [rbp-98h]
  unsigned int v89; // [rsp+B8h] [rbp-80h]
  __int128 v90; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v91[2]; // [rsp+E0h] [rbp-58h] BYREF

  LODWORD(v5) = (_DWORD)a5;
  v6 = a3;
  v90 = 0LL;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
      return v5;
    v9 = KiProcessorBlock[0];
  }
  else
  {
    v9 = a1;
  }
  v10 = v9 == -16640;
  v5 = v9 + 16640;
  v68 = v5;
  if ( v10 )
    return v5;
  v11 = *(_DWORD *)(a1 + 37952);
  *(_DWORD *)(a1 + 37952) = ((_BYTE)v11 + 1) & 0xF;
  *(_QWORD *)(a1 + 16LL * v11 + 37960) = a3;
  *(LARGE_INTEGER *)(a1 + 16LL * v11 + 37968) = KeQueryPerformanceCounter(0LL);
  v12 = v6 >> 18;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    *(_QWORD *)&v90 = v6;
    v91[0] = &v90;
    BYTE8(v90) = 0;
    v91[1] = 16LL;
    EtwTraceKernelEvent((int)v91, 1, 0x40020000u, 3920, 1538);
  }
  v13 = 0LL;
  v14 = v12 - a2 + 1;
  if ( v14 > 0x100 )
    v13 = (v12 - v14 + 1) << 18;
  while ( 1 )
  {
    if ( v14 > 0x100 )
    {
      v15 = 256;
      v13 += 0x4000000LL;
      v76 = 256;
      v16 = 0;
    }
    else
    {
      v13 = v6;
      v76 = v14;
      v15 = v14;
      v16 = 256 - v14;
      if ( 256 - v14 > 0x18 )
        v16 = 24;
    }
    v17 = v68;
    v18 = (unsigned int)(a2 + v15 - 1);
    v60 = -64;
    v19 = 0;
    v72 = v18;
    v20 = 0;
    v67 = 0;
    v21 = a2 - 1;
    v63 = 0;
    v22 = v18 + v16;
    v77 = v18 + v16;
    do
    {
      LODWORD(v5) = (unsigned __int8)++v21;
      v23 = (unsigned __int64 *)(v17 + 32 * ((unsigned __int8)v21 + 16LL));
      if ( v19 <= (unsigned int)v18 || v23[3] <= v13 )
      {
        v24 = v23 + 1;
        while ( 1 )
        {
          if ( v24 == (_QWORD *)*v24 )
          {
LABEL_16:
            v18 = v72;
            v19 = v67 + 1;
            v15 = v76;
            v22 = v77;
            ++v67;
            break;
          }
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
          {
            do
            {
              if ( (++v32 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
              {
                HvlNotifyLongSpinWait(v32);
              }
              else
              {
                _mm_pause();
              }
              v5 = *v23;
            }
            while ( *v23 );
          }
          v20 = v63;
          v24 = v23 + 1;
          v17 = v68;
          v33 = (volatile signed __int64 *)v23;
          v74 = (volatile signed __int64 *)v23;
          do
          {
            v34 = (_QWORD *)*v24;
            if ( v24 == (_QWORD *)*v24 )
              goto LABEL_44;
            v5 = *(v34 - 1);
            v35 = (ULONG_PTR)(v34 - 4);
            v81 = v34 - 4;
            if ( v5 > v13 )
            {
              v23[3] = v5;
LABEL_44:
              _InterlockedAnd64(v33, 0LL);
              goto LABEL_16;
            }
            v88 = 0;
            v60 ^= (v20 ^ v60) & 0x3F;
            HIBYTE(v88) = *(_BYTE *)(v35 + 3) ^ v60;
            _InterlockedXor((volatile signed __int32 *)v35, v88);
            v40 = v20;
            v41 = v63;
            v85 = _InterlockedExchange64((volatile __int64 *)(v17 + 8 * v40), v35);
            v70 = *(_WORD *)(v35 + 58);
            v24 = v23 + 1;
            v79 = v17 + 32 * ((unsigned __int8)v21 + 16LL + ((unsigned __int64)v70 << 8));
            v42 = (_QWORD *)*v34;
            v83 = v17 + 32 * ((unsigned __int8)v21 + 16LL + ((v70 ^ 1LL) << 8));
            v43 = (_QWORD *)v34[1];
            if ( *(_QWORD **)(*v34 + 8LL) != v34 || (_QWORD *)*v43 != v34 )
LABEL_58:
              __fastfail(3u);
            *v43 = v42;
            v42[1] = v43;
            if ( v43 != v42 )
              goto LABEL_89;
            v52 = v17 + 32 * ((unsigned __int8)v21 + 16LL + ((unsigned __int64)v70 << 8));
            *(_DWORD *)(v79 + 28) = -1;
            if ( !v70 )
            {
              v53 = (volatile signed __int32 *)(v17 + 32 * ((unsigned __int8)v21 + 272LL));
              v71 = v53;
              v54 = 0;
LABEL_95:
              if ( _interlockedbittestandset64(v53, 0LL) )
              {
                while ( 1 )
                {
                  if ( (++v54 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                  {
                    if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v53) )
                    {
                      HvlNotifyLongSpinWait(v54);
                      v53 = v71;
                      goto LABEL_98;
                    }
                    v53 = v71;
                  }
                  _mm_pause();
LABEL_98:
                  if ( !*(_QWORD *)v53 )
                    goto LABEL_95;
                }
              }
              v33 = v74;
              goto LABEL_101;
            }
            v53 = (volatile signed __int32 *)v23;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
            {
              _mm_pause();
LABEL_110:
              _InterlockedAnd64(v33, 0LL);
              v56 = 0;
              while ( 2 )
              {
                if ( !_interlockedbittestandset64(v53, 0LL) )
                {
                  v33 = (volatile signed __int64 *)(v68 + 32 * ((unsigned __int8)v21 + 272LL));
                  v74 = v33;
                  v57 = 0;
                  while ( 2 )
                  {
                    if ( !_interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
                    {
                      v53 = (volatile signed __int32 *)v23;
LABEL_101:
                      v52 = v79;
                      v24 = v23 + 1;
                      v17 = v68;
                      v41 = v63;
                      v35 = (ULONG_PTR)v81;
                      goto LABEL_102;
                    }
LABEL_114:
                    if ( (++v57 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                    {
                      if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v53) )
                      {
                        HvlNotifyLongSpinWait(v57);
                        v33 = (volatile signed __int64 *)(v68 + 32 * ((unsigned __int8)v21 + 272LL));
LABEL_116:
                        if ( !*v33 )
                          continue;
                        goto LABEL_114;
                      }
                      v33 = (volatile signed __int64 *)(v68 + 32 * ((unsigned __int8)v21 + 272LL));
                    }
                    break;
                  }
                  _mm_pause();
                  goto LABEL_116;
                }
LABEL_118:
                v64 = v56 + 1;
                if ( ((v56 + 1) & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v53) )
                  {
                    HvlNotifyLongSpinWait(v64);
                    v53 = (volatile signed __int32 *)v23;
LABEL_120:
                    v56 = v64;
                    if ( !*(_QWORD *)v53 )
                      continue;
                    goto LABEL_118;
                  }
                  v53 = (volatile signed __int32 *)v23;
                }
                break;
              }
              _mm_pause();
              goto LABEL_120;
            }
            if ( !v23 )
              goto LABEL_110;
LABEL_102:
            if ( *(_DWORD *)(v52 + 28) != -1 || *(_DWORD *)(v83 + 28) != -1 )
              goto LABEL_106;
            v55 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v17 - 16432) + 1];
            if ( KiSerializeTimerExpiration )
            {
              v33 = v74;
              _interlockedbittestandreset64(
                (volatile signed __int32 *)(v55 + 8 * ((unsigned __int64)(unsigned __int8)v21 >> 6)),
                v21 & 0x3F);
LABEL_106:
              _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
              goto LABEL_89;
            }
            v24 = v23 + 1;
            _interlockedbittestandreset64(
              (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v21 << 6) + v55),
              *(unsigned __int8 *)(v17 - 16431));
            _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
LABEL_89:
            LODWORD(v5) = v85;
            v20 = v41 + 1;
            v63 = v20;
            if ( v85 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v35, v85);
          }
          while ( v20 != 64 );
          _InterlockedAnd64(v33, 0LL);
          LODWORD(v5) = KiProcessExpiredTimerList(a1, a5, v17, 0x40u);
          v17 = v68;
          v20 = 0;
          v63 = 0;
        }
      }
    }
    while ( v21 != v22 );
    if ( v20 )
    {
      LODWORD(v5) = KiProcessExpiredTimerList(a1, a5, v17, v20);
      v17 = v68;
    }
    if ( a4 )
    {
      v61 = -64;
      v25 = (unsigned int)(a2 + v15 - 1);
      v26 = a2 - 1;
      v27 = 0;
      v78 = v25;
      v28 = 0;
      v73 = 0;
      v62 = 0;
      v29 = v25 + v16;
      v69 = v25 + v16;
      while ( 1 )
      {
        LODWORD(v5) = (unsigned __int8)++v26;
        v30 = (unsigned __int64 *)(v17 + 32 * ((unsigned __int8)v26 + 272LL));
        if ( v27 > (unsigned int)v25 && v30[3] > v13 )
          goto LABEL_26;
        v31 = v30 + 1;
LABEL_24:
        if ( v31 != (_QWORD *)*v31 )
          break;
LABEL_25:
        v25 = v78;
        v27 = v73 + 1;
        v29 = v69;
        ++v73;
LABEL_26:
        if ( v26 == v29 )
        {
          if ( v28 )
            LODWORD(v5) = KiProcessExpiredTimerList(a1, a5, v17, v28);
          goto LABEL_29;
        }
      }
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
      {
        do
        {
          if ( (++v36 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25) )
          {
            HvlNotifyLongSpinWait(v36);
          }
          else
          {
            _mm_pause();
          }
          v5 = *v30;
        }
        while ( *v30 );
      }
      v28 = v62;
      v37 = (volatile signed __int64 *)v30;
      v17 = v68;
      while ( 1 )
      {
        v38 = (_QWORD *)*v31;
        if ( v31 == (_QWORD *)*v31 )
          goto LABEL_55;
        v5 = *(v38 - 1);
        v39 = (ULONG_PTR)(v38 - 4);
        if ( v5 > v13 )
        {
          v30[3] = v5;
LABEL_55:
          _InterlockedAnd64(v37, 0LL);
          goto LABEL_25;
        }
        v89 = 0;
        v61 ^= (v28 ^ v61) & 0x3F;
        HIBYTE(v89) = *(_BYTE *)(v39 + 3) ^ v61;
        _InterlockedXor((volatile signed __int32 *)v39, v89);
        v44 = v28;
        v45 = v62;
        BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v17 + 8 * v44), v39);
        v86 = *(_WORD *)(v39 + 58);
        v82 = BugCheckParameter4;
        v31 = v30 + 1;
        v75 = v17 + 32 * ((unsigned __int8)v26 + 16LL + ((unsigned __int64)v86 << 8));
        v47 = *v38;
        v84 = v17 + 32 * ((unsigned __int8)v26 + 16LL + ((v86 ^ 1LL) << 8));
        v5 = v38[1];
        if ( *(_QWORD **)(*v38 + 8LL) != v38 || *(_QWORD **)v5 != v38 )
          goto LABEL_58;
        *(_QWORD *)v5 = v47;
        *(_QWORD *)(v47 + 8) = v5;
        if ( v5 != v47 )
          goto LABEL_62;
        v48 = v17 + 32 * ((unsigned __int8)v26 + 16LL + ((unsigned __int64)v86 << 8));
        *(_DWORD *)(v75 + 28) = -1;
        if ( !v86 )
        {
          v49 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
          {
            do
            {
              if ( (++v49 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38) )
              {
                HvlNotifyLongSpinWait(v49);
              }
              else
              {
                _mm_pause();
              }
              v5 = *v30;
            }
            while ( *v30 );
          }
          v50 = (volatile signed __int32 *)v30;
          v37 = (volatile signed __int64 *)v30;
          goto LABEL_82;
        }
        v50 = (volatile signed __int32 *)(v17 + 32 * ((unsigned __int8)v26 + 16LL));
        if ( _interlockedbittestandset64(v50, 0LL) )
          break;
        if ( !v50 )
          goto LABEL_125;
LABEL_83:
        if ( *(_DWORD *)(v48 + 28) != -1 )
          goto LABEL_87;
        LODWORD(v5) = v84;
        if ( *(_DWORD *)(v84 + 28) != -1 )
          goto LABEL_87;
        v51 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v17 - 16432) + 1];
        if ( KiSerializeTimerExpiration )
        {
          BugCheckParameter4 = v82;
          v5 = v26 & 0x3F;
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(v51 + 8 * ((unsigned __int64)(unsigned __int8)v26 >> 6)),
            v5);
LABEL_87:
          _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
          goto LABEL_62;
        }
        v31 = v30 + 1;
        LODWORD(v5) = *(unsigned __int8 *)(v17 - 16431);
        _interlockedbittestandreset64(
          (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v26 << 6) + v51),
          *(unsigned __int8 *)(v17 - 16431));
        _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
LABEL_62:
        v28 = v45 + 1;
        v62 = v28;
        if ( BugCheckParameter4 )
          KeBugCheckEx(0xC7u, 8uLL, 1uLL, v39, BugCheckParameter4);
        if ( v28 == 64 )
        {
          _InterlockedAnd64(v37, 0LL);
          LODWORD(v5) = KiProcessExpiredTimerList(a1, a5, v17, 0x40u);
          v17 = v68;
          v28 = 0;
          v62 = 0;
          goto LABEL_24;
        }
      }
      _mm_pause();
LABEL_125:
      _InterlockedAnd64(v37, 0LL);
      v80 = (volatile signed __int32 *)(v17 + 32 * ((unsigned __int8)v26 + 16LL));
      LODWORD(v5) = 0;
LABEL_126:
      if ( !_interlockedbittestandset64(v50, 0LL) )
      {
        v37 = (volatile signed __int64 *)v30;
        v58 = 0;
        while ( 2 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0LL) )
          {
LABEL_129:
            if ( (++v58 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v50) )
              {
                HvlNotifyLongSpinWait(v58);
                v37 = (volatile signed __int64 *)v30;
LABEL_131:
                v5 = *v37;
                if ( !*v37 )
                  continue;
                goto LABEL_129;
              }
              v37 = (volatile signed __int64 *)v30;
            }
            _mm_pause();
            goto LABEL_131;
          }
          break;
        }
        v50 = v80;
LABEL_82:
        v48 = v75;
        v31 = v30 + 1;
        BugCheckParameter4 = v82;
        v17 = v68;
        v45 = v62;
        goto LABEL_83;
      }
      while ( 1 )
      {
        v65 = v5 + 1;
        if ( (((_DWORD)v5 + 1) & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v50) )
          {
            HvlNotifyLongSpinWait(v65);
            v50 = v80;
            goto LABEL_135;
          }
          v50 = v80;
        }
        _mm_pause();
LABEL_135:
        LODWORD(v5) = v65;
        if ( !*(_QWORD *)v50 )
          goto LABEL_126;
      }
    }
LABEL_29:
    a2 += v76;
    v14 -= v76;
    if ( !v14 )
      break;
    v6 = a3;
  }
  if ( (*(_BYTE *)(a1 + 14524) & 8) == 0 )
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 34408);
    *(_DWORD *)(a1 + 34404) = 0;
    if ( (unsigned int)v5 >= KeTimeIncrement )
    {
      LODWORD(v5) = v5 - KeTimeIncrement;
      *(_DWORD *)(a1 + 34408) = v5;
    }
    else
    {
      *(_DWORD *)(a1 + 34408) = 0;
    }
  }
  return v5;
}
