/*
 * XREFs of ?InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z @ 0x1801D02EC
 * Callers:
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801CFFBC (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1801D0394 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x1801D0430 (-GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ.c)
 */

void __fastcall CDataSourceReader::InvalidateAnimationSources(CDataSourceReader *this, unsigned int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  CGlobalComposition *CurrentFrameId; // [rsp+40h] [rbp-18h] BYREF
  CDataSourceReader *v9; // [rsp+48h] [rbp-10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 EffectiveCompositionFrameId; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_180404D18 > 5 && (byte_180404D28 & 4) != 0 && (qword_180404D30 & 4) == qword_180404D30 )
  {
    EffectiveCompositionFrameId = CComposition::GetEffectiveCompositionFrameId(g_pComposition);
    CurrentFrameId = GetCurrentFrameId();
    v10 = v4;
    v9 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v5,
      (unsigned int)&unk_1803D886C,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&v10,
      (__int64)&CurrentFrameId,
      (__int64)&EffectiveCompositionFrameId);
  }
  CResource::InvalidateAnimationSources(this, a2);
}
