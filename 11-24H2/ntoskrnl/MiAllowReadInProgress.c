/*
 * XREFs of MiAllowReadInProgress @ 0x140426F14
 * Callers:
 *     MiHandleCollidedFault @ 0x140426D4C (MiHandleCollidedFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAllowReadInProgress(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 16);
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
    return 3221225633LL;
  if ( (v1 & 1) != 0 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v3 == 5 && (*(_DWORD *)(v3 + 56) & 4) != 0 )
      return 3221225495LL;
  }
  return (*(_BYTE *)(a1 + 69) & 0x10) != 0 ? 0xC0000434 : 0;
}
