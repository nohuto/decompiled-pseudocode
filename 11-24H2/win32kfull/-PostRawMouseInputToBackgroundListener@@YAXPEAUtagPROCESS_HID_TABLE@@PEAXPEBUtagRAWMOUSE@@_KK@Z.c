/*
 * XREFs of ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14012EC70
 * Callers:
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017ACF8 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x140230980 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@QEAUtagHIDDATA@@PEBUtagRAWMOUSE@@_N@Z @ 0x14012F288 (-DeliverRawInput@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@QEAUtagHIDDATA@@PEBUtagRAWMOUSE@@_N@Z.c)
 *     AllocateHidData @ 0x14012F38C (AllocateHidData.c)
 */

void __fastcall PostRawMouseInputToBackgroundListener(
        struct tagPROCESS_HID_TABLE *a1,
        void *a2,
        const struct tagRAWMOUSE *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  HWND *v5; // rdi
  __int64 HidData; // rax
  __int64 *v9; // rbx
  HWND v10; // rdx

  v5 = (HWND *)*((_QWORD *)a1 + 8);
  HidData = AllocateHidData(a2, (__int64)v5);
  v9 = (__int64 *)HidData;
  if ( HidData )
  {
    *(_OWORD *)(HidData + 80) = *(_OWORD *)a3;
    *(_QWORD *)(HidData + 96) = *((_QWORD *)a3 + 2);
    if ( v5 )
      v10 = *v5;
    else
      v10 = 0LL;
    InputTraceLogging::Mouse::DeliverRawInput(a4, v10, (struct tagHIDDATA *const)HidData, a3, 1);
    if ( !(unsigned int)PostInputMessage(
                          *((struct tagQ **)v5[2] + 59),
                          (struct tagWND *)v5,
                          0xFFu,
                          *v9,
                          a5,
                          0LL,
                          *((unsigned int *)a3 + 5),
                          0,
                          0LL,
                          0LL,
                          0LL,
                          0,
                          0,
                          0LL) )
      FreeHidData((__int64)v9);
  }
}
