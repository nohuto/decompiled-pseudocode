/*
 * XREFs of ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14024FDE0
 * Callers:
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxCallCtfHook @ 0x14007FC80 (xxxCallCtfHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     QueueShutdownData @ 0x1400A5D70 (QueueShutdownData.c)
 *     Feature_Bugfix_58999946__private_IsEnabledDeviceUsageNoInline @ 0x1402B46AC (Feature_Bugfix_58999946__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxDestroyWindow_Prologue(struct tagTHREADINFO **a1, struct tagTHREADINFO *a2, int *a3, bool *a4)
{
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v15; // r9

  v8 = 0;
  v9 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  *a3 = v9;
  if ( a2 != a1[2] )
  {
    if ( !v9 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5);
      return 0LL;
    }
    HMChangeOwnerThread(a1, a2);
  }
  if ( *a3 && (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 0x10000000) == 0 )
  {
    *a4 = 1;
    _InterlockedOr((volatile signed __int32 *)a2 + 132, 0x10000000u);
  }
  v10 = *((_DWORD *)a1 + 95);
  if ( (v10 & 0x400000) != 0 )
  {
    *((_DWORD *)a1 + 95) = v10 & 0xFFBFFFFF;
    QueueShutdownData((__int64)*a1, 0LL);
  }
  if ( *a3 || (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) != 0 )
    return 1LL;
  if ( (unsigned int)Feature_Bugfix_58999946__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (**(_DWORD **)(W32GetUserSessionState(v12, v11) + 19928) & 4) != 0
      && a1 == *((struct tagTHREADINFO ***)a2 + 103) )
    {
      v13 = 1;
LABEL_21:
      v15 = v13;
LABEL_29:
      xxxCallCtfHook(5LL, 4LL, (__int64)*a1, (__int128 *)v15);
      goto LABEL_30;
    }
    v13 = IsTopLevelWindow((__int64)a1) ? 4 : 0;
    if ( (*((_DWORD *)a1 + 95) & 0x10000000) != 0 && *((_DWORD *)a2 + 238) == 1 )
      v13 |= 2u;
    if ( v13 )
      goto LABEL_21;
  }
  else
  {
    if ( (**(_DWORD **)(W32GetUserSessionState(v12, v11) + 19928) & 4) != 0
      && a1 == *((struct tagTHREADINFO ***)a2 + 103) )
    {
      v15 = 0LL;
      goto LABEL_29;
    }
    if ( IsTopLevelWindow((__int64)a1) )
    {
      v15 = 1LL;
      goto LABEL_29;
    }
    if ( (*((_DWORD *)a1 + 95) & 0x10000000) != 0 )
    {
      v15 = 0LL;
      if ( *((_DWORD *)a2 + 238) == 1 )
        goto LABEL_29;
    }
  }
LABEL_30:
  if ( ((*((_BYTE *)a2 + 720) | *(_BYTE *)(**((_QWORD **)a2 + 63) + 16LL)) & 0x40) != 0 )
  {
    LOBYTE(v8) = (unsigned int)xxxCallHook(4LL, (__int64)*a1, 0LL, 5) == 0;
    return v8;
  }
  return 1LL;
}
