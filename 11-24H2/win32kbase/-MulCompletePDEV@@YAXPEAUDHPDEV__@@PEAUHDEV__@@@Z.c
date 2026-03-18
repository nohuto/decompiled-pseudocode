/*
 * XREFs of ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x140157900
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401307E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall MulCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HDEV v2; // rbp
  _QWORD *i; // rbx

  v2 = (HDEV)*((_QWORD *)a1 + 4);
  if ( v2 != a2 )
  {
    if ( *((HDEV *)a1 + 5) == a2 )
      *((_QWORD *)a1 + 5) = v2;
    for ( i = *(_QWORD **)a1; i; i = (_QWORD *)*i )
    {
      if ( (HDEV)i[7] == a2 )
      {
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)(i + 7));
        i[6] = v2;
        i[7] = v2;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)(i + 7));
      }
    }
    *((_QWORD *)a1 + 4) = a2;
  }
}
