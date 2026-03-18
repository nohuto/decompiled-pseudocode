/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140035870
 * Callers:
 *     GreMarkDCUnreadable @ 0x140152E84 (GreMarkDCUnreadable.c)
 * Callees:
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v1; // rcx
  HDC v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0;
  v2 = *(HDC *)v1;
  HmgDecrementShareReferenceCountEx(v1, &v3);
  if ( v3 )
    GrepDeleteDC(v2, 0x2000000u);
}
