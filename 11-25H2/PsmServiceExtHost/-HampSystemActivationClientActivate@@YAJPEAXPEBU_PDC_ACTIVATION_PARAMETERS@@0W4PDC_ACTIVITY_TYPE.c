/*
 * XREFs of ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180062B64
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A900 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180062C64 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByV.c)
 */

__int64 __fastcall HampSystemActivationClientActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 *a7,
        __int64 a8)
{
  int v8; // esi
  char v9; // di
  __int64 *v10; // r14
  unsigned int v11; // ebx
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-24h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h] BYREF

  v8 = a8;
  v9 = a4;
  v10 = a7;
  v11 = Pdcv2ActivationClientActivate(a1, a2, a3, a4);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 )
  {
    v15 = qword_1800E72C8 & 8;
    if ( v15 == qword_1800E72C8 )
    {
      v18 = *v10;
      v16 = v8;
      a6 = v9;
      v19 = a5;
      v17 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v15,
        (unsigned int)&unk_1800DA146,
        v12,
        v13,
        (__int64)&v17,
        (__int64)&v19,
        (__int64)&a6,
        (__int64)&v16,
        (__int64)&v18);
    }
  }
  return v11;
}
