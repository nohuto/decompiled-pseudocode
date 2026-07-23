/*
 * XREFs of HalpDmaInitializeControllers @ 0x14054F6E8
 * Callers:
 *     HalpDmaInit @ 0x140C12654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaControllerInitializeController @ 0x140550698 (HalpDmaControllerInitializeController.c)
 *     HalpDmaConfigureInterrupt @ 0x140565B38 (HalpDmaConfigureInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 HalpDmaInitializeControllers()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 result; // rax
  size_t v6; // rdi
  void *v7; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v0 = HalpDmaControllers;
  v1 = 0LL;
  v2 = 0LL;
  v8 = 0LL;
  if ( KeActiveProcessors.Count )
    v1 = KeActiveProcessors.Bitmap[0];
  *(_QWORD *)&v8 = v1;
  while ( (__int64 *)v0 != &HalpDmaControllers )
  {
    HalpDmaControllerInitializeController(v0);
    if ( *(_BYTE *)(v0 + 177) )
      HalpDmaConfigureInterrupt(v0, &v8);
    v0 = *(_QWORD *)v0;
  }
  DmaDispatch = (__int64)PcDmaDispatch;
  v4 = guard_dispatch_icall_no_overrides(&v9, v2);
  if ( v4 >= 0 )
  {
    result = v9;
    if ( !v9 )
      return result;
    v6 = 8 * v9;
    v7 = (void *)HalpMmAllocCtxAlloc(v3, v6);
    HalpDmaAdapters = (__int64)v7;
    if ( v7 )
      memset_0(v7, 0, v6);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
