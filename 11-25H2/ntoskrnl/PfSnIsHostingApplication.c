/*
 * XREFs of PfSnIsHostingApplication @ 0x1408274A4
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1408261B4 (PfSnBeginAppLaunch.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x140827288 (PfSnCalculateScenarioNameAndHash.c)
 * Callees:
 *     PfLockSharedRelease @ 0x1402054C4 (PfLockSharedRelease.c)
 *     PfLockSharedAcquire @ 0x14020739C (PfLockSharedAcquire.c)
 *     wcsstr @ 0x1404FDB30 (wcsstr.c)
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
  PfLockSharedAcquire(qword_140E66B98);
  do
    ++v1;
  while ( word_140E66A90[v1] );
  v5 = &word_140E66A90[v1];
  for ( i = word_140E66A90; ; i = v7 + 1 )
  {
    v7 = wcsstr(i, SubStr);
    if ( !v7 || v7 < word_140E66A90 || v7 >= v5 )
      break;
    if ( v7 == word_140E66A90 || *(v7 - 1) == 44 )
    {
      v9 = &v7[(unsigned int)v3];
      if ( v9 == v5 || *v9 == 44 )
      {
        v4 = 1;
        break;
      }
    }
  }
  PfLockSharedRelease(qword_140E66B98);
  return v4;
}
