/*
 * XREFs of SeGetTrustLabelAce @ 0x1403F9950
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 *     SepAdjustAccessStateForConstraints @ 0x14090B020 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140994420 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14099A7A0 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetTrustLabelAce(__int64 a1)
{
  __int16 v1; // r10
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int i; // edx

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( (v1 & 0x10) == 0 )
    return 0LL;
LABEL_4:
  if ( v1 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v5 )
      return 0LL;
    v6 = a1 + v5;
  }
  if ( v6 )
  {
    result = v6 + 8;
    for ( i = 0; i < *(unsigned __int16 *)(v6 + 4); ++i )
    {
      if ( i >= v2 && *(_BYTE *)result == 20 )
      {
        if ( (*(_BYTE *)(result + 1) & 8) == 0 )
          return result;
        v2 = i + 1;
        if ( !result )
          return result;
        goto LABEL_4;
      }
      result += *(unsigned __int16 *)(result + 2);
    }
  }
  return 0LL;
}
