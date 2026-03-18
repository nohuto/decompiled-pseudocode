/*
 * XREFs of ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017ACF8
 * Callers:
 *     EditionHandleRawInputThrottlingTimer @ 0x14017AC70 (EditionHandleRawInputThrottlingTimer.c)
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14022FB54 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 *     EditionPostRawMouseInputMessage @ 0x140230980 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14012EC70 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_KK@Z @ 0x1401BE8D0 (-FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_KK@Z.c)
 */

void __fastcall FlushThrottledRawMouseInput(struct tagPROCESS_HID_TABLE *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  HWND v8; // rcx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]

  v2 = a2;
  if ( (*((_DWORD *)a1 + 25) & 1) != 0 && *((_DWORD *)a1 + 28) == 2 )
  {
    v4 = *((_QWORD *)a1 + 8);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( *(char *)(v5 + 20) >= 0 && *(char *)(v5 + 19) >= 0 )
      {
        v6 = *((_QWORD *)a1 + 17);
        if ( !v6 || (LOBYTE(a2) = 19, HMValidateHandleNoRip(v6, a2)) )
        {
          v7 = *((_DWORD *)a1 + 36);
          v11 = 0LL;
          v12 = 0;
          v8 = (HWND)*((_QWORD *)a1 + 8);
          v9 = *((_DWORD *)a1 + 42);
          v10 = *((_QWORD *)a1 + 20);
          v13 = v7;
          v14 = *((_DWORD *)a1 + 37);
          v15 = *((_DWORD *)a1 + 38);
          if ( v8 )
            v8 = *(HWND *)v8;
          InputTraceLogging::Mouse::FlushThrottledRawInput(v8, v10, v9);
          PostRawMouseInputToBackgroundListener(
            a1,
            *((void **)a1 + 17),
            (const struct tagRAWMOUSE *)&v11,
            *((_QWORD *)a1 + 20),
            v2);
        }
      }
    }
  }
  *((_DWORD *)a1 + 28) = 0;
}
