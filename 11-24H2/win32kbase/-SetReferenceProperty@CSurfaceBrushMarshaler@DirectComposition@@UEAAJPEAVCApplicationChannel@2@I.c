/*
 * XREFs of ?SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140080AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetReferenceProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int *v9; // r10
  unsigned int v10; // r9d
  __int64 i; // rax
  __int64 m; // rax
  __int64 j; // rax
  __int64 k; // rax

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 7 )
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 10,
               (unsigned int *)a4,
               1,
               29,
               (int *)this + 4,
               64,
               0,
               a5);
    return 3221225485LL;
  }
  v9 = dword_140270F80;
  v10 = 194;
  if ( a4 )
  {
    for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
    {
      if ( (_DWORD)i == 42 )
        goto LABEL_8;
    }
    for ( j = *((unsigned int *)a4 + 9); (unsigned int)j < 0xC2; LODWORD(j) = dword_140270F80[j] )
    {
      if ( (_DWORD)j == 190 )
        goto LABEL_8;
    }
    for ( k = *((unsigned int *)a4 + 9); (unsigned int)k < 0xC2; LODWORD(k) = dword_140270F80[k] )
    {
      if ( (_DWORD)k == 118 )
        goto LABEL_8;
    }
    if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4 + 9), 71) )
      goto LABEL_8;
    return 3221225485LL;
  }
  *((_WORD *)this + 69) = 0;
  *(_OWORD *)((char *)this + 88) = 0LL;
LABEL_8:
  if ( a4 )
  {
    for ( m = *((unsigned int *)a4 + 9); (unsigned int)m < v10; LODWORD(m) = v9[m] )
    {
      if ( (_DWORD)m == 135 )
        goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_14:
    if ( a4 != *((struct DirectComposition::CResourceMarshaler **)this + 9) )
    {
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 9));
      *((_QWORD *)this + 9) = a4;
    }
    *((_DWORD *)this + 4) |= 0x20u;
    *a5 = 1;
  }
  return v5;
}
