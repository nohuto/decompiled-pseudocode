/*
 * XREFs of ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18000AAA0
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009514 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800026F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x1800586D8 (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18006286C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID.c)
 */

void __fastcall HampAppSaveTerminateReason(__int64 a1, unsigned int a2)
{
  const wchar_t *v3; // rdi
  int v4; // eax
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  const wchar_t *v11[2]; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  if ( (*(_DWORD *)(a1 + 616) & 0x10000) == 0 )
  {
    v3 = (const wchar_t *)(a1 + 96);
    v4 = HampUtilSaveRegistryTerminateReason(a1 + 96, *(_QWORD *)(a1 + 88) + 228LL, a2);
    if ( v4 < 0 )
    {
      if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 0x400000000008LL) )
      {
        v10 = *(_QWORD *)(a1 + 88);
        v13 = 0x1000000LL;
        v14 = v10 + 228;
        v11[0] = v3;
        v12 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
          v7,
          (__int64)&unk_1800D6E70,
          v8,
          v9,
          (__int64)&v12,
          v11,
          &v14,
          (__int64)&v13);
      }
    }
    else if ( (unsigned int)dword_1800E82B0 > 5 )
    {
      v6 = *(_QWORD *)(a1 + 88);
      LODWORD(v13) = v4;
      v14 = v6 + 228;
      LODWORD(v6) = *(unsigned __int16 *)(a1 + 616);
      v11[0] = v3;
      LOWORD(v12) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>>(
        v6,
        (unsigned int)&unk_1800D6D32,
        v4,
        v5,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)v11,
        (__int64)&v14);
    }
  }
}
