/*
 * XREFs of MiTrimWorkingSetTail @ 0x1403CF9A0
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 *     MiTrimmedEnough @ 0x1403CDA10 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 184);
  MiAgeTrimListsTail(a1, (__int64 *)(v1 + 64), MiTrimWorkingSetTailHelper, 0LL, (__int64)MiTrimWorkingSetVpabCallback);
  if ( (*(_DWORD *)v1 & 0x8000) != 0 )
    return MiTrimmedEnough(*(_QWORD *)(a1 + 32), v1) ? 5 : 0;
  else
    return 0LL;
}
