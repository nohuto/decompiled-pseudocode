/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x140455630
 * Callers:
 *     MiMirrorBrownPhase @ 0x140B5DB2C (MiMirrorBrownPhase.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopMirrorPhysicalMemory @ 0x140B58450 (PopMirrorPhysicalMemory.c)
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
  unsigned __int64 v33; // r9
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rdx
  volatile signed __int32 *v37; // r8
  unsigned int v38; // eax
  __int64 v39; // r15
  unsigned __int64 v40; // r14
  unsigned __int8 v41; // r13
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  int v44; // ebp
  __int64 v45; // r8
  unsigned __int64 v46; // r9
  ULONG_PTR v47; // rsi
  ULONG_PTR v48; // r13
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v50; // r14
  int v51; // ebp
  ULONG_PTR v52; // r9
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  ULONG_PTR v55; // r9
  volatile signed __int32 *v56; // r8
  unsigned int v57; // eax
  ULONG_PTR v58; // rdi
  unsigned __int64 v59; // [rsp+20h] [rbp-88h]
  int v60; // [rsp+28h] [rbp-80h]
  unsigned __int64 v61; // [rsp+30h] [rbp-78h]
  __int64 v62; // [rsp+30h] [rbp-78h]
  int v63; // [rsp+38h] [rbp-70h]
  unsigned __int64 v64; // [rsp+38h] [rbp-70h]
  __int64 v65; // [rsp+40h] [rbp-68h]
  unsigned __int64 v66; // [rsp+50h] [rbp-58h]
  unsigned __int64 v67; // [rsp+B0h] [rbp+8h]
  int v70; // [rsp+C8h] [rbp+20h]

  v67 = a1;
  v3 = a2;
  v4 = 0;
  v70 = 0;
  v5 = 0LL;
  v60 = 0;
  v6 = 0;
  v65 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = v5 & -(__int64)(v5 < (unsigned __int64)xmmword_140E2FE50);
    for ( i = xmmword_140E2FE50 - 1; ; i = v13 - 1 )
    {
      if ( i - v8 == -1LL )
      {
        v12 = -1LL;
        goto LABEL_8;
      }
      v10 = (_QWORD *)(*((_QWORD *)&xmmword_140E2FE50 + 1) + 8 * (v8 >> 6));
      for ( j = ~*v10 | ((1LL << (v8 & 0x3F)) - 1); j == -1; j = ~*v10 )
      {
        if ( (unsigned __int64)++v10 > *((_QWORD *)&xmmword_140E2FE50 + 1) + 8 * (i >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v14, ~j);
      v12 = v14 + (((__int64)v10 - *((_QWORD *)&xmmword_140E2FE50 + 1)) >> 3 << 6);
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
      if ( v5 + 1 > (unsigned __int64)xmmword_140E2FE50 )
        v13 = xmmword_140E2FE50;
    }
    if ( v12 < v5 || v12 == -1LL )
      break;
    v15 = xmmword_140E2FE50;
    v16 = 0LL;
    v59 = 0LL;
    if ( (unsigned __int64)xmmword_140E2FE50 <= v12 )
      goto LABEL_67;
    v17 = *((_QWORD *)&xmmword_140E2FE50 + 1) + 8 * ((unsigned __int64)(xmmword_140E2FE50 - 1) >> 6);
    v18 = (_QWORD *)(*((_QWORD *)&xmmword_140E2FE50 + 1) + 8 * (v12 >> 6));
    v19 = ((1LL << (v12 & 0x3F)) - 1) | *v18;
    for ( k = v18 + 1; ; ++k )
    {
      v21 = ~v19;
      if ( v21 )
        break;
      if ( (unsigned __int64)k > v17 )
      {
        v15 = xmmword_140E2FE50;
        goto LABEL_48;
      }
      v19 = *++v18;
    }
    _BitScanForward64(&a1, v21);
    v22 = (unsigned int)a1 + (((__int64)v18 - *((_QWORD *)&xmmword_140E2FE50 + 1)) >> 3 << 6);
    v15 = xmmword_140E2FE50;
    if ( v22 > (unsigned __int64)xmmword_140E2FE50 )
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
    v25 = m + (((__int64)v18 - *((_QWORD *)&xmmword_140E2FE50 + 1)) >> 3 << 6);
    v15 = xmmword_140E2FE50;
    if ( v25 > (unsigned __int64)xmmword_140E2FE50 )
      v25 = xmmword_140E2FE50;
    v16 = v25 - v22;
    v59 = v16;
LABEL_31:
    if ( v16 )
      v59 = v16;
    else
LABEL_67:
      v22 = v15;
    v26 = v22 - v12;
    v27 = v3 & 8;
    v61 = v26;
    v63 = v27;
    if ( (v3 & 8) == 0 )
    {
LABEL_34:
      v28 = v26 << 12;
      v29 = v12 << 12;
      v65 = v26 + v7;
      if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(v67 + 16) == PopMirrorPhysicalMemory )
        v30 = PopMirrorPhysicalMemory(v29, v28);
      else
        v30 = guard_dispatch_icall_no_overrides(v29, v28);
      v70 = v30;
      if ( v27 )
      {
        v64 = 0LL;
        v47 = 48 * v12 - 0x220000000000LL;
        v48 = v47 + 48 * v26;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a1) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(a1);
        }
        v50 = (volatile signed __int32 *)(v47 + 24);
        do
        {
          v51 = 0;
          while ( _interlockedbittestandset64(v50, 0x3FuLL) )
          {
            do
            {
              if ( (++v51 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)v50 < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v47, v31, v32, v33);
          _InterlockedAnd64((volatile signed __int64 *)v50, 0x7FFFFFFFFFFFFFFFuLL);
          v47 += 48LL;
          a1 = v64 + 1;
          v50 += 12;
          v64 = a1;
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
              KiRaiseIrqlProcessIrqlFlags(a1);
          }
        }
        while ( v47 < v48 );
        v26 = v61;
        v16 = v59;
        if ( KiIrqlFlags )
        {
          LOBYTE(v31) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
        }
        __writecr8(CurrentIrql);
      }
      v4 = v70;
      if ( v70 < 0 )
        break;
      v6 = v60;
      v3 = a2;
      goto LABEL_39;
    }
    if ( v6 )
    {
      v35 = v12 & 0x1F;
      a1 = v12 >> 5;
      v36 = v26;
      v37 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v12 >> 5));
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
    v62 = 0LL;
    v66 = v40 + 48 * v26;
    v41 = KeGetCurrentIrql();
    v42 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = v41;
      KiRaiseIrqlProcessIrqlFlags(a1);
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
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v43 < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v43 + 8) )
        goto LABEL_89;
      v42 = 2LL;
      if ( (unsigned __int8)((*(_BYTE *)(v43 + 10) & 7) - 2) > 2u )
        goto LABEL_89;
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v43 + 16) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v52 = v5 & 0x1F;
        v42 = 1LL;
        v53 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v5 >> 5));
        if ( v52 + 1 <= 0x20 )
        {
          a1 = v5 & 0x1F;
          v54 = 1 << v52;
          goto LABEL_88;
        }
        if ( (v5 & 0x1F) == 0 )
          goto LABEL_117;
        a1 = v5 & 0x1F;
        _InterlockedOr(v53++, ((1 << (32 - (v5 & 0x1F))) - 1) << v52);
        v42 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
        if ( v42 >= 0x20 )
        {
          a1 = v42 >> 5;
          v42 += -32LL * (v42 >> 5);
          do
          {
            *v53++ = -1;
            --a1;
          }
          while ( a1 );
        }
        if ( v42 )
        {
LABEL_117:
          a1 = v42;
          v54 = (1 << v42) - 1;
LABEL_88:
          _InterlockedOr(v53, v54);
        }
LABEL_89:
        _InterlockedAnd64((volatile signed __int64 *)v43, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v39 != -1 )
          goto LABEL_62;
LABEL_96:
        if ( (++v62 & 0xF) == 0 )
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
            KiRaiseIrqlProcessIrqlFlags(a1);
        }
        v40 += 48LL;
        v43 += 48LL;
        ++v5;
        if ( v40 >= v66 )
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
    if ( (unsigned int)MiAddLockedPageCharge(v40, 0, v45, v46) )
    {
      v55 = v5 & 0x1F;
      v59 = v16;
      v42 = 1LL;
      v56 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v5 >> 5));
      if ( v55 + 1 <= 0x20 )
      {
        a1 = v5 & 0x1F;
        v57 = ~(1 << v55);
        goto LABEL_93;
      }
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_119;
      a1 = v5 & 0x1F;
      _InterlockedAnd(v56++, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v55));
      v59 = v16;
      v42 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
      if ( v42 >= 0x20 )
      {
        v59 = v16;
        a1 = v42 >> 5;
        v42 += -32LL * (v42 >> 5);
        do
        {
          *v56++ = 0;
          --a1;
        }
        while ( a1 );
      }
      if ( v42 )
      {
LABEL_119:
        a1 = v42;
        v57 = -1 << v42;
LABEL_93:
        _InterlockedAnd(v56, v57);
      }
      _InterlockedAnd64((volatile signed __int64 *)v43, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v39 == -1 )
        v39 = v5;
      goto LABEL_96;
    }
    MiPfnReferenceCountIsZero(v40, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_61:
    v59 = v16;
    v60 = 1;
LABEL_62:
    if ( KiIrqlFlags )
    {
      LOBYTE(v42) = v41;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
    }
    __writecr8(v41);
    if ( v39 != -1 )
    {
      v7 = v65;
      v58 = v5;
      v27 = v63;
      v26 = v58 - v39;
      v61 = v26;
      v12 = v39;
      goto LABEL_34;
    }
    v4 = v70;
    v6 = v60;
    v3 = a2;
LABEL_40:
    v7 = v65;
  }
  while ( v5 < (unsigned __int64)xmmword_140E2FE50 );
  *a3 = v65;
  return v4;
}
