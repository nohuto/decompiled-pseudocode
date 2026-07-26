/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x140150784
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x140198D4C (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x140198DF0 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x14014FB74 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = qword_140127138;
  if ( qword_140127138 )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)qword_140127138);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    qword_140127138 = 0LL;
  }
}
