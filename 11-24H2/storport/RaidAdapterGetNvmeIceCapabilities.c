/*
 * XREFs of RaidAdapterGetNvmeIceCapabilities @ 0x140183B0C
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     WPP_SF_qD @ 0x140067D68 (WPP_SF_qD.c)
 *     RaidInitializeNvmeIce @ 0x14006A850 (RaidInitializeNvmeIce.c)
 *     WPP_SF_qDqD @ 0x14006AECC (WPP_SF_qDqD.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400A8EE0 (StorEtwNVMeICEInterfaceEvent.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterGetNvmeIceCapabilities(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // edx
  _BYTE *Pool; // r14
  bool v6; // zf
  PVOID *i; // rsi
  PVOID v8; // rbp
  unsigned int v9; // eax
  const wchar_t *v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 936);
  v3 = *(_DWORD *)(a1 + 944) & 0x1F;
  v17 = 0;
  Pool = 0LL;
  v6 = (*(_BYTE *)(a1 + 112) & 0x10) == 0;
  v18 = *(_DWORD *)(a1 + 948) & 7 | (8 * ((32 * v2) | v3));
  if ( !v6 )
    return;
  ExAcquireResourceExclusiveLite(&NvmeIceListLock, 1u);
  for ( i = (PVOID *)NvmeIceList; i != &NvmeIceList; i = (PVOID *)*i )
  {
    v8 = i[5];
    v9 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD, unsigned int *))v8 + 4))(
           *((_QWORD *)v8 + 1),
           &v18,
           0LL,
           &v17);
    v1 = v9;
    if ( v9 == -1056964601 )
      goto LABEL_5;
    if ( v9 != -1056964604 )
    {
      v10 = L"Failed to query NVMe ICE required capability size";
      goto LABEL_23;
    }
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x72436152u);
    Pool = (_BYTE *)RaidAllocatePool(256LL, v17, 1917018450LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
    {
      v1 = -1073741670;
      break;
    }
    v9 = (*((__int64 (__fastcall **)(_QWORD, int *, _BYTE *, unsigned int *))v8 + 4))(
           *((_QWORD *)v8 + 1),
           &v18,
           Pool,
           &v17);
    v1 = v9;
    if ( v9 == -1056964601 )
    {
LABEL_5:
      v15 = 4;
      v10 = L"Device incompatible with NVMe ICE interface";
      v11 = 3238002695LL;
LABEL_24:
      StorEtwNVMeICEInterfaceEvent(a1, (__int64)i, v11, v10, v15);
      continue;
    }
    if ( v9 )
    {
      v10 = L"Unexpected error status from NVMe ICE QueryCapabilities";
LABEL_23:
      v15 = 2;
      v11 = v9;
      goto LABEL_24;
    }
    v13 = *(unsigned __int16 *)Pool;
    if ( (_DWORD)v13 == 1 )
    {
      if ( (Pool[4] & 1) == 0 )
      {
        StorEtwNVMeICEInterfaceEvent(a1, (__int64)i, 0LL, L"NVMe ICE interface does not support a page size of 4096", 4);
        continue;
      }
      *((_BYTE *)i + 96) = Pool[6];
      v9 = RaidInitializeNvmeIce(a1, (__int64)Pool, (__int64)i);
      v1 = v9;
      if ( !v9 )
        break;
      v10 = L"Failed to initialize NVMe ICE using compatible interface";
      goto LABEL_23;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(v16) = 0;
      LODWORD(v14) = *(unsigned __int16 *)Pool;
      WPP_SF_qDqD((__int64)WPP_GLOBAL_Control->AttachedDevice, v13, v12, a1, v14, v8, v16);
    }
  }
  ExReleaseResourceLite(&NvmeIceListLock);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x72436152u);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(v14) = v1;
    WPP_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids,
      a1,
      v14);
  }
}
