/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1401960E4
 * Callers:
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x140195E58 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ??0tagTLBLOCK@@QEAA@XZ @ 0x1401960B0 (--0tagTLBLOCK@@QEAA@XZ.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ??0CForegroundLaunch@@QEAA@XZ @ 0x140240370 (--0CForegroundLaunch@@QEAA@XZ.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
