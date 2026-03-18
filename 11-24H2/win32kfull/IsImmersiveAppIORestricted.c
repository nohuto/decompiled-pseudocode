/*
 * XREFs of IsImmersiveAppIORestricted @ 0x140088640
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppIORestricted(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 816);
  return (v1 & 0x30) == 0x10 && (v1 & 0x200) == 0;
}
