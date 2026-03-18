/*
 * XREFs of ?SetContentOffset@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJUtagPOINT@@@Z @ 0x180283354
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetContentOffset(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // r9
  __int64 *i; // rdx
  __int64 v5; // rcx

  if ( a2 != *(_QWORD *)((char *)a1 + 92) )
  {
    *(_QWORD *)((char *)a1 + 92) = a2;
    v3 = (__int64 *)a1[20];
    for ( i = (__int64 *)a1[19]; i != v3; ++i )
    {
      v5 = *i;
      *(_QWORD *)(v5 + 2952) = *(_QWORD *)((char *)a1 + 92);
    }
  }
  return 0LL;
}
