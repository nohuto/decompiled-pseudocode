/*
 * XREFs of ?SetReferenceProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140081A80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v8; // ebx
  __int64 i; // rax

  if ( a3 != 2 )
    return 3221225485LL;
  v8 = 0;
  if ( a4 )
  {
    for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
    {
      if ( (_DWORD)i == 157 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_8:
    if ( a4 != this[7] )
    {
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[7]);
      this[7] = a4;
    }
    *((_DWORD *)this + 4) &= ~0x20u;
    *a5 = 1;
  }
  return v8;
}
