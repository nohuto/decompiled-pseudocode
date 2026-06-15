/*
 * XREFs of _lambda_383ae521043a10c2e2d9282b6295b11b_::operator() @ 0x18014FEC4
 * Callers:
 *     wistd::__function::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_::operator() @ 0x1801505F0 (wistd--__function--__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800517D0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006ADFC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_18006ADFC.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015EB20 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall lambda_383ae521043a10c2e2d9282b6295b11b_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  _BYTE *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v4 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v4) >= 0 && v4 )
    {
      if ( (unsigned int)CallbackContext > 5 )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v2,
          byte_1801B2AF2);
      v3 = (_BYTE *)a1[1];
      v3[265] = 1;
      AtmosCheck::ScheduleGracePeriodTimer(v3);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v4);
  }
}
