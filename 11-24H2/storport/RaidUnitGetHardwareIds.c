/*
 * XREFs of RaidUnitGetHardwareIds @ 0x14009EB24
 * Callers:
 *     RaUnitQueryIdIrp @ 0x140186B14 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x14003A8F0 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x14003DE78 (RtlStringCchPrintfExW.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1400A1C98 (StorCopyNVMeFirmwareRevision.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     PortGetDeviceType @ 0x1401B85BC (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1401BCFD0 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  __int64 v2; // r9
  wchar_t *Pool; // rax
  wchar_t *v5; // rsi
  wchar_t *v6; // r10
  int v7; // eax
  NTSTATUS v8; // ebx
  wchar_t *v9; // r10
  size_t v10; // rdx
  NTSTATUS v11; // eax
  unsigned __int16 *v12; // rbx
  unsigned __int64 v13; // rcx
  _BYTE *v14; // r15
  _QWORD *DeviceType; // r14
  __int64 v16; // rax
  _BYTE *v17; // r13
  _BYTE *v18; // r12
  _BYTE *v19; // r15
  NTSTATUS v20; // eax
  wchar_t v21; // r8
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  _BYTE *v26; // [rsp+40h] [rbp-99h]
  _BYTE *v27; // [rsp+48h] [rbp-91h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-89h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-81h] BYREF
  wchar_t **v30; // [rsp+60h] [rbp-79h]
  __int128 v31; // [rsp+68h] [rbp-71h] BYREF
  char v32; // [rsp+78h] [rbp-61h]
  __int128 v33; // [rsp+80h] [rbp-59h] BYREF
  char v34; // [rsp+90h] [rbp-49h]
  _OWORD v35[4]; // [rsp+A0h] [rbp-39h] BYREF
  char v36; // [rsp+E0h] [rbp+7h]

  v2 = *(_QWORD *)(a1 + 8);
  v30 = a2;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 718LL, 1229218130LL, v2);
  v5 = Pool;
  pcchRemaining = 359LL;
  if ( !Pool )
  {
    v8 = -1073741801;
    goto LABEL_27;
  }
  v6 = Pool;
  ppszDestEnd = Pool;
  v7 = *(_DWORD *)(a1 + 1952);
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x20) != 0 )
    {
      v12 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 24) + 6000LL);
      v31 = 0LL;
      v32 = 0;
      memset_0(v35, 0, 0x41uLL);
      v34 = 0;
      v33 = 0LL;
      v13 = *v12;
      BYTE3(v31) = `RaidHexFromUshort'::`2'::hexDigits[*v12 & 0xF];
      BYTE2(v31) = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v13 >> 4];
      BYTE1(v31) = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v13 >> 8) & 0xF];
      LOBYTE(v31) = `RaidHexFromUshort'::`2'::hexDigits[v13 >> 12];
      v35[0] = *(_OWORD *)(v12 + 12);
      v35[1] = *(_OWORD *)(v12 + 20);
      v35[2] = *(_OWORD *)(v12 + 28);
      v35[3] = *(_OWORD *)(v12 + 36);
      v36 = *((_BYTE *)v12 + 88);
      StorCopyNVMeFirmwareRevision(v12, &v33, 17LL);
      v8 = RtlStringCchPrintfExW(
             v5,
             0x167uLL,
             &ppszDestEnd,
             &pcchRemaining,
             0,
             L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
             "ZNSDisk",
             &v31,
             v35,
             &v33);
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v8 < 0 )
        goto LABEL_24;
      v8 = RtlStringCchPrintfExW(
             v9,
             v10,
             &ppszDestEnd,
             &pcchRemaining,
             0,
             L"NVME\\%hs_%8.8hs%40.40hs",
             "ZNSDisk",
             &v31,
             v35);
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v8 < 0 )
        goto LABEL_24;
      v8 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs_%8.8hs", "ZNSDisk", &v31);
      if ( v8 >= 0 )
      {
        ++ppszDestEnd;
        v11 = RtlStringCchPrintfExW(
                ppszDestEnd,
                pcchRemaining - 1,
                &ppszDestEnd,
                &pcchRemaining,
                0,
                L"%hs",
                "GenNvmeDisk");
        goto LABEL_5;
      }
    }
    else
    {
      v14 = *(_BYTE **)(a1 + 112);
      DeviceType = (_QWORD *)PortGetDeviceType(*v14 & 0x1F);
      if ( *(_DWORD *)(a1 + 3432) == 17 )
      {
        v16 = *(_QWORD *)(a1 + 160);
        if ( v16 )
        {
          v8 = RtlStringCchPrintfExW(
                 v5,
                 v10,
                 &ppszDestEnd,
                 &pcchRemaining,
                 0,
                 L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
                 *DeviceType,
                 v14 + 8,
                 v16 + 25,
                 v16 + 90);
          v9 = ppszDestEnd + 1;
          v10 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v8 < 0 )
            goto LABEL_24;
          v8 = RtlStringCchPrintfExW(
                 v9,
                 v10,
                 &ppszDestEnd,
                 &pcchRemaining,
                 0,
                 L"SCSI\\%hs%8.8hs%40.40hs",
                 *DeviceType,
                 v14 + 8,
                 *(_QWORD *)(a1 + 160) + 25LL);
          v9 = ppszDestEnd + 1;
          v10 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v8 < 0 )
            goto LABEL_24;
        }
      }
      v17 = v14 + 32;
      v27 = v14 + 32;
      v18 = v14 + 16;
      v26 = v14 + 16;
      v19 = v14 + 8;
      v20 = RtlStringCchPrintfExW(
              v9,
              v10,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
              *DeviceType,
              v19,
              v26,
              v27);
      v21 = 0;
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v8 = v20;
      if ( v20 < 0 )
        goto LABEL_25;
      v22 = RtlStringCchPrintfExW(
              v9,
              v10,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\%hs%8.8hs%16.16hs",
              *DeviceType,
              v19,
              v18);
      v21 = 0;
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v8 = v22;
      if ( v22 < 0 )
        goto LABEL_25;
      v8 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *DeviceType, v19);
      if ( v8 >= 0 )
      {
        ++ppszDestEnd;
        --pcchRemaining;
        v23 = RtlStringCchPrintfExW(
                ppszDestEnd,
                pcchRemaining,
                &ppszDestEnd,
                &pcchRemaining,
                0,
                L"SCSI\\%8.8hs%16.16hs%1.1hs",
                v19,
                v18,
                v17);
        v21 = 0;
        v9 = ppszDestEnd + 1;
        v10 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
        v8 = v23;
        if ( v23 < 0 )
          goto LABEL_25;
        v24 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v19, v18, v17);
        v21 = 0;
        v9 = ppszDestEnd + 1;
        v10 = pcchRemaining - 1;
        ++ppszDestEnd;
        v8 = v24;
        if ( v24 < 0 || (unsigned int)RaUnitIsSMRDisabled(a1) )
          goto LABEL_25;
        v11 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"%hs", DeviceType[1]);
        goto LABEL_5;
      }
    }
    v9 = ppszDestEnd;
    goto LABEL_24;
  }
  v8 = RtlStringCchPrintfExW(
         v6,
         0x167uLL,
         &ppszDestEnd,
         &pcchRemaining,
         0,
         L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
         *(_QWORD *)(a1 + 112) + 8LL,
         *(_QWORD *)(a1 + 112) + 16LL,
         *(_QWORD *)(a1 + 112) + 32LL);
  v9 = ppszDestEnd + 1;
  v10 = pcchRemaining - 1;
  ++ppszDestEnd;
  if ( v8 >= 0 )
  {
    v11 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
LABEL_5:
    v8 = v11;
    v9 = ppszDestEnd + 1;
  }
LABEL_24:
  v21 = 0;
LABEL_25:
  *v9 = v21;
  LOBYTE(v10) = 1;
  RaFixupIds(v5, v10, 359LL);
LABEL_27:
  *v30 = v5;
  return (unsigned int)v8;
}
