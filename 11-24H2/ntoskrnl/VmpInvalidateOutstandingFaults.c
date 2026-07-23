/*
 * XREFs of VmpInvalidateOutstandingFaults @ 0x14039F950
 * Callers:
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     VmpInvalidateSlatBatched @ 0x140479E38 (VmpInvalidateSlatBatched.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall VmpInvalidateOutstandingFaults(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 i; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  _QWORD *v13; // r9
  unsigned __int64 v14; // r8
  bool v15; // cf
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  _QWORD **v18; // rax
  _QWORD *v19; // rdx

  v3 = (volatile LONG *)(a1 + 96);
  v6 = a2 + a3 - 1;
  v7 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 96));
  v8 = a1 + 80;
  i = *(_QWORD *)v8;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && i )
    i ^= v8;
  v10 = 0LL;
  while ( i )
  {
    v11 = *(_QWORD *)(i + 24) & 0xFFFFFFFFFFFFFLL;
    if ( a2 > v11 )
    {
      v12 = *(_QWORD *)(i + 8);
    }
    else
    {
      v12 = *(_QWORD *)i;
      if ( a2 >= v11 )
      {
        if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v12 )
          v12 ^= i;
        v13 = 0LL;
        if ( v12 )
        {
          do
          {
            v14 = *(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFLL;
            v15 = a2 < v14;
            if ( a2 > v14 )
            {
              v16 = *(_QWORD *)(v12 + 8);
            }
            else
            {
              v16 = *(_QWORD *)v12;
              if ( !v15 )
                v13 = (_QWORD *)v12;
            }
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v16 )
              v12 ^= v16;
            else
              v12 = v16;
          }
          while ( v12 );
          if ( v13 )
            i = (unsigned __int64)v13;
        }
        goto LABEL_19;
      }
      v10 = i;
    }
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v12 )
      i ^= v12;
    else
      i = v12;
  }
  i = v10;
  if ( !v10 )
    goto LABEL_29;
  do
  {
LABEL_19:
    if ( (*(_QWORD *)(i + 24) & 0xFFFFFFFFFFFFFuLL) > v6 )
      break;
    ++v7;
    *(_QWORD *)(i + 24) |= 0x10000000000000uLL;
    v17 = i;
    v18 = *(_QWORD ***)(i + 8);
    if ( v18 )
    {
      v19 = *v18;
      for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
        i = (unsigned __int64)v19;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v17 )
          break;
        v17 = i;
      }
    }
  }
  while ( i );
LABEL_29:
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return v7;
}
