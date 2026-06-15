/*
 * XREFs of ?GetCommandValueLength@SpatialAudioMetadataDictionary@@UEAAJEPEAI@Z @ 0x180124B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::GetCommandValueLength(
        SpatialAudioMetadataDictionary *this,
        char a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 i; // rax
  __int64 v12; // rdx
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  const CHAR *v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v7 = -2004286976;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      v12 = *((_QWORD *)this + 15);
      if ( *(_BYTE *)(v12 + 2 * i) == a2 )
      {
        v7 = 0;
        *a3 = *(unsigned __int8 *)(v12 + 2 * i + 1);
        return v7;
      }
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v14 = -2147024809;
      v16 = "SpatialAudioMetadataDictionary::GetCommandValueLength";
      v15 = 276;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_1801A3DAF,
        v9,
        v10,
        &v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  return v7;
}
