/*
 * XREFs of RaidSetD3Cold @ 0x140078A68
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     NvmeAdapterInitializePoFx @ 0x14012EA7C (NvmeAdapterInitializePoFx.c)
 *     NvmeNamespaceRegisterForIdleDetection @ 0x140134C3C (NvmeNamespaceRegisterForIdleDetection.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B9B4C (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidGetD3ColdInterface @ 0x140077DF4 (RaidGetD3ColdInterface.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidSetD3Cold(struct _DEVICE_OBJECT *a1, char a2)
{
  int D3ColdInterface; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  char v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  D3ColdInterface = RaidGetD3ColdInterface(a1, &v8);
  if ( D3ColdInterface >= 0 )
  {
    v4 = v8;
    if ( *(_QWORD *)(v8 + 32) && ((*(void (__fastcall **)(_QWORD, char *))(v8 + 48))(*(_QWORD *)(v8 + 8), &v7), v7) )
    {
      LOBYTE(v5) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(v4 + 32))(*(_QWORD *)(v4 + 8), v5);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)D3ColdInterface;
}
