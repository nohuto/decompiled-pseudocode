/*
 * XREFs of RaidAdapterCreateDevmapEntry @ 0x1400554BC
 * Callers:
 *     RaidAdapterRegisterDeviceInterface @ 0x140055444 (RaidAdapterRegisterDeviceInterface.c)
 * Callees:
 *     PortMapBuildAdapterEntry @ 0x140038718 (PortMapBuildAdapterEntry.c)
 *     PortMapOpenKey @ 0x140038964 (PortMapOpenKey.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     RaidAdapterGetInitiatorBusId @ 0x14005A5A4 (RaidAdapterGetInitiatorBusId.c)
 *     PortMapBuildBusEntry @ 0x14013AD1C (PortMapBuildBusEntry.c)
 */

__int64 __fastcall RaidAdapterCreateDevmapEntry(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r14d
  unsigned __int8 InitiatorBusId; // al
  int v9; // [rsp+20h] [rbp-38h]
  void *v10; // [rsp+30h] [rbp-28h]
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  HANDLE v13; // [rsp+70h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  v13 = (HANDLE)-1LL;
  *(_OWORD *)v11 = 0LL;
  v2 = 0;
  if ( PortMapOpenKey(&v13) >= 0 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)v11);
    if ( (int)PortMapBuildAdapterEntry(
                (__int64)v13,
                *(_DWORD *)(a1 + 56),
                *(_DWORD *)(a1 + 856),
                v3,
                v9,
                (wchar_t **)v11,
                v10,
                &Handle) >= 0 )
    {
      v6 = *(unsigned __int8 *)(a1 + 456);
      if ( *(_BYTE *)(a1 + 456) )
      {
        do
        {
          if ( v2 >= 0xFF )
            break;
          LOBYTE(v4) = v2;
          InitiatorBusId = RaidAdapterGetInitiatorBusId(a1, v4, v5, a1 + 8 * (v2 + 260LL));
          PortMapBuildBusEntry(Handle, v2++, InitiatorBusId);
        }
        while ( v2 < v6 );
      }
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  if ( v13 != (HANDLE)-1LL )
    ZwClose(v13);
  return 0LL;
}
