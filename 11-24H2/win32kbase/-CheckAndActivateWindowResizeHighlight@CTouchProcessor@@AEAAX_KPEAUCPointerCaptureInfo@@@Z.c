/*
 * XREFs of ?CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z @ 0x1401F74B0
 * Callers:
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1401868B8 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     EditionTouchResizeAction @ 0x14023B1E4 (EditionTouchResizeAction.c)
 *     IsTouchResizeActionSupported @ 0x14023B4E0 (IsTouchResizeActionSupported.c)
 */

void __fastcall CTouchProcessor::CheckAndActivateWindowResizeHighlight(
        PERESOURCE *this,
        unsigned __int64 a2,
        struct CPointerCaptureInfo *a3)
{
  int v6; // ebx
  CTouchProcessor *v7; // rcx
  unsigned int v8; // ebp
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v10; // rbx
  __int64 v11; // rax
  int v12; // ebx
  HWND WindowHandle; // rax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3801);
  v6 = *((_DWORD *)a3 + 32);
  if ( (unsigned int)(v6 - 10) <= 7 && *(_DWORD *)a3 == 1 )
  {
    if ( *((_DWORD *)a3 + 25) )
    {
      if ( (int)IsTouchResizeActionSupported() >= 0 )
      {
        v8 = v6 - 9;
        NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, a2);
        v10 = NonConstMsgData;
        if ( NonConstMsgData )
        {
          if ( (*((_DWORD *)NonConstMsgData + 9) & 0x10) != 0 )
          {
            v11 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
            if ( v11 )
            {
              v12 = *(_DWORD *)(480LL * *((unsigned int *)v10 + 8) + *(_QWORD *)(v11 + 240) + 168);
              CTouchProcessor::UnreferenceFrame(this, v11);
              if ( v12 == 2 )
              {
                WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a3 + 8));
                EditionTouchResizeAction(WindowHandle, v8, 0LL);
                *((_DWORD *)a3 + 33) |= 1u;
              }
            }
          }
        }
      }
    }
  }
}
