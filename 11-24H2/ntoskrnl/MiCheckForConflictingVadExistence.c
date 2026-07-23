/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14044E110
 * Callers:
 *     MiIsVaRangeAvailable @ 0x140A0C10C (MiIsVaRangeAvailable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckForConflictingVadExistence(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned int v6; // r10d

  v3 = *(__int64 ***)(a1 + 1368);
  v4 = a2 >> 12;
  v5 = a3 >> 12;
  v6 = 0;
  while ( v3 )
  {
    if ( v5 < (*((unsigned int *)v3 + 6) | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32)) )
    {
      v3 = (__int64 **)*v3;
    }
    else
    {
      if ( v4 <= (*((unsigned int *)v3 + 7) | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32)) )
        break;
      v3 = (__int64 **)v3[1];
    }
  }
  LOBYTE(v6) = v3 != 0LL;
  return v6;
}
