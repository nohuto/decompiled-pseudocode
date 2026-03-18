/*
 * XREFs of ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1401724D4
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x140171ED8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     AllocateHidData @ 0x14012F38C (AllocateHidData.c)
 */

__int64 __fastcall PostRawKeyboardInputToForeground(
        __int64 **a1,
        unsigned int a2,
        void *a3,
        struct _KEYBOARD_INPUT_DATA *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  LARGE_INTEGER *v12; // rdx
  unsigned int v13; // edi

  result = AllocateHidData(a3, 1LL, 16LL, 0LL, a1[2]);
  v10 = result;
  if ( result )
  {
    v11 = *(_QWORD *)result;
    v12 = *(LARGE_INTEGER **)(result + 24);
    *(_WORD *)(result + 80) = a4->MakeCode;
    *(_WORD *)(result + 82) = a4->Flags;
    *(_WORD *)(result + 84) = a4->Reserved;
    *(_DWORD *)(result + 88) = a5;
    *(_WORD *)(result + 86) = a6;
    *(_DWORD *)(result + 92) = a4->ExtraInformation;
    v13 = PostInputMessage(
            *(struct tagQ **)(v12[2].QuadPart + 472),
            v12,
            0xFFu,
            0LL,
            v11,
            a2,
            0LL,
            a4->ExtraInformation,
            0,
            0LL,
            a3,
            0LL,
            0,
            0,
            0LL);
    if ( !v13 )
      FreeHidData(v10);
    return v13;
  }
  return result;
}
