/*
 * XREFs of ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1401D0EEC
 * Callers:
 *     NtDxgkSetProperties @ 0x1402E1F00 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x1402E2560 (NtDxgkGetProperties.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PresentDurationPlaneProperty(struct DXGPROCESS *a1, const struct _LUID *a2, char a3)
{
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  struct DXGADAPTER *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64); // rax
  __int64 v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  struct DXGADAPTER *v16[2]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-28h] BYREF

  v4 = (__int64)a2;
  if ( !a1 )
  {
    v4 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v5 = L"Invalid process context, returning 0x%I64x";
    WdLogGlobalForLineNumber = 6169;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v5, v4, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v4;
  }
  if ( (*((_DWORD *)a1 + 102) & 0x1004) == 0 )
  {
    v4 = -1073741790LL;
    WdLogSingleEntry1(2LL, -1073741790LL);
    v5 = L"Only DWM or DRT test process is allowed to set and query present duration plane index. returning 0x%I64x";
    WdLogGlobalForLineNumber = 6175;
    goto LABEL_3;
  }
  v16[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v16, a2) )
  {
    v6 = v16[0];
    if ( *((_QWORD *)v16[0] + 391) )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17, v16[0], 1);
      if ( *((_DWORD *)v6 + 50) == 1 )
      {
        v9 = *((_QWORD *)v16[0] + 391);
        v10 = *(_QWORD *)(v9 + 744);
        v11 = *(_QWORD *)(*(_QWORD *)(v9 + 736) + 8LL);
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v11 + 1048);
        LOBYTE(v11) = a3;
        LODWORD(v4) = v12(v10, *(unsigned int *)(v4 + 8), v11, v4 + 12);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
      }
      else
      {
        WdLogSingleEntry3(2LL, *(int *)(v4 + 4), *(unsigned int *)v4, -1073741130LL);
        v15 = *(unsigned int *)v4;
        v14 = *(int *)(v4 + 4);
        WdLogGlobalForLineNumber = 6200;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
          v14,
          v15,
          -1073741130LL,
          0LL,
          0LL);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
        LODWORD(v4) = -1073741130;
      }
    }
    else
    {
      v7 = *(unsigned int *)v4;
      v8 = *(int *)(v4 + 4);
      LODWORD(v4) = -1073741637;
      WdLogSingleEntry3(3LL, v8, v7, -1073741637LL);
      WdLogGlobalForLineNumber = 6190;
    }
  }
  else
  {
    LODWORD(v4) = -1073741811;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v16, 0LL);
  return (unsigned int)v4;
}
