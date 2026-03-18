/*
 * XREFs of PpmPerfResetHistoryAll @ 0x140AB7554
 * Callers:
 *     PpmCheckReInit @ 0x140A72240 (PpmCheckReInit.c)
 * Callees:
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     PpmPerfResetHistory @ 0x1404099C0 (PpmPerfResetHistory.c)
 */

void PpmPerfResetHistoryAll()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 Prcb; // rax
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v6; // rcx

  v0 = PpmCheckRegistered.Bitmap[0];
  LOWORD(v1) = 0;
  while ( 1 )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F21E78 + 64 * (unsigned __int16)v1 + (unsigned __int8)v2));
      PpmPerfResetHistory(Prcb + 35248);
    }
    v1 = (unsigned __int16)(v1 + 1);
    if ( (unsigned int)v1 >= PpmCheckRegistered.Count )
      break;
    v0 = PpmCheckRegistered.Bitmap[v1];
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
    {
      v6 = *(_QWORD *)(i + 312) + 1192LL * j;
      if ( *(_DWORD *)(v6 + 16) == 1 )
        PpmPerfResetHistory(*(_QWORD *)v6);
    }
  }
}
