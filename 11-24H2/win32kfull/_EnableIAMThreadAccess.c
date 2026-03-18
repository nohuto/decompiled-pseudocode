/*
 * XREFs of _EnableIAMThreadAccess @ 0x1400F58F0
 * Callers:
 *     NtUserEnableIAMAccess @ 0x1401BC1E0 (NtUserEnableIAMAccess.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1400F5BF8 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EnableIAMThreadAccess(const struct tagTHREADINFO *a1, int a2)
{
  unsigned int v2; // edi
  struct tagIAM_THREAD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v11; // rdx
  struct tagIAM_THREAD **v12; // rcx

  v2 = 0;
  if ( !a2 )
  {
    IAMThread = FindIAMThread(a1);
    if ( !IAMThread )
      return v2;
    v11 = *(_QWORD *)IAMThread;
    if ( *(struct tagIAM_THREAD **)(*(_QWORD *)IAMThread + 8LL) == IAMThread )
    {
      v12 = (struct tagIAM_THREAD **)*((_QWORD *)IAMThread + 1);
      if ( *v12 == IAMThread )
      {
        *v12 = (struct tagIAM_THREAD *)v11;
        *(_QWORD *)(v11 + 8) = v12;
        Win32FreePool(IAMThread);
        return 1;
      }
    }
    goto LABEL_13;
  }
  v4 = FindIAMThread(a1);
  if ( v4 )
  {
LABEL_6:
    *((_QWORD *)v4 + 3) = *((_QWORD *)a1 + 62);
    return 1;
  }
  v4 = (struct tagIAM_THREAD *)Win32AllocPoolZInit(32LL, 1869443925LL);
  if ( v4 )
  {
    v7 = W32GetUserSessionState(v6, v5) + 71440;
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) == v7 )
    {
      *(_QWORD *)v4 = v8;
      *((_QWORD *)v4 + 1) = v7;
      *(_QWORD *)(v8 + 8) = v4;
      *(_QWORD *)v7 = v4;
      *((_QWORD *)v4 + 2) = a1;
      goto LABEL_6;
    }
LABEL_13:
    __fastfail(3u);
  }
  return v2;
}
