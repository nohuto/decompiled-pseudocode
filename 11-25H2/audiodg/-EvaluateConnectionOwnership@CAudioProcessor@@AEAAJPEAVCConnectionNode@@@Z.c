/*
 * XREFs of ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000B140
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400094A0 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009800 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009FF0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A7A0 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC20 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400810F0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x14000C56C (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?Remove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@@Z @ 0x14000CA4C (-Remove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeT.c)
 */

__int64 __fastcall CAudioProcessor::EvaluateConnectionOwnership(CAudioProcessor *this, struct CConnectionNode *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rdx
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // [rsp+20h] [rbp-28h] BYREF

  if ( *((CAudioProcessor **)a2 + 19) == this )
  {
    v4 = *((_QWORD *)a2 + 2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    v5 = 0LL;
    v6 = (_QWORD *)*((_QWORD *)this + 6 * (*((unsigned __int16 *)this + 168) ^ 1LL) + 28);
    while ( v6 )
    {
      v7 = v6[2];
      v6 = (_QWORD *)*v6;
      if ( *(_QWORD *)(v7 + 16) == v4 )
      {
        v5 = v7;
        break;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    if ( !v5 )
    {
      try
      {
        CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InsertAfter(
          (char *)this + 224,
          a2);
      }
      catch ( ATL::CAtlException *v10 )
      {
        v9 = v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _o__resetstkoflw();
        return *(unsigned int *)v9;
      }
    }
  }
  else
  {
    CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::Remove((char *)this + 224);
  }
  return 0LL;
}
