/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1404C1CF4
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x14071C748 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14071E9F0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14071ECF8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140892318 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x1409824B0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7B244 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8C1F4 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *Pool2; // rax

  if ( !*(_QWORD *)(a2 + 8) )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    goto LABEL_5;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
LABEL_5:
    *(_WORD *)a1 = *(_WORD *)a2;
    *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
