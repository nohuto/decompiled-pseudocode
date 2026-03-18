/*
 * XREFs of NtDxgkEnumProcesses @ 0x1403A2500
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtDxgkEnumProcesses(ULONG64 a1)
{
  const void *v2; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int *v6; // rcx
  struct _LUID v7; // rdx
  ULONG64 v8; // rbx
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 **v11; // r8
  int ProcessID; // eax
  _DWORD *v13; // rdx
  __int64 v14; // rbx
  unsigned int v15; // edi
  __int64 *v16; // rcx
  DXGADAPTER *v17; // [rsp+50h] [rbp-48h] BYREF
  struct _LUID v18[2]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-28h]

  *(_OWORD *)&v18[0].LowPart = 0LL;
  v19 = 0LL;
  v2 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v18, v2, 0x18uLL);
  v17 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v17, v18);
  if ( !v17 )
  {
    WdLogSingleEntry2(2LL, v18[0].HighPart, v18[0].LowPart);
    WdLogGlobalForLineNumber = 6695;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NtDxgkEnumProcesses: Invalid Adapter (0x%I64x-0x%I64x) specified",
      v18[0].HighPart,
      v18[0].LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)v17 + 391);
  if ( !v4 )
  {
    WdLogSingleEntry2(3LL, v18[0].HighPart, v18[0].LowPart);
    WdLogGlobalForLineNumber = 6704;
LABEL_22:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v17, 0LL);
    return 3221225485LL;
  }
  if ( v19 > 0x3FFFFFFF )
  {
    WdLogSingleEntry1(3LL, v19);
    WdLogGlobalForLineNumber = 6716;
    goto LABEL_22;
  }
  v5 = v4 + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 72, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
  v6 = (unsigned int *)(v4 + 312);
  v7 = v18[1];
  if ( *(_QWORD *)&v18[1] && v19 >= *v6 )
  {
    v8 = (ULONG64)v18[1];
    v9 = (_QWORD *)(v4 + 296);
    v10 = *(_QWORD **)(v4 + 296);
    v11 = (__int64 **)MmUserProbeAddress;
    while ( v10 != v9 )
    {
      ProcessID = DXGPROCESS::GetProcessID((DXGPROCESS *)*(v10 - 3));
      v11 = (__int64 **)MmUserProbeAddress;
      v13 = (_DWORD *)v8;
      if ( v8 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = ProcessID;
      v8 += 4LL;
      v10 = (_QWORD *)*v10;
      v7 = v18[1];
    }
    v14 = (__int64)(v8 - *(_QWORD *)&v7) >> 2;
    v15 = 0;
  }
  else
  {
    v15 = -1073741789;
    v14 = *v6;
    v11 = (__int64 **)MmUserProbeAddress;
  }
  v16 = (__int64 *)(a1 + 16);
  if ( a1 + 16 >= (unsigned __int64)*v11 )
    v16 = *v11;
  *v16 = v14;
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 16));
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v17 )
    DXGADAPTER::ReleaseReference(v17);
  return v15;
}
