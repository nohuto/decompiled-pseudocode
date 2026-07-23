/*
 * XREFs of inflateStateCheck @ 0x180150C2C
 * Callers:
 *     inflate @ 0x18014FA34 (inflate.c)
 *     inflateReset @ 0x180150ACC (inflateReset.c)
 *     inflateReset2 @ 0x180150B00 (inflateReset2.c)
 *     inflateResetKeep @ 0x180150B9C (inflateResetKeep.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall inflateStateCheck(_QWORD *a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a1 )
  {
    if ( a1[6] )
    {
      if ( a1[7] )
      {
        v1 = a1[5];
        if ( v1 )
        {
          if ( *(_QWORD **)v1 == a1 && (unsigned int)(*(_DWORD *)(v1 + 8) - 16180) <= 0x1F )
            return 0;
        }
      }
    }
  }
  return result;
}
