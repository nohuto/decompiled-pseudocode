/*
 * XREFs of MiMirrorPerformBlackWrites @ 0x140428BB0
 * Callers:
 *     MiMirrorBlackPhase @ 0x140672C9C (MiMirrorBlackPhase.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopMirrorPhysicalMemory @ 0x140B68280 (PopMirrorPhysicalMemory.c)
 */

__int64 __fastcall MiMirrorPerformBlackWrites(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned __int64 v2; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 i; // r10
  _QWORD *v7; // rbx
  __int64 j; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r10
  __int64 v15; // rdx
  unsigned __int64 k; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 m; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  int v26; // eax

  v1 = 0;
  v2 = 0LL;
  do
  {
    v4 = xmmword_140E300A0;
    v5 = 0LL;
    if ( v2 < (unsigned __int64)xmmword_140E300A0 )
      v5 = v2;
    for ( i = xmmword_140E300A0 - 1; ; i = v10 - 1 )
    {
      if ( i - v5 == -1LL )
      {
LABEL_9:
        v9 = -1LL;
        goto LABEL_10;
      }
      v7 = (_QWORD *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 8 * (v5 >> 6));
      for ( j = ~*v7 | ((1LL << (v5 & 0x3F)) - 1); j == -1; j = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > *((_QWORD *)&xmmword_140E300A0 + 1) + 8 * (i >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64(&v11, ~j);
      v9 = v11 + (((__int64)v7 - *((_QWORD *)&xmmword_140E300A0 + 1)) >> 3 << 6);
      if ( v9 <= i )
        break;
      v9 = -1LL;
LABEL_10:
      if ( !v5 )
        goto LABEL_16;
      v10 = v2 + 1;
      v5 = 0LL;
      if ( v2 + 1 > (unsigned __int64)xmmword_140E300A0 )
        v10 = xmmword_140E300A0;
    }
    if ( v9 == -1LL )
      goto LABEL_10;
LABEL_16:
    if ( v9 < v2 || v9 == -1LL )
      break;
    v12 = xmmword_140E300A0;
    v13 = 0LL;
    if ( (unsigned __int64)xmmword_140E300A0 > v9 )
    {
      v4 = *((_QWORD *)&xmmword_140E300A0 + 1);
      v14 = *((_QWORD *)&xmmword_140E300A0 + 1) + 8 * ((unsigned __int64)(xmmword_140E300A0 - 1) >> 6);
      v5 = *((_QWORD *)&xmmword_140E300A0 + 1) + 8 * (v9 >> 6);
      v15 = ((1LL << (v9 & 0x3F)) - 1) | *(_QWORD *)v5;
      for ( k = v5 + 8; ; k += 8LL )
      {
        v17 = ~v15;
        if ( v17 )
          break;
        if ( k > v14 )
        {
          v12 = xmmword_140E300A0;
          v19 = xmmword_140E300A0;
          goto LABEL_33;
        }
        v15 = *(_QWORD *)(v5 + 8);
        v5 += 8LL;
      }
      _BitScanForward64((unsigned __int64 *)&v18, v17);
      v19 = (unsigned int)v18 + ((__int64)(v5 - *((_QWORD *)&xmmword_140E300A0 + 1)) >> 3 << 6);
      v12 = xmmword_140E300A0;
      if ( v19 > (unsigned __int64)xmmword_140E300A0 )
      {
        v19 = xmmword_140E300A0;
      }
      else
      {
        for ( m = ~(v17 | ((1LL << v18) - 1)); !m; m = *v21 )
        {
          v21 = (unsigned __int64 *)(v5 + 8);
          if ( v5 + 8 > v14 )
          {
            m = 64LL;
            goto LABEL_30;
          }
          v5 += 8LL;
        }
        _BitScanForward64(&m, m);
LABEL_30:
        v22 = m + ((__int64)(v5 - *((_QWORD *)&xmmword_140E300A0 + 1)) >> 3 << 6);
        v12 = xmmword_140E300A0;
        if ( v22 > (unsigned __int64)xmmword_140E300A0 )
          v22 = xmmword_140E300A0;
        v13 = v22 - v19;
      }
LABEL_33:
      if ( v13 )
        goto LABEL_47;
    }
    v19 = v12;
    v23 = v19 - v9;
    v24 = v23 << 12;
    v25 = v9 << 12;
    v26 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 16) == PopMirrorPhysicalMemory
        ? PopMirrorPhysicalMemory(v25, v24)
        : guard_dispatch_icall_no_overrides(v25, v24, v5, v4);
LABEL_47:
    v1 = v26;
    if ( v26 < 0 )
      break;
    v2 = v23 + v13 + v9;
  }
  while ( v2 < (unsigned __int64)xmmword_140E300A0 );
  return v1;
}
