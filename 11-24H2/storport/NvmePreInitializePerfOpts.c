/*
 * XREFs of NvmePreInitializePerfOpts @ 0x1400DD0A0
 * Callers:
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmePreInitializePerfOpts(__int64 a1)
{
  void *Data; // rbx
  unsigned int v2; // edi
  __int64 ActiveGroupCount; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int16 i; // r9
  unsigned int j; // r10d
  __int64 v9; // rax
  ULONG Type; // [rsp+40h] [rbp-38h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-34h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+48h] [rbp-30h] BYREF

  Data = (void *)(a1 + 1008);
  v2 = 0;
  PropertyKey = DEVPKEY_Device_Numa_Proximity_Domain;
  Type = 0;
  *(_DWORD *)(a1 + 1008) = 0;
  ActiveGroupCount = KeQueryActiveGroupCount();
  RequiredSize = 4;
  IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, 4u, Data, &RequiredSize, &Type);
  v5 = *(_QWORD *)(a1 + 144);
  if ( (v5 & 0x800) != 0 )
  {
    v6 = a1 + 584;
    if ( (v5 & 0x200) == 0 || !*(_QWORD *)(*(_QWORD *)v6 + 136LL) )
      *(_QWORD *)(*(_QWORD *)v6 + 136LL) = RaidAllocatePool(
                                             64LL,
                                             ActiveGroupCount << 6,
                                             1917083986LL,
                                             *(_QWORD *)(a1 + 8));
    if ( *(_QWORD *)(*(_QWORD *)v6 + 136LL) )
    {
      for ( i = 0; i < (unsigned __int16)ActiveGroupCount; ++i )
      {
        for ( j = 0; j < 0x40; ++j )
        {
          v9 = (i << 6) + j;
          *(_BYTE *)(v9 + *(_QWORD *)(*(_QWORD *)v6 + 136LL)) = -1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
