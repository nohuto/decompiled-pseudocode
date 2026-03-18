/*
 * XREFs of MiInitializePartitions @ 0x140C428E8
 * Callers:
 *     MiCreatePfnDatabase @ 0x140C3DC60 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  if ( !a1 )
  {
    qword_140E2FD08 = 0LL;
    qword_140E2FD28 = (PRTL_BITMAP)&dword_140E2FD30;
    dword_140E2FD30 = 1;
    byte_140E2FD10 |= 1u;
    qword_140E2FD20 = (__int64)&qword_140E2FD18;
    qword_140E2FD18 = (__int64)&qword_140E2FD18;
    qword_140E2FD40 = (__int64)&MiSystemPartition;
    qword_140E2FD48 = &qword_140E2FD40;
    qword_140E2FD38 = (__int64)&byte_140E2FD10;
  }
  return 1LL;
}
