/*
 * XREFs of CmpEnlistKeyBody @ 0x140970AE0
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpEnlistKeyBody(signed __int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // esi
  _QWORD *v9; // rdi
  unsigned int v10; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 184) & 0x400000) == 0 )
  {
    v9 = (_QWORD *)(a1 + 32);
    do
    {
      while ( 1 )
      {
        v9[1] = v9;
        v10 = 0;
        *v9 = v9;
        while ( v10 < 4 )
        {
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v10 + 136),
                  a1,
                  0LL) )
            goto LABEL_8;
          ++v10;
        }
        v12 = *(_QWORD *)(a1 + 8);
        if ( a4 )
        {
          v13 = v12 + 120;
          v14 = *(_QWORD **)(v13 + 8);
          if ( *v14 != v13 )
            __fastfail(3u);
          *v9 = v13;
          v9[1] = v14;
          *v14 = v9;
          *(_QWORD *)(v13 + 8) = v9;
LABEL_8:
          *(_WORD *)(a1 + 48) |= 0x40u;
          return v5;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 48), 1LL, 17LL) != 17 )
          break;
        a4 = 1;
        *(_QWORD *)(v12 + 56) = KeGetCurrentThread();
      }
      CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
      a4 = 1;
    }
    while ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x20000) == 0 && !(unsigned __int8)CmpIsKeyStackDeleted(a5, a3) );
    return (unsigned int)-1073741444;
  }
  return v5;
}
