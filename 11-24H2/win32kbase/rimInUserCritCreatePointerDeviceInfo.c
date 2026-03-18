/*
 * XREFs of rimInUserCritCreatePointerDeviceInfo @ 0x1400C7140
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1400C6E18 (rimDoRimDevChangeAsyncWorkItem.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x140046F28 (HMValidateSharedHandleNoRip.c)
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1400C7E10 (RIMFreeQDCActivePathsData.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140152D6C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     RIMGetMonitorPhysicalSize @ 0x1401E1980 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E1B1C (RIMReadDigitizerToMonitorMappings.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall rimInUserCritCreatePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  v2 = *(_QWORD *)(a2 + 456);
  v9 = 0LL;
  v4 = 0;
  v5 = RIMGetQDCActivePathsData(&v9);
  if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 6) > 1 )
  {
    LODWORD(v11) = 0;
    *(_DWORD *)(a2 + 1336) = 1;
    RIMReadDigitizerToMonitorMappings(a2);
    rimFindMonitorForDigitizerWithQDCData(a2, v5, &v11);
  }
  if ( *(_DWORD *)(v2 + 148) - *(_DWORD *)(v2 + 140) <= 1 || *(_DWORD *)(v2 + 152) - *(_DWORD *)(v2 + 144) <= 1 )
  {
    v6 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
    *(_OWORD *)(v2 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(v10, v6);
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v2);
  if ( *(_DWORD *)(v2 + 24) == 7 )
  {
    v7 = CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v2);
    if ( v7 < 0 )
      v7 = -1073741668;
    v4 = v7;
  }
  RIMFreeQDCActivePathsData(v5);
  return v4;
}
