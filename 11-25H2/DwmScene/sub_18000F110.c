/*
 * XREFs of sub_18000F110 @ 0x18000F110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FF80 @ 0x18000FF80 (sub_18000FF80.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char sub_18000F110()
{
  __int64 (*v0)(void); // rax
  char v1; // bl

  v0 = (__int64 (*)(void))qword_1801C3410;
  v1 = 0;
  if ( qword_1801C3410 )
    return v0();
  v0 = (__int64 (*)(void))sub_18000FF80("RtlDllShutdownInProgress");
  qword_1801C3410 = (__int64)v0;
  if ( v0 )
    return v0();
  return v1;
}
