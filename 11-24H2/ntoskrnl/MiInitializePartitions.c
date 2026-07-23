/*
 * XREFs of MiInitializePartitions @ 0x140C55CA8
 * Callers:
 *     MiCreatePfnDatabase @ 0x140C51020 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  if ( !a1 )
  {
    qword_140E30088 = 0LL;
    qword_140E300A8 = (PRTL_BITMAP)&dword_140E300B0;
    dword_140E300B0 = 1;
    byte_140E30090 |= 1u;
    qword_140E300A0 = (__int64)&qword_140E30098;
    qword_140E30098 = (__int64)&qword_140E30098;
    qword_140E300C0 = (__int64)&MiSystemPartition;
    qword_140E300C8 = &qword_140E300C0;
    qword_140E300B8 = (__int64)&byte_140E30090;
  }
  return 1LL;
}
