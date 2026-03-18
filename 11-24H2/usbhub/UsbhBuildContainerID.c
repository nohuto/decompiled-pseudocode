/*
 * XREFs of UsbhBuildContainerID @ 0x140059400
 * Callers:
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhMakeId @ 0x14001BA60 (UsbhMakeId.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     RtlStringCopyWorkerW @ 0x140058ECC (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x140058F28 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  UCHAR *v3; // r13
  wchar_t *v4; // r12
  __int64 v6; // r9
  _DWORD *v7; // r14
  char *Id; // r8
  int v9; // r8d
  NTSTATUS Property; // ebx
  char *v11; // r8
  unsigned __int64 v12; // rdi
  UCHAR *v13; // rdi
  wchar_t *Pool2; // rax
  size_t *v15; // r8
  size_t v16; // rdi
  NTSTATUS v17; // eax
  size_t *v18; // r8
  const wchar_t *v19; // r11
  NTSTATUS v20; // eax
  ULONG v21; // esi
  UCHAR *v22; // rax
  UCHAR *v23; // rax
  __int128 v24; // xmm0
  size_t cchToCopy; // [rsp+20h] [rbp-50h]
  size_t cchToCopya; // [rsp+20h] [rbp-50h]
  ULONG pcbResult[4]; // [rsp+40h] [rbp-30h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h]
  ULONG pbOutput; // [rsp+C0h] [rbp+50h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp+58h] BYREF

  phHash = 0LL;
  pbOutput = 0;
  pcbResult[0] = 0;
  v3 = 0LL;
  phAlgorithm = 0LL;
  v4 = 0LL;
  Log(a1, 4096, 1111705924, a2, 0LL);
  v7 = PdoExt(v6);
  LODWORD(pcchLength) = 0;
  Id = UsbhMakeId(0, L"nnnn", 0LL, &pcchLength, 0, 4, *((_WORD *)v7 + 704), 0LL);
  if ( !Id )
  {
    v9 = 1111699745;
LABEL_3:
    Property = -1073741670;
    Log(a1, 4096, v9, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  v11 = UsbhMakeId(0, L"nnnn", Id, &pcchLength, 0, 4, *((_WORD *)v7 + 705), 0LL);
  if ( !v11 )
  {
    v9 = 1111700001;
    goto LABEL_3;
  }
  P = UsbhMakeId(1, L"nnnn", v11, &pcchLength, 1u, 4, *((_WORD *)v7 + 706), 0LL);
  if ( !P )
  {
    v9 = 1111700257;
    goto LABEL_3;
  }
  v12 = (unsigned int)(pcchLength + v7[533]);
  if ( v12 < 2 )
  {
    Property = -1073741670;
    Log(a1, 4096, 1111700769, a2, -1073741670LL);
    v13 = 0LL;
    goto LABEL_40;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, (unsigned int)(pcchLength + v7[533]), 1112885333LL);
  v4 = Pool2;
  if ( !Pool2 )
  {
    Property = -1073741670;
    Log(a1, 4096, 1111700513, a2, -1073741670LL);
LABEL_39:
    v13 = 0LL;
    goto LABEL_40;
  }
  v16 = v12 >> 1;
  if ( !v16 )
  {
    Property = -1073741811;
    goto LABEL_39;
  }
  Property = RtlStringCopyWorkerW(Pool2, v16, v15, (STRSAFE_PCNZWCH)P, cchToCopy);
  if ( Property < 0 )
    goto LABEL_39;
  if ( *((_QWORD *)v7 + 267) )
  {
    pcchLength = 0LL;
    v17 = RtlStringLengthWorkerW(v4, v16, &pcchLength);
    if ( v17 >= 0 )
      v17 = RtlStringCopyWorkerW(&v4[pcchLength], v16 - pcchLength, v18, v19, cchToCopya);
    Property = v17;
    if ( v17 < 0 )
      goto LABEL_39;
  }
  pcchLength = 0LL;
  v20 = RtlStringLengthWorkerW(v4, v16, &pcchLength);
  if ( v20 < 0 )
  {
    Property = v20;
    goto LABEL_39;
  }
  v21 = 2 * pcchLength;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
  if ( Property < 0 )
  {
    phAlgorithm = 0LL;
    goto LABEL_39;
  }
  Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
  if ( Property < 0 )
    goto LABEL_39;
  if ( pcbResult[0] != 4 )
  {
    Property = -1073741306;
    goto LABEL_39;
  }
  v22 = (UCHAR *)ExAllocatePool2(64LL, pbOutput, 1112885333LL);
  v13 = v22;
  if ( v22 )
  {
    Property = BCryptCreateHash(phAlgorithm, &phHash, v22, pbOutput, 0LL, 0, 0);
    if ( Property < 0 )
      goto LABEL_40;
    Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
    if ( Property < 0 )
      goto LABEL_40;
    Property = BCryptHashData(phHash, (PUCHAR)v4, v21, 0);
    if ( Property < 0 )
      goto LABEL_40;
    Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
    if ( Property < 0 )
      goto LABEL_40;
    if ( pcbResult[0] != 4 || pbOutput < 0x10 )
    {
      Property = -1073741811;
      goto LABEL_40;
    }
    v23 = (UCHAR *)ExAllocatePool2(64LL, pbOutput, 1112885333LL);
    v3 = v23;
    if ( v23 )
    {
      Property = BCryptFinishHash(phHash, v23, pbOutput, 0);
      if ( Property >= 0 )
      {
        v24 = *(_OWORD *)v3;
        *((_BYTE *)v7 + 2732) = 1;
        *(_OWORD *)(v7 + 679) = v24;
        *((_WORD *)v7 + 1361) = *((_WORD *)v7 + 1361) & 0xFFF | 0x5000;
        *((_BYTE *)v7 + 2724) = v7[681] & 0x3F | 0x80;
      }
      goto LABEL_40;
    }
  }
  Property = -1073741670;
LABEL_40:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
