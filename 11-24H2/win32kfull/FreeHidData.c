/*
 * XREFs of FreeHidData @ 0x140082EF0
 * Callers:
 *     ?FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140084894 (-FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14012EC70 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401721A8 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1401724D4 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x14018D704 (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x140230980 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140271E98 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401807D8 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

void __fastcall FreeHidData(__int64 a1)
{
  __int64 v2; // rsi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  bool v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = 0;
  v2 = _HMPheFromObjectWorker(a1);
  v3 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19816) && IS_USERCRIT_OWNED_EXCLUSIVE(v7, v6, v8) )
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19824);
    v3 = v12 == 0;
    v18 = v12 == 0;
    if ( v12 )
    {
      if ( v2 != *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19824) )
      {
        UserSessionState = W32GetUserSessionState(v16, v15);
        ++*(_DWORD *)(UserSessionState + 19832);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0LL, v11) + 19824) = v2;
    }
  }
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    HMAssignmentUnlock(a1 + 24);
    HMFreeObject(a1);
    if ( v3 )
      *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19824) = 0LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v18);
  }
}
