/*
 * XREFs of ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x1800BAA10
 * Callers:
 *     ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z @ 0x1800BAAF8 (-PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z.c)
 *     ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z @ 0x1800BABA8 (-PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::PostEventMessage(HANDLE *this, UINT a2, WPARAM a3, LPARAM a4)
{
  signed int v8; // ebx
  DWORD ThreadId; // eax
  signed int LastError; // eax

  if ( this[142] )
  {
    SetLastError(0);
    ThreadId = GetThreadId(this[142]);
    if ( PostThreadMessageW(ThreadId, a2, a3, a4) )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 >= 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180109BB8, 1LL, v8, 0xA8Cu, 0LL);
    }
  }
  else
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180109BB8, 1LL, -2147467259, 0xA89u, 0LL);
  }
  return (unsigned int)v8;
}
