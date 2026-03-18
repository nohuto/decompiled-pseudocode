/*
 * XREFs of PfSnIsHostingApplication @ 0x140961C24
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x140961A08 (PfSnCalculateScenarioNameAndHash.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x14047FC44 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x140482C98 (PfLockSharedRelease.c)
 *     wcsstr @ 0x1405002B0 (wcsstr.c)
 */

char __fastcall PfSnIsHostingApplication(wchar_t *SubStr)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  char v4; // bl
  wchar_t *v5; // rdi
  const wchar_t *i; // rcx
  wchar_t *v7; // rax
  wchar_t *v9; // rdx

  v1 = -1LL;
  v3 = -1LL;
  v4 = 0;
  do
    ++v3;
  while ( SubStr[v3] );
  PfLockSharedAcquire((volatile signed __int64 *)qword_140E66E58);
  do
    ++v1;
  while ( word_140E66D50[v1] );
  v5 = &word_140E66D50[v1];
  for ( i = word_140E66D50; ; i = v7 + 1 )
  {
    v7 = wcsstr(i, SubStr);
    if ( !v7 || v7 < word_140E66D50 || v7 >= v5 )
      break;
    if ( v7 == word_140E66D50 || *(v7 - 1) == 44 )
    {
      v9 = &v7[(unsigned int)v3];
      if ( v9 == v5 || *v9 == 44 )
      {
        v4 = 1;
        break;
      }
    }
  }
  PfLockSharedRelease((signed __int64 *)qword_140E66E58);
  return v4;
}
