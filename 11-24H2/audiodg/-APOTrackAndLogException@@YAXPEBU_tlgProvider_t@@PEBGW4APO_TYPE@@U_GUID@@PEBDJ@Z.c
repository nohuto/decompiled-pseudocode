/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z @ 0x14007271C
 * Callers:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140072B6C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002304 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x1400077F4 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 */

void __fastcall APOTrackAndLogException(
        _DWORD *a1,
        void *a2,
        int a3,
        __int64 a4,
        const unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned __int64 v7; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // rcx
  unsigned int v12; // [rsp+50h] [rbp-58h] BYREF
  const unsigned __int16 *v13; // [rsp+58h] [rbp-50h] BYREF
  void *v14; // [rsp+60h] [rbp-48h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h] BYREF
  const char *v16; // [rsp+70h] [rbp-38h] BYREF

  v7 = a3;
  if ( *a1 > 2u && tlgKeywordOn((__int64)a1, 0x400000000100LL) )
  {
    v13 = a5;
    v12 = a6;
    v14 = a2;
    v15 = a4;
    if ( (v7 & 0x80000000) != 0LL || v7 >= 4 )
      v11 = "Unknown";
    else
      v11 = off_1400A2470[v7];
    v16 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v10,
      (int)&unk_1400B0AF0,
      v9,
      v10,
      (const unsigned __int16 **)&v16,
      &v15,
      &v14,
      &v13,
      (__int64)&v12);
  }
  if ( a2 )
    TrackSystemEffectBehavior((__int64)a2, v7, a6, 1, a4, SLODWORD(FLOAT_1_0));
}
