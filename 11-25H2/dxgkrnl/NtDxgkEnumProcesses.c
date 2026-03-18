/*
 * XREFs of NtDxgkEnumProcesses @ 0x1403B1060
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtDxgkEnumProcesses(ULONG64 a1)
{
  const void *v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int *v6; // rcx
  struct _LUID v7; // rdx
  ULONG64 v8; // r8
  _QWORD **v9; // rbx
  _QWORD *v10; // r9
  __int64 **v11; // r10
  _DWORD *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 *v15; // rcx
  DXGADAPTER *v16; // [rsp+50h] [rbp-48h] BYREF
  struct _LUID v17[2]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp-28h]

  *(_OWORD *)&v17[0].LowPart = 0LL;
  v18 = 0LL;
  v2 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v17, v2, 0x18uLL);
  v16 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v16, v17);
  if ( !v16 )
  {
    WdLogSingleEntry2(2LL, v17[0].HighPart, v17[0].LowPart);
    WdLogGlobalForLineNumber = 6583;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"NtDxgkEnumProcesses: Invalid Adapter (0x%I64x-0x%I64x) specified",
      v17[0].HighPart,
      v17[0].LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)v16 + 391);
  if ( !v4 )
  {
    WdLogSingleEntry2(3LL, v17[0].HighPart, v17[0].LowPart);
    WdLogGlobalForLineNumber = 6592;
LABEL_22:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v16, 0LL);
    return 3221225485LL;
  }
  if ( v18 > 0x3FFFFFFF )
  {
    WdLogSingleEntry1(3LL, v18);
    WdLogGlobalForLineNumber = 6604;
    goto LABEL_22;
  }
  v5 = v4 + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 72, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
  v6 = (unsigned int *)(v4 + 312);
  v7 = v17[1];
  if ( *(_QWORD *)&v17[1] && v18 >= *v6 )
  {
    v8 = (ULONG64)v17[1];
    v9 = (_QWORD **)(v4 + 296);
    v10 = *v9;
    v11 = (__int64 **)MmUserProbeAddress;
    while ( v10 != v9 )
    {
      v12 = (_DWORD *)v8;
      if ( v8 >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = *(_QWORD *)(*(_QWORD *)(*(v10 - 3) + 64LL) + 80LL);
      v8 += 4LL;
      v10 = (_QWORD *)*v10;
      v7 = v17[1];
    }
    v13 = (__int64)(v8 - *(_QWORD *)&v7) >> 2;
    v14 = 0;
  }
  else
  {
    v14 = -1073741789;
    v13 = *v6;
    v11 = (__int64 **)MmUserProbeAddress;
  }
  v15 = (__int64 *)(a1 + 16);
  if ( a1 + 16 >= (unsigned __int64)*v11 )
    v15 = *v11;
  *v15 = v13;
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 16));
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v16 )
    DXGADAPTER::ReleaseReference(v16);
  return v14;
}
