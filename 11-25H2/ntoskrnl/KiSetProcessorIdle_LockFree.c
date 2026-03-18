/*
 * XREFs of KiSetProcessorIdle_LockFree @ 0x1404EFA64
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiSetProcessorIdle @ 0x140447AB0 (KiSetProcessorIdle.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KiSetProcessorIdle_LockFree(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbp
  volatile signed __int64 *v5; // r9
  char result; // al
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  signed __int64 v11; // rdx
  __int64 v12; // rsi
  signed __int64 v13; // rdi
  __int128 v14; // rt0
  unsigned __int8 v15; // tt
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // di
  __int64 v18; // rbx
  unsigned __int8 i; // r8
  unsigned __int64 v20; // rdx
  unsigned __int8 v21; // r10
  __int64 v22; // rbx
  unsigned __int8 j; // r8
  char v24; // al
  unsigned __int8 v25; // bl
  unsigned __int64 v26; // rdi
  unsigned __int8 k; // dl
  unsigned __int64 v28; // rdx
  unsigned __int8 v29; // r8
  unsigned __int64 v30; // r10
  unsigned __int8 m; // bl

  v3 = *(unsigned __int8 *)(a1 + 209);
  v5 = *(volatile signed __int64 **)(a1 + 192);
  result = *(_BYTE *)(a1 + 35);
  v8 = *(_QWORD *)(a1 + 36448);
  v9 = 1LL << *(_BYTE *)(a1 + 209);
  if ( a2 )
  {
    v10 = *(_QWORD *)(a1 + 36536);
    if ( v10 )
      *(_BYTE *)(v10 + 16) = 1;
    *(_BYTE *)(a1 + 14523) = a3;
    if ( (result & 1) != 0 )
    {
      result &= ~1u;
      *(_BYTE *)(a1 + 35) = result;
      if ( (result & 0x10) == 0 )
        _InterlockedOr64(v5 + 1, v9);
      if ( v8 == v9 )
      {
        _InterlockedOr64(v5 + 2, v9);
        _InterlockedOr64(v5 + 3, v9);
        *((_BYTE *)v5 + v3 + 512) = 0;
      }
      else
      {
        v11 = *((_QWORD *)v5 + 3);
        v12 = *((_QWORD *)v5 + 2);
        while ( 1 )
        {
          v13 = v11;
          if ( (v8 & (v9 | v12)) == v8 )
            v13 = v8 | v11;
          *(_QWORD *)&v14 = v12;
          *((_QWORD *)&v14 + 1) = v11;
          v15 = _InterlockedCompareExchange128(v5 + 2, v13, v9 | v12, (signed __int64 *)&v14);
          v11 = *((_QWORD *)&v14 + 1);
          v12 = v14;
          result = v15 != 0;
          if ( v15 )
            break;
          _mm_pause();
        }
        v16 = *(_QWORD *)(a1 + 36448);
        v17 = 0;
        while ( v16 )
        {
          if ( (_BYTE)v16 )
          {
            v18 = 0LL;
            for ( i = 0; i < 8u; ++i )
            {
              if ( _bittest64((const __int64 *)&v16, i) )
                v18 += 1LL << (8 * i);
            }
            result = v17;
            _InterlockedAdd64(&v5[v17 + 64], -v18);
          }
          ++v17;
          v16 >>= 8;
        }
      }
      v20 = *(_QWORD *)(a1 + 36472);
      if ( v20 == v9 )
      {
        *((_BYTE *)v5 + v3 + 576) = 0;
      }
      else
      {
        v21 = 0;
        while ( v20 )
        {
          if ( (_BYTE)v20 )
          {
            v22 = 0LL;
            for ( j = 0; j < 8u; ++j )
            {
              if ( _bittest64((const __int64 *)&v20, j) )
                v22 += 1LL << (8 * j);
            }
            result = v21;
            _InterlockedAdd64(&v5[v21 + 72], -v22);
          }
          ++v21;
          v20 >>= 8;
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 14523) = 0;
    if ( (result & 1) != 0 )
      __fastfail(0x21u);
    v24 = result | 1;
    *(_BYTE *)(a1 + 35) = v24;
    if ( (v24 & 0x10) == 0 )
      _InterlockedAnd64(v5 + 1, ~v9);
    _InterlockedAnd64(v5 + 2, ~v9);
    result = ~(_BYTE)v8;
    _InterlockedAnd64(v5 + 3, ~v8);
    if ( v9 == v8 )
    {
      *((_BYTE *)v5 + v3 + 512) = 1;
    }
    else
    {
      v25 = 0;
      while ( v8 )
      {
        if ( (_BYTE)v8 )
        {
          v26 = 0LL;
          for ( k = 0; k < 8u; ++k )
          {
            if ( _bittest64((const __int64 *)&v8, k) )
              v26 += 1LL << (8 * k);
          }
          result = v25;
          _InterlockedAdd64(&v5[v25 + 64], v26);
        }
        ++v25;
        v8 >>= 8;
      }
    }
    v28 = *(_QWORD *)(a1 + 36472);
    if ( v9 == v28 )
    {
      *((_BYTE *)v5 + v3 + 576) = 1;
    }
    else
    {
      v29 = 0;
      while ( v28 )
      {
        if ( (_BYTE)v28 )
        {
          v30 = 0LL;
          for ( m = 0; m < 8u; ++m )
          {
            if ( _bittest64((const __int64 *)&v28, m) )
              v30 += 1LL << (8 * m);
          }
          result = v29;
          _InterlockedAdd64(&v5[v29 + 72], v30);
        }
        ++v29;
        v28 >>= 8;
      }
    }
  }
  return result;
}
