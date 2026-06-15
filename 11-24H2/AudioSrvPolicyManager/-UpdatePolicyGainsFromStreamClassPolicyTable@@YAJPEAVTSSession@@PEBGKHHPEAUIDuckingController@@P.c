/*
 * XREFs of ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180008900
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x180008B70 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x1800098F0 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 */

__int64 __fastcall UpdatePolicyGainsFromStreamClassPolicyTable(
        struct TSSession *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct IDuckingController *a6,
        int *a7)
{
  struct IDuckingController *v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // r14
  unsigned int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // r10d
  _QWORD *i; // rbx
  __int64 v15; // rax
  int v16; // edx
  int updated; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  BOOL v20; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a6;
  v8 = a3;
  v9 = &unk_18004D0E0;
  if ( !a4 )
    v9 = &unk_18004E2E0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( v12 < 0x18 )
  {
    LODWORD(v25) = 0;
    if ( v9[24 * v8 + v13] )
    {
      for ( i = (_QWORD *)*((_QWORD *)a1 + 133); ; i = (_QWORD *)*i )
      {
        if ( !i )
          goto LABEL_23;
        v15 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(i[1]);
        if ( !(unsigned int)_o__wcsicmp(v15, v9[24 * v8 + v11]) )
          break;
      }
      v16 = *(_DWORD *)(*(_QWORD *)(i[1] + 32LL) + 24LL);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                      (LPCRITICAL_SECTION)((char *)a1 + 136),
                      a5,
                      (__int64)v7,
                      (__int64)&v25);
          v18 = updated;
          if ( updated < 0 )
          {
            v19 = 147LL;
            goto LABEL_25;
          }
        }
        else if ( v16 == 2 )
        {
          updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                      (LPCRITICAL_SECTION)a1 + 14,
                      a5,
                      (__int64)v7,
                      (__int64)&v25);
          v18 = updated;
          if ( updated < 0 )
          {
            v19 = 157LL;
            goto LABEL_25;
          }
        }
      }
      else
      {
        lpCriticalSection = 0LL;
        CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
          (struct TSSession *)((char *)a1 + 72),
          a2,
          (struct CStreamClassPolicyGains **)&lpCriticalSection);
        updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(lpCriticalSection, a5, (__int64)v7, (__int64)&v25);
        v18 = updated;
        if ( updated < 0 )
        {
          v19 = 137LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
            (const char *)(unsigned int)updated);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68F,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)v18);
          return v18;
        }
      }
      v20 = *a7 || (_DWORD)v25;
      *a7 = v20;
    }
LABEL_23:
    v12 = ++v11;
    v13 = v11;
  }
  return 0LL;
}
