/*
 * XREFs of ?DxgkThreadPsTslCallback@@YAXPEAX@Z @ 0x1403ABC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DxgkThreadPsTslCallback(ReferenceCounted *a1)
{
  --dword_140160B74;
  ReferenceCounted::Release(a1);
}
