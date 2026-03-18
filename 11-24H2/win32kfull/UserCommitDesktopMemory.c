/*
 * XREFs of UserCommitDesktopMemory @ 0x1401D0160
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MapDesktop @ 0x14016A320 (MapDesktop.c)
 *     GetDesktopView @ 0x140194220 (GetDesktopView.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  _QWORD *j; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  _QWORD *i; // rcx
  __int64 v15; // rcx
  __int64 k; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-30h] BYREF
  int v22; // [rsp+30h] [rbp-20h]
  int v23; // [rsp+34h] [rbp-1Ch]
  __int64 CurrentProcess; // [rsp+38h] [rbp-18h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+4Ch] [rbp-4h]
  int v28; // [rsp+88h] [rbp+38h] BYREF

  v28 = 0;
  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63560);
    if ( !v13 )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v13 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_17;
      }
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
LABEL_17:
    if ( !v13 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[16], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v28);
    if ( (int)result >= 0 )
      *a2 += v28;
  }
  else
  {
    if ( (*((_BYTE *)PtiCurrent(v7, v6) + 1360) & 0x40) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        CurrentProcessWin32Process &= v10;
      }
      for ( j = *(_QWORD **)(CurrentProcessWin32Process + 696); j; j = (_QWORD *)*j )
      {
        if ( *(_QWORD *)(j[1] + 16LL) == a1 )
          return MmCommitSessionMappedView(*a2, *a3);
      }
      v15 = *(_QWORD *)(W32GetUserSessionState(0LL, v10) + 63560);
      if ( !v15 )
        return 3221225495LL;
      do
      {
        for ( k = *(_QWORD *)(v15 + 16); k; k = *(_QWORD *)(k + 32) )
        {
          if ( *(_QWORD *)(k + 16) == a1 )
            goto LABEL_26;
        }
        v15 = *(_QWORD *)(v15 + 8);
      }
      while ( v15 );
LABEL_26:
      if ( !v15 )
        return 3221225495LL;
      v21[0] = 0LL;
      v21[1] = 0LL;
      v23 = 0;
      v22 = 1;
      v26 = 0;
      CurrentProcess = PsGetCurrentProcess(v15);
      v25 = k;
      v27 = 1;
      if ( (int)MapDesktop((__int64)v21, v17, v18) < 0 )
        return 3221225495LL;
      v20 = PsGetCurrentProcessWin32Process(v19);
      if ( v20 )
        v20 &= -(__int64)(*(_QWORD *)v20 != 0LL);
      if ( !GetDesktopView(v20, k) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
