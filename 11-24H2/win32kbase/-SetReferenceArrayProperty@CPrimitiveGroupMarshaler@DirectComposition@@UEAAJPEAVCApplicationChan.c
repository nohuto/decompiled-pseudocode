/*
 * XREFs of ?SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1400811A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x140081B98 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  unsigned int v10; // r9d
  __int64 v11; // rdx
  char *v12; // r15
  __int64 i; // rbp
  unsigned int v14; // ebp
  __int64 v15; // rax
  unsigned int j; // ecx
  __int64 v18; // r8
  int v19; // r8d
  unsigned int v20; // ebp
  __int64 v21; // rax

  v6 = 0;
  v10 = -1073741811;
  if ( a5 && !a4 )
    v6 = -1073741811;
  if ( !a3 )
  {
    v11 = 0LL;
    if ( v6 < 0 )
      return (unsigned int)v6;
LABEL_6:
    if ( (unsigned int)v11 >= a5 )
    {
      v12 = (char *)*((_QWORD *)this + 10);
      if ( v12 )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
          DirectComposition::CApplicationChannel::ReleaseResource(
            a2,
            *(struct DirectComposition::CResourceMarshaler **)&v12[8 * i]);
        GreDeleteFastMutex(v12);
      }
      *((_DWORD *)this + 22) = 0;
      if ( *((_DWORD *)this + 23) )
        *((_DWORD *)this + 4) |= 0x40u;
      v14 = 0;
      if ( a5 )
      {
        v15 = 0LL;
        do
        {
          DirectComposition::CResourceMarshaler::AddRef(a4[v15]);
          v15 = ++v14;
        }
        while ( v14 < a5 );
      }
      *((_DWORD *)this + 23) = 0;
      *((_QWORD *)this + 10) = a4;
      *((_DWORD *)this + 22) = a5;
      *a6 = 1;
      return (unsigned int)v6;
    }
    for ( j = *((_DWORD *)a4[v11] + 9); j < 0xC2; j = dword_140270F80[j] )
    {
      if ( j == 42 )
      {
        v11 = (unsigned int)(v11 + 1);
        goto LABEL_6;
      }
    }
    return v10;
  }
  if ( a3 != 1 )
    return v10;
  v18 = 0LL;
  if ( v6 >= 0 )
  {
    while ( (unsigned int)v18 < a5 )
    {
      if ( !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4[v18] + 9), 117) )
        return v10;
      v18 = (unsigned int)(v19 + 1);
    }
    DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
      (DirectComposition::CPrimitiveGroupMarshaler *)(unsigned int)v18,
      a2,
      *((struct DirectComposition::CResourceMarshaler ***)this + 12),
      (unsigned int *)this + 26);
    if ( *((_DWORD *)this + 27) )
      *((_DWORD *)this + 4) |= 0x80u;
    v20 = 0;
    if ( a5 )
    {
      v21 = 0LL;
      do
      {
        DirectComposition::CResourceMarshaler::AddRef(a4[v21]);
        v21 = ++v20;
      }
      while ( v20 < a5 );
    }
    *((_DWORD *)this + 27) = 0;
    *((_QWORD *)this + 12) = a4;
    *((_DWORD *)this + 26) = a5;
    *a6 = 1;
  }
  return (unsigned int)v6;
}
