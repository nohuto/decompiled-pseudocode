/*
 * XREFs of FsRtlpCheckSharingAgainstOplockOwner @ 0x1404AA7AC
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1408ADD00 (IoCheckLinkShareAccess.c)
 */

__int64 __fastcall FsRtlpCheckSharingAgainstOplockOwner(__int64 a1, _BYTE *a2, int a3, unsigned __int16 a4)
{
  bool v4; // zf
  BOOL v5; // eax
  BOOL v6; // eax
  BOOL v7; // eax
  BOOL v8; // eax
  _DWORD v10[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( **(_BYTE **)(a1 + 184) )
    return 3221225485LL;
  v4 = a2[75] == 0;
  v10[1] = a2[74] != 0;
  v5 = !v4;
  v10[0] = 1;
  v4 = a2[76] == 0;
  v10[2] = v5;
  v6 = !v4;
  v4 = a2[77] == 0;
  v10[3] = v6;
  v7 = !v4;
  v4 = a2[78] == 0;
  v10[4] = v7;
  v8 = !v4;
  v4 = a2[79] == 0;
  v10[5] = v8;
  v10[6] = !v4;
  return IoCheckLinkShareAccess(a3, a4, (_DWORD)a2, (unsigned int)v10, 0LL, 2);
}
