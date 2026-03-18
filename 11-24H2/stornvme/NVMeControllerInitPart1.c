/*
 * XREFs of NVMeControllerInitPart1 @ 0x14001D11C
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     NVMeControllerReinitialize @ 0x1400274C4 (NVMeControllerReinitialize.c)
 * Callees:
 *     GetProcessorInformation @ 0x14000C190 (GetProcessorInformation.c)
 *     ControllerEnable @ 0x14000C780 (ControllerEnable.c)
 *     FillControllerRuntimeLog @ 0x140017B10 (FillControllerRuntimeLog.c)
 *     AdminQueueInitialize @ 0x140019CE4 (AdminQueueInitialize.c)
 *     NVMeWriteRegisterUlong64 @ 0x14001EEA0 (NVMeWriteRegisterUlong64.c)
 *     NVMeControllerIdentify @ 0x140026FDC (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x14002881C (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x14002891C (NVMeGetControllerUUIDListIdentify.c)
 *     NVMeGetNVMSetAttributeList @ 0x140028A84 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x140028C30 (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x140028D94 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1400297C8 (NVMeNameSpaceIdentify.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  const wchar_t *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  int v15; // eax
  int v16; // eax
  signed __int32 v17[10]; // [rsp+0h] [rbp-E8h] BYREF
  const wchar_t *v18; // [rsp+28h] [rbp-C0h]
  int v19; // [rsp+30h] [rbp-B8h]
  _DWORD *v20; // [rsp+38h] [rbp-B0h]
  int v21; // [rsp+40h] [rbp-A8h]
  __int64 *v22; // [rsp+48h] [rbp-A0h]
  int *v23; // [rsp+50h] [rbp-98h]
  int v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h] BYREF
  _DWORD v26[24]; // [rsp+70h] [rbp-78h] BYREF

  memset(v26, 0, 0x58uLL);
  if ( a2 && !AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(a1 + 28) = 7;
    v4 = L"Admin Queue Initialize failed";
LABEL_26:
    v13 = -1056964607;
    goto LABEL_27;
  }
  v5 = (*(_WORD *)(a1 + 324) - 1) & 0xFFF | ((unsigned __int16)((*(_WORD *)(a1 + 324) - 1) & 0xFFF) << 16);
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 36LL) = v5;
  _InterlockedOr(v17, 0);
  NVMeWriteRegisterUlong64(v5, *(_QWORD *)(a1 + 176) + 48LL, *(_QWORD *)(a1 + 552));
  NVMeWriteRegisterUlong64(v6, *(_QWORD *)(a1 + 176) + 40LL, *(_QWORD *)(a1 + 344));
  v7 = *(_QWORD *)(a1 + 192);
  if ( (v7 & 0x20000) != 0 && (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
    v8 = 2048;
  else
    v8 = 0;
  v9 = v8 | 0x60;
  if ( (v7 & 0x80000000000LL) == 0 )
    v9 = v8;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v9 | 0x460000;
  _InterlockedOr(v17, 0);
  StorPortStallExecution(5000LL);
  v13 = ControllerEnable(a1, v10, v11, v12);
  if ( !v13 )
  {
    if ( a2 || (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 24) &= ~0x20u;
      v13 = NVMeControllerIdentify(a1);
      if ( v13 )
      {
        *(_DWORD *)(a1 + 28) = 30;
        v4 = L"Identify controller failed";
        goto LABEL_27;
      }
      NVMeGetControllerIoCommandSetIdentify(a1);
      NVMeGetControllerUUIDListIdentify(a1);
      if ( a2 )
      {
        if ( !*(_BYTE *)(a1 + 20) )
          NVMeGetNVMSetAttributeList(a1);
        NVMeNameSpaceIdentify(a1);
        NVMeGetNamespaceDescriptorListIdentify(a1);
        NVMeGetNamespaceIoCommandSetIdentify(a1);
      }
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_DWORD *)(a1 + 232) = 65537;
    }
    else if ( !GetProcessorInformation(a1) )
    {
      *(_DWORD *)(a1 + 28) = 10;
      v4 = L"Get processor information failed";
      goto LABEL_26;
    }
    ++*(_DWORD *)(a1 + 4192);
    return v13;
  }
  *(_DWORD *)(a1 + 28) = 8;
  v4 = L"Controller enable failed";
LABEL_27:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v26);
    v25 = 0LL;
    v15 = *(_DWORD *)(a1 + 24);
    v23 = &v24;
    LODWORD(v25) = v15;
    v16 = *(_DWORD *)(a1 + 28);
    v22 = &v25;
    v21 = 8;
    v20 = v26;
    HIDWORD(v25) = v16;
    v19 = 88;
    v18 = v4;
    v17[8] = (unsigned __int16)v16;
    v24 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  ++*(_DWORD *)(a1 + 4196);
  return v13;
}
