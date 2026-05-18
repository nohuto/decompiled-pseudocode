/*
 * XREFs of sub_18000F210 @ 0x18000F210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010080 @ 0x180010080 (sub_180010080.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

char sub_18000F210()
{
  __int64 (*v0)(void); // rax
  char v1; // bl

  v0 = (__int64 (*)(void))qword_1801C4420;
  v1 = 0;
  if ( qword_1801C4420 )
    return v0();
  v0 = (__int64 (*)(void))sub_180010080("RtlDllShutdownInProgress");
  qword_1801C4420 = (__int64)v0;
  if ( v0 )
    return v0();
  return v1;
}
