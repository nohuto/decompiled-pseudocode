/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1404BBB34
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x140726258 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x140A5E534 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8DA98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *Pool2; // rax

  if ( !*(_QWORD *)(a2 + 8) )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    goto LABEL_5;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL, *(unsigned __int16 *)(a2 + 2), 0x67727453u);
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
