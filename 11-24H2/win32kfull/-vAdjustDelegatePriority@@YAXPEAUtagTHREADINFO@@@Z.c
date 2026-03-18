/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x14012EBD0
 * Callers:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x14012E0AC (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14012E3D4 (AdjustPwndPtiPqForDelegation.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = *((_QWORD *)a1 + 170);
  if ( (v1 & 0x2000) != 0 && (v1 & 0x4000) == 0 )
  {
    v3 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
    if ( PsGetCurrentProcess(v4) == v3
      || (unsigned __int8)IsInputThread()
      || a1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v6, v5) + 18880) )
    {
      if ( (unsigned __int8)SetThreadBasePriority(*(_QWORD *)a1, 13LL) )
        *((_QWORD *)a1 + 170) |= 0x4000uLL;
    }
  }
}
