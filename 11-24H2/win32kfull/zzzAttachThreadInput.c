/*
 * XREFs of zzzAttachThreadInput @ 0x1401E1E5C
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     NtUserAttachThreadInput @ 0x1401E1D30 (NtUserAttachThreadInput.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x140255FF0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B4438 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x14023DB78 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rbp
  const struct tagUIPI_INFO *v9; // r8
  int v10; // r14d
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  const struct tagUIPI_INFO *v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 UserSessionState; // rax
  __int64 *i; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-28h] BYREF
  int v34; // [rsp+38h] [rbp-20h]

  v8 = PtiCurrent(a1, a2);
  v10 = a3 & 1;
  v11 = a3 & 0x8000;
  if ( (a3 & 0x4000) == 0 || (v12 = 1, v10) )
    v12 = 0;
  if ( a1 != a2 )
  {
    if ( !v11 )
    {
      v13 = *(_QWORD *)(a2 + 464);
      if ( v13 != *(_QWORD *)(a1 + 464) || *((_QWORD *)v8 + 58) != v13 )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v8 + 58) + 872LL),
                (const struct tagUIPI_INFO *)(*(_QWORD *)(a2 + 472) + 472LL),
                v9)
          && *(int *)(*((_QWORD *)v8 + 58) + 12LL) >= 0 )
        {
          v15 = *(_QWORD *)(a2 + 472);
          v16 = a2;
LABEL_11:
          v17 = *(_DWORD *)(v15 + 480);
          v33 = *(_QWORD *)(v15 + 472);
          v34 = v17;
          EtwTraceUIPIInputError(v8, v16, v15, &v33, 2);
          return 3221225506LL;
        }
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v8 + 58) + 872LL),
                (const struct tagUIPI_INFO *)(*(_QWORD *)(a1 + 472) + 472LL),
                v14)
          && *(int *)(*((_QWORD *)v8 + 58) + 12LL) >= 0
          || (unsigned int)IsDesktopApp(*((_QWORD *)v8 + 58))
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 464))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 464)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(v8)
          && (v7 = *(unsigned int *)(*((_QWORD *)v8 + 58) + 816LL), (v7 & 0x100) == 0) )
        {
          v15 = *(_QWORD *)(a1 + 472);
          v16 = a1;
          goto LABEL_11;
        }
      }
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 528), 0, 0) & 0x40) != 0
      || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x40) != 0
      || *(_QWORD *)(a2 + 496) != *(_QWORD *)(a1 + 496) )
    {
      return 3221225506LL;
    }
    UserSessionState = W32GetUserSessionState(v7, v6);
    if ( v10 )
    {
      for ( i = *(__int64 **)(UserSessionState + 16904); ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v22 = Win32AllocPoolZInit(32LL, 1767994197LL);
          v25 = (_QWORD *)v22;
          if ( !v22 )
            return 3221225495LL;
          *(_QWORD *)(v22 + 8) = a1;
          *(_QWORD *)(v22 + 16) = a2;
          *(_DWORD *)(v22 + 24) = 1;
          v27 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 16904);
          *v25 = v27;
          *(_QWORD *)(W32GetUserSessionState(v27, v28) + 16904) = v25;
          goto LABEL_48;
        }
        v21 = i[2];
        if ( v21 == a2 && i[1] == a1 )
          break;
        if ( v21 == a1 && i[1] == a2 )
          break;
      }
      v26 = *((_DWORD *)i + 6);
      if ( v26 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v26 + 1;
      return 0LL;
    }
    v29 = UserSessionState + 16904;
    v30 = *(_QWORD *)(UserSessionState + 16904);
    if ( v30 )
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)(v30 + 16);
        if ( v31 == a2 && *(_QWORD *)(v30 + 8) == a1 )
          break;
        if ( v31 == a1 && *(_QWORD *)(v30 + 8) == a2 )
          break;
        v29 = v30;
        v30 = *(_QWORD *)v30;
        if ( !v30 )
          return 3221225485LL;
      }
      --*(_DWORD *)(v30 + 24);
      v32 = *(_QWORD **)v29;
      if ( !*(_DWORD *)(*(_QWORD *)v29 + 24LL) || v12 )
      {
        *(_QWORD *)v29 = *v32;
        Win32FreePool(v32);
LABEL_48:
        *(_QWORD *)(a2 + 1360) |= 0x200uLL;
        *(_QWORD *)(a1 + 1360) |= 0x200uLL;
        if ( _bittest64((const signed __int64 *)(a1 + 1360), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a1 + 768), 1, 0);
        if ( (*(_DWORD *)(a2 + 1360) & 0x400LL) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 768), 1, 0);
        zzzReattachThreads(0LL, a1, a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
