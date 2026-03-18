/*
 * XREFs of Win32kBaseVideoPortCallout @ 0x1401237B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     VideoPortCallout @ 0x1401237F0 (VideoPortCallout.c)
 */

__int64 __fastcall Win32kBaseVideoPortCallout(__int64 a1)
{
  _BYTE v3[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  VideoPortCallout(a1);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  return 0LL;
}
