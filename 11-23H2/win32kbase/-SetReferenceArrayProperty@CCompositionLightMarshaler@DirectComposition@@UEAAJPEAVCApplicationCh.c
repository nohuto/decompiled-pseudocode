/*
 * XREFs of ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0002EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C002FCE8 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetReferenceArrayProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // ecx
  struct DirectComposition::CResourceMarshaler *v11; // rax
  __int64 i; // rax
  struct DirectComposition::CResourceMarshaler **v13; // r8
  DirectComposition::CPrimitiveGroupMarshaler *v14; // rcx
  unsigned int *v15; // rsi
  unsigned int v16; // edi

  v6 = 0;
  *a6 = 0;
  if ( a3 > 1 || a5 && !a4 )
    return (unsigned int)-1073741811;
  v10 = 0;
LABEL_5:
  if ( v10 < a5 )
  {
    v11 = a4[v10];
    if ( v11 )
    {
      for ( i = *((unsigned int *)v11 + 9); (unsigned int)i < 0xCE; LODWORD(i) = dword_1C0254ED0[i] )
      {
        if ( (_DWORD)i == 196 )
        {
          ++v10;
          goto LABEL_5;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
    v13 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
  else
    v13 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 7);
  v14 = a3 != 0 ? (DirectComposition::CPrimitiveGroupMarshaler *)0x10 : 0LL;
  v15 = (unsigned int *)((char *)this + (_QWORD)v14 + 64);
  if ( v13 )
  {
    DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
      v14,
      a2,
      v13,
      (unsigned int *)((char *)this + (_QWORD)v14 + 64));
    *((_DWORD *)this + 4) |= a3 != 0 ? 64 : 32;
  }
  *(_QWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 56) = a4;
  *v15 = a5;
  *(_DWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 68) = 0;
  v16 = 0;
  for ( *a6 = 1; v16 < *v15; ++v16 )
    DirectComposition::CResourceMarshaler::AddRef(a4[v16]);
  return v6;
}
