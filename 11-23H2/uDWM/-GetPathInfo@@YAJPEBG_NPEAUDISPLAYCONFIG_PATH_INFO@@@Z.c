/*
 * XREFs of ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18002B118
 * Callers:
 *     ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18002B080 (-TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathInfo(const unsigned __int16 *a1, __int64 a2, struct DISPLAYCONFIG_PATH_INFO *a3)
{
  int v3; // r14d
  DISPLAYCONFIG_PATH_INFO *v5; // rbx
  DISPLAYCONFIG_MODE_INFO *v6; // rdi
  LONG DisplayConfigBufferSizes; // eax
  bool v9; // sf
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  int v13; // eax
  LONG DeviceInfo; // eax
  signed int v15; // esi
  const unsigned __int16 *v16; // rax
  int v17; // edx
  int v18; // ecx
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-49h] BYREF
  UINT32 numModeInfoArrayElements[3]; // [rsp+3Ch] [rbp-45h] BYREF
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+48h] [rbp-39h] BYREF
  char v23; // [rsp+5Ch] [rbp-25h] BYREF

  v3 = 0;
  numPathArrayElements = 0;
  v5 = 0LL;
  numModeInfoArrayElements[0] = 0;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
      v5 = 0LL;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
      v6 = 0LL;
    }
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, numModeInfoArrayElements);
    v9 = DisplayConfigBufferSizes < 0;
    if ( DisplayConfigBufferSizes > 0 )
      v9 = 1;
    if ( v9 )
      break;
    v10 = 72LL * numPathArrayElements;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      v10 = -1LL;
    v5 = (DISPLAYCONFIG_PATH_INFO *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v10);
    if ( !v5 )
      break;
    v11 = (unsigned __int64)numModeInfoArrayElements[0] << 6;
    if ( !is_mul_ok(numModeInfoArrayElements[0], 0x40uLL) )
      v11 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)(*(__int64 (__fastcall **)(WPF::HeapBase *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 v11);
    v6 = modeInfoArray;
    if ( !modeInfoArray )
      break;
    v13 = QueryDisplayConfig(2u, &numPathArrayElements, v5, numModeInfoArrayElements, modeInfoArray, 0LL);
    if ( v13 > 0 )
      v13 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 != -2147024774 )
    {
      if ( v13 >= 0 && numPathArrayElements )
      {
        while ( 1 )
        {
          memset_0(&requestPacket, 0, 0x54uLL);
          requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
          requestPacket.size = 84;
          requestPacket.adapterId = v5[v3].sourceInfo.adapterId;
          requestPacket.id = v5[v3].sourceInfo.id;
          DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
          v15 = DeviceInfo;
          if ( DeviceInfo > 0 )
            v15 = (unsigned __int16)DeviceInfo | 0x80070000;
          if ( v15 >= 0 )
          {
            v16 = a1;
            do
            {
              v17 = *(const unsigned __int16 *)((char *)v16 + &v23 - (char *)a1);
              v18 = *v16 - v17;
              if ( v18 )
                break;
              ++v16;
            }
            while ( v17 );
            if ( !v18 )
              break;
          }
          if ( ++v3 >= numPathArrayElements )
            goto LABEL_35;
        }
        if ( v3 != -1 )
        {
          *(_OWORD *)&a3->sourceInfo.adapterId.LowPart = *(_OWORD *)&v5[v3].sourceInfo.adapterId.LowPart;
          *(_OWORD *)&a3->sourceInfo.statusFlags = *(_OWORD *)&v5[v3].sourceInfo.statusFlags;
          *(_OWORD *)&a3->targetInfo.modeInfoIdx = *(_OWORD *)&v5[v3].targetInfo.modeInfoIdx;
          *(_OWORD *)&a3->targetInfo.refreshRate.Numerator = *(_OWORD *)&v5[v3].targetInfo.refreshRate.Numerator;
          *(_QWORD *)&a3->targetInfo.statusFlags = *(_QWORD *)&v5[v3].targetInfo.statusFlags;
          goto LABEL_29;
        }
      }
      break;
    }
  }
LABEL_35:
  v15 = -2147024809;
LABEL_29:
  if ( v5 )
    (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  if ( v6 )
    (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
  return (unsigned int)v15;
}
