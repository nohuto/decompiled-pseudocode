/*
 * XREFs of ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x18010EF60
 * Callers:
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x18010F010 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180110248 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180110614 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801109DC (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::Clip(ManipulationInjector *this, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  char v6; // r10
  __int64 v7; // rdx
  LONG x; // r9d
  char v10; // bl
  LONG v11; // eax
  LONG y; // ecx
  LONG v13; // eax

  v6 = 0;
  v7 = (__int64)*a2;
  x = a4 + a3->left;
  v10 = 1;
  if ( a2->x >= x )
  {
    x = a2->x;
    v11 = a3->right - a4;
    if ( a2->x < v11 )
      goto LABEL_5;
    x = v11 - 1;
  }
  a2->x = x;
  v6 = 1;
LABEL_5:
  y = a4 + a3->top;
  if ( a2->y >= y )
  {
    y = a2->y;
    v13 = a3->bottom - a4;
    if ( y < v13 )
    {
      v10 = v6;
      if ( !v6 )
        return v10;
      goto LABEL_10;
    }
    y = v13 - 1;
  }
  a2->y = y;
LABEL_10:
  if ( *((_BYTE *)this + 13) )
    DbgPrint("Clipped: original (%d, %d) clipped (%d, %d)\n", v7, HIDWORD(v7), x, y);
  return v10;
}
