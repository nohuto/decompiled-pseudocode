/*
 * XREFs of MiTrimWorkingSetTail @ 0x1404830D0
 * Callers:
 *     <none>
 * Callees:
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 *     MiTrimmedEnough @ 0x140388910 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 184);
  MiAgeTrimListsTail(
    a1,
    (__int64 *)(v1 + 64),
    (__int64)MiTrimWorkingSetTailHelper,
    0,
    (__int64)MiTrimWorkingSetVpabCallback);
  if ( (*(_DWORD *)v1 & 0x8000) != 0 )
    return MiTrimmedEnough(*(_QWORD *)(a1 + 32), v1) ? 5 : 0;
  else
    return 0LL;
}
