/*
 * XREFs of ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x140197880
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreProtectSpriteContent @ 0x14022472C (GreProtectSpriteContent.c)
 *     GreDwmGetRedirectionStyle @ 0x140321A04 (GreDwmGetRedirectionStyle.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::GetRedirectionInfo(
        SFMLOGICALSURFACE *this,
        enum _HLSURF_REDIRECTIONSTYLE *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5,
        struct _LUID *a6)
{
  __int64 v6; // r10

  v6 = *((_QWORD *)this + 23);
  if ( !v6 )
  {
    *(_DWORD *)a2 = 0;
    *a3 = 0;
    *a4 = 0;
    if ( a5 )
      *a5 = 0LL;
LABEL_6:
    if ( a6 )
      *a6 = 0LL;
    return;
  }
  *a3 = *(_DWORD *)(v6 + 32);
  *a4 = *(_DWORD *)(v6 + 36);
  if ( (*(_DWORD *)(v6 + 92) & 1) == 0 )
  {
    if ( (*(_DWORD *)(v6 + 88) & 0x800) == 0 )
      return;
    *(_DWORD *)a2 = 1;
    if ( a5 )
      *a5 = *(void **)(v6 + 8);
    goto LABEL_6;
  }
  *(_DWORD *)a2 = 2;
  if ( a5 )
    *a5 = *(void **)(v6 + 544);
  if ( a6 )
    *a6 = *(struct _LUID *)(v6 + 552);
}
