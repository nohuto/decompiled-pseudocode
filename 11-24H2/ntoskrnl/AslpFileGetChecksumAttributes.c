/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x14080D3E0
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14080CB9C (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x1404AF948 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1406977B4 (RtlFileMapMapView.c)
 *     Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline @ 0x140697C2C (Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline.c)
 *     AslFileMappingEnsureMappedAs @ 0x14080996C (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x14080D30C (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x14080D98C (AslpFileGetCrcChecksum.c)
 *     AslpFileGetCrcChecksumBoot @ 0x14080DA84 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetImageNtHeader @ 0x14080E6E4 (AslpFileGetImageNtHeader.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, _DWORD *a2)
{
  int ImageNtHeader; // edi
  const char *v5; // r9
  int v6; // r8d
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _OWORD v12[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  unsigned int v14; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+40h] BYREF

  v15 = 0LL;
  v13 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( !a2[21] )
  {
    if ( a2[20] )
    {
      *(_DWORD *)(a1 + 88) |= 2u;
      *(_DWORD *)(a1 + 856) |= 2u;
LABEL_18:
      if ( (unsigned int)Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline() || a2[16] != 6 )
      {
        *(_DWORD *)(a1 + 1112) |= 2u;
      }
      else
      {
        ImageNtHeader = AslpFileGetImageNtHeader(&v15, a2);
        if ( ImageNtHeader < 0 )
        {
          v5 = "AslpFileGetImageNtHeader failed to get image header [%x]";
          v6 = 4645;
          goto LABEL_8;
        }
        v14 = 0;
        ImageNtHeader = AslpFileGetCrcChecksumBoot(&v14, v15, a2);
        if ( ImageNtHeader < 0 )
        {
          v5 = "AslpFileGetCrcChecksumBoot failed [%x]";
          v6 = 4652;
          goto LABEL_8;
        }
        v10 = v14;
        *(_DWORD *)(a1 + 1112) |= 1u;
        *(_QWORD *)(a1 + 1104) = v10;
        *(_DWORD *)(a1 + 1088) = 2;
        *(_QWORD *)(a1 + 1096) = 4LL;
      }
      ImageNtHeader = 0;
      goto LABEL_27;
    }
    ImageNtHeader = AslFileMappingEnsureMappedAs((__int64)a2);
    if ( (int)(ImageNtHeader + 0x80000000) < 0 || ImageNtHeader == -1073741554 )
    {
      v7 = a2 + 2;
      if ( ImageNtHeader == -1073741554 )
      {
        *(_QWORD *)&v12[0] = *v7;
        ImageNtHeader = RtlFileMapMapView((__int64)v12, 0);
        if ( ImageNtHeader < 0 )
        {
          v5 = "RtlFileMapMapView failed [%x]";
          v6 = 4587;
          goto LABEL_8;
        }
        v7 = v12;
      }
      v14 = 0;
      ImageNtHeader = AslpFileGetChecksum(&v14, (__int64)v7);
      if ( ImageNtHeader >= 0 )
      {
        v8 = v14;
        *(_DWORD *)(a1 + 88) |= 1u;
        v14 = 0;
        *(_QWORD *)(a1 + 80) = v8;
        *(_DWORD *)(a1 + 64) = 2;
        *(_QWORD *)(a1 + 72) = 4LL;
        ImageNtHeader = AslpFileGetCrcChecksum(&v14, v7);
        if ( ImageNtHeader >= 0 )
        {
          v9 = v14;
          *(_DWORD *)(a1 + 856) |= 1u;
          *(_QWORD *)(a1 + 848) = v9;
          *(_DWORD *)(a1 + 832) = 2;
          *(_QWORD *)(a1 + 840) = 4LL;
          goto LABEL_18;
        }
        v5 = "AslpFileGetCrcChecksum failed [%x]";
        v6 = 4621;
      }
      else
      {
        v5 = "AslpFileGetChecksum failed [%x]";
        v6 = 4604;
      }
    }
    else
    {
      v5 = "AslFileMappingEnsureMappedAs failed [%x]";
      v6 = 4569;
    }
LABEL_8:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetChecksumAttributes", v6, (_DWORD)v5);
    goto LABEL_27;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"AslpFileGetChecksumAttributes",
    4540,
    (unsigned int)"AslpFileGetChecksumAttributes called with a partial view which is not supported");
  *(_DWORD *)(a1 + 88) |= 2u;
  ImageNtHeader = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
  *(_DWORD *)(a1 + 1112) |= 2u;
LABEL_27:
  RtlFileMapFree((__int64)v12);
  return (unsigned int)ImageNtHeader;
}
