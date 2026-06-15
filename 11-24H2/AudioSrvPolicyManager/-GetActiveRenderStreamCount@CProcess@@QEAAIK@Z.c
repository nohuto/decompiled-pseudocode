/*
 * XREFs of ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180013EE0
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180031324 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180032B54 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180034E38 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CProcess::GetActiveRenderStreamCount(CProcess *this, unsigned int a2)
{
  int v2; // r10d
  unsigned int v3; // r9d
  CProcess *v4; // r11
  int v5; // r8d
  __int64 v6; // rax

  v2 = *((_DWORD *)this + 68);
  v3 = 0;
  v4 = this;
  v5 = 0;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 < 0 || v5 >= v2 )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x180013F34LL);
      }
      ++v5;
      this = *(CProcess **)(*((_QWORD *)v4 + 33) + v6);
      v6 += 8LL;
      v3 += *((_DWORD *)this + a2);
    }
    while ( v5 < v2 );
  }
  return v3;
}
