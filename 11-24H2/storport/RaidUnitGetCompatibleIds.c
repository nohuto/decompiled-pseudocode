/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x14009E318
 * Callers:
 *     RaUnitQueryIdIrp @ 0x140186B14 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x14003A8F0 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x14003DE78 (RtlStringCchPrintfExW.c)
 *     McTemplateK0zqjuuussssq_EtwWriteTransfer @ 0x140090EE8 (McTemplateK0zqjuuussssq_EtwWriteTransfer.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x14009E23C (RaidUnitGet1667DeviceRegistryValue.c)
 *     PortGetDeviceType @ 0x1401B85BC (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1401BCFD0 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  int *v2; // rdi
  wchar_t *v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r14d
  unsigned int v9; // eax
  const char *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r10
  const char *v13; // rdi
  NTSTATUS v14; // edi
  wchar_t *Pool; // rax
  int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  wchar_t *v19; // rcx
  _QWORD *DeviceType; // rax
  size_t v21; // rdx
  wchar_t *v22; // rcx
  size_t v23; // rdx
  size_t v24; // r15
  NTSTRSAFE_PWSTR v25; // r14
  __int64 result; // rax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp+48h] BYREF
  size_t pcchRemaining; // [rsp+C0h] [rbp+50h] BYREF

  v2 = (int *)(a1 + 1952);
  v3 = 0LL;
  if ( !(unsigned int)RaUnitIsSMRDisabled(a1) || (*v2 & 1) != 0 )
  {
    Pool = (wchar_t *)RaidAllocatePool(256LL, 76LL, 1229218130LL, *(_QWORD *)(v6 + 8));
    v3 = Pool;
    if ( !Pool )
    {
      v14 = -1073741801;
      goto LABEL_28;
    }
    ppszDestEnd = Pool;
    v16 = *v2;
    pcchRemaining = 38LL;
    if ( (v16 & 1) != 0 )
    {
      v17 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
    }
    else if ( (v16 & 0x20) != 0 )
    {
      v14 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs", "ZNSDisk");
      v19 = ++ppszDestEnd;
      if ( v14 < 0 )
        goto LABEL_28;
      v17 = RtlStringCchPrintfExW(v19, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\RAW");
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 112) & 0x1F);
      v14 = RtlStringCchPrintfExW(v3, v21, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
      v22 = ppszDestEnd + 1;
      v23 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v14 < 0 )
        goto LABEL_28;
      v14 = RtlStringCchPrintfExW(v22, v23, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
      v24 = pcchRemaining;
      v25 = ++ppszDestEnd;
      if ( v14 < 0 )
        goto LABEL_28;
      RaidUnitGet1667DeviceRegistryValue(a1);
      if ( (*(_BYTE *)(a1 + 136) & 1) == 0 )
      {
LABEL_26:
        *v25 = 0;
        LOBYTE(v18) = 1;
        RaFixupIds(v3, v18, 38LL);
        goto LABEL_28;
      }
      v17 = RtlStringCchPrintfExW(v25, v24 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
    }
    v14 = v17;
    v25 = ppszDestEnd + 1;
    if ( v17 < 0 )
      goto LABEL_28;
    goto LABEL_26;
  }
  v7 = *(_QWORD *)(v6 + 24);
  v8 = *(_DWORD *)(v7 + 4664);
  if ( v8 > 1 )
  {
    v9 = *(_DWORD *)(v6 + 104);
    v10 = 0LL;
    v11 = *(_QWORD *)(v6 + 160);
    if ( v11 )
    {
      v10 = (const char *)(v11 + 90);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 && (*(_DWORD *)(*(_QWORD *)(v7 + 608) + 184LL) & 0x40) != 0 )
        v10 = (const char *)(v12 + 41);
    }
    if ( (byte_140171464 & 2) != 0 )
    {
      v13 = (const char *)&word_140150F48;
      if ( v10 )
        v13 = v10;
      McTemplateK0zqjuuussssq_EtwWriteTransfer(
        v9 >> 8,
        v7 + 5064,
        a1 + 242,
        *(const wchar_t **)(v7 + 4720),
        *(_DWORD *)(v7 + 56),
        v7 + 5064,
        v9,
        SBYTE1(v9),
        SBYTE2(v9),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v13,
        v8);
    }
  }
  v14 = -1073741637;
LABEL_28:
  result = (unsigned int)v14;
  *a2 = v3;
  return result;
}
