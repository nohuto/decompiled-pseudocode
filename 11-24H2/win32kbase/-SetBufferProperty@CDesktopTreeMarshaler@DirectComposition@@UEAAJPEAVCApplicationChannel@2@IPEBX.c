/*
 * XREFs of ?SetBufferProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140158EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTreeMarshaler::SetBufferProperty(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int64 v7; // rax

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a4 && a5 == 8 )
  {
    v7 = *a4;
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 7) = v7;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
