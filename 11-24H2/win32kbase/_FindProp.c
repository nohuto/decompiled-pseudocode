/*
 * XREFs of _FindProp @ 0x140042BA0
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x140156DE8 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     RealInternalSetProp @ 0x140168EA0 (RealInternalSetProp.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall FindProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  int i; // ecx
  __int16 v9; // dx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 && a2 )
  {
    result = v6 + 8;
    for ( i = *(_DWORD *)(v6 + 4); i; --i )
    {
      if ( *(_WORD *)(result + 8) == a2 )
      {
        v9 = *(_WORD *)(result + 10) & 1;
        if ( a3 )
        {
          if ( v9 )
            return result;
        }
        else if ( !v9 )
        {
          return result;
        }
      }
      result += 16LL;
    }
  }
  return 0LL;
}
