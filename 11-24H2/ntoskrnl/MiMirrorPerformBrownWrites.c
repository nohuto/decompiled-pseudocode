/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x14044A580
 * Callers:
 *     MiMirrorBrownPhase @ 0x140B6E4AC (MiMirrorBrownPhase.c)
 * Callees:
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopMirrorPhysicalMemory @ 0x140B6A3C0 (PopMirrorPhysicalMemory.c)
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
  unsigned __int64 v17; // r9
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *k; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdi
  unsigned __int64 m; // rax
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rdi
  int v27; // esi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rdx
  volatile signed __int32 *v37; // r8
  unsigned int v38; // eax
  __int64 v39; // r15
  unsigned __int64 v40; // r14
  unsigned __int8 v41; // r13
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  unsigned int v44; // ebp
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r13
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v48; // r14
  unsigned int v49; // ebp
  ULONG_PTR v50; // r9
  volatile signed __int32 *v51; // r8
  unsigned int v52; // eax
  ULONG_PTR v53; // r9
  volatile signed __int32 *v54; // r8
  unsigned int v55; // eax
  ULONG_PTR v56; // rdi
  unsigned __int64 v57; // [rsp+20h] [rbp-88h]
  int v58; // [rsp+28h] [rbp-80h]
  unsigned __int64 v59; // [rsp+30h] [rbp-78h]
  __int64 v60; // [rsp+30h] [rbp-78h]
  int v61; // [rsp+38h] [rbp-70h]
  unsigned __int64 v62; // [rsp+38h] [rbp-70h]
  __int64 v63; // [rsp+40h] [rbp-68h]
  unsigned __int64 v64; // [rsp+50h] [rbp-58h]
  unsigned __int64 v65; // [rsp+B0h] [rbp+8h]
  int v68; // [rsp+C8h] [rbp+20h]

  v65 = a1;
  v3 = a2;
  v4 = 0;
  v68 = 0;
  v5 = 0LL;
  v58 = 0;
  v6 = 0;
  v63 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = v5 & -(__int64)(v5 < (unsigned __int64)xmmword_140E301D0);
    for ( i = xmmword_140E301D0 - 1; ; i = v13 - 1 )
    {
      if ( i - v8 == -1LL )
      {
        v12 = -1LL;
        goto LABEL_8;
      }
      v10 = (_QWORD *)(*((_QWORD *)&xmmword_140E301D0 + 1) + 8 * (v8 >> 6));
      for ( j = ~*v10 | ((1LL << (v8 & 0x3F)) - 1); j == -1; j = ~*v10 )
      {
        if ( (unsigned __int64)++v10 > *((_QWORD *)&xmmword_140E301D0 + 1) + 8 * (i >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v14, ~j);
      v12 = v14 + (((__int64)v10 - *((_QWORD *)&xmmword_140E301D0 + 1)) >> 3 << 6);
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
      if ( v5 + 1 > (unsigned __int64)xmmword_140E301D0 )
        v13 = xmmword_140E301D0;
    }
    if ( v12 < v5 || v12 == -1LL )
      break;
    v15 = xmmword_140E301D0;
    v16 = 0LL;
    v57 = 0LL;
    if ( (unsigned __int64)xmmword_140E301D0 <= v12 )
      goto LABEL_66;
    v17 = *((_QWORD *)&xmmword_140E301D0 + 1) + 8 * ((unsigned __int64)(xmmword_140E301D0 - 1) >> 6);
    v18 = (_QWORD *)(*((_QWORD *)&xmmword_140E301D0 + 1) + 8 * (v12 >> 6));
    v19 = ((1LL << (v12 & 0x3F)) - 1) | *v18;
    for ( k = v18 + 1; ; ++k )
    {
      v21 = ~v19;
      if ( v21 )
        break;
      if ( (unsigned __int64)k > v17 )
      {
        v15 = xmmword_140E301D0;
        goto LABEL_48;
      }
      v19 = *++v18;
    }
    _BitScanForward64(&a1, v21);
    v22 = (unsigned int)a1 + (((__int64)v18 - *((_QWORD *)&xmmword_140E301D0 + 1)) >> 3 << 6);
    v15 = xmmword_140E301D0;
    if ( v22 > (unsigned __int64)xmmword_140E301D0 )
    {
LABEL_48:
      v22 = v15;
      goto LABEL_31;
    }
    for ( m = ~(v21 | ((1LL << a1) - 1)); !m; m = *v24 )
    {
      v24 = v18 + 1;
      if ( (unsigned __int64)(v18 + 1) > v17 )
      {
        m = 64LL;
        goto LABEL_28;
      }
      ++v18;
    }
    _BitScanForward64(&m, m);
LABEL_28:
    v25 = m + (((__int64)v18 - *((_QWORD *)&xmmword_140E301D0 + 1)) >> 3 << 6);
    v15 = xmmword_140E301D0;
    if ( v25 > (unsigned __int64)xmmword_140E301D0 )
      v25 = xmmword_140E301D0;
    v16 = v25 - v22;
    v57 = v16;
LABEL_31:
    if ( v16 )
      v57 = v16;
    else
LABEL_66:
      v22 = v15;
    v26 = v22 - v12;
    v27 = v3 & 8;
    v59 = v26;
    v61 = v27;
    if ( (v3 & 8) == 0 )
    {
LABEL_34:
      v28 = v26 << 12;
      v29 = v12 << 12;
      v63 = v26 + v7;
      if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(v65 + 16) == PopMirrorPhysicalMemory )
        v30 = PopMirrorPhysicalMemory(v29, v28);
      else
        v30 = guard_dispatch_icall_no_overrides(v29, v28);
      v68 = v30;
      if ( v27 )
      {
        v62 = 0LL;
        v45 = 48 * v12 - 0x220000000000LL;
        v46 = v45 + 48 * v26;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v31) = 2;
          LOBYTE(a1) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(a1, v31);
        }
        v48 = (volatile signed __int32 *)(v45 + 24);
        do
        {
          v49 = 0;
          while ( _interlockedbittestandset64(v48, 0x3FuLL) )
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
            }
            while ( *(__int64 *)v48 < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v45, v31, v32, v33);
          _InterlockedAnd64((volatile signed __int64 *)v48, 0x7FFFFFFFFFFFFFFFuLL);
          v45 += 48LL;
          a1 = v62 + 1;
          v48 += 12;
          v62 = a1;
          if ( (a1 & 0x3F) == 0 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v31) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
            }
            __writecr8(CurrentIrql);
            a1 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v31) = 2;
              KiRaiseIrqlProcessIrqlFlags(a1, v31);
            }
          }
        }
        while ( v45 < v46 );
        v26 = v59;
        v16 = v57;
        if ( KiIrqlFlags )
        {
          LOBYTE(v31) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
        }
        __writecr8(CurrentIrql);
      }
      v4 = v68;
      if ( v68 < 0 )
        break;
      v6 = v58;
      v3 = a2;
      goto LABEL_39;
    }
    if ( v6 )
    {
      v35 = v12 & 0x1F;
      a1 = v12 >> 5;
      v36 = v26;
      v37 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v12 >> 5));
      if ( v35 + v26 > 0x20 )
      {
        if ( (v12 & 0x1F) != 0 )
        {
          a1 = v12 & 0x1F;
          _InterlockedOr(v37, ((1 << (32 - (v12 & 0x1F))) - 1) << v35);
          v36 = v26 - (32 - (unsigned int)(v12 & 0x1F));
          ++v37;
        }
        if ( v36 >= 0x20 )
        {
          a1 = v36 >> 5;
          v36 += -32LL * (v36 >> 5);
          do
          {
            *v37++ = -1;
            --a1;
          }
          while ( a1 );
        }
        if ( !v36 )
          goto LABEL_39;
        a1 = v36;
        v38 = (1 << v36) - 1;
      }
      else
      {
        if ( v26 == 32 )
        {
          *v37 = -1;
          goto LABEL_39;
        }
        a1 = v12 & 0x1F;
        v38 = ((1 << v26) - 1) << v35;
      }
      _InterlockedOr(v37, v38);
LABEL_39:
      v5 = v26 + v16 + v12;
      goto LABEL_40;
    }
    v5 = v12;
    if ( v26 > 0x100 )
      v26 = 256LL;
    v39 = -1LL;
    v40 = 48 * v12 - 0x220000000000LL;
    v60 = 0LL;
    v64 = v40 + 48 * v26;
    v41 = KeGetCurrentIrql();
    v42 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = v41;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v43 = v40 + 24;
    while ( 2 )
    {
      v44 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v43, 0x3FuLL) )
      {
        do
        {
          if ( (++v44 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v44);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v43 < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v43 + 8) )
        goto LABEL_88;
      v42 = 2LL;
      if ( (unsigned __int8)((*(_BYTE *)(v43 + 10) & 7) - 2) > 2u )
        goto LABEL_88;
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v43 + 16) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v50 = v5 & 0x1F;
        v42 = 1LL;
        v51 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v5 >> 5));
        if ( v50 + 1 <= 0x20 )
        {
          a1 = v5 & 0x1F;
          v52 = 1 << v50;
          goto LABEL_87;
        }
        if ( (v5 & 0x1F) == 0 )
          goto LABEL_116;
        a1 = v5 & 0x1F;
        _InterlockedOr(v51++, ((1 << (32 - (v5 & 0x1F))) - 1) << v50);
        v42 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
        if ( v42 >= 0x20 )
        {
          a1 = v42 >> 5;
          v42 += -32LL * (v42 >> 5);
          do
          {
            *v51++ = -1;
            --a1;
          }
          while ( a1 );
        }
        if ( v42 )
        {
LABEL_116:
          a1 = v42;
          v52 = (1 << v42) - 1;
LABEL_87:
          _InterlockedOr(v51, v52);
        }
LABEL_88:
        _InterlockedAnd64((volatile signed __int64 *)v43, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v39 != -1 )
          goto LABEL_62;
LABEL_95:
        if ( (++v60 & 0xF) == 0 )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v42) = v41;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
          }
          __writecr8(v41);
          a1 = KeGetCurrentIrql();
          v42 = 2LL;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
        }
        v40 += 48LL;
        v43 += 48LL;
        ++v5;
        if ( v40 >= v64 )
          goto LABEL_62;
        continue;
      }
      break;
    }
    if ( (MiUnlinkPageFromListEx(v40, 0) & 3) != 0 )
    {
      MiDiscardTransitionPteEx(v40);
      _InterlockedAnd64((volatile signed __int64 *)v43, 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_61;
    }
    *(_QWORD *)v43 &= 0xC000000000000000uLL;
    if ( (unsigned int)MiAddLockedPageCharge(v40, 0) )
    {
      v53 = v5 & 0x1F;
      v57 = v16;
      v42 = 1LL;
      v54 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v5 >> 5));
      if ( v53 + 1 <= 0x20 )
      {
        a1 = v5 & 0x1F;
        v55 = ~(1 << v53);
        goto LABEL_92;
      }
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_118;
      a1 = v5 & 0x1F;
      _InterlockedAnd(v54++, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v53));
      v57 = v16;
      v42 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
      if ( v42 >= 0x20 )
      {
        v57 = v16;
        a1 = v42 >> 5;
        v42 += -32LL * (v42 >> 5);
        do
        {
          *v54++ = 0;
          --a1;
        }
        while ( a1 );
      }
      if ( v42 )
      {
LABEL_118:
        a1 = v42;
        v55 = -1 << v42;
LABEL_92:
        _InterlockedAnd(v54, v55);
      }
      _InterlockedAnd64((volatile signed __int64 *)v43, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v39 == -1 )
        v39 = v5;
      goto LABEL_95;
    }
    MiPfnReferenceCountIsZero(v40, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_61:
    v57 = v16;
    v58 = 1;
LABEL_62:
    if ( KiIrqlFlags )
    {
      LOBYTE(v42) = v41;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
    }
    __writecr8(v41);
    if ( v39 != -1 )
    {
      v7 = v63;
      v56 = v5;
      v27 = v61;
      v26 = v56 - v39;
      v59 = v26;
      v12 = v39;
      goto LABEL_34;
    }
    v4 = v68;
    v6 = v58;
    v3 = a2;
LABEL_40:
    v7 = v63;
  }
  while ( v5 < (unsigned __int64)xmmword_140E301D0 );
  *a3 = v63;
  return v4;
}
