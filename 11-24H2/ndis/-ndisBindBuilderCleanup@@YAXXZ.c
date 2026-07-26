/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x140145AC4
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x14018DD14 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x14018DDB8 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x140144EB4 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = qword_14011D088;
  if ( qword_14011D088 )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)qword_14011D088);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    qword_14011D088 = 0LL;
  }
}
