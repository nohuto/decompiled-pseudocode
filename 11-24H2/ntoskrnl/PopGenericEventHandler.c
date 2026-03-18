/*
 * XREFs of PopGenericEventHandler @ 0x140A52140
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
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
