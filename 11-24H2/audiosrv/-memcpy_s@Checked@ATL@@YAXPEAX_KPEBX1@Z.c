/*
 * XREFs of ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18004AA18
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18001A5F8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18004A648 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x1800742C0 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 */

void __fastcall ATL::Checked::memcpy_s(ATL::Checked *this, void *a2, const void *a3, void *a4)
{
  if ( a4 )
  {
    if ( !this )
      goto LABEL_7;
    if ( a3 && a2 >= a4 )
    {
      memcpy_0(this, a3, (size_t)a4);
      return;
    }
    memset_0(this, 0, (size_t)a2);
    if ( a3 )
    {
      if ( a2 >= a4 )
LABEL_9:
        ATL::AtlThrowImpl(-2147024809);
      *(_DWORD *)_o__errno(this, a2, a3) = 34;
    }
    else
    {
LABEL_7:
      *(_DWORD *)_o__errno(this, a2, a3) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_9;
  }
}
