/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C00B4BD0
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0066298 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00DF728 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceFocusedProcessChange(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char v5; // di
  _DWORD *v6; // rax
  int v7; // ecx
  int v8; // r8d

  v5 = a1;
  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_1C0283068 - 1) > 2u
    && (qword_1C0283050 & 0x8000000000020000uLL) != 0
    && (qword_1C0283058 & 0x8000000000020000uLL) == qword_1C0283058
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    v6 = (_DWORD *)SGDGetUserSessionState(a1, 0x8000000000020000uLL, a3, a4);
    McTemplateK0qqq_EtwWriteTransfer(v7, (unsigned int)&FocusedProcessChangeEvent, v8, *v6, v5, a2);
  }
}
