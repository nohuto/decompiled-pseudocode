/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x1C003703C
 * Callers:
 *     EditionPostInputMessage @ 0x1C0009DF0 (EditionPostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0036950 (EditionHandleAndPostKeyEvent.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00373B8 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionHandleAltTab @ 0x1C009F640 (EditionHandleAltTab.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01B5F50 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01C2A30 (PostPointerEventMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01FFCC4 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C0116150 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C011DAE8 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CalcWakeMask @ 0x1C012AB70 (CalcWakeMask.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        struct tagTHREADINFO **a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // r11d
  unsigned int v13; // r12d
  struct tagTHREADINFO *InputDelegate; // rax
  struct tagTHREADINFO *v15; // rbx
  __int64 result; // rax
  char v17; // si
  unsigned __int8 v18; // al
  bool v19; // zf
  int v20; // edx
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v10 = *a2;
  v11 = *a1;
  v13 = CalcWakeMask(a4, a4, 0LL);
  if ( (v12 == 513 || v12 == 516)
    && v10
    && (*(_DWORD *)(v10 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 1312LL)
    && a5
    && ((*a5 - 2) & 0xFFFFFFEF) == 0 )
  {
    v17 = (v12 != 513) + 1;
    if ( !*(_QWORD *)(v11 + 144) )
    {
      v21[0] = v11 + 144;
      v21[1] = v10;
      HMAssignmentLock(v21, 0LL);
    }
    *(_BYTE *)(v11 + 152) |= v17;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v11 + 144) )
    goto LABEL_5;
  if ( v12 != 514 && v12 != 517 )
  {
    if ( v12 == 512 )
      v10 = *(_QWORD *)(v11 + 144);
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v11 + 144);
  v18 = (v12 == 514) - 3;
  v19 = (v18 & *(_BYTE *)(v11 + 152)) == 0;
  *(_BYTE *)(v11 + 152) &= v18;
  if ( !v19 || (result = HMAssignmentUnlock(v11 + 144), (v10 = result) != 0) )
  {
LABEL_5:
    *a2 = v10;
    InputDelegate = GetInputDelegate((struct tagWND *)v10, v13);
    v15 = InputDelegate;
    if ( InputDelegate )
    {
      vAdjustDelegatePriority(InputDelegate);
      *a1 = *((_QWORD *)v15 + 54);
      v20 = (*((_DWORD *)v15 + 319) >> 6) & 1;
      *a3 = v15;
      *a6 = 1;
      *a7 = v20;
    }
    return 1LL;
  }
  return result;
}
