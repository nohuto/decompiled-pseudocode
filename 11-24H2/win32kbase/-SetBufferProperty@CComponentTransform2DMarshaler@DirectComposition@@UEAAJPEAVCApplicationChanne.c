/*
 * XREFs of ?SetBufferProperty@CComponentTransform2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400FF560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 v11; // rdx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 7 && a5 == 24 )
  {
    v11 = *(_QWORD *)((char *)this + 108) - *a4;
    if ( !v11 )
    {
      v11 = *(_QWORD *)((char *)this + 116) - a4[1];
      if ( !v11 )
        v11 = *(_QWORD *)((char *)this + 124) - a4[2];
    }
    if ( v11 )
    {
      *(_OWORD *)((char *)this + 108) = *(_OWORD *)a4;
      *(_QWORD *)((char *)this + 124) = a4[2];
    }
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  else
  {
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    v7 = a3 - 1;
    if ( !v7 )
    {
      *((_DWORD *)this + 18) = *(_DWORD *)a4;
      *((_DWORD *)this + 19) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x100u;
      return v6;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      *((_DWORD *)this + 20) = *(_DWORD *)a4;
      *((_DWORD *)this + 21) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x80u;
      return v6;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      *((_DWORD *)this + 22) = *(_DWORD *)a4;
      *((_DWORD *)this + 23) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x200u;
      return v6;
    }
    if ( v9 != 3 )
      return (unsigned int)-1073741811;
    *((_DWORD *)this + 25) = *(_DWORD *)a4;
    *((_DWORD *)this + 26) = *((_DWORD *)a4 + 1);
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
  }
  return v6;
}
