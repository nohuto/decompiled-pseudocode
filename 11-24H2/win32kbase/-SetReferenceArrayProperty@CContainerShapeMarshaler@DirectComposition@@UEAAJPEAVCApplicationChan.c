/*
 * XREFs of ?SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140072250
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140072D88 (-ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CContainerShapeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v7; // ebx
  struct DirectComposition::CApplicationChannel *v8; // r9
  unsigned int i; // r8d
  int v11; // r8d
  unsigned int v13; // esi

  v7 = 0;
  v8 = a2;
  *a6 = 0;
  if ( (a4 || !a5) && a3 == 1 )
  {
    for ( i = 0; i < a5; i = v11 + 1 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4[i] + 9),
                               181LL) )
        return (unsigned int)-1073741811;
    }
    DirectComposition::CContainerShapeMarshaler::ClearShapes(this, v8);
    *((_DWORD *)this + 18) = a5;
    v13 = 0;
    *((_QWORD *)this + 8) = a4;
    *((_DWORD *)this + 19) = 0;
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x40u;
    if ( *((_DWORD *)this + 18) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 8)
                                                                                                + 8LL * v13++));
      while ( v13 < *((_DWORD *)this + 18) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
