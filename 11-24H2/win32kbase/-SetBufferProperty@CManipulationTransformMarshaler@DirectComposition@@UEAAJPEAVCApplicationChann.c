/*
 * XREFs of ?SetBufferProperty@CManipulationTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14010BFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetBufferProperty(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d

  v6 = 0;
  if ( a5 != 12 )
    return (unsigned int)-1073741811;
  v7 = a3 - 1;
  if ( !v7 )
  {
    *((_QWORD *)this + 9) = *(_QWORD *)a4;
    *((_DWORD *)this + 20) = a4[2];
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x80u;
    return v6;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a4;
    *((_DWORD *)this + 23) = a4[2];
    goto LABEL_7;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_QWORD *)this + 12) = *(_QWORD *)a4;
    *((_DWORD *)this + 26) = a4[2];
    goto LABEL_7;
  }
  if ( v9 != 1 )
    return (unsigned int)-1073741811;
  *(_QWORD *)((char *)this + 108) = *(_QWORD *)a4;
  *((_DWORD *)this + 29) = a4[2];
LABEL_7:
  *a6 = 1;
  *((_DWORD *)this + 4) &= ~0x80u;
  return v6;
}
