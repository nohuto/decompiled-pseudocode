/*
 * XREFs of ViIrpLogDatabaseFindPointer @ 0x140B9DC1C
 * Callers:
 *     VfIrpLogDeleteDeviceLogs @ 0x140B9D59C (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRecordEvent @ 0x140B9D684 (VfIrpLogRecordEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ViIrpLogDatabaseFindPointer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rax

  v2 = ViIrpLogDatabase;
  *a2 = ViIrpLogDatabase;
  v3 = (_QWORD *)(v2 + 8);
  v4 = (_QWORD *)(v2 + 8);
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    if ( v4 == v3 )
      break;
    if ( *(v4 - 1) == a1 )
      return v4 - 1;
  }
  return 0LL;
}
