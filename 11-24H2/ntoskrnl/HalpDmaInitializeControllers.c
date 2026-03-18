/*
 * XREFs of HalpDmaInitializeControllers @ 0x140551DA8
 * Callers:
 *     HalpDmaInit @ 0x140C10654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaControllerInitializeController @ 0x140552D58 (HalpDmaControllerInitializeController.c)
 *     HalpDmaConfigureInterrupt @ 0x140568048 (HalpDmaConfigureInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpDmaInitializeControllers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 result; // rax
  size_t v10; // rdi
  void *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  v4 = HalpDmaControllers;
  v5 = 0LL;
  v6 = 0LL;
  v12 = 0LL;
  if ( KeActiveProcessors.Count )
    v5 = KeActiveProcessors.Bitmap[0];
  *(_QWORD *)&v12 = v5;
  while ( (__int64 *)v4 != &HalpDmaControllers )
  {
    HalpDmaControllerInitializeController(v4);
    if ( *(_BYTE *)(v4 + 177) )
      HalpDmaConfigureInterrupt(v4, &v12);
    v4 = *(_QWORD *)v4;
  }
  DmaDispatch = (__int64)PcDmaDispatch;
  v8 = guard_dispatch_icall_no_overrides(&v13, v6, a3, a4);
  if ( v8 >= 0 )
  {
    result = v13;
    if ( !v13 )
      return result;
    v10 = 8 * v13;
    v11 = (void *)HalpMmAllocCtxAlloc(v7, v10);
    HalpDmaAdapters = (__int64)v11;
    if ( v11 )
      memset_0(v11, 0, v10);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
