/*
 * XREFs of ?GetVisualRect@CSimpleTempAppVisual@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180549B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CSimpleTempAppVisual::GetVisualRect(const RECT *a1, int a2, struct tagRECT *a3)
{
  bool v3; // zf
  const RECT *v4; // rdx

  v3 = a2 == 0;
  v4 = a1 + 4;
  if ( !v3 )
    v4 = a1 + 3;
  return CopyRect(a3, v4);
}
