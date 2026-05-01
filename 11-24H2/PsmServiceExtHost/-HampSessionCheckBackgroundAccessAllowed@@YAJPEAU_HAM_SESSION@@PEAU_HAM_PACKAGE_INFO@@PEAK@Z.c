/*
 * XREFs of ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z @ 0x1800460FC
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B258 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180002930 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTempla.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampSessionCheckBackgroundAccessAllowed(
        struct _HAM_SESSION *a1,
        struct _HAM_PACKAGE_INFO *a2,
        BOOL *a3)
{
  BOOL v6; // edi
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+98h] [rbp+38h] BYREF
  NTSTATUS v17; // [rsp+A8h] [rbp+48h] BYREF

  DestinationString = 0LL;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = RtlConvertSidToUnicodeString(&DestinationString, (char *)a2 + 132, 1u);
  if ( v7 >= 0 )
  {
    v16 = 0;
    v8 = *((_QWORD *)a1 + 14);
    if ( v8 )
    {
      LODWORD(v8) = (*(__int64 (__fastcall **)(__int64, PWSTR, struct _HAM_PACKAGE_INFO *, int *))(*(_QWORD *)v8 + 224LL))(
                      v8,
                      DestinationString.Buffer,
                      a2,
                      &v16);
      if ( (int)v8 >= 0 )
      {
        LODWORD(v8) = 0;
        v6 = (v16 & 1) == 0;
      }
    }
    else
    {
      v6 = 1;
    }
    v7 = 0;
    if ( (int)v8 < 0 )
      v7 = v8 | 0xC0000000;
    if ( v7 >= 0 )
    {
      *a3 = v6;
      v7 = 0;
    }
    else if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
    {
      v16 = *((_DWORD *)a2 + 50);
      v13 = (__int64)a2 + 132;
      v14 = (const wchar_t *)a2;
      v17 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
        v9,
        (__int64)&unk_1800D70F1,
        v10,
        v11,
        (__int64)&v17,
        &v14,
        (__int64)&v16,
        &v13);
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v7;
}
