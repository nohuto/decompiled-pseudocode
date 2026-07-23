/*
 * XREFs of EtwpInitializeAutoLoggers @ 0x1407AF5E4
 * Callers:
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitializeGenericTableAvl @ 0x140451510 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpFreeKeyNameList @ 0x1407AF5B0 (EtwpFreeKeyNameList.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C405D8 (EtwpEnableBootLoggerRegistryProviders.c)
 */

PVOID __fastcall EtwpInitializeAutoLoggers(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *i; // rdi
  _WORD *v19; // rdx
  __int64 v20; // r8
  void *Pool2; // rdi
  void *v22; // rbx
  BOOLEAN NewElement[4]; // [rsp+48h] [rbp-C0h] BYREF
  ULONG BufferLengthOut[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  _RTL_AVL_TABLE Table; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR SourceString[16]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD Path[8]; // [rsp+E8h] [rbp-20h] BYREF
  int v29; // [rsp+168h] [rbp+60h]
  _OWORD v30[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v31; // [rsp+1F8h] [rbp+F0h]

  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[1] = v2;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\WMI\\AutoLogger";
  Path[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\WMI\\AutoLogger";
  Path[4] = v5;
  v7 = *(_OWORD *)L"ol\\WMI\\AutoLogger";
  Path[5] = v6;
  Path[6] = v7;
  v8 = *(_DWORD *)L"r";
  Path[7] = *(_OWORD *)L"utoLogger";
  v29 = v8;
  v9 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v30[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v10 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v30[1] = v9;
  v11 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v30[2] = v10;
  v12 = *(_OWORD *)L"ControlSet\\Control\\WMI\\GlobalLogger";
  v30[3] = v11;
  v13 = *(_OWORD *)L"et\\Control\\WMI\\GlobalLogger";
  v30[4] = v12;
  v14 = *(_OWORD *)L"ol\\WMI\\GlobalLogger";
  v30[5] = v13;
  v15 = *(_OWORD *)L"lobalLogger";
  v16 = *(_QWORD *)L"ger";
  v30[6] = v14;
  v30[7] = v15;
  v31 = v16;
  wcscpy(SourceString, L"GlobalLogger");
  memset_0(&Table, 0, sizeof(Table));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)EtwpAvlCompareKeyNames,
    (PRTL_AVL_ALLOCATE_ROUTINE)EtwpAllocateKeyNameEntry,
    (PRTL_AVL_FREE_ROUTINE)EtwpFreeKeyNameEntry,
    0LL);
  if ( a1 )
  {
    v17 = (_QWORD *)(a1 + 8);
    if ( (_QWORD *)*v17 != v17 )
    {
      EtwpEnableBootLoggerRegistryProviders(Path, a1);
      for ( i = (_QWORD *)*v17; i != v17; i = (_QWORD *)*i )
      {
        v19 = (_WORD *)i[2];
        v20 = -1LL;
        do
          ++v20;
        while ( v19[v20] );
        RtlInsertElementGenericTableAvl(&Table, v19, 2 * v20 + 2, NewElement);
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x208uLL, 0x74777445u);
  if ( Pool2 )
  {
    if ( RtlGetPersistedStateLocation(
           L"ETWAutoLoggerPath",
           0LL,
           0LL,
           LocationTypeRegistry,
           (PWCHAR)Pool2,
           0x208u,
           BufferLengthOut) )
    {
      ExFreePoolWithTag(Pool2, 0x74777445u);
      Pool2 = 0LL;
    }
    v22 = (void *)ExAllocatePool2(0x100uLL, 0x208uLL, 0x74777445u);
    if ( v22 )
    {
      if ( RtlGetPersistedStateLocation(
             L"ETWGlobalLoggerPath",
             0LL,
             0LL,
             LocationTypeRegistry,
             (PWCHAR)v22,
             0x208u,
             BufferLengthOut) )
      {
        ExFreePoolWithTag(v22, 0x74777445u);
        v22 = 0LL;
      }
      EtwStartAutoLogger(SourceString, (__int64)v30, (const WCHAR *)v22);
      EtwpEnumerateAutologgerPath((PCWSTR)Path, (const WCHAR *)Pool2, &Table);
      if ( !Pool2 )
        goto LABEL_18;
      EtwpEnumerateAutologgerPath((PCWSTR)Pool2, 0LL, &Table);
    }
    else if ( !Pool2 )
    {
      return EtwpFreeKeyNameList(&Table);
    }
    ExFreePoolWithTag(Pool2, 0x74777445u);
LABEL_18:
    if ( v22 )
      ExFreePoolWithTag(v22, 0x74777445u);
  }
  return EtwpFreeKeyNameList(&Table);
}
