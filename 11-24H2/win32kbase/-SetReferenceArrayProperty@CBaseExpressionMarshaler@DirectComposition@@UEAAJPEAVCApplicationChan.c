/*
 * XREFs of ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14015B0D0
 * Callers:
 *     ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140071EF0 (-SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  bool *v6; // r11
  unsigned int v7; // ebx
  unsigned __int64 v10; // r10
  unsigned int i; // r8d
  int v12; // r8d
  unsigned int v13; // esi

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v10 = a5;
  for ( i = 0; i < v10; i = v12 + 1 )
  {
    if ( !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4[i] + 9), 11) )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 8 || *((_QWORD *)this + 13) || *((_DWORD *)this + 29) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 29) = v10;
    v13 = 0;
    *((_QWORD *)this + 13) = a4;
    *v6 = 1;
    *((_DWORD *)this + 4) &= ~0x200u;
    if ( *((_DWORD *)this + 29) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13)
                                                                                                + 8LL * v13++));
      while ( v13 < *((_DWORD *)this + 29) );
    }
  }
  return v7;
}
