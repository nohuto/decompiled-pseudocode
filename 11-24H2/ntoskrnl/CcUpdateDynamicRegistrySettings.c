/*
 * XREFs of CcUpdateDynamicRegistrySettings @ 0x140578D30
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcQueryRegKeyValue @ 0x14057883C (CcQueryRegKeyValue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CcUpdateDynamicRegistrySettings(__int64 a1)
{
  bool v1; // r14
  unsigned int v2; // r13d
  unsigned int v3; // r15d
  unsigned int v4; // edi
  int v5; // r12d
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  __int64 v8; // rax
  const char *v9; // rbx
  const char *v10; // r10
  const char *v11; // r9
  const char *v12; // r8
  const char *v13; // rdx
  const char *v14; // rcx
  const char *v15; // rax
  const char *v16; // r8
  const char *v17; // rcx
  const char *v18; // rdx
  const char *v19; // rax
  __int64 v20; // rbx
  int v21; // ecx
  const char *v22; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+40h] [rbp-C8h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  char v27; // [rsp+88h] [rbp-80h] BYREF
  char v28; // [rsp+89h] [rbp-7Fh]
  char v29; // [rsp+8Ah] [rbp-7Eh]
  char v30; // [rsp+8Bh] [rbp-7Dh]
  char v31; // [rsp+8Ch] [rbp-7Ch]
  char v32; // [rsp+8Dh] [rbp-7Bh]
  char v33; // [rsp+8Eh] [rbp-7Ah]
  char v34; // [rsp+8Fh] [rbp-79h]
  char v35; // [rsp+90h] [rbp-78h]
  char v36; // [rsp+91h] [rbp-77h]
  ULONG v37; // [rsp+94h] [rbp-74h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v39; // [rsp+A0h] [rbp-68h] BYREF
  char v40; // [rsp+B0h] [rbp-58h]
  char v41; // [rsp+B1h] [rbp-57h]
  int v42; // [rsp+B4h] [rbp-54h]
  int v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+BCh] [rbp-4Ch]
  unsigned int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  UNICODE_STRING v47; // [rsp+C8h] [rbp-40h] BYREF
  int v48; // [rsp+D8h] [rbp-30h]
  unsigned int v49; // [rsp+DCh] [rbp-2Ch]
  unsigned int v50; // [rsp+E0h] [rbp-28h]
  char v51; // [rsp+E8h] [rbp-20h] BYREF

  v37 = 156;
  *(_DWORD *)(&v47.MaximumLength + 1) = 0;
  *(_DWORD *)(&v39.MaximumLength + 1) = 0;
  P = &v51;
  v27 = 0;
  v1 = 0;
  v2 = 0;
  v48 = 0;
  v40 = 0;
  v3 = 0;
  v28 = 0;
  v4 = 0;
  v42 = 0;
  v5 = 0;
  v29 = 0;
  v43 = 0;
  v30 = 0;
  v44 = 0;
  v31 = 0;
  v49 = 0;
  v32 = 0;
  v50 = 0;
  v41 = 0;
  v45 = 0;
  v33 = 0;
  v46 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  DbgPrintEx(0x7Fu, 2u, "CcUpdateDynamicRegistrySettings: Updating Dynamic Registry Keys under: \"%wZ\"\n", a1 + 56);
  *(_DWORD *)&v47.Length = 11141288;
  v47.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  *(_DWORD *)&v39.Length = 2359330;
  v39.Buffer = L"TopBottomDPTEqual";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    v1 = v2 < 3;
  }
  *(_DWORD *)&v39.Length = 4063292;
  v39.Buffer = L"LazyWriterPercentageOfNumProcs";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v40 = 1;
    v48 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 1966108;
  v39.Buffer = L"LargeWriteSize";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v28 = 1;
    v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 3670070;
  v39.Buffer = L"SoftThrottleLargeWriteAtPct";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v29 = 1;
    v42 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 2883626;
  v39.Buffer = L"SoftThrottleDelayInMs";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v30 = 1;
    v43 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 2359330;
  v39.Buffer = L"MaxLazyWritePages";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v31 = 1;
    v44 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 4325440;
  v39.Buffer = L"PeriodicTelemetrySampleFrequency";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v32 = 1;
    v49 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 4194366;
  v39.Buffer = L"PeriodicTelemetryEventFrequency";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v41 = 1;
    v50 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 4325440;
  v39.Buffer = L"PeriodicTelemetryReportFrequency";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v33 = 1;
    v45 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 2883626;
  v39.Buffer = L"DisableCacheTelemetry";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v34 = 1;
    v46 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 2752552;
  v39.Buffer = L"EnableAsyncLazywrite";
  if ( CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27) >= 0 )
  {
    v35 = 1;
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  *(_DWORD *)&v39.Length = 3407922;
  v39.Buffer = L"EnableAsyncLazywriteMulti";
  v6 = CcQueryRegKeyValue(&v47, &v39, &v37, &P, &v27);
  v7 = P;
  if ( v6 >= 0 )
  {
    v8 = *((unsigned int *)P + 2);
    v36 = 1;
    v5 = *(_DWORD *)((char *)P + v8);
  }
  v9 = "valid";
  v10 = "valid";
  v11 = "valid";
  if ( !v31 )
    v10 = "not found";
  v12 = "valid";
  v13 = "valid";
  v14 = "valid";
  if ( !v30 )
    v11 = "not found";
  if ( !v29 )
    v12 = "not found";
  if ( !v28 )
    v13 = "not found";
  v15 = "valid";
  if ( !v40 )
    v14 = "not found";
  if ( !v1 )
    v15 = "not found";
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings(1/2): \n"
    "\tTopBottom                      : 0x%04lx(%s)\n"
    "\tLazyWriterPct                  : 0x%04lx(%s) (unsupported)\n"
    "\tLargeWriteSize                 : 0x%04lx(%s)\n"
    "\tSoftThrottleAt                 : 0x%04lx(%s)\n"
    "\tSoftThrottleDelay              : 0x%04lx(%s)\n"
    "\tMaxLazyWritePages              : 0x%04lx(%s)\n",
    v2,
    v15,
    v48,
    v14,
    v3,
    v13,
    v42,
    v12,
    v43,
    v11,
    v44,
    v10);
  v16 = "valid";
  v17 = "valid";
  v18 = "valid";
  if ( !v36 )
    v16 = "not found";
  v19 = "valid";
  if ( !v35 )
    v17 = "not found";
  LODWORD(v26) = v5;
  if ( !v34 )
    v18 = "not found";
  LODWORD(v25) = v4;
  if ( !v33 )
    v19 = "not found";
  LODWORD(v24) = v46;
  if ( !v32 )
    v9 = "not found";
  LODWORD(v23) = v45;
  v22 = v9;
  v20 = v49;
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings(2/2): \n"
    "\tPeriodicTelmetrySampleFrequency: 0x%04lx(%s)\n"
    "\tPeriodicTelmetryReportFrequency: 0x%04lx(%s)\n"
    "\tDisableCacheTelemetry          : 0x%04lx(%s)\n"
    "\tEnableAsyncLazywrite           : 0x%04lx(%s)\n"
    "\tEnableAsyncLazywriteMulti      : 0x%04lx(%s)\n",
    v49,
    v22,
    v23,
    v19,
    v24,
    v18,
    v25,
    v17,
    v26,
    v16);
  if ( v27 )
    ExFreePoolWithTag(v7, 0x78666343u);
  if ( v1 )
    CcAzure_TopBottomDPTEqual = v2;
  if ( v28 )
  {
    if ( !v3 || (CcAzure_LargeWriteSize = v3 << 10, v3 << 10 <= v3) )
      CcAzure_LargeWriteSize = 0;
  }
  if ( v29 )
  {
    v21 = 0;
    if ( (unsigned int)(v42 - 1) <= 0x63 )
      v21 = v42;
    CcAzure_SoftThrottleLargeWriteAtPct = v21;
  }
  if ( v30 && v43 )
    CcSoftThrottleDelay = v43;
  if ( v31 && (unsigned int)(v44 - 1) <= 0x7FFF )
    CcMaxLazyWritePages = v44;
  if ( v32 && (_DWORD)v20 )
    DueTime.QuadPart = -10000000 * v20;
  if ( v41 && v50 )
    unk_140F8E6C8 = 10000000LL * v50;
  if ( v33 && v45 )
    qword_140F8E6D0 = 10000000LL * v45;
  if ( v34 )
    byte_140F8E6E1 = v46 != 0;
  if ( v35 )
  {
    if ( v4 > 1 )
    {
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcUpdateDynamicRegistrySettings: Ignoring invalid EnableAsyncLazywrite(0x%04lx), no change to current value (0x%04lx)\n",
        v4,
        (unsigned __int8)CcEnableAsyncLazywrite);
    }
    else
    {
      CcEnableAsyncLazywrite = v4 != 0;
      if ( v4 && !CcEnablePerVolumeLazyWriter )
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcUpdateDynamicRegistrySettings: Setting EnableAsyncLazywrite requires per-Volume Lazywriter is to be enabled!\n");
    }
  }
  if ( v36 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        if ( CcEnablePerVolumeLazyWriter && CcEnableAsyncLazywrite )
          CcEnableAsyncLazywriteMulti = 1;
        else
          DbgPrintEx(
            0x7Fu,
            2u,
            "CcUpdateDynamicRegistrySettings: Setting EnableAsyncLazywriteMulti requires per-Volume Lazywriter and (simpl"
            "e) Async Lazywriter to be enabled!\n");
      }
      else
      {
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcUpdateDynamicRegistrySettings: Ignoring invalid EnableAsyncLazywriteMulti(0x%04lx), no change to current value (0x%04lx)\n",
          v5,
          (unsigned __int8)CcEnableAsyncLazywriteMulti);
      }
    }
    else
    {
      CcEnableAsyncLazywriteMulti = 0;
    }
  }
}
