/*
 * XREFs of ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1401272A4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x1401C2C8C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall W32PIDLOCK::vCleanUp(W32PIDLOCK *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  RGNOBJ::vDeleteRGNOBJ(&v4);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = *(char **)(v2 + 64);
    if ( v3 )
    {
      GreDeleteFastMutex(v3);
      *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = 0LL;
    }
    GreDeleteFastMutex(*((char **)this + 5));
  }
}
