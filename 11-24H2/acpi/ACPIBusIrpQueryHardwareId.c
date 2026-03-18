/*
 * XREFs of ACPIBusIrpQueryHardwareId @ 0x1400B7EE4
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1400B8CC0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x14003FE50 (AMLIGetNSObjectType.c)
 *     RtlStringCbPrintfExW @ 0x140043050 (RtlStringCbPrintfExW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x14005B704 (WPP_RECORDER_SF_qdLqss.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     ACPIAllocateBuffer @ 0x1400B940C (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1400B94BC (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryHardwareId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  int v7; // esi
  wchar_t *v8; // rax
  size_t v9; // rbx
  NTSTRSAFE_PWSTR v10; // rdi
  const char *v11; // rax
  __int64 v12; // rdx
  const char *v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  bool v17; // sf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  void *Pool2; // rax
  size_t v22; // r8
  char *v23; // rdx
  __int64 v24; // rdx
  void *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  NTSTATUS v28; // eax
  bool v29; // zf
  int v30; // eax
  int dwFlags; // [rsp+20h] [rbp-49h]
  int pszFormat; // [rsp+28h] [rbp-41h]
  int v33; // [rsp+30h] [rbp-39h]
  PVOID v34; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-1h] BYREF
  size_t Size; // [rsp+70h] [rbp+7h] BYREF
  PVOID Src; // [rsp+78h] [rbp+Fh] BYREF
  PVOID P; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v39[7]; // [rsp+88h] [rbp+1Fh] BYREF
  size_t pcbRemaining; // [rsp+E0h] [rbp+77h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E8h] [rbp+7Fh] BYREF

  Src = 0LL;
  v34 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  Size = 0LL;
  v39[0] = 0LL;
  v7 = ACPIGet(a3, 1145653343, 268959830, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
  if ( v7 < 0 )
    goto LABEL_4;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, Size + 660);
  v9 = *a2;
  v10 = v8;
  pcbRemaining = v9;
  *a1 = v8;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_4;
  }
  v16 = *(_QWORD *)(a3 + 760);
  if ( v16 && (unsigned int)AMLIGetNSObjectType(v16) == 12 )
  {
    memmove(v10, Src, Size);
    if ( v9 < Size )
      goto LABEL_10;
    v7 = RtlStringCbPrintfExW(&v10[Size >> 1], v9 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_140076578);
    goto LABEL_23;
  }
  v18 = *(_QWORD *)(a3 + 8);
  if ( (v18 & 0x200000000000LL) == 0 || (v18 & 0x800000000000LL) != 0 )
    goto LABEL_64;
  v19 = *(_QWORD *)(a3 + 608);
  if ( !v19 )
  {
    v30 = ACPIGet(a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&v34, (__int64)&v35);
    goto LABEL_69;
  }
  v20 = -1LL;
  do
    ++v20;
  while ( *(_BYTE *)(v19 + v20) );
  v35 = v20;
  Pool2 = (void *)ExAllocatePool2(256LL, v20, 1114661697LL);
  v34 = Pool2;
  if ( !Pool2 )
    goto LABEL_10;
  v22 = v35;
  v23 = *(char **)(a3 + 608);
  if ( v35 >= 5 )
  {
    v22 = v35 - 5;
    v35 -= 5LL;
    v23 += 5;
  }
  memmove(Pool2, v23, v22);
  if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(v34, v35) && (*(_BYTE *)(a3 + 1120) & 0x1C) == 0 )
    goto LABEL_64;
  v25 = (void *)ExAllocatePool2(256LL, v24, 1114661697LL);
  v6 = v25;
  if ( !v25 )
    goto LABEL_10;
  if ( v35 == 7 )
  {
    v26 = 3LL;
  }
  else
  {
    v26 = 4LL;
    if ( v35 <= 4 )
      goto LABEL_39;
  }
  memmove(v25, (char *)v34 + v26, v35 - v26);
  *((_BYTE *)v34 + v26) = 0;
LABEL_39:
  v27 = *(_QWORD *)(a3 + 1120);
  if ( (v27 & 0x10) != 0 )
  {
    v7 = ACPIGet(a3, 1112888159, 268959764, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)v39);
    if ( v7 < 0 )
      goto LABEL_4;
    if ( (*(_BYTE *)(a3 + 1120) & 8) != 0 )
    {
      v33 = (int)v34;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v33 = (int)v34;
    v28 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S");
  }
  else
  {
    if ( (v27 & 8) != 0 )
    {
      v33 = (int)v34;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v33 = (int)v34;
    v28 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
  }
  v7 = v28;
  if ( v28 >= 0 )
  {
    if ( !ppszDestEnd || pcbRemaining < 2 )
      goto LABEL_10;
    v9 = pcbRemaining - 2;
    v10 = ppszDestEnd + 1;
    v29 = (*(_BYTE *)(a3 + 1120) & 4) == 0;
    ++ppszDestEnd;
    pcbRemaining -= 2LL;
    if ( !v29 )
    {
      v33 = (int)v34;
      v7 = RtlStringCbPrintfExW(
             v10,
             v9,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v33 = (int)v34;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      v7 = RtlStringCbPrintfExW(
             ppszDestEnd,
             pcbRemaining,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
    }
LABEL_64:
    if ( v9 > Size )
    {
      memmove(v10, Src, Size);
      if ( !v10 || v9 < Size )
      {
LABEL_23:
        v17 = v7 < 0;
        goto LABEL_70;
      }
      v30 = RtlStringCbPrintfExW(&v10[Size >> 1], v9 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_140076578);
LABEL_69:
      v7 = v30;
      v17 = v30 < 0;
LABEL_70:
      if ( !v17 )
        goto LABEL_10;
      goto LABEL_4;
    }
    v7 = -1073741670;
  }
LABEL_4:
  v11 = byte_1400753E8;
  v12 = 0LL;
  v13 = byte_1400753E8;
  if ( a3 )
  {
    v14 = *(_QWORD *)(a3 + 8);
    v12 = a3;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(a3 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a3 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x29u,
      dwFlags,
      pszFormat,
      v33,
      v7,
      v12,
      v11,
      v13);
LABEL_10:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( v34 )
    ExFreePoolWithTag(v34, 0x53706341u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
