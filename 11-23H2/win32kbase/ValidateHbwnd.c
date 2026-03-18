/*
 * XREFs of ValidateHbwnd @ 0x1C012FD70
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C00B8B40 (NtUserConfigureActivationObject.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1C012FED0 (ValidateHbwndOwnedByCallingThread.c)
 *     NtUserGetInputContainerId @ 0x1C01447A0 (NtUserGetInputContainerId.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5004 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B5624 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B57E4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CB674 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF55C (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(int a1)
{
  __int16 v1; // r8d^2
  unsigned int v2; // ecx
  _QWORD *v3; // rbp
  char *v4; // rbx
  __int64 v5; // rsi
  __int16 v6; // r8
  __int64 v7; // rdi
  char v8; // al
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v10; // r8
  __int16 v11; // ax
  _QWORD *v12; // rax
  __int64 v13; // rax

  v1 = HIWORD(a1);
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v2 = dword_1C028FE70 * (unsigned __int16)a1;
    v3 = gpKernelHandleTable;
    v4 = (char *)qword_1C028FE68 + v2;
    v5 = 3 * ((__int64)v2 >> 5);
    v6 = v1 & 0x7FFF;
    if ( ((v1 & 0x7FFF) == *((_WORD *)v4 + 13) || v6 == 0x7FFF || !v6 && PsGetCurrentProcessWow64Process())
      && v4[24] == 23 )
    {
      v7 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v4 - (char *)qword_1C028FE68) >> 5));
      if ( v7 )
      {
        v8 = v4[25];
        if ( (v8 & 1) == 0 )
        {
          if ( v8 >= 0 )
            return v7;
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(3LL * (unsigned int)((v4 - (char *)qword_1C028FE68) >> 5));
          v10 = CurrentProcessWin32Process;
          if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
            return v7;
          v11 = *((_WORD *)&unk_1C024292C + 12 * (unsigned __int8)v4[24]);
          if ( (v11 & 2) != 0 )
          {
            v12 = (_QWORD *)v3[v5 + 1];
          }
          else
          {
            if ( (v11 & 1) == 0 )
              return v7;
            v13 = v3[v5 + 1];
            if ( !v13 )
              return v7;
            v12 = *(_QWORD **)(v13 + 424);
          }
          if ( !v12 || v12 == v10 )
            return v7;
        }
      }
    }
  }
  UserSetLastError(1400);
  return 0LL;
}
