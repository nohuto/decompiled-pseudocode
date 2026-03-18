/*
 * XREFs of RealGetProp @ 0x140042C50
 * Callers:
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14010CC90 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall RealGetProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _WORD *v8; // rax
  int i; // ecx
  __int16 v11; // dx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v6) + 19816)
      && !IS_USERCRIT_OWNED_EXCLUSIVE()
      && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      if ( a2 )
      {
        v8 = (_WORD *)(v7 + 8);
        for ( i = *(_DWORD *)(v7 + 4); i; --i )
        {
          if ( v8[4] == a2 )
          {
            v11 = v8[5] & 1;
            if ( a3 )
            {
              if ( v11 )
                return *(_QWORD *)v8;
            }
            else if ( !v11 )
            {
              return *(_QWORD *)v8;
            }
          }
          v8 += 8;
        }
      }
    }
  }
  return 0LL;
}
