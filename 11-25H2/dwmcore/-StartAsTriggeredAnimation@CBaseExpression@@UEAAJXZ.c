/*
 * XREFs of ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x1802AAE50
 * Callers:
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x1802A8C20 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 *     ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x1802AACC0 (-StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180004DD0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800331B0 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18003B000 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 */

__int64 __fastcall CBaseExpression::StartAsTriggeredAnimation(CBaseExpression *this)
{
  char v1; // al
  __int64 v3; // rax
  int TracingCookie; // eax
  __int64 v5; // rcx
  void *v6; // rdx
  CBaseExpression *v8; // [rsp+40h] [rbp+8h] BYREF
  CBaseExpression *v9; // [rsp+48h] [rbp+10h]

  v1 = *((_BYTE *)this + 224);
  if ( (v1 & 4) != 0 )
  {
    if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 4LL) )
    {
      v9 = this;
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v6 = &unk_1803D9C11;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (v1 & 0x10) != 0 )
    {
      *((_DWORD *)this + 57) = 0;
      *((_QWORD *)this + 21) = -1LL;
      *((_BYTE *)this + 224) = v1 & 0xF6 | 1;
      *((_QWORD *)this + 22) = -1LL;
    }
    else
    {
      v3 = *((_QWORD *)this + 3);
      v8 = this;
      DynArray<CBaseExpression *,1>::AddMultipleAndSet(*(_QWORD *)(v3 + 824) + 408LL, &v8);
    }
    if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 4LL) )
    {
      v9 = this;
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v6 = &unk_1803D9BDA;
LABEL_11:
      LODWORD(v8) = TracingCookie;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v5,
        (__int64)v6);
    }
  }
  return 0LL;
}
