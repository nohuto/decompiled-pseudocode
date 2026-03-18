/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x14012E0AC
 * Callers:
 *     PostDeviceNotification @ 0x14012F608 (PostDeviceNotification.c)
 * Callees:
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14012E1F4 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     CalcWakeMask @ 0x14012E6A0 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x14012EBD0 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 */

__int64 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2)
{
  struct tagWND *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // r15d
  struct tagQ *v7; // r14
  unsigned int v8; // eax
  struct tagTHREADINFO *InputDelegate; // rax
  __int64 v10; // r11
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax

  v2 = (struct tagWND *)*((_QWORD *)a1 + 4);
  if ( !v2 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 1LL;
  v4 = *((_QWORD *)v2 + 5);
  if ( *(char *)(v4 + 20) < 0 || *(char *)(v4 + 19) < 0 )
    return 1LL;
  v5 = *((_QWORD *)v2 + 2);
  v6 = 0;
  v7 = *(struct tagQ **)(v5 + 472);
  v8 = CalcWakeMask(254LL, 254LL, 0LL);
  InputDelegate = GetInputDelegate(v2, v8);
  v11 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    v6 = 1;
    v7 = (struct tagQ *)*((_QWORD *)v11 + 59);
    v5 = (__int64)v11;
    v10 = (*((_QWORD *)v11 + 170) >> 37) & 1LL;
  }
  v12 = a2 ? *(_QWORD *)a2 : 0LL;
  result = PostInputMessage(v7, v2, 0xFEu, v12, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v6, v10, v5);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
