/*
 * XREFs of EditionIsGpqForegroundAccessibleExplicit @ 0x140094DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400942CC (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140094E38 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleExplicit(
        __int64 a1,
        struct tagTHREADINFO *a2,
        __int64 *a3,
        __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v5 = *((_DWORD *)a3 + 2);
  v8 = *a3;
  v9 = v5;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, struct tagTHREADINFO *, __int64 *, __int64))IsGpqForegroundAccessibleExplicit)(
                       a1,
                       a2,
                       &v8,
                       a4) )
    return 1LL;
  MSGLUA_GPQFOREGROUNDPTI(a2, v6);
  return 0LL;
}
