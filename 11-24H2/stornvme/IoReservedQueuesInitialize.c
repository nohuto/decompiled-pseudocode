/*
 * XREFs of IoReservedQueuesInitialize @ 0x14001ADD8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall IoReservedQueuesInitialize(__int64 a1)
{
  int v1; // eax
  void **v3; // rbx
  void **v4; // rsi
  unsigned int v5; // edx
  unsigned int v6; // eax

  v1 = *(unsigned __int16 *)(a1 + 982);
  if ( !(_WORD)v1 )
    return 0;
  v3 = (void **)(a1 + 968);
  StorPortExtendedFunction(0LL, a1, (unsigned int)(48 * v1), 1701672526LL);
  v4 = (void **)(a1 + 960);
  StorPortExtendedFunction(0LL, a1, *(unsigned __int16 *)(a1 + 982) << 6, 1701672526LL);
  if ( !*v3 || !*v4 )
  {
    NVMeFreePool(a1, *v3);
    NVMeFreePool(a1, *v4);
    return 0;
  }
  v5 = (48 * (unsigned int)*(unsigned __int16 *)(a1 + 982)) >> 2;
  if ( v5 )
    memset(*v3, 0, 4LL * v5);
  v6 = (unsigned int)(*(unsigned __int16 *)(a1 + 982) << 6) >> 2;
  if ( v6 )
    memset(*v4, 0, 4LL * v6);
  return 1;
}
