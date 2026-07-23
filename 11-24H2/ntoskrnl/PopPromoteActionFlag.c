/*
 * XREFs of PopPromoteActionFlag @ 0x140AA3F60
 * Callers:
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPromoteActionFlag(_BYTE *a1, char a2, int a3, char a4, unsigned int a5)
{
  __int64 result; // rax
  char v7; // cl
  int v8; // r8d

  result = a5;
  v7 = 0;
  v8 = a5 & a3;
  if ( !a4 )
  {
    if ( v8 || (dword_140F0B98C & a5) == 0 )
      return result;
    result = ~a5;
    dword_140F0B98C &= result;
LABEL_10:
    *a1 |= a2;
    return result;
  }
  if ( v8 )
  {
    if ( (dword_140F0B98C & a5) == 0 )
    {
      v7 = 1;
      dword_140F0B98C |= a5;
    }
  }
  if ( v7 )
    goto LABEL_10;
  return result;
}
