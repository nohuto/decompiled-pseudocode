/*
 * XREFs of ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402AB0C4
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x14026DA08 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402AB1C0 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 */

void __fastcall xxxEstablishWebviewHostComponentRelationship(struct tagWND *a1, struct tagWND *a2)
{
  SetOrClrWF(0, a1, 0xF80u, 1);
  SetOrClrWF(1, a1, 0xF40u, 1);
  xxxSetWindowStyle(a1, -20, *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker((struct tagWND **)a1, a2, 0LL, 1);
}
