/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019B948
 * Callers:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14000C51C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400351C0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rbx
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rsi
  int v4; // ebp
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v6; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 11);
  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(this) + 88);
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v2 + 1456LL));
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 16);
      v4 = 0;
      SURFREF::SURFREF((SURFREF *)v5, *(struct HOBJ__ **)(v1 + 8), v2);
      if ( v6 )
      {
        SURFACE::vDec_cRef(v6);
        v4 = 1;
      }
      SURFREF::~SURFREF((SURFREF *)v5);
      if ( v4 )
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      GreDeleteFastMutex((char *)v1);
      v1 = v3;
    }
    while ( v3 );
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v2 + 1456LL));
}
