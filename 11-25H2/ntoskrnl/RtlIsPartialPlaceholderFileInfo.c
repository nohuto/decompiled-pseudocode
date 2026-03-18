/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x140776240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsPartialPlaceholderFileInfo(int *a1, int a2, bool *a3)
{
  bool v3; // zf
  int v4; // eax
  __int64 result; // rax

  if ( a2 <= 68 )
  {
    if ( a2 == 68 )
      goto LABEL_22;
    if ( a2 != 2 && a2 != 3 )
    {
      if ( a2 == 35 )
      {
        v4 = *a1;
LABEL_23:
        *a3 = (v4 & 0x440000) != 0;
        return 0LL;
      }
      if ( a2 != 37 && a2 != 38 )
      {
        if ( a2 != 60 )
        {
          v3 = a2 == 63;
          goto LABEL_18;
        }
LABEL_22:
        v4 = a1[14];
        goto LABEL_23;
      }
    }
    v4 = a1[14];
    goto LABEL_23;
  }
  if ( a2 == 70 || a2 == 77 || a2 == 78 || a2 == 79 || a2 == 80 )
    goto LABEL_22;
  v3 = a2 == 81;
LABEL_18:
  if ( v3 )
    goto LABEL_22;
  result = 3221225659LL;
  if ( a2 >= 84 )
    return 3221225475LL;
  return result;
}
