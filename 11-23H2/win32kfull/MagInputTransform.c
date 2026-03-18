/*
 * XREFs of MagInputTransform @ 0x1C0155642
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C0082700 (AddMagnificationOutputTransform.c)
 *     TransformForInputMagnification @ 0x1C014DFC0 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01A4C70 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C01F62C0 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

__int64 MagInputTransform()
{
  __int64 result; // rax

  result = 0LL;
  if ( grpdeskRitInput )
    return *(_QWORD *)(grpdeskRitInput + 224LL);
  return result;
}
