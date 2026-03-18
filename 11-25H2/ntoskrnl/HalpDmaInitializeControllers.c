/*
 * XREFs of HalpDmaInitializeControllers @ 0x14054F4A8
 * Callers:
 *     HalpDmaInit @ 0x140BFF654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     HalpDmaControllerInitializeController @ 0x140550458 (HalpDmaControllerInitializeController.c)
 *     HalpDmaConfigureInterrupt @ 0x140565478 (HalpDmaConfigureInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 HalpDmaInitializeControllers()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rcx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 result; // rax
  size_t v5; // rdi
  void *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v0 = HalpDmaControllers;
  v1 = 0LL;
  v7 = 0LL;
  if ( KeActiveProcessors.Count )
    v1 = KeActiveProcessors.Bitmap[0];
  *(_QWORD *)&v7 = v1;
  while ( (__int64 *)v0 != &HalpDmaControllers )
  {
    HalpDmaControllerInitializeController(v0);
    if ( *(_BYTE *)(v0 + 177) )
      HalpDmaConfigureInterrupt(v0, &v7);
    v0 = *(_QWORD *)v0;
  }
  DmaDispatch = (__int64)PcDmaDispatch;
  v3 = guard_dispatch_icall_no_overrides(&v8);
  if ( v3 >= 0 )
  {
    result = v8;
    if ( !v8 )
      return result;
    v5 = 8 * v8;
    v6 = (void *)HalpMmAllocCtxAlloc(v2, v5);
    HalpDmaAdapters = (__int64)v6;
    if ( v6 )
      memset_0(v6, 0, v5);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v3;
}
