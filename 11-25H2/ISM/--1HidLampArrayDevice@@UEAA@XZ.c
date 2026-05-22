/*
 * XREFs of ??1HidLampArrayDevice@@UEAA@XZ @ 0x180096294
 * Callers:
 *     ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800E8540 (--_EHidLampArrayDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800648FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800EA2F8 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HidLampArrayDevice::~HidLampArrayDevice(
        void **this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        __int64 a4)
{
  const struct std::nothrow_t *v5; // rdx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  const struct std::nothrow_t *v12; // rdx
  InputContext *v13; // rcx
  const WCHAR *v14; // [rsp+40h] [rbp+8h] BYREF
  const char *v15; // [rsp+48h] [rbp+10h] BYREF

  *this = &HidLampArrayDevice::`vftable';
  if ( (unsigned int)dword_180244248 > 5 )
  {
    v14 = (const WCHAR *)(this + 3);
    v15 = "Removing HidLampArrayDevice (device likely removed by user)";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_18020A7D8,
      a3,
      a4,
      (const unsigned __int16 **)&v15,
      &v14);
  }
  if ( *((_BYTE *)this + 645) )
    HidLampArrayDevice::SetAutonomousMode((HidLampArrayDevice *)this, 1);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 79, a2);
  v6 = this[78];
  if ( v6 )
  {
    this[78] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = this[77];
  if ( v7 )
  {
    this[77] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = this[76];
  if ( v8 )
  {
    this[76] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = this[75];
  if ( v9 )
  {
    this[75] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = this[74];
  if ( v10 )
  {
    this[74] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = this[73];
  if ( v11 )
  {
    this[73] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 72, v5);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 71, v12);
  v13 = (InputContext *)this[2];
  if ( v13 )
  {
    this[2] = 0LL;
    InputContext::Release(v13);
  }
  *this = &RefCountedObject::`vftable';
}
