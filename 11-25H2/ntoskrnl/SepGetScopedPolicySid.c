/*
 * XREFs of SepGetScopedPolicySid @ 0x14045478C
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x140361760 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepGetScopedPolicySid(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  unsigned int i; // r9d

  v1 = 0;
  if ( a1 )
  {
LABEL_2:
    v2 = a1 + 8;
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
    {
      if ( i >= v1 && *(_BYTE *)v2 == 19 )
      {
        if ( v2 && (*(_BYTE *)(v2 + 1) & 8) == 0 )
          return v2 + 8;
        v1 = i + 1;
        if ( v2 )
          goto LABEL_2;
        return 0LL;
      }
      v2 += *(unsigned __int16 *)(v2 + 2);
    }
  }
  return 0LL;
}
