/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x180208BF8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800040D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  unsigned __int64 FrameTargetTime; // rax
  CComposition *v6; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  struct CResourceTable *v13; // [rsp+58h] [rbp+10h] BYREF
  CComposition **v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = a2;
  if ( this[44] )
  {
    if ( *((_BYTE *)a3 + 24) )
      FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
    else
      FrameTargetTime = *((_QWORD *)a3 + 1);
    this[58] = (CComposition *)FrameTargetTime;
    v6 = (CComposition *)*((_QWORD *)a3 + 2);
    *((_BYTE *)this + 536) |= 2u;
    this[59] = v6;
    *(_BYTE *)(*((_QWORD *)this[3] + 103) + 440LL) |= 2u;
  }
  else if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 4LL) )
  {
    v10 = (__int64)this[7];
    if ( v10 )
    {
      v11 = *(void **)(v10 + 72);
      v9 = *(unsigned int *)(v10 + 28);
    }
    else
    {
      v11 = &unk_18038C548;
    }
    v12 = v11;
    LODWORD(v13) = v9;
    v14 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v10,
      (__int64)&unk_1803D9425,
      v8,
      v9,
      (__int64)&v14,
      (__int64)&v13,
      &v12);
  }
  return 0LL;
}
