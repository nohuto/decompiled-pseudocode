/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180014D64
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x180014D10 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x1800143D4 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     ?ReceiveKernelMessage@Cursor@InputTraceLogging@@SAXAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180014E74 (-ReceiveKernelMessage@Cursor@InputTraceLogging@@SAXAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800152F8 (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x180081EB4 (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x180085AD4 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x1800F1C94 (-IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z.c)
 *     ?ProcessCrosshairEnabledStatusChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x1800F1CD4 (-ProcessCrosshairEnabledStatusChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     ?ProcessCrosshairPropertiesChangedNotification@CursorNotificationProcessor@@AEAAJK@Z @ 0x1800F1D4C (-ProcessCrosshairPropertiesChangedNotification@CursorNotificationProcessor@@AEAAJK@Z.c)
 *     ?ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x1800F1DC4 (-ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@.c)
 *     ?ReceiveCursorPosCoreMessage@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x1800F1E3C (-ReceiveCursorPosCoreMessage@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *this,
        const struct _MIT_CURSOR_MANAGEMENT_MESSAGE *a2)
{
  CursorNotificationProcessor *v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::Cursor::ReceiveKernelMessage(a2);
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( CursorNotificationProcessor::IsTimestampNewest(this, *((_QWORD *)a2 + 2)) )
      {
        InputTraceLogging::ISM::ReceiveCursorPosCoreMessage(*((_QWORD *)a2 + 2), (const struct tagPOINT *)a2 + 1);
        CursorNotificationProcessor::ProcessPositionChangedNotification(this, (const struct tagPOINT *)a2 + 1);
      }
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      CursorNotificationProcessor::ProcessAppClipChangedNotification(this, (const struct tagRECT *)((char *)a2 + 8));
    }
    else if ( *(_DWORD *)a2 != 3 && *(_DWORD *)a2 != 4 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 5:
          CursorNotificationProcessor::ProcessOrientationChangeNotification(v4, *((double *)a2 + 1));
          break;
        case 6:
          CursorNotificationProcessor::ProcessShapeNotification(v4, a2);
          break;
        case 7:
          CursorNotificationProcessor::ProcessCrosshairEnabledStatusChangedNotification(v4, *((_DWORD *)a2 + 2) != 0);
          break;
        case 8:
          CursorNotificationProcessor::ProcessCrosshairPropertiesChangedNotification(v4, *((_DWORD *)a2 + 2));
          break;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x9F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            v5);
      }
    }
  }
  else
  {
    CursorNotificationProcessor::ProcessVisibilityChangedNotification(this, *((_DWORD *)a2 + 2) != 0);
  }
  return 0LL;
}
