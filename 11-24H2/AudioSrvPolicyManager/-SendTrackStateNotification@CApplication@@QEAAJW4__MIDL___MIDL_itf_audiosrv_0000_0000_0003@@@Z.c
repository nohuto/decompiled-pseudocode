/*
 * XREFs of ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A26C
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000D680 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180034334 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

__int64 __fastcall CApplication::SendTrackStateNotification(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 *Next; // rax
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v3 = -2147023728;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *(_QWORD **)(a1 + 72);
  v8 = v5;
  while ( v5 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v8);
    v4 = *Next;
    if ( !*(_DWORD *)(*Next + 416) && (*(_DWORD *)(v4 + 448) & 0x1000) != 0 )
    {
      v3 = CProcess::SendPBMNotification(v4, 12LL);
      break;
    }
    v5 = v8;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
