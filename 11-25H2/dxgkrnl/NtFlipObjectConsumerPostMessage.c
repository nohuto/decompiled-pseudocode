/*
 * XREFs of NtFlipObjectConsumerPostMessage @ 0x14004E920
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14000A528 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14004E9F8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerPostMessage(void *a1, unsigned int a2, void *Src)
{
  int v4; // ebx
  __int64 v5; // r8
  int v6; // eax
  PVOID v7; // rdi
  CFlipPropertySetBase *v9; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  if ( a1 && a2 && Src )
  {
    Object = 0LL;
    v9 = 0LL;
    v4 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(a2, Src, 1, &v9);
    KeEnterCriticalRegion();
    if ( v4 >= 0 )
    {
      v6 = FlipManagerObject::ResolveHandle(a1, 1u, v5, (struct FlipManagerObject **)&Object);
      v7 = Object;
      v4 = v6;
      if ( v6 >= 0 )
        v4 = FlipManagerObject::ConsumerPostMessage((FlipManagerObject *)Object, v9);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
    if ( v9 )
      CFlipPropertySetBase::Release(v9);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
