/*
 * XREFs of DxgkSetYieldPercentage @ 0x1403D5B80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403D5E88 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403D5ED4 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetYieldPercentage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  __int64 v4; // rcx
  unsigned int *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  char v19; // [rsp+30h] [rbp-38h]
  unsigned int v20; // [rsp+38h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF

  v3 = (unsigned int *)a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2139;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2139);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2139);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v21 = 0LL;
    v5 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v5 = (unsigned int *)MmUserProbeAddress;
    v20 = *v5;
    v6 = v20;
    if ( v20 < 0x10 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 4518;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v17);
      }
      return 3221225485LL;
    }
    if ( v20 > 0x10 )
      v6 = 16;
    v20 = v6;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (unsigned int *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v21, v3, v6);
    if ( (unsigned int)(HIDWORD(v21) - 1) > 0x62 )
    {
      WdLogSingleEntry2(3LL, HIDWORD(v21), -1073741811LL);
      WdLogGlobalForLineNumber = 4542;
    }
    else if ( (DWORD2(v21) & 0xFFFFFFFE) != 0 )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4548;
    }
    else
    {
      if ( !DWORD1(v21) )
      {
        ApplyResourceManagerPolicyToRenderAdapters(0LL, &v21);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
        if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v17);
        return 0LL;
      }
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4554;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v17);
    return 3221225485LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v4);
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 4494;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v17);
    return 3221225506LL;
  }
}
