/*
 * XREFs of ?SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140075AB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetBufferProperty(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 52 )
  {
    if ( a4 && a5 == 8 )
    {
      v8 = *(_QWORD *)a4;
      *((_DWORD *)this + 92) |= 1u;
      *((_QWORD *)this + 47) = v8;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 53 )
  {
    if ( a4 && a5 == 8 )
    {
      v7 = *(_QWORD *)a4;
      *((_DWORD *)this + 92) |= 2u;
      *((_QWORD *)this + 48) = v7;
LABEL_10:
      *a6 = 1;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
}
