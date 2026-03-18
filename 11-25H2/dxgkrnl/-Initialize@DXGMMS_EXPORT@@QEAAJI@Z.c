/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1401D84A8
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401CE15C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  char *v2; // rdi
  const WCHAR *v5; // rdx
  unsigned int i; // esi
  NTSTATUS v7; // ecx
  __int64 ExportedRoutineByName; // rax
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  int v11; // eax
  __int64 v12; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // ebp
  int v22; // edx
  __int64 v23; // rax

  v2 = (char *)this + 8;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v9 = -1073741811LL;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v10 = L"Unsupported DXGMMS version requested, returning 0x%I64x";
      WdLogGlobalForLineNumber = 43;
      goto LABEL_32;
    }
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 8), v5);
  for ( i = 0; ; ++i )
  {
    v7 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x30uLL);
    if ( v7 >= 0 || v7 == -1073741554 )
      break;
    if ( i >= 0xA )
    {
      WdLogSingleEntry5(0LL, 275LL, 27LL, v7, i, 0LL);
      WdLogGlobalForLineNumber = 84;
    }
    else
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
        "We broke into the  debugger to allow a chance for debugging this issue.\n"
        "Another attempt to load it will be made now.\n",
        v7);
      __debugbreak();
    }
  }
  ExportedRoutineByName = RtlFindExportedRoutineByName(*((_QWORD *)this + 3), "DriverUnload");
  *((_QWORD *)this + 9) = ExportedRoutineByName;
  if ( !ExportedRoutineByName )
  {
    v9 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v10 = L"Cannot find DriverUnload export in dxgmms.sys, returning 0x%I64x";
    WdLogGlobalForLineNumber = 95;
LABEL_32:
    v22 = 0x40000;
    goto LABEL_33;
  }
  v11 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))this + 5))(0LL, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)(a2 + 1), v11);
    WdLogGlobalForLineNumber = 105;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to load dxgmms%u.sys. Status=0x%.8x",
      (unsigned int)(a2 + 1),
      v12,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  v14 = *((_QWORD *)this + 3);
  *(_BYTE *)this = 1;
  v15 = RtlFindExportedRoutineByName(v14, "VidMmInterface");
  v16 = RtlFindExportedRoutineByName(*((_QWORD *)this + 3), "VidSchInterface");
  v18 = v16;
  if ( !v15 || !v16 )
  {
    v9 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v10 = L"Required export can't be found in dxgmms.sys, returning 0x%I64x";
    WdLogGlobalForLineNumber = 123;
    goto LABEL_32;
  }
  v19 = operator new(0x10uLL, 0x4B677844u, 64LL, v17);
  v21 = a2 + 1;
  if ( v19 )
  {
    *(_DWORD *)v19 = v21;
    *(_QWORD *)(v19 + 8) = v15;
  }
  else
  {
    v19 = 0LL;
  }
  *((_QWORD *)this + 8) = v19;
  if ( v19 )
  {
    v23 = operator new(0x10uLL, 0x4B677844u, 64LL, v20);
    if ( v23 )
    {
      *(_DWORD *)v23 = v21;
      *(_QWORD *)(v23 + 8) = v18;
    }
    else
    {
      v23 = 0LL;
    }
    *((_QWORD *)this + 7) = v23;
    if ( *((_QWORD *)this + 8) )
      return 0LL;
    v9 = -1073741801LL;
    WdLogSingleEntry1(6LL, -1073741801LL);
    v10 = L"Failed to allocate VIDSCH_EXPORT returning 0x%I64x";
    WdLogGlobalForLineNumber = 140;
  }
  else
  {
    v9 = -1073741801LL;
    WdLogSingleEntry1(6LL, -1073741801LL);
    v10 = L"Failed to allocate VIDMM_EXPORT returning 0x%I64x";
    WdLogGlobalForLineNumber = 133;
  }
  v22 = 262145;
LABEL_33:
  DxgkLogInternalTriageEvent(0LL, v22, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v9;
}
