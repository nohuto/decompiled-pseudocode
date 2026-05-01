/*
 * XREFs of GamingOverlayExperienceManager::SendGamepadCommand$_InitCoro$2 @ 0x180359C98
 * Callers:
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x18035A2C0 (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@AEBUAPP_LOCAL_.c)
 * Callees:
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180359D10 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::SendGamepadCommand__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        int *a5,
        int *a6,
        __int64 a7)
{
  int v7; // r11d
  int v8; // r10d

  v7 = *a6;
  v8 = *a5;
  *(_QWORD *)(a2 + 241) = a7;
  *(_QWORD *)(a2 + 249) = a4;
  *(_DWORD *)(a2 + 257) = v8;
  *(_DWORD *)(a2 + 261) = v7;
  *(_QWORD *)a2 = GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[240] = 0;
  return GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1(a2);
}
