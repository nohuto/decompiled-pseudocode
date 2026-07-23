/*
 * XREFs of KiTimerExpiration @ 0x140315160
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x1405C4860 (KiTimerExpirationDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiTimerExpiration(__int64 a1, int a2, unsigned __int64 a3, char a4, unsigned __int64 a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbp
  __int64 v9; // rax
  bool v10; // zf
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned int v14; // ebx
  int v15; // r12d
  int v16; // ebp
  unsigned __int64 v17; // r10
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  int v21; // r13d
  unsigned int v22; // r9d
  unsigned __int64 *v23; // rdi
  _QWORD *v24; // r12
  unsigned int v25; // ecx
  int v26; // r12d
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned __int64 *v30; // rdi
  _QWORD *v31; // rbp
  unsigned int v32; // r12d
  volatile signed __int64 *v33; // r9
  _QWORD *v34; // rcx
  ULONG_PTR v35; // rdx
  unsigned int v36; // r13d
  volatile signed __int64 *v37; // r9
  _QWORD *v38; // rcx
  ULONG_PTR v39; // r13
  __int64 v40; // rax
  int v41; // r8d
  _QWORD *v42; // r11
  _QWORD *v43; // rax
  __int64 v44; // rax
  int v45; // r8d
  ULONG_PTR BugCheckParameter4; // r11
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  unsigned int v49; // ebp
  volatile signed __int32 *v50; // rcx
  __int64 v51; // rdx
  unsigned __int64 v52; // r11
  volatile signed __int32 *v53; // rcx
  unsigned int v54; // r12d
  __int64 v55; // r11
  unsigned int v56; // eax
  unsigned int v57; // r12d
  unsigned int v58; // ebp
  char v59; // [rsp+30h] [rbp-108h]
  char v60; // [rsp+30h] [rbp-108h]
  int v61; // [rsp+34h] [rbp-104h]
  int v62; // [rsp+38h] [rbp-100h]
  unsigned int v63; // [rsp+3Ch] [rbp-FCh]
  unsigned int v64; // [rsp+3Ch] [rbp-FCh]
  int v66; // [rsp+44h] [rbp-F4h]
  unsigned __int64 v67; // [rsp+48h] [rbp-F0h]
  unsigned int v68; // [rsp+50h] [rbp-E8h]
  unsigned __int16 v69; // [rsp+50h] [rbp-E8h]
  volatile signed __int32 *v70; // [rsp+50h] [rbp-E8h]
  unsigned int v71; // [rsp+58h] [rbp-E0h]
  int v72; // [rsp+58h] [rbp-E0h]
  volatile signed __int64 *v73; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v74; // [rsp+60h] [rbp-D8h]
  int v75; // [rsp+68h] [rbp-D0h]
  unsigned int v76; // [rsp+6Ch] [rbp-CCh]
  unsigned int v77; // [rsp+6Ch] [rbp-CCh]
  unsigned __int64 v78; // [rsp+70h] [rbp-C8h]
  volatile signed __int32 *v79; // [rsp+70h] [rbp-C8h]
  _QWORD *v80; // [rsp+78h] [rbp-C0h]
  ULONG_PTR v81; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v82; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+88h] [rbp-B0h]
  __int64 v84; // [rsp+90h] [rbp-A8h]
  unsigned __int16 v85; // [rsp+90h] [rbp-A8h]
  unsigned int v87; // [rsp+A0h] [rbp-98h]
  unsigned int v88; // [rsp+B8h] [rbp-80h]
  __int128 v89; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v90[2]; // [rsp+E0h] [rbp-58h] BYREF

  result = a5;
  v6 = a3;
  v89 = 0LL;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
      return result;
    v9 = KiProcessorBlock[0];
  }
  else
  {
    v9 = a1;
  }
  v10 = v9 == -16640;
  result = v9 + 16640;
  v67 = result;
  if ( !v10 )
  {
    v11 = *(_DWORD *)(a1 + 37952);
    *(_DWORD *)(a1 + 37952) = ((_BYTE)v11 + 1) & 0xF;
    *(_QWORD *)(a1 + 16LL * v11 + 37960) = a3;
    *(LARGE_INTEGER *)(a1 + 16LL * v11 + 37968) = KeQueryPerformanceCounter(0LL);
    v12 = v6 >> 18;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v89 = v6;
      v90[0] = &v89;
      BYTE8(v89) = 0;
      v90[1] = 16LL;
      EtwTraceKernelEvent((int)v90, 1, 0x40020000u, 3920, 1538);
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
        v75 = 256;
        v16 = 0;
      }
      else
      {
        v13 = v6;
        v75 = v14;
        v15 = v14;
        v16 = 256 - v14;
        if ( 256 - v14 > 0x18 )
          v16 = 24;
      }
      v17 = v67;
      v18 = a2 + v15 - 1;
      v59 = -64;
      v19 = 0;
      v71 = v18;
      v20 = 0;
      v66 = 0;
      v21 = a2 - 1;
      v62 = 0;
      v22 = v18 + v16;
      v76 = v18 + v16;
      do
      {
        result = (unsigned __int8)++v21;
        v23 = (unsigned __int64 *)(v17 + 32 * ((unsigned __int8)v21 + 16LL));
        if ( v19 <= v18 || v23[3] <= v13 )
        {
          v24 = v23 + 1;
          while ( 1 )
          {
            if ( v24 == (_QWORD *)*v24 )
            {
LABEL_16:
              v18 = v71;
              v19 = v66 + 1;
              v15 = v75;
              v22 = v76;
              ++v66;
              break;
            }
            v32 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
            {
              do
              {
                if ( (++v32 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v32);
                }
                else
                {
                  _mm_pause();
                }
                result = *v23;
              }
              while ( *v23 );
            }
            v20 = v62;
            v24 = v23 + 1;
            v17 = v67;
            v33 = (volatile signed __int64 *)v23;
            v73 = (volatile signed __int64 *)v23;
            do
            {
              v34 = (_QWORD *)*v24;
              if ( v24 == (_QWORD *)*v24 )
                goto LABEL_44;
              result = *(v34 - 1);
              v35 = (ULONG_PTR)(v34 - 4);
              v80 = v34 - 4;
              if ( result > v13 )
              {
                v23[3] = result;
LABEL_44:
                _InterlockedAnd64(v33, 0LL);
                goto LABEL_16;
              }
              v87 = 0;
              v59 ^= (v20 ^ v59) & 0x3F;
              HIBYTE(v87) = *(_BYTE *)(v35 + 3) ^ v59;
              _InterlockedXor((volatile signed __int32 *)v35, v87);
              v40 = v20;
              v41 = v62;
              v84 = _InterlockedExchange64((volatile __int64 *)(v17 + 8 * v40), v35);
              v69 = *(_WORD *)(v35 + 58);
              v24 = v23 + 1;
              v78 = v17 + 32 * ((unsigned __int8)v21 + 16LL + ((unsigned __int64)v69 << 8));
              v42 = (_QWORD *)*v34;
              v82 = v17 + 32 * ((unsigned __int8)v21 + 16LL + ((v69 ^ 1LL) << 8));
              v43 = (_QWORD *)v34[1];
              if ( *(_QWORD **)(*v34 + 8LL) != v34 || (_QWORD *)*v43 != v34 )
LABEL_58:
                __fastfail(3u);
              *v43 = v42;
              v42[1] = v43;
              if ( v43 != v42 )
                goto LABEL_81;
              v52 = v17 + 32 * ((unsigned __int8)v21 + 16LL + ((unsigned __int64)v69 << 8));
              *(_DWORD *)(v78 + 28) = -1;
              if ( !v69 )
              {
                v53 = (volatile signed __int32 *)(v17 + 32 * ((unsigned __int8)v21 + 272LL));
                v70 = v53;
                v54 = 0;
LABEL_85:
                if ( _interlockedbittestandset64(v53, 0LL) )
                {
                  while ( 1 )
                  {
                    if ( (++v54 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                    {
                      if ( KiCheckVpBackingLongSpinWaitHypercall() )
                      {
                        HvlNotifyLongSpinWait(v54);
                        v53 = v70;
                        goto LABEL_88;
                      }
                      v53 = v70;
                    }
                    _mm_pause();
LABEL_88:
                    if ( !*(_QWORD *)v53 )
                      goto LABEL_85;
                  }
                }
                v33 = v73;
                goto LABEL_91;
              }
              v53 = (volatile signed __int32 *)v23;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
              {
                _mm_pause();
LABEL_111:
                _InterlockedAnd64(v33, 0LL);
                v56 = 0;
                while ( 2 )
                {
                  if ( _interlockedbittestandset64(v53, 0LL) )
                  {
LABEL_113:
                    v63 = v56 + 1;
                    if ( ((v56 + 1) & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                    {
                      if ( KiCheckVpBackingLongSpinWaitHypercall() )
                      {
                        HvlNotifyLongSpinWait(v63);
                        v53 = (volatile signed __int32 *)v23;
LABEL_115:
                        v56 = v63;
                        if ( !*(_QWORD *)v53 )
                          continue;
                        goto LABEL_113;
                      }
                      v53 = (volatile signed __int32 *)v23;
                    }
                    _mm_pause();
                    goto LABEL_115;
                  }
                  break;
                }
                v33 = (volatile signed __int64 *)(v67 + 32 * ((unsigned __int8)v21 + 272LL));
                v73 = v33;
                v57 = 0;
                while ( 2 )
                {
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
                  {
                    v53 = (volatile signed __int32 *)v23;
LABEL_91:
                    v52 = v78;
                    v24 = v23 + 1;
                    v17 = v67;
                    v41 = v62;
                    v35 = (ULONG_PTR)v80;
                    goto LABEL_92;
                  }
LABEL_119:
                  if ( (++v57 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                  {
                    if ( KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v57);
                      v33 = (volatile signed __int64 *)(v67 + 32 * ((unsigned __int8)v21 + 272LL));
LABEL_121:
                      if ( !*v33 )
                        continue;
                      goto LABEL_119;
                    }
                    v33 = (volatile signed __int64 *)(v67 + 32 * ((unsigned __int8)v21 + 272LL));
                  }
                  break;
                }
                _mm_pause();
                goto LABEL_121;
              }
              if ( !v23 )
                goto LABEL_111;
LABEL_92:
              if ( *(_DWORD *)(v52 + 28) != -1 || *(_DWORD *)(v82 + 28) != -1 )
                goto LABEL_96;
              v55 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v17 - 16432) + 1];
              if ( KiSerializeTimerExpiration )
              {
                v33 = v73;
                _interlockedbittestandreset64(
                  (volatile signed __int32 *)(v55 + 8 * ((unsigned __int64)(unsigned __int8)v21 >> 6)),
                  v21 & 0x3F);
LABEL_96:
                _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
                goto LABEL_81;
              }
              v24 = v23 + 1;
              _interlockedbittestandreset64(
                (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v21 << 6) + v55),
                *(unsigned __int8 *)(v17 - 16431));
              _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
LABEL_81:
              result = v84;
              v20 = v41 + 1;
              v62 = v20;
              if ( v84 )
                KeBugCheckEx(0xC7u, 8uLL, 1uLL, v35, v84);
            }
            while ( v20 != 64 );
            _InterlockedAnd64(v33, 0LL);
            result = KiProcessExpiredTimerList(a1, a5, v17, 64LL);
            v17 = v67;
            v20 = 0;
            v62 = 0;
          }
        }
      }
      while ( v21 != v22 );
      if ( v20 )
      {
        result = KiProcessExpiredTimerList(a1, a5, v17, v20);
        v17 = v67;
      }
      if ( a4 )
      {
        v60 = -64;
        v25 = a2 + v15 - 1;
        v26 = a2 - 1;
        v27 = 0;
        v77 = v25;
        v28 = 0;
        v72 = 0;
        v61 = 0;
        v29 = v25 + v16;
        v68 = v25 + v16;
        while ( 1 )
        {
          result = (unsigned __int8)++v26;
          v30 = (unsigned __int64 *)(v17 + 32 * ((unsigned __int8)v26 + 272LL));
          if ( v27 > v25 && v30[3] > v13 )
            goto LABEL_26;
          v31 = v30 + 1;
LABEL_24:
          if ( v31 != (_QWORD *)*v31 )
            break;
LABEL_25:
          v25 = v77;
          v27 = v72 + 1;
          v29 = v68;
          ++v72;
LABEL_26:
          if ( v26 == v29 )
          {
            if ( v28 )
              result = KiProcessExpiredTimerList(a1, a5, v17, v28);
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
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v36);
            }
            else
            {
              _mm_pause();
            }
            result = *v30;
          }
          while ( *v30 );
        }
        v28 = v61;
        v37 = (volatile signed __int64 *)v30;
        v17 = v67;
        while ( 1 )
        {
          v38 = (_QWORD *)*v31;
          if ( v31 == (_QWORD *)*v31 )
            goto LABEL_55;
          result = *(v38 - 1);
          v39 = (ULONG_PTR)(v38 - 4);
          if ( result > v13 )
          {
            v30[3] = result;
LABEL_55:
            _InterlockedAnd64(v37, 0LL);
            goto LABEL_25;
          }
          v88 = 0;
          v60 ^= (v28 ^ v60) & 0x3F;
          HIBYTE(v88) = *(_BYTE *)(v39 + 3) ^ v60;
          _InterlockedXor((volatile signed __int32 *)v39, v88);
          v44 = v28;
          v45 = v61;
          BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v17 + 8 * v44), v39);
          v85 = *(_WORD *)(v39 + 58);
          v81 = BugCheckParameter4;
          v31 = v30 + 1;
          v74 = v17 + 32 * ((unsigned __int8)v26 + 16LL + ((unsigned __int64)v85 << 8));
          v47 = *v38;
          v83 = v17 + 32 * ((unsigned __int8)v26 + 16LL + ((v85 ^ 1LL) << 8));
          result = v38[1];
          if ( *(_QWORD **)(*v38 + 8LL) != v38 || *(_QWORD **)result != v38 )
            goto LABEL_58;
          *(_QWORD *)result = v47;
          *(_QWORD *)(v47 + 8) = result;
          if ( result != v47 )
            goto LABEL_62;
          v48 = v17 + 32 * ((unsigned __int8)v26 + 16LL + ((unsigned __int64)v85 << 8));
          *(_DWORD *)(v74 + 28) = -1;
          if ( !v85 )
            break;
          v50 = (volatile signed __int32 *)(v17 + 32 * ((unsigned __int8)v26 + 16LL));
          if ( _interlockedbittestandset64(v50, 0LL) )
          {
            _mm_pause();
LABEL_127:
            _InterlockedAnd64(v37, 0LL);
            v79 = (volatile signed __int32 *)(v17 + 32 * ((unsigned __int8)v26 + 16LL));
            result = 0LL;
            while ( 2 )
            {
              if ( _interlockedbittestandset64(v50, 0LL) )
              {
LABEL_129:
                v64 = result + 1;
                if ( (((_DWORD)result + 1) & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v64);
                    v50 = v79;
LABEL_131:
                    result = v64;
                    if ( !*(_QWORD *)v50 )
                      continue;
                    goto LABEL_129;
                  }
                  v50 = v79;
                }
                _mm_pause();
                goto LABEL_131;
              }
              break;
            }
            v37 = (volatile signed __int64 *)v30;
            v58 = 0;
            while ( 2 )
            {
              if ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0LL) )
              {
LABEL_135:
                if ( (++v58 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v58);
                    v37 = (volatile signed __int64 *)v30;
LABEL_137:
                    result = *v37;
                    if ( !*v37 )
                      continue;
                    goto LABEL_135;
                  }
                  v37 = (volatile signed __int64 *)v30;
                }
                _mm_pause();
                goto LABEL_137;
              }
              break;
            }
            v50 = v79;
LABEL_74:
            v48 = v74;
            v31 = v30 + 1;
            BugCheckParameter4 = v81;
            v17 = v67;
            v45 = v61;
            goto LABEL_75;
          }
          if ( !v50 )
            goto LABEL_127;
LABEL_75:
          if ( *(_DWORD *)(v48 + 28) != -1 )
            goto LABEL_79;
          result = v83;
          if ( *(_DWORD *)(v83 + 28) != -1 )
            goto LABEL_79;
          v51 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v17 - 16432) + 1];
          if ( KiSerializeTimerExpiration )
          {
            BugCheckParameter4 = v81;
            result = v26 & 0x3F;
            _interlockedbittestandreset64(
              (volatile signed __int32 *)(v51 + 8 * ((unsigned __int64)(unsigned __int8)v26 >> 6)),
              result);
LABEL_79:
            _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
            goto LABEL_62;
          }
          v31 = v30 + 1;
          result = *(unsigned __int8 *)(v17 - 16431);
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v26 << 6) + v51),
            result);
          _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
LABEL_62:
          v28 = v45 + 1;
          v61 = v28;
          if ( BugCheckParameter4 )
            KeBugCheckEx(0xC7u, 8uLL, 1uLL, v39, BugCheckParameter4);
          if ( v28 == 64 )
          {
            _InterlockedAnd64(v37, 0LL);
            result = KiProcessExpiredTimerList(a1, a5, v17, 64LL);
            v17 = v67;
            v28 = 0;
            v61 = 0;
            goto LABEL_24;
          }
        }
        v49 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
        {
          do
          {
            if ( (++v49 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v49);
            }
            else
            {
              _mm_pause();
            }
            result = *v30;
          }
          while ( *v30 );
        }
        v50 = (volatile signed __int32 *)v30;
        v37 = (volatile signed __int64 *)v30;
        goto LABEL_74;
      }
LABEL_29:
      a2 += v75;
      v14 -= v75;
      if ( !v14 )
      {
        if ( (*(_BYTE *)(a1 + 14524) & 8) == 0 )
        {
          result = *(unsigned int *)(a1 + 34408);
          *(_DWORD *)(a1 + 34404) = 0;
          if ( (unsigned int)result >= KeTimeIncrement )
          {
            result = (unsigned int)(result - KeTimeIncrement);
            *(_DWORD *)(a1 + 34408) = result;
          }
          else
          {
            *(_DWORD *)(a1 + 34408) = 0;
          }
        }
        return result;
      }
      v6 = a3;
    }
  }
  return result;
}
