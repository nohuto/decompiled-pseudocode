/*
 * XREFs of NtDCompositionSetBlurredWallpaperSurface @ 0x140146580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x140070C10 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionSetBlurredWallpaperSurface(void *a1, void *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi
  unsigned int v7; // edx
  struct tagRECT v9; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  v10 = 0LL;
  if ( a2 )
  {
    v9 = 0LL;
    RtlCopyFromUser(&v9, a2, 0x10uLL);
    v10 = v9;
  }
  else if ( a1 )
  {
    v3 = -1073741811;
  }
  if ( v3 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v4);
    v6 = DefaultConnection;
    if ( DefaultConnection )
    {
      v3 = DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, a1, &v10);
      DirectComposition::CConnection::Release(v6, v7);
    }
    else
    {
      v3 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v3;
}
