/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140061204
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x140060CE0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     FixupGlobalCursor @ 0x1400622F0 (FixupGlobalCursor.c)
 *     HMChangeOwnerPheProcessWorker @ 0x14006233C (HMChangeOwnerPheProcessWorker.c)
 *     ?FlushCaptionCacheForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140062600 (-FlushCaptionCacheForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     GreGetObjectOwner @ 0x1400BA870 (GreGetObjectOwner.c)
 *     StopFade @ 0x14023B7CC (StopFade.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  __int64 UserGdiSessionState; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 UserSessionState; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  int (*v19)(void); // rax
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64); // rax
  unsigned int CurrentProcessId; // ebx

  UserGdiSessionState = W32GetUserGdiSessionState();
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(UserGdiSessionState + 40);
  UserSessionState = W32GetUserSessionState(v5);
  if ( *(_QWORD *)(UserSessionState + 43040) )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(UserSessionState + 43032), 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      StopFade();
  }
  FlushCaptionCacheForProcess(a1);
  v8 = W32GetUserSessionState(v7);
  v9 = *(_QWORD *)(v8 + 19944);
  v11 = v9 + 32LL * *(unsigned int *)(W32GetUserSessionState(v10) + 19872);
  v13 = W32GetUserSessionState(v12);
  v14 = *(_QWORD *)(v8 + 19944);
  v15 = *(__int64 **)(v13 + 19888);
  while ( v14 <= v11 )
  {
    v16 = *(unsigned __int8 *)(v14 + 24);
    if ( (_BYTE)v16 && (*((_BYTE *)&unk_1402437BC + 24 * v16) & 2) != 0 && (struct tagPROCESSINFO *)v15[1] == a1 )
    {
      if ( v3 == v4 && (_BYTE)v16 == 3 )
        FixupGlobalCursor(*v15, a1);
      if ( (*(_BYTE *)(v14 + 25) & 1) == 0 )
        HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v14);
      if ( *(_BYTE *)(v14 + 24) && *(_QWORD *)(W32GetUserSessionState(v16) + 18704) )
      {
        if ( *(_BYTE *)(v14 + 24) == 3 )
        {
          v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3056LL);
          if ( v19 && v19() >= 0 )
          {
            v20 = *v15;
            v21 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3064LL);
            if ( v21 )
              v21(v20);
          }
        }
        else
        {
          v18 = W32GetUserSessionState(v17);
          HMChangeOwnerPheProcessWorker(v14, *(_QWORD *)(v18 + 18704));
        }
      }
    }
    v14 += 32LL;
    v15 += 5;
  }
}
