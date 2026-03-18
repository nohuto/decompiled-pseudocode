/*
 * XREFs of ?SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetReferenceProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // r11d
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // r11
  __int64 v12; // rdi
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  DirectComposition::CResourceMarshaler *v14; // rcx

  v5 = a3;
  v9 = (a3 & 0xC0000000) != 0x40000000 ? 0xC000000D : 0;
  if ( a4
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4 + 9), 61)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v10, 42) )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  v11 = v5 & 0x3FFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)this + 18) )
    return (unsigned int)-1073741811;
  v12 = (unsigned int)v11;
  v13 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 10) + 8 * v11);
  if ( v13 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
  *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v12) = a4;
  v14 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 10) + 8 * v12);
  if ( v14 )
    DirectComposition::CResourceMarshaler::AddRef(v14);
  *((_DWORD *)this + 26) = 0;
  v9 = 0;
  *a5 = 1;
  return v9;
}
