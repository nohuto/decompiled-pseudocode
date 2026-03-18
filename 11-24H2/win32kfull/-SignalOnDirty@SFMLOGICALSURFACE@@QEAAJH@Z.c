/*
 * XREFs of ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x14019CD68
 * Callers:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x14019CCB8 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 * Callees:
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400CFA78 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::SignalOnDirty(SFMLOGICALSURFACE *this, int a2)
{
  int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  unsigned __int64 v5; // rax

  v2 = 0;
  *((_DWORD *)this + 61) = *((_DWORD *)this + 61) & 0xFFFFFFFD | (a2 != 0 ? 2 : 0);
  if ( a2 )
  {
    if ( *((_DWORD *)this + 57) )
    {
      v4 = Gre::Base::Globals(this);
      v2 = SfmTokenArray::TransferTokens(*((SfmTokenArray **)v4 + 529), (SFMLOGICALSURFACE *)((char *)this + 216));
      if ( v2 >= 0 )
        SfmSignalTokenEvent();
    }
  }
  v5 = SFMLOGICALSURFACE::uiCookie(this);
  EtwLogicalSurfEnableDirtyNotificationEvent(*(_QWORD *)this, v5);
  return (unsigned int)v2;
}
