/*
 * XREFs of ?CleanupDirtyDesktops@@YAXXZ @ 0x14023AD50
 * Callers:
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupDirtyDesktops(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *i; // rbx
  __int64 *v4; // rdi
  __int64 UserSessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx

  for ( i = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 63560); i; i = (_QWORD *)i[1] )
  {
    v4 = i + 2;
    while ( 1 )
    {
      v14 = *v4;
      if ( !*v4 )
        break;
      if ( (*(_DWORD *)(v14 + 48) & 0x10) != 0 )
      {
        v4 = (__int64 *)(v14 + 32);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v14, v2);
        v8 = *v4;
        if ( *(_QWORD *)(UserSessionState + 63016) == *v4 )
        {
          v9 = W32GetUserSessionState(v6, v8);
          DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v9 + 63016), v10, v11);
          v8 = *v4;
        }
        v12 = *(_QWORD *)(i[7] + 8LL);
        if ( v12 )
        {
          v13 = (_QWORD *)(v12 + 24);
          if ( *v13 == v8 )
            DeferrableUnlockObjectAssignment<tagDESKTOP>(v13, v8, v7);
        }
        LockObjectAssignment(v4, *(_QWORD *)(*v4 + 32));
      }
    }
  }
}
