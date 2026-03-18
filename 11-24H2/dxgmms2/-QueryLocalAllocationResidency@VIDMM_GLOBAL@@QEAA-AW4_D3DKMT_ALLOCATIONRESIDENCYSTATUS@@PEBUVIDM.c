/*
 * XREFs of ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x140103C80
 * Callers:
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x140096188 (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MUL.c)
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140106214 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryLocalAllocationResidency(VIDMM_GLOBAL *this, const struct VIDMM_LOCAL_ALLOC *a2)
{
  _DWORD **v2; // r8
  unsigned int v4; // ebx
  char *v5; // r15
  char *v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  void *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  ULONG_PTR ReturnLength; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_DWORD ***)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 72LL) )
  {
    return 1;
  }
  else if ( (*v2[49] & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v5 = (char *)this + 39856;
    v6 = (char *)*((_QWORD *)a2 + 2);
    v4 = 2;
    v7 = *((_QWORD *)*v2 + 2) >> 12;
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39856));
LABEL_15:
    if ( (_DWORD)v7 )
    {
      ReturnLength = 0LL;
      v8 = 2000;
      v9 = v6;
      if ( (unsigned int)v7 < 0x7D0 )
        v8 = v7;
      LODWORD(v7) = v7 - v8;
      v10 = (_QWORD *)((char *)this + 7864);
      v11 = v8;
      do
      {
        *v10 = 0LL;
        *(v10 - 1) = v6;
        v10 += 2;
        v6 += 4096;
        --v11;
      }
      while ( v11 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v9,
             MemoryWorkingSetExList,
             (char *)this + 7856,
             16LL * v8,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v8 )
      {
        v12 = 0;
        v4 = 2;
        v13 = (_QWORD *)((char *)this + 7864);
        while ( (*v13 & 1) != 0 || (*v13 & 0xC00000LL) == 0x400000 )
        {
          ++v12;
          v13 += 2;
          v6 += 4096;
          if ( v12 >= v8 )
            goto LABEL_15;
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5775;
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
      }
      v4 = 3;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
