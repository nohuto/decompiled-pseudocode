/*
 * XREFs of RaidAdapterRescanBus @ 0x140017248
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidDeleteBusEnumerator @ 0x14000E8A0 (RaidDeleteBusEnumerator.c)
 *     RaidAdapterEnumerateBus @ 0x140018740 (RaidAdapterEnumerateBus.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x140056074 (RaidBusEnumeratorProcessModifiedNodes.c)
 *     RaidAdapterTargetedRescan @ 0x140064D84 (RaidAdapterTargetedRescan.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAdapterRescanBus(__int64 a1, int *a2, _BYTE *a3)
{
  char v3; // r13
  char v4; // bp
  bool v5; // bl
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-B8h] BYREF
  char v17[112]; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v18[3]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(_BYTE *)(a1 + 106);
  v4 = 0;
  v5 = 0;
  if ( !v3 && (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
    return 0LL;
  memset_0(v17, 0, sizeof(v17));
  v16 = a1;
  v18[1] = v18;
  v12 = 0;
  v18[0] = v18;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4264) = MEMORY[0xFFFFF78000000014];
    if ( (unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 11LL) )
      RaCallMiniportAdapterControl(a1 + 376, 11LL);
    v14 = *(_DWORD *)(a1 + 4824);
    v12 = RaidAdapterEnumerateBus(a1, v13, &v16);
    v4 = 1;
    v5 = v14 != *(_DWORD *)(a1 + 4824);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 4828) & 4) != 0 && (*(_DWORD *)(a1 + 4832) & 1) != 0 && *(_QWORD *)(a1 + 4880) )
        RtlSetBit((PRTL_BITMAP)(a1 + 4864), *(unsigned __int8 *)(*(_QWORD *)(a1 + 4840) + 8LL));
    }
    else
    {
      LOBYTE(v11) = v4;
      v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))RaidAdapterTargetedRescan)(
              a1,
              v10,
              &v16,
              v11);
      if ( !v4 )
        v12 = v15;
      if ( a2 )
        *a2 = v15;
      if ( a3 )
        *a3 = 1;
    }
  }
  if ( v12 >= 0 )
    RaidBusEnumeratorProcessModifiedNodes(&v16);
  RaidDeleteBusEnumerator((__int64)&v16);
  return (unsigned int)v12;
}
