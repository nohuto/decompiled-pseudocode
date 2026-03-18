/*
 * XREFs of KiCancelTimer @ 0x1402F33D0
 * Callers:
 *     KiSuspendThread @ 0x1402F15AC (KiSuspendThread.c)
 *     KeCancelTimerInternal @ 0x1402F4410 (KeCancelTimerInternal.c)
 *     ExpTimerPause @ 0x1402F45E8 (ExpTimerPause.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  __int64 v3; // rdi
  unsigned __int8 v4; // bp
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // r9
  unsigned __int16 v11; // r8
  _QWORD *v12; // rcx
  unsigned __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // r15
  unsigned int v16; // eax
  int v17; // edx
  volatile signed __int32 *v19; // rsi
  unsigned int v20; // ebp
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  unsigned __int8 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h]
  _QWORD v28[2]; // [rsp+58h] [rbp-40h] BYREF

  v3 = a1;
  v4 = 0;
  v26 = 0LL;
  while ( 1 )
  {
    v5 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v3, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v3 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v3, 7u) );
    }
    if ( (*(_BYTE *)(v3 + 3) & 0xC0) == 0 )
      break;
    v25 = *(_BYTE *)(v3 + 2);
    v6 = (unsigned __int64)*(unsigned __int16 *)(v3 + 58) << 8;
    v27 = KiProcessorBlock[*(unsigned __int16 *)(v3 + 56)];
    v7 = v27 + 16640;
    v8 = (volatile signed __int32 *)(v27 + 16640 + 32 * (v6 + v25 + 16LL));
    v9 = 0;
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v8 );
    }
    if ( *(char *)(v3 + 3) >= 0 )
    {
      v10 = v25;
      v11 = *(_WORD *)(v3 + 58);
      v12 = *(_QWORD **)(v3 + 32);
      v13 = 32 * (((unsigned __int64)v11 << 8) + v25 + 16LL);
      v14 = *(_QWORD **)(v3 + 40);
      v15 = 32 * (((v11 ^ 1LL) << 8) + v25 + 16LL);
      if ( v12[1] != v3 + 32 || *v14 != v3 + 32 )
        __fastfail(3u);
      *v14 = v12;
      v12[1] = v14;
      if ( v14 != v12 )
      {
LABEL_17:
        _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
        v16 = -1073741953;
        v17 = -1073741825;
LABEL_18:
        v4 = 1;
        if ( !a2 )
          v16 = v17;
        _InterlockedAnd((volatile signed __int32 *)v3, v16);
        goto LABEL_21;
      }
      *(_DWORD *)(v13 + v7 + 28) = -1;
      if ( !v11 )
      {
        v19 = (volatile signed __int32 *)(v7 + 32 * (v25 + 272LL));
        v20 = 0;
        while ( _interlockedbittestandset64(v19, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v19 );
        }
        goto LABEL_30;
      }
      v19 = (volatile signed __int32 *)(v7 + 32 * (v25 + 16LL));
      if ( _interlockedbittestandset64(v19, 0LL) )
      {
        _mm_pause();
        goto LABEL_47;
      }
      if ( !v19 )
      {
LABEL_47:
        _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
        v22 = 0;
        while ( _interlockedbittestandset64(v19, 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v19 );
        }
        v8 = (volatile signed __int32 *)(v7 + 32 * (v25 + 272LL));
        v23 = 0;
        while ( _interlockedbittestandset64(v8, 0LL) )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
            {
              HvlNotifyLongSpinWait(v23);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v8 );
        }
LABEL_30:
        v10 = v25;
      }
      if ( *(_DWORD *)(v13 + v7 + 28) == -1 && *(_DWORD *)(v15 + v7 + 28) == -1 )
      {
        v21 = qword_140FC7528[2 * *(unsigned __int8 *)(v27 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v10 << 6) + v21), *(unsigned __int8 *)(v27 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v21 + 8 * (v10 >> 6)), v25 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
      goto LABEL_17;
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    a1 = _InterlockedExchange64((volatile __int64 *)(v7 + 8LL * (*(_BYTE *)(v3 + 3) & 0x3F)), 0LL);
    if ( a1 )
    {
      v16 = 16777087;
      v17 = 0xFFFFFF;
      goto LABEL_18;
    }
    _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
    v24 = 0;
    while ( *(char *)(v3 + 3) < 0 )
    {
      if ( (++v24 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v24);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
LABEL_21:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v26 = v3;
    v28[0] = &v26;
    v28[1] = 8LL;
    EtwTraceKernelEvent((int)v28, 1, 0x40020000u, 3925, 1538);
  }
  return v4;
}
