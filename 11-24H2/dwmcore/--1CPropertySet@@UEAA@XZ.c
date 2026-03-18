/*
 * XREFs of ??1CPropertySet@@UEAA@XZ @ 0x1801E687C
 * Callers:
 *     ??_GCPropertySet@@UEAAPEAXI@Z @ 0x1801E6830 (--_GCPropertySet@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18021DE3C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall CPropertySet::~CPropertySet(CPropertySet *this)
{
  int v1; // r8d
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 38);
  *(_QWORD *)this = &CPropertySet::`vftable';
  if ( v1 && (unsigned int)dword_1803F8D18 > 5 && tlgKeywordOn((__int64)&dword_1803F8D18, 1LL) )
  {
    v6 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v3,
      (unsigned int)&unk_1803CF0CA,
      v4,
      v5,
      (__int64)&v6);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  CResource::~CResource(this);
}
