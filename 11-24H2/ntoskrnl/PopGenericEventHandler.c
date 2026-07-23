/*
 * XREFs of PopGenericEventHandler @ 0x140A499D0
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 */

__int64 __fastcall PopGenericEventHandler(char a1, _DWORD *a2)
{
  char IsPlatformAoAc; // al
  _DWORD *v4; // rdx

  if ( a1 )
  {
    *a2 = 1;
  }
  else
  {
    IsPlatformAoAc = SSHSupportIsPlatformAoAc();
    *v4 = IsPlatformAoAc != 0 ? 3 : 0;
  }
  return 0LL;
}
