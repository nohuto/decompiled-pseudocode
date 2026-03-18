/*
 * XREFs of HUBID_FreeID @ 0x14001F60C
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B7B0 (HUBPDO_ReturnDeviceConfigInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall HUBID_FreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64334855u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
