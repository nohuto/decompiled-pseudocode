/*
 * XREFs of MiInitializePartitions @ 0x140C53B18
 * Callers:
 *     MiCreatePfnDatabase @ 0x140C4EE90 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  if ( !a1 )
  {
    qword_140E2FF48 = 0LL;
    qword_140E2FF68 = (PRTL_BITMAP)&dword_140E2FF70;
    dword_140E2FF70 = 1;
    byte_140E2FF50 |= 1u;
    qword_140E2FF60 = (__int64)&qword_140E2FF58;
    qword_140E2FF58 = (__int64)&qword_140E2FF58;
    qword_140E2FF80 = (__int64)&MiSystemPartition;
    qword_140E2FF88 = &qword_140E2FF80;
    qword_140E2FF78 = (__int64)&byte_140E2FF50;
  }
  return 1LL;
}
