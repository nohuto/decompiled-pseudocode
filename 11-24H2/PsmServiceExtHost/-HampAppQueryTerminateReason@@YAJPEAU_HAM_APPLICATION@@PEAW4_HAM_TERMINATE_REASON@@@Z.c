/*
 * XREFs of ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800587F0
 * Callers:
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x180040FA4 (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800026F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800588E4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 */

__int64 __fastcall HampAppQueryTerminateReason(struct _HAM_APPLICATION *a1, enum _HAM_TERMINATE_REASON *a2)
{
  const wchar_t *v4; // rbp
  int RegistryTerminateReason; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  const wchar_t *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0;
  if ( (*((_DWORD *)a1 + 154) & 0x10000) != 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  v4 = (const wchar_t *)((char *)a1 + 96);
  RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                              (const unsigned __int16 *)a1 + 48,
                              (void *)(*((_QWORD *)a1 + 11) + 228LL),
                              (enum _HAM_TERMINATE_REASON *)&v12);
  if ( RegistryTerminateReason >= 0 )
  {
    *(_DWORD *)a2 = v12;
    return 0;
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 0x400000000008LL) )
  {
    v10 = *((_QWORD *)a1 + 11);
    v13 = 0x1000000LL;
    v14 = v10 + 228;
    v11 = v4;
    v12 = RegistryTerminateReason;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
      v7,
      (__int64)&unk_1800D6FEF,
      v8,
      v9,
      (__int64)&v12,
      &v11,
      &v14,
      (__int64)&v13);
  }
  return (unsigned int)RegistryTerminateReason;
}
