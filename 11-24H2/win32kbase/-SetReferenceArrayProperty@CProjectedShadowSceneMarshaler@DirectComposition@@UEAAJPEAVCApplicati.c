/*
 * XREFs of ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14012FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ReleaseResourceMarshalers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x14012FF84 (-ReleaseResourceMarshalers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAAXPEAVCApplicati.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceArrayProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        DirectComposition::CProjectedShadowSceneMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  struct DirectComposition::CApplicationChannel *v9; // r10
  int v11; // edi
  unsigned int v12; // r9d
  DirectComposition::CProjectedShadowSceneMarshaler *v13; // rcx
  unsigned int v14; // r8d
  struct DirectComposition::CResourceMarshaler *v16; // rcx
  int v17; // r8d
  struct DirectComposition::CResourceMarshaler **v18; // r8
  int v19; // r13d
  __int64 v20; // rsi
  __int64 v21; // r12
  unsigned int *v22; // rsi
  __int64 v23; // rax
  struct DirectComposition::CResourceMarshaler *v24; // rcx
  int v25; // r8d

  v6 = 0;
  v9 = a2;
  v11 = 0;
  v12 = -1073741811;
  *a6 = 0;
  if ( a3 != 2 && a3 != 9 )
  {
    v13 = a5;
LABEL_30:
    v11 = -1073741811;
    goto LABEL_3;
  }
  v13 = a5;
  if ( a5 && !a4 )
    goto LABEL_30;
LABEL_3:
  v14 = 0;
  if ( a3 == 2 )
  {
    if ( v11 < 0 )
      return (unsigned int)v11;
    while ( v14 < (unsigned __int64)v13 )
    {
      v24 = a4[v14];
      if ( !v24 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v24 + 9), 120) )
        return v12;
      v13 = a5;
      v14 = v25 + 1;
    }
  }
  else
  {
    if ( v11 < 0 )
      return (unsigned int)v11;
    while ( v14 < (unsigned __int64)v13 )
    {
      v16 = a4[v14];
      if ( !v16 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v16 + 9), 121) )
        return v12;
      v13 = a5;
      v14 = v17 + 1;
    }
  }
  if ( a3 == 2 )
    v18 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
  else
    v18 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 11);
  v19 = 128;
  if ( a3 != 2 )
    v19 = 512;
  v20 = 80LL;
  if ( a3 != 2 )
    v20 = 96LL;
  v21 = 84LL;
  if ( a3 != 2 )
    v21 = 100LL;
  v22 = (unsigned int *)((char *)this + v20);
  if ( v18 )
  {
    DirectComposition::CProjectedShadowSceneMarshaler::ReleaseResourceMarshalers(v13, v9, v18, v22);
    *((_DWORD *)this + 4) |= v19;
    LODWORD(v13) = (_DWORD)a5;
  }
  v23 = 72LL;
  if ( a3 != 2 )
    v23 = 88LL;
  *(_QWORD *)((char *)this + v23) = a4;
  *v22 = (unsigned int)v13;
  *(_DWORD *)((char *)this + v21) = 0;
  *a6 = 1;
  if ( *v22 )
  {
    do
      DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
    while ( v6 < *v22 );
  }
  return (unsigned int)v11;
}
