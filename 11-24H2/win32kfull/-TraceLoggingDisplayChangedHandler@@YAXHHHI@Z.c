/*
 * XREFs of ?TraceLoggingDisplayChangedHandler@@YAXHHHI@Z @ 0x14020B7E0
 * Callers:
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x14020B418 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140213174 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall TraceLoggingDisplayChangedHandler(int a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  int v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+54h] [rbp-24h] BYREF
  int v9; // [rsp+58h] [rbp-20h] BYREF
  int v10; // [rsp+5Ch] [rbp-1Ch] BYREF
  __int64 v11[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( (unsigned int)dword_140398BB8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
    {
      v11[0] = 0x1000000LL;
      v7 = v4;
      v8 = v5;
      v9 = v6;
      v10 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v2,
        (unsigned int)&unk_14036751B,
        v3,
        v4,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)v11);
    }
  }
}
