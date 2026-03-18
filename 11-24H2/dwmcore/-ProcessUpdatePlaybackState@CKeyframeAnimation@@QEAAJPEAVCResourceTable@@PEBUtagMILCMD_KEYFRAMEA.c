/*
 * XREFs of ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x1801DACFC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800040D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessUpdatePlaybackState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *a3)
{
  unsigned int v4; // eax
  char v5; // dl
  __int64 v6; // rcx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  struct CResourceTable *v15; // [rsp+58h] [rbp+10h] BYREF
  CKeyframeAnimation *v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = a2;
  if ( *((_QWORD *)this + 44) )
  {
    v4 = *((_DWORD *)a3 + 2);
    if ( v4 > 2 )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x18Eu, 0LL);
      return v8;
    }
    v5 = *((_BYTE *)a3 + 24);
    v6 = *((_QWORD *)a3 + 2);
    v7 = *((_DWORD *)this + 129) == 0;
    *((_DWORD *)this + 130) = v4;
    if ( v7 && v4 )
    {
      if ( v5 )
        v6 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 312LL));
      *((_QWORD *)this + 56) = v6;
      *((_QWORD *)this + 57) = v6;
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
  }
  else if ( (unsigned int)dword_1803F8D18 > 4 && tlgKeywordOn((__int64)&dword_1803F8D18, 4LL) )
  {
    v12 = *((_QWORD *)this + 7);
    if ( v12 )
    {
      v14 = *(void **)(v12 + 72);
      v13 = *(_DWORD *)(v12 + 28);
    }
    else
    {
      v14 = &unk_180381440;
      v13 = 0;
    }
    LODWORD(v15) = v13;
    v16 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v12,
      (__int64)&unk_1803CE4A6,
      v10,
      v11,
      (__int64)&v16,
      (__int64)&v15,
      &v14);
  }
  return 0;
}
