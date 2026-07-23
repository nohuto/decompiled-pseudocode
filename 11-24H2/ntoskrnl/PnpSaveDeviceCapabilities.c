/*
 * XREFs of PnpSaveDeviceCapabilities @ 0x14097BC44
 * Callers:
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14097B294 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14097BDFC (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 */

__int64 __fastcall PnpSaveDeviceCapabilities(__int64 a1, _DWORD *a2, char a3)
{
  int v5; // esi
  int v6; // r14d
  int v7; // r8d
  bool v8; // cf
  unsigned int *v9; // rax
  bool v10; // cf
  unsigned int *v11; // rax
  __int64 v13; // rcx
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+50h] BYREF

  v15 = 0;
  Handle = 0LL;
  v5 = a3 != 0 ? 0x20000 : 0;
  v6 = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 983103LL);
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x40) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 720);
      if ( !v13 || (*(_BYTE *)(v13 + 16) & 4) == 0 )
        a2[1] &= ~0x200u;
    }
    v7 = (int)Handle;
    *(_DWORD *)(a1 + 560) = a2[1];
    v15 = (a2[1] & 0x3FC | (a2[1] >> 13) & 8 | ((a2[1] & 0xC000 | (a2[1] >> 4) & 0x10000u) >> 4)) >> 2;
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), v7, 16, 4, (__int64)&v15, 4, v5);
    v8 = a2[3] != -1;
    v15 = a2[3];
    v9 = &v15;
    if ( v15 == -1 )
      v9 = 0LL;
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 17, 4, (__int64)v9, v8 ? 4 : 0, v5);
    v10 = a2[2] != -1;
    v15 = a2[2];
    v11 = &v15;
    if ( v15 == -1 )
      v11 = 0LL;
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 29, 4, (__int64)v11, v10 ? 4 : 0, v5);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
