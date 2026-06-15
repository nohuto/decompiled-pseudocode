/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180029964
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180029340 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180028670 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180029E14 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180029E50 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CAudioSessionInstanceId::Copy(CAudioSessionInstanceId *this, char **a2)
{
  int v4; // ebx

  v4 = CAudioEndpointId::Copy(this, (const struct CAudioEndpointId *)a2);
  if ( v4 < 0
    || (*((_DWORD *)this + 14) = *((_DWORD *)a2 + 14),
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15),
        *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16),
        v4 = CAppAudioSessionId::Copy(
               (CAudioSessionInstanceId *)((char *)this + 8),
               (const struct CAppAudioSessionId *)(a2 + 1)),
        v4 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Copy", 930, v4);
  }
  else
  {
    v4 = 0;
    ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)this + 9, a2 + 9);
  }
  return (unsigned int)v4;
}
