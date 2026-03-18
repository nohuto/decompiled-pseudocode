/*
 * XREFs of ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x14018A5C8
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140046CE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncChildCreate @ 0x14018A710 (DwmAsyncChildCreate.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x14018A854 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall DwmWindowCreate(struct tagTHREADINFO **a1, const struct tagWND *a2, const struct tagRECT *a3)
{
  struct _KPROCESS *v5; // rbx
  __int64 ProcessSequenceNumber; // r15
  int ProcessId; // r12d
  __int64 **v8; // rdx
  __int64 v9; // r13
  struct tagTHREADINFO *v10; // rcx
  void *v11; // rax
  int v12; // [rsp+60h] [rbp-88h]
  int v13; // [rsp+64h] [rbp-84h]
  __int64 v14[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v15; // [rsp+80h] [rbp-68h]
  __int128 v16; // [rsp+90h] [rbp-58h]
  __int64 v17; // [rsp+A0h] [rbp-48h]

  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  _GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v14);
  DwmUpdateCloseButton((struct tagWND *)a1, 0);
  v5 = *(struct _KPROCESS **)(*(_QWORD *)a1[2] + 544LL);
  ProcessSequenceNumber = PsGetProcessSequenceNumber(v5);
  ProcessId = (unsigned int)PsGetProcessId(v5);
  v8 = (__int64 **)*((_QWORD *)a1[3] + 1);
  v9 = **v8;
  v10 = a1[5];
  v12 = *((_DWORD *)v10 + 58);
  v13 = *((_DWORD *)v10 + 6);
  v11 = (void *)ReferenceDwmApiPort(v10, v8);
  DwmAsyncChildCreate(v11, v13, v12, (__int64)v14, v9, (__int64)a3, ProcessId, ProcessSequenceNumber);
}
