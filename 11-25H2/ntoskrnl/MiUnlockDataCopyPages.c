/*
 * XREFs of MiUnlockDataCopyPages @ 0x1404568CC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiUnlockDataCopyPages(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  ULONG_PTR v6; // rcx
  __int64 result; // rax
  ULONG_PTR v8; // rcx

  v4 = a1[3];
  if ( v4 )
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = a1[4];
  if ( v6 )
    MiUnlockProtoPoolPage(v6, 0x12u, a3, a4);
  result = *a1;
  if ( *a1 )
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = a1[1];
  if ( v8 )
    return MiUnlockProtoPoolPage(v8, 0x11u, a3, a4);
  return result;
}
