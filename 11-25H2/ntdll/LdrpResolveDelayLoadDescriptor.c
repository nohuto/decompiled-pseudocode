/*
 * XREFs of LdrpResolveDelayLoadDescriptor @ 0x180020F60
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     LdrResolveDelayLoadsFromDll @ 0x180160540 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall LdrpResolveDelayLoadDescriptor(
        char *ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor)
{
  char *v2; // rsi
  unsigned int v3; // ebx
  __int64 v6; // rdi
  IMAGE_THUNK_DATA64 *ThunkAddress; // rax
  bool v8; // zf

  v2 = &ParentModuleBase[DelayloadDescriptor->ImportAddressTableRVA];
  v3 = 0;
  LODWORD(v6) = 0;
  if ( *(_QWORD *)v2 )
  {
    ThunkAddress = (IMAGE_THUNK_DATA64 *)&ParentModuleBase[DelayloadDescriptor->ImportAddressTableRVA];
    do
    {
      v8 = LdrResolveDelayLoadedAPI(ParentModuleBase, DelayloadDescriptor, 0LL, 0LL, ThunkAddress, 0) == 0LL;
      v6 = (unsigned int)(v6 + 1);
      ThunkAddress = (IMAGE_THUNK_DATA64 *)&v2[8 * v6];
      if ( v8 )
        v3 = -1073740782;
    }
    while ( ThunkAddress->u1.ForwarderString );
  }
  return v3;
}
