/*
 * XREFs of ?StartInContact@CMotion@@IEAAX_N@Z @ 0x1801EB908
 * Callers:
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801EB550 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180226340 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1800E19D8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1801EBFB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall CMotion::StartInContact(CMotion *this, char a2)
{
  char v2; // al
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const wchar_t *v7; // [rsp+40h] [rbp+8h] BYREF
  CMotion *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 100) & 0xFD;
  *((_DWORD *)this + 10) = 1;
  *((_BYTE *)this + 100) = (2 * a2) | v2;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 3);
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v7 = ScrollAxisToString(*((_DWORD *)this + 9));
    v8 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v4,
      (unsigned int)&unk_1803CF519,
      v5,
      v6,
      (__int64)&v8,
      (__int64)&v7);
  }
}
