/*
 * XREFs of MiUnlockDataCopyPages @ 0x1403148D4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiUnlockDataCopyPages(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  ULONG_PTR v5; // rcx
  __int64 result; // rax
  ULONG_PTR v7; // rcx

  v3 = a1[3];
  if ( v3 )
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v5 = a1[4];
  if ( v5 )
  {
    LOBYTE(a2) = 18;
    MiUnlockProtoPoolPage(v5, a2, a3);
  }
  result = *a1;
  if ( *a1 )
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v7 = a1[1];
  if ( v7 )
  {
    LOBYTE(a2) = 17;
    return MiUnlockProtoPoolPage(v7, a2, a3);
  }
  return result;
}
