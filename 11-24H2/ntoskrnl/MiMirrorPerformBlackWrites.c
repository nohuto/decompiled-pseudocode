/*
 * XREFs of MiMirrorPerformBlackWrites @ 0x14041CD00
 * Callers:
 *     MiMirrorBlackPhase @ 0x140673E6C (MiMirrorBlackPhase.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopMirrorPhysicalMemory @ 0x140B6A3C0 (PopMirrorPhysicalMemory.c)
 */

__int64 __fastcall MiMirrorPerformBlackWrites(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned __int64 v2; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 i; // r10
  _QWORD *v6; // rbx
  __int64 j; // r11
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r10
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *k; // rax
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
    v4 = 0LL;
    if ( v2 < (unsigned __int64)xmmword_140E301E0 )
      v4 = v2;
    for ( i = xmmword_140E301E0 - 1; ; i = v9 - 1 )
    {
      if ( i - v4 == -1LL )
      {
LABEL_9:
        v8 = -1LL;
        goto LABEL_10;
      }
      v6 = (_QWORD *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 8 * (v4 >> 6));
      for ( j = ~*v6 | ((1LL << (v4 & 0x3F)) - 1); j == -1; j = ~*v6 )
      {
        if ( (unsigned __int64)++v6 > *((_QWORD *)&xmmword_140E301E0 + 1) + 8 * (i >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64(&v10, ~j);
      v8 = v10 + (((__int64)v6 - *((_QWORD *)&xmmword_140E301E0 + 1)) >> 3 << 6);
      if ( v8 <= i )
        break;
      v8 = -1LL;
LABEL_10:
      if ( !v4 )
        goto LABEL_16;
      v9 = v2 + 1;
      v4 = 0LL;
      if ( v2 + 1 > (unsigned __int64)xmmword_140E301E0 )
        v9 = xmmword_140E301E0;
    }
    if ( v8 == -1LL )
      goto LABEL_10;
LABEL_16:
    if ( v8 < v2 || v8 == -1LL )
      break;
    v11 = xmmword_140E301E0;
    v12 = 0LL;
    if ( (unsigned __int64)xmmword_140E301E0 > v8 )
    {
      v13 = *((_QWORD *)&xmmword_140E301E0 + 1) + 8 * ((unsigned __int64)(xmmword_140E301E0 - 1) >> 6);
      v14 = (_QWORD *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 8 * (v8 >> 6));
      v15 = ((1LL << (v8 & 0x3F)) - 1) | *v14;
      for ( k = v14 + 1; ; ++k )
      {
        v17 = ~v15;
        if ( v17 )
          break;
        if ( (unsigned __int64)k > v13 )
        {
          v11 = xmmword_140E301E0;
          v19 = xmmword_140E301E0;
          goto LABEL_33;
        }
        v15 = v14[1];
        ++v14;
      }
      _BitScanForward64((unsigned __int64 *)&v18, v17);
      v19 = (unsigned int)v18 + (((__int64)v14 - *((_QWORD *)&xmmword_140E301E0 + 1)) >> 3 << 6);
      v11 = xmmword_140E301E0;
      if ( v19 > (unsigned __int64)xmmword_140E301E0 )
      {
        v19 = xmmword_140E301E0;
      }
      else
      {
        for ( m = ~(v17 | ((1LL << v18) - 1)); !m; m = *v21 )
        {
          v21 = v14 + 1;
          if ( (unsigned __int64)(v14 + 1) > v13 )
          {
            m = 64LL;
            goto LABEL_30;
          }
          ++v14;
        }
        _BitScanForward64(&m, m);
LABEL_30:
        v22 = m + (((__int64)v14 - *((_QWORD *)&xmmword_140E301E0 + 1)) >> 3 << 6);
        v11 = xmmword_140E301E0;
        if ( v22 > (unsigned __int64)xmmword_140E301E0 )
          v22 = xmmword_140E301E0;
        v12 = v22 - v19;
      }
LABEL_33:
      if ( v12 )
        goto LABEL_47;
    }
    v19 = v11;
    v23 = v19 - v8;
    v24 = v23 << 12;
    v25 = v8 << 12;
    v26 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 16) == PopMirrorPhysicalMemory
        ? PopMirrorPhysicalMemory(v25, v24)
        : guard_dispatch_icall_no_overrides(v25, v24);
LABEL_47:
    v1 = v26;
    if ( v26 < 0 )
      break;
    v2 = v23 + v12 + v8;
  }
  while ( v2 < (unsigned __int64)xmmword_140E301E0 );
  return v1;
}
