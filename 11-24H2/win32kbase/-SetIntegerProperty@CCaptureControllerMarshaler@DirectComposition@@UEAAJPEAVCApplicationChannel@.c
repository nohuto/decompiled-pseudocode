/*
 * XREFs of ?SetIntegerProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140194A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetIntegerProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 )
    {
      if ( v7 != 5 )
        return (unsigned int)-1073741811;
      if ( *((_BYTE *)this + 136) == (a4 != 0) )
        return v5;
      *((_DWORD *)this + 4) |= 0x4000u;
      *((_BYTE *)this + 136) = a4 != 0;
    }
    else
    {
      if ( *((_BYTE *)this + 88) == (a4 != 0) )
        return v5;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_BYTE *)this + 88) = a4 != 0;
    }
    *a5 = 1;
    return v5;
  }
  if ( *((_BYTE *)this + 64) != (a4 != 0) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_BYTE *)this + 64) = a4 != 0;
    *a5 = 1;
  }
  return v5;
}
