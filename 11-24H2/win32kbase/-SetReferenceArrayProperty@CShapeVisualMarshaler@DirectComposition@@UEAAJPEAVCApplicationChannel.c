/*
 * XREFs of ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140072140
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140072DF4 (-ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022CB10 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CShapeVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // r10
  unsigned int i; // r8d
  int v11; // r8d
  unsigned int v13; // esi

  v6 = 0;
  v8 = a2;
  *a6 = 0;
  if ( a4 || !a5 )
  {
    if ( a3 == 52 )
    {
      for ( i = 0; i < a5; i = v11 + 1 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                 *((unsigned int *)a4[i] + 9),
                                 181LL) )
          return (unsigned int)-1073741811;
      }
      DirectComposition::CShapeVisualMarshaler::ClearShapes(this, v8);
      *((_DWORD *)this + 96) = a5;
      v13 = 0;
      *((_QWORD *)this + 47) = a4;
      *((_DWORD *)this + 97) = 0;
      *a6 = 1;
      *((_DWORD *)this + 98) |= 2u;
      if ( *((_DWORD *)this + 96) )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 47)
                                                                                                  + 8LL * v13++));
        while ( v13 < *((_DWORD *)this + 96) );
      }
    }
    else
    {
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
