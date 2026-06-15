/*
 * XREFs of ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180042C40
 * Callers:
 *     ?UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z @ 0x18009B188 (-UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1800A9008 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  char v5; // al
  char *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = a1[v4];
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    result = 2147942522LL;
    if ( a2 )
      return 0LL;
  }
  return result;
}
