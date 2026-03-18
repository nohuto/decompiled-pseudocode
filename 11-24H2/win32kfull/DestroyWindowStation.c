/*
 * XREFs of DestroyWindowStation @ 0x1401E4650
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140208FC0 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *i; // rbx
  __int64 v8; // rax
  bool v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 36) == 1 )
  {
    v9 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3);
    if ( !v9 )
      EnterCrit(1LL, 0LL);
    for ( i = (__int64 *)(W32GetUserSessionState(v6, v5) + 63560); ; i = (__int64 *)(v8 + 8) )
    {
      v8 = *i;
      if ( !*i )
        break;
      if ( v3 == v8 )
      {
        DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(i);
        *i = *(_QWORD *)(v3 + 8);
        *(_QWORD *)(v3 + 8) = 0LL;
        break;
      }
    }
    *(_DWORD *)(v3 + 64) |= 0x100u;
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  }
  return 0LL;
}
