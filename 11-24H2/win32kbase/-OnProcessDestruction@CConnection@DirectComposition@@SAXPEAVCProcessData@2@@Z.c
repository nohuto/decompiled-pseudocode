/*
 * XREFs of ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14007365C
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400735D0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x140070C10 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224304 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CConnection::OnProcessDestruction(struct DirectComposition::CProcessData *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  struct HDCOMPOSITIONCONNECTION__ *v7; // rcx
  struct _ERESOURCE *v8; // rcx
  struct tagRECT v9; // [rsp+20h] [rbp-28h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    if ( *((_QWORD *)DefaultConnection + 38) == PsGetCurrentProcess(v3, v2, v5, v6) )
    {
      v9 = 0LL;
      DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, 0LL, &v9);
    }
    DirectComposition::CConnection::Release(DefaultConnection);
  }
  v7 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)a1 + 2);
  if ( v7 )
    DirectComposition::CConnection::DestroyHandle(v7);
  v8 = (struct _ERESOURCE *)*((_QWORD *)a1 + 4);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    GreDeleteFastMutex(*((char **)a1 + 4));
  }
}
