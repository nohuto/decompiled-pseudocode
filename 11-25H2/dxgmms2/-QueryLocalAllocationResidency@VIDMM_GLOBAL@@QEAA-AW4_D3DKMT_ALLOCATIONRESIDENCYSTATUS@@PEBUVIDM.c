/*
 * XREFs of ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x140105E4C
 * Callers:
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x140096058 (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MUL.c)
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140108144 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryLocalAllocationResidency(VIDMM_GLOBAL *this, const struct VIDMM_LOCAL_ALLOC *a2)
{
  _DWORD **v2; // r8
  unsigned int v4; // edi
  char *v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // esi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  ULONG_PTR ReturnLength; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_DWORD ***)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 72LL) )
  {
    return 1;
  }
  else if ( (*v2[47] & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v5 = (char *)*((_QWORD *)a2 + 2);
    v4 = 2;
    v6 = *((_QWORD *)*v2 + 2) >> 12;
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39856));
LABEL_15:
    if ( (_DWORD)v6 )
    {
      ReturnLength = 0LL;
      v7 = 2000;
      v8 = v5;
      if ( (unsigned int)v6 < 0x7D0 )
        v7 = v6;
      LODWORD(v6) = v6 - v7;
      v9 = (_QWORD *)((char *)this + 7864);
      v10 = v7;
      do
      {
        *v9 = 0LL;
        *(v9 - 1) = v5;
        v9 += 2;
        v5 += 4096;
        --v10;
      }
      while ( v10 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v8,
             MemoryWorkingSetExList,
             (char *)this + 7856,
             16LL * v7,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v7 )
      {
        v11 = 0;
        v4 = 2;
        v12 = (_QWORD *)((char *)this + 7864);
        while ( (*v12 & 1) != 0 || (*v12 & 0xC00000LL) == 0x400000 )
        {
          ++v11;
          v12 += 2;
          v5 += 4096;
          if ( v11 >= v7 )
            goto LABEL_15;
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5675;
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
      }
      v4 = 3;
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 4983) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 39856, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
