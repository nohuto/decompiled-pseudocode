/*
 * XREFs of ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1401C0520
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1401C08C0 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsFreeSMSSupported @ 0x14019E610 (IsFreeSMSSupported.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1401C03B0 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1401C0498 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall _AddWin32TriageDataToDump(struct tagWIN32_TRIAGE_DATA *a1)
{
  struct tagTHREADINFO *i; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *j; // rdi
  unsigned int v6; // eax
  _QWORD *k; // rdi
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  void **v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *m; // rdi

  for ( i = *(struct tagTHREADINFO **)(*(_QWORD *)a1 + 328LL); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 88) )
    _AddThreadInfoToLiveTriageDump(a1, i);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)a1);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 328LL);
  if ( v3 )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v3 + 496));
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 328LL) + 504LL));
  }
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 344LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 656LL));
  for ( j = *(_QWORD **)(*(_QWORD *)a1 + 352LL); j; j = (_QWORD *)*j )
  {
    v6 = *((_DWORD *)a1 + 4);
    if ( v6 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v6 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j);
  }
  for ( k = *(_QWORD **)(*(_QWORD *)a1 + 360LL); k; k = (_QWORD *)*k )
  {
    v8 = *((_DWORD *)a1 + 4);
    if ( v8 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v8 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, k);
  }
  if ( *((_DWORD *)a1 + 4) >= 0x3E8u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 246);
  v9 = W32GetUserSessionState(v4) + 69312;
  if ( (int)IsFreeSMSSupported(v11, v10) >= 0 )
  {
    v12 = *(_QWORD **)v9;
    while ( v12 != (_QWORD *)v9 && *((_DWORD *)a1 + 2) < 0x3E8u )
    {
      _AddMemoryBlockToLiveTriageDump(a1, v12);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v12[4]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v12[5]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v12[8]);
      _AddMemoryBlockToLiveTriageDump(a1, (void *)v12[14]);
      v12 = (_QWORD *)*v12;
      ++*((_DWORD *)a1 + 2);
    }
  }
  _AddMemoryBlockToLiveTriageDump(a1, (void *)(v9 & 0xFFFFFFFFFFFFF000uLL));
  UserSessionState = W32GetUserSessionState(v13);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((UserSessionState + 18704) & 0xFFFFFFFFFFFFF000uLL));
  v16 = W32GetUserSessionState(v15);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v16 + 18960) & 0xFFFFFFFFFFFFF000uLL));
  v18 = W32GetUserSessionState(v17);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v18 + 16904) & 0xFFFFFFFFFFFFF000uLL));
  v20 = W32GetUserSessionState(v19);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v20 + 68868) & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresUser & 0xFFFFFFFFFFFFF000uLL));
  v22 = W32GetUserSessionState(v21);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v22 + 19928) & 0xFFFFFFFFFFFFF000uLL));
  v24 = W32GetUserSessionState(v23);
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((v24 + 19936) & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpWin32kDriverObject & 0xFFFFFFFFFFFFF000uLL));
  v26 = W32GetUserSessionState(v25);
  _AddThreadInfoToLiveTriageDump(a1, *(struct tagTHREADINFO **)(v26 + 18704));
  v28 = W32GetUserSessionState(v27);
  _AddThreadInfoToLiveTriageDump(a1, *(struct tagTHREADINFO **)(v28 + 18960));
  v30 = (void **)W32GetUserSessionState(v29);
  _AddMemoryBlockToLiveTriageDump(a1, *v30);
  v32 = W32GetUserSessionState(v31);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v32 + 19928));
  _AddMemoryBlockToLiveTriageDump(a1, gpWin32kDriverObject);
  for ( m = *(_QWORD **)(W32GetUserSessionState(v33) + 16904); m; m = (_QWORD *)*m )
    _AddMemoryBlockToLiveTriageDump(a1, m);
  return 0LL;
}
