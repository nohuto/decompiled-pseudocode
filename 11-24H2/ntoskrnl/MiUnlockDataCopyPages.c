/*
 * XREFs of MiUnlockDataCopyPages @ 0x1403F1C20
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiUnlockDataCopyPages(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v4 = a1[3];
  if ( v4 )
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = a1[4];
  if ( v6 )
  {
    LOBYTE(a2) = 18;
    MiUnlockProtoPoolPage(v6, a2, a3, a4);
  }
  result = *a1;
  if ( *a1 )
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = a1[1];
  if ( v8 )
  {
    LOBYTE(a2) = 17;
    return MiUnlockProtoPoolPage(v8, a2, a3, a4);
  }
  return result;
}
