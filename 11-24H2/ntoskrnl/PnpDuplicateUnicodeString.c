/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1404C0414
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x1407286C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140996564 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x140A65E4C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7E6CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A912F4 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140A98C04 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
