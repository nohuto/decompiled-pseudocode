/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x14004A8A8
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x14011C8C0 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x14004A930 (-InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x14004AFA4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned __int64 a3,
        void **a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  DirectComposition::CDCompMappedSharedSectionMarshaler *v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // rbx
  int v10; // r11d

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v7
    && (v8 = (DirectComposition::CDCompMappedSharedSectionMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 144LL))(v7),
        (v9 = v8) != 0LL) )
  {
    v10 = DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(v8, a3, a4);
    if ( v10 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v9);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
