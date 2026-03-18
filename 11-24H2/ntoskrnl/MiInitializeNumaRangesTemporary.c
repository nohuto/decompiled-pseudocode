/*
 * XREFs of MiInitializeNumaRangesTemporary @ 0x140C4DA58
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char *MiInitializeNumaRangesTemporary()
{
  char *result; // rax
  unsigned int v1; // edx
  unsigned int v2; // r8d
  __int64 v3; // rcx
  char *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  qword_140E2DB10 = -1LL;
  if ( (int)guard_dispatch_icall_no_overrides(30LL, 16LL, &v4, 0LL) >= 0 && (result = v4) != 0LL )
  {
    v1 = 0;
    if ( *(_QWORD *)v4 != -1LL )
    {
      v2 = (unsigned __int16)KeNumberNodes;
      v3 = 0LL;
      do
      {
        if ( *(_DWORD *)&result[v3 + 8] >= v2 )
        {
          *(_DWORD *)&result[v3 + 8] = 0;
          result = v4;
        }
        dword_140E2DAC4 = v1++;
        v3 = 16LL * v1;
      }
      while ( *(_QWORD *)&result[v3] != -1LL );
    }
  }
  else
  {
    result = (char *)&unk_140E2DB00;
  }
  qword_140E2DB20 = result;
  return result;
}
