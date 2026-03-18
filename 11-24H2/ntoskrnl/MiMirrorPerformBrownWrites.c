/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x140455840
 * Callers:
 *     MiMirrorBrownPhase @ 0x140B6CC0C (MiMirrorBrownPhase.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopMirrorPhysicalMemory @ 0x140B68280 (PopMirrorPhysicalMemory.c)
 */

__int64 __fastcall MiMirrorPerformBrownWrites(unsigned __int64 a1, char a2, _QWORD *a3)
{
  char v3; // r13
  unsigned int v4; // ebp
  ULONG_PTR v5; // rsi
  int v6; // r15d
  __int64 v7; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 i; // r8
  _QWORD *v10; // rbx
  __int64 j; // rdx
  unsigned __int64 v12; // rbx
  ULONG_PTR v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *k; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned __int64 m; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rdi
  int v26; // esi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rdx
  volatile signed __int32 *v35; // r8
  unsigned int v36; // eax
  __int64 v37; // r15
  unsigned __int64 v38; // r14
  unsigned __int8 v39; // r13
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  unsigned int v42; // ebp
  ULONG_PTR v43; // rsi
  ULONG_PTR v44; // r13
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v46; // r14
  unsigned int v47; // ebp
  volatile signed __int32 *v48; // r8
  unsigned int v49; // eax
  volatile signed __int32 *v50; // r8
  unsigned int v51; // eax
  ULONG_PTR v52; // rdi
  unsigned __int64 v53; // [rsp+20h] [rbp-88h]
  int v54; // [rsp+28h] [rbp-80h]
  unsigned __int64 v55; // [rsp+30h] [rbp-78h]
  __int64 v56; // [rsp+30h] [rbp-78h]
  int v57; // [rsp+38h] [rbp-70h]
  unsigned __int64 v58; // [rsp+38h] [rbp-70h]
  __int64 v59; // [rsp+40h] [rbp-68h]
  unsigned __int64 v60; // [rsp+50h] [rbp-58h]
  unsigned __int64 v61; // [rsp+B0h] [rbp+8h]
  int v64; // [rsp+C8h] [rbp+20h]

  v61 = a1;
  v3 = a2;
  v4 = 0;
  v64 = 0;
  v5 = 0LL;
  v54 = 0;
  v6 = 0;
  v59 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = v5 & -(__int64)(v5 < (unsigned __int64)xmmword_140E30090);
    for ( i = xmmword_140E30090 - 1; ; i = v13 - 1 )
    {
      if ( i - v8 == -1LL )
      {
        v12 = -1LL;
        goto LABEL_8;
      }
      v10 = (_QWORD *)(*((_QWORD *)&xmmword_140E30090 + 1) + 8 * (v8 >> 6));
      for ( j = ~*v10 | ((1LL << (v8 & 0x3F)) - 1); j == -1; j = ~*v10 )
      {
        if ( (unsigned __int64)++v10 > *((_QWORD *)&xmmword_140E30090 + 1) + 8 * (i >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v14, ~j);
      v12 = v14 + (((__int64)v10 - *((_QWORD *)&xmmword_140E30090 + 1)) >> 3 << 6);
      if ( v12 > i )
      {
LABEL_7:
        v12 = -1LL;
        goto LABEL_8;
      }
      if ( v12 != -1LL )
        break;
LABEL_8:
      if ( !v8 )
        break;
      v13 = v5 + 1;
      v8 = 0LL;
      if ( v5 + 1 > (unsigned __int64)xmmword_140E30090 )
        v13 = xmmword_140E30090;
    }
    if ( v12 < v5 || v12 == -1LL )
      break;
    v15 = xmmword_140E30090;
    v16 = 0LL;
    v53 = 0LL;
    if ( (unsigned __int64)xmmword_140E30090 <= v12 )
      goto LABEL_66;
    v8 = *((_QWORD *)&xmmword_140E30090 + 1) + 8 * ((unsigned __int64)(xmmword_140E30090 - 1) >> 6);
    v17 = (_QWORD *)(*((_QWORD *)&xmmword_140E30090 + 1) + 8 * (v12 >> 6));
    v18 = ((1LL << (v12 & 0x3F)) - 1) | *v17;
    for ( k = v17 + 1; ; ++k )
    {
      v20 = ~v18;
      if ( v20 )
        break;
      if ( (unsigned __int64)k > v8 )
      {
        v15 = xmmword_140E30090;
        goto LABEL_48;
      }
      v18 = *++v17;
    }
    _BitScanForward64(&a1, v20);
    v21 = (unsigned int)a1 + (((__int64)v17 - *((_QWORD *)&xmmword_140E30090 + 1)) >> 3 << 6);
    v15 = xmmword_140E30090;
    if ( v21 > (unsigned __int64)xmmword_140E30090 )
    {
LABEL_48:
      v21 = v15;
      goto LABEL_31;
    }
    for ( m = ~(v20 | ((1LL << a1) - 1)); !m; m = *v23 )
    {
      v23 = v17 + 1;
      if ( (unsigned __int64)(v17 + 1) > v8 )
      {
        m = 64LL;
        goto LABEL_28;
      }
      ++v17;
    }
    _BitScanForward64(&m, m);
LABEL_28:
    v24 = m + (((__int64)v17 - *((_QWORD *)&xmmword_140E30090 + 1)) >> 3 << 6);
    v15 = xmmword_140E30090;
    if ( v24 > (unsigned __int64)xmmword_140E30090 )
      v24 = xmmword_140E30090;
    v16 = v24 - v21;
    v53 = v16;
LABEL_31:
    if ( v16 )
      v53 = v16;
    else
LABEL_66:
      v21 = v15;
    v25 = v21 - v12;
    v26 = v3 & 8;
    v55 = v25;
    v57 = v26;
    if ( (v3 & 8) == 0 )
    {
LABEL_34:
      v27 = v25 << 12;
      v28 = v12 << 12;
      v59 = v25 + v7;
      if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(v61 + 16) == PopMirrorPhysicalMemory )
        v29 = PopMirrorPhysicalMemory(v28, v27);
      else
        v29 = guard_dispatch_icall_no_overrides(v28, v27, PopMirrorPhysicalMemory, v8);
      v64 = v29;
      if ( v26 )
      {
        v58 = 0LL;
        v43 = 48 * v12 - 0x220000000000LL;
        v44 = v43 + 48 * v25;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v30) = 2;
          LOBYTE(a1) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(a1, v30);
        }
        v46 = (volatile signed __int32 *)(v43 + 24);
        do
        {
          v47 = 0;
          while ( _interlockedbittestandset64(v46, 0x3FuLL) )
          {
            do
            {
              if ( (++v47 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v47);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)v46 < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v43, v30, v31);
          _InterlockedAnd64((volatile signed __int64 *)v46, 0x7FFFFFFFFFFFFFFFuLL);
          v43 += 48LL;
          a1 = v58 + 1;
          v46 += 12;
          v58 = a1;
          if ( (a1 & 0x3F) == 0 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v30) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
            }
            __writecr8(CurrentIrql);
            a1 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v30) = 2;
              KiRaiseIrqlProcessIrqlFlags(a1, v30);
            }
          }
        }
        while ( v43 < v44 );
        v25 = v55;
        v16 = v53;
        if ( KiIrqlFlags )
        {
          LOBYTE(v30) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
        }
        __writecr8(CurrentIrql);
      }
      v4 = v64;
      if ( v64 < 0 )
        break;
      v6 = v54;
      v3 = a2;
      goto LABEL_39;
    }
    if ( v6 )
    {
      v33 = v12 & 0x1F;
      a1 = v12 >> 5;
      v34 = v25;
      v35 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v12 >> 5));
      if ( v33 + v25 > 0x20 )
      {
        if ( (v12 & 0x1F) != 0 )
        {
          a1 = v12 & 0x1F;
          _InterlockedOr(v35, ((1 << (32 - (v12 & 0x1F))) - 1) << v33);
          v34 = v25 - (32 - (unsigned int)(v12 & 0x1F));
          ++v35;
        }
        if ( v34 >= 0x20 )
        {
          a1 = v34 >> 5;
          v34 += -32LL * (v34 >> 5);
          do
          {
            *v35++ = -1;
            --a1;
          }
          while ( a1 );
        }
        if ( !v34 )
          goto LABEL_39;
        a1 = v34;
        v36 = (1 << v34) - 1;
      }
      else
      {
        if ( v25 == 32 )
        {
          *v35 = -1;
          goto LABEL_39;
        }
        a1 = v12 & 0x1F;
        v36 = ((1 << v25) - 1) << v33;
      }
      _InterlockedOr(v35, v36);
LABEL_39:
      v5 = v25 + v16 + v12;
      goto LABEL_40;
    }
    v5 = v12;
    if ( v25 > 0x100 )
      v25 = 256LL;
    v37 = -1LL;
    v38 = 48 * v12 - 0x220000000000LL;
    v56 = 0LL;
    v60 = v38 + 48 * v25;
    v39 = KeGetCurrentIrql();
    v40 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = v39;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v41 = v38 + 24;
    while ( 2 )
    {
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v41, 0x3FuLL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v42);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v41 < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v41 + 8) )
        goto LABEL_88;
      v40 = 2LL;
      if ( (unsigned __int8)((*(_BYTE *)(v41 + 10) & 7) - 2) > 2u )
        goto LABEL_88;
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v41 + 16) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v8 = v5 & 0x1F;
        v40 = 1LL;
        v48 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v5 >> 5));
        if ( v8 + 1 <= 0x20 )
        {
          a1 = v5 & 0x1F;
          v49 = 1 << v8;
          goto LABEL_87;
        }
        if ( (v5 & 0x1F) == 0 )
          goto LABEL_116;
        a1 = v5 & 0x1F;
        _InterlockedOr(v48++, ((1 << (32 - (v5 & 0x1F))) - 1) << v8);
        v40 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
        if ( v40 >= 0x20 )
        {
          a1 = v40 >> 5;
          v40 += -32LL * (v40 >> 5);
          do
          {
            *v48++ = -1;
            --a1;
          }
          while ( a1 );
        }
        if ( v40 )
        {
LABEL_116:
          a1 = v40;
          v49 = (1 << v40) - 1;
LABEL_87:
          _InterlockedOr(v48, v49);
        }
LABEL_88:
        _InterlockedAnd64((volatile signed __int64 *)v41, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 != -1 )
          goto LABEL_62;
LABEL_95:
        if ( (++v56 & 0xF) == 0 )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v40) = v39;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
          }
          __writecr8(v39);
          a1 = KeGetCurrentIrql();
          v40 = 2LL;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
        }
        v38 += 48LL;
        v41 += 48LL;
        ++v5;
        if ( v38 >= v60 )
          goto LABEL_62;
        continue;
      }
      break;
    }
    if ( (MiUnlinkPageFromListEx(v38, 0) & 3) != 0 )
    {
      MiDiscardTransitionPteEx(v38, 0);
      _InterlockedAnd64((volatile signed __int64 *)v41, 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_61;
    }
    *(_QWORD *)v41 &= 0xC000000000000000uLL;
    if ( (unsigned int)MiAddLockedPageCharge(v38, 0) )
    {
      v8 = v5 & 0x1F;
      v53 = v16;
      v40 = 1LL;
      v50 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v5 >> 5));
      if ( v8 + 1 <= 0x20 )
      {
        a1 = v5 & 0x1F;
        v51 = ~(1 << v8);
        goto LABEL_92;
      }
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_118;
      a1 = v5 & 0x1F;
      _InterlockedAnd(v50++, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v8));
      v53 = v16;
      v40 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
      if ( v40 >= 0x20 )
      {
        v53 = v16;
        a1 = v40 >> 5;
        v40 += -32LL * (v40 >> 5);
        do
        {
          *v50++ = 0;
          --a1;
        }
        while ( a1 );
      }
      if ( v40 )
      {
LABEL_118:
        a1 = v40;
        v51 = -1 << v40;
LABEL_92:
        _InterlockedAnd(v50, v51);
      }
      _InterlockedAnd64((volatile signed __int64 *)v41, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v37 == -1 )
        v37 = v5;
      goto LABEL_95;
    }
    MiPfnReferenceCountIsZero(v38, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_61:
    v53 = v16;
    v54 = 1;
LABEL_62:
    if ( KiIrqlFlags )
    {
      LOBYTE(v40) = v39;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
    }
    __writecr8(v39);
    if ( v37 != -1 )
    {
      v7 = v59;
      v52 = v5;
      v26 = v57;
      v25 = v52 - v37;
      v55 = v25;
      v12 = v37;
      goto LABEL_34;
    }
    v4 = v64;
    v6 = v54;
    v3 = a2;
LABEL_40:
    v7 = v59;
  }
  while ( v5 < (unsigned __int64)xmmword_140E30090 );
  *a3 = v59;
  return v4;
}
