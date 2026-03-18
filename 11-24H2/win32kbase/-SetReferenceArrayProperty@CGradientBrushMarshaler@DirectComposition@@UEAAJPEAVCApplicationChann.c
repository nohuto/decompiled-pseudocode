/*
 * XREFs of ?SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140100D70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140100E50 (-ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceArrayProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int v11; // edx
  unsigned int i; // ecx
  unsigned int v13; // edi

  v6 = 0;
  *a6 = 0;
  if ( a5 && !a4 || a3 != 1 )
    return (unsigned int)-1073741811;
  v11 = 0;
LABEL_7:
  if ( v11 < a5 )
  {
    for ( i = *((_DWORD *)a4[v11] + 9); i < 0xC2; i = dword_140270F80[i] )
    {
      if ( i == 23 )
      {
        ++v11;
        goto LABEL_7;
      }
    }
    return (unsigned int)-1073741811;
  }
  DirectComposition::CGradientBrushMarshaler::ClearStops(this, a2);
  *((_QWORD *)this + 12) = a4;
  v13 = 0;
  *((_QWORD *)this + 13) = (unsigned int)a5;
  *a6 = 1;
  *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_DWORD *)this + 26) )
  {
    do
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 12)
                                                                                              + 8LL * v13++));
    while ( v13 < *((_DWORD *)this + 26) );
  }
  return v6;
}
