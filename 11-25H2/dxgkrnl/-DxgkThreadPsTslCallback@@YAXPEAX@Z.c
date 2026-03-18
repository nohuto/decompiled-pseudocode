/*
 * XREFs of ?DxgkThreadPsTslCallback@@YAXPEAX@Z @ 0x1403B7E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DxgkThreadPsTslCallback(ReferenceCounted *a1)
{
  --dword_14015DB90;
  ReferenceCounted::Release(a1);
}
