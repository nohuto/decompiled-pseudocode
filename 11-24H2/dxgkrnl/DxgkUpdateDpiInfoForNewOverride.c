/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1401CADC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x14006F8CC (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401CAB10 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1403D3160 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1403EC644 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *this,
        struct _LUID *a2,
        int a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // ebp
  int Win32DpiValues; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct _UNICODE_STRING *v15; // r9
  _BYTE v17[8]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v18[40]; // [rsp+58h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  memset(v18, 0, 32);
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v18);
  v10 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    v17[0] = 0;
    v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v17, 0);
    v10 = v14;
    if ( v14 >= 0 )
    {
      UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v18);
      LODWORD(v10) = DpiPersistence::WriteDpiToRegistry(this, (const struct _LUID *)v4, a3, v15);
      if ( (int)v10 >= 0 && (*((_DWORD *)a4 + 23) & 0x20) != 0 )
        dword_140160984 = a3;
      LogScaleFactor(*this, v4, 0, a4);
    }
    else
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 2356;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v17);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(2LL, v10, CurrentProcess);
    WdLogGlobalForLineNumber = 2344;
    v13 = PsGetCurrentProcess(v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Couldn't obtain scale factor collection, Status=0x%I64x EPROCESS=0x%I64x",
      v10,
      v13,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v10;
}
