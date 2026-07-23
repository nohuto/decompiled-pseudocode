/*
 * XREFs of MiTrimWorkingSetTail @ 0x140390A50
 * Callers:
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiTrimmedEnough @ 0x1404042C0 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 184);
  MiAgeTrimListsTail(a1, (__int64 *)(v1 + 64), MiTrimWorkingSetTailHelper, 0LL, (__int64)MiTrimWorkingSetVpabCallback);
  if ( (*(_DWORD *)v1 & 0x8000) != 0 )
    return (unsigned int)MiTrimmedEnough(*(_QWORD *)(a1 + 32), v1) != 0 ? 5 : 0;
  else
    return 0LL;
}
