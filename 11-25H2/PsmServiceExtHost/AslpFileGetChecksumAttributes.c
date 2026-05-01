/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x1800A0078
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009F824 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009EED0 (AslFileMappingEnsureMappedAs.c)
 *     RtlFileMapFree @ 0x18009F4DC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x18009F638 (RtlFileMapMapView.c)
 *     AslpFileGetChecksum @ 0x18009FF9C (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x1800A0640 (AslpFileGetCrcChecksum.c)
 *     AslpFileGetCrcChecksumBoot @ 0x1800A0744 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetImageNtHeader @ 0x1800A13B0 (AslpFileGetImageNtHeader.c)
 *     Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline @ 0x1800A3828 (Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, _DWORD *a2)
{
  bool v2; // zf
  int Checksum; // edi
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _OWORD v11[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+38h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+40h] BYREF

  v13 = 0LL;
  v2 = a2[19] == 0;
  memset(v11, 0, sizeof(v11));
  if ( v2 )
  {
    if ( a2[18] )
    {
      *(_DWORD *)(a1 + 88) |= 2u;
      *(_DWORD *)(a1 + 856) |= 2u;
    }
    else
    {
      Checksum = AslFileMappingEnsureMappedAs((__int64)a2);
      if ( (int)(Checksum + 0x80000000) >= 0 && Checksum != -1073741554 )
        goto LABEL_7;
      v6 = a2 + 2;
      if ( Checksum == -1073741554 )
      {
        *(_QWORD *)&v11[0] = *v6;
        Checksum = RtlFileMapMapView((__int64)v11, 0);
        if ( Checksum < 0 )
          goto LABEL_7;
        v6 = v11;
      }
      v12 = 0;
      Checksum = AslpFileGetChecksum(&v12, (__int64)v6);
      if ( Checksum < 0 )
        goto LABEL_7;
      v7 = v12;
      *(_DWORD *)(a1 + 88) |= 1u;
      v12 = 0;
      *(_QWORD *)(a1 + 80) = v7;
      *(_DWORD *)(a1 + 64) = 2;
      *(_QWORD *)(a1 + 72) = 4LL;
      Checksum = AslpFileGetCrcChecksum(&v12, v6);
      if ( Checksum < 0 )
        goto LABEL_7;
      v8 = v12;
      *(_DWORD *)(a1 + 856) |= 1u;
      *(_QWORD *)(a1 + 848) = v8;
      *(_DWORD *)(a1 + 832) = 2;
      *(_QWORD *)(a1 + 840) = 4LL;
    }
    if ( (unsigned int)Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline() || a2[14] != 6 )
    {
      *(_DWORD *)(a1 + 1112) |= 2u;
      goto LABEL_20;
    }
    Checksum = AslpFileGetImageNtHeader(&v13, a2);
    if ( Checksum >= 0 )
    {
      v12 = 0;
      Checksum = AslpFileGetCrcChecksumBoot(&v12, v13, a2);
      if ( Checksum >= 0 )
      {
        v9 = v12;
        *(_DWORD *)(a1 + 1112) |= 1u;
        *(_QWORD *)(a1 + 1104) = v9;
        *(_DWORD *)(a1 + 1088) = 2;
        *(_QWORD *)(a1 + 1096) = 4LL;
LABEL_20:
        Checksum = 0;
        goto LABEL_21;
      }
    }
LABEL_7:
    AslLogCallPrintf(1LL);
    goto LABEL_21;
  }
  AslLogCallPrintf(1LL);
  *(_DWORD *)(a1 + 88) |= 2u;
  Checksum = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
  *(_DWORD *)(a1 + 1112) |= 2u;
LABEL_21:
  RtlFileMapFree((__int64)v11);
  return (unsigned int)Checksum;
}
