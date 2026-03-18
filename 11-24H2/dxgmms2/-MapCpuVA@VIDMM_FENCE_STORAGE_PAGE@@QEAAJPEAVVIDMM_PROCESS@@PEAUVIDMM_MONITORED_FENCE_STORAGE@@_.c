/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAXK@Z @ 0x1400FC550
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x1400FC4B8 (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1400901C0 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4,
        bool a5,
        SIZE_T a6,
        unsigned int a7)
{
  _QWORD *v7; // r13
  __int64 v11; // rcx
  char *v13; // rbp
  char *v14; // r14
  char *i; // rax
  __int64 v16; // rsi
  __int64 Pool2; // rax
  int v18; // edi
  void *v19; // rbp
  __int64 v20; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r12d
  SIZE_T v24; // rbx
  __int64 v25; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  char **v27; // rcx
  char *v28; // rax
  __int64 v29; // [rsp+60h] [rbp-48h]
  __int64 v30; // [rsp+B8h] [rbp+10h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v31; // [rsp+C0h] [rbp+18h]
  char v32; // [rsp+C8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v7 = (_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  if ( a2 && (*(_DWORD *)(*((_QWORD *)a2 + 4) + 408LL) & 0x100) != 0 )
  {
    if ( !*((_QWORD *)this + 18) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 534;
      DxgkLogInternalTriageEvent(v11, 262146LL);
    }
    *v7 = *((_QWORD *)this + 18);
    return 0LL;
  }
  else
  {
    v13 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    v14 = (char *)this + 40;
    *((_QWORD *)v13 + 1) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 5); i != v14; i = *(char **)i )
    {
      v16 = (__int64)(i - 16);
      if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
      {
        ++*((_DWORD *)i + 4);
LABEL_31:
        *v7 = *(_QWORD *)v16 + *((unsigned int *)v31 + 4);
        *((_QWORD *)v13 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    Pool2 = ExAllocatePool2(64LL, 40LL, 1700882774LL);
    v16 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = 1;
      *(_QWORD *)(Pool2 + 8) = a2;
      v22 = *(_QWORD *)a2;
      v30 = 0LL;
      v23 = a7;
      a6 = 4096LL;
      v29 = v22;
      if ( !a7 )
      {
        if ( PsGetProcessWow64Process(v22) || (v23 = 2, a4) )
          v23 = 4;
      }
      v24 = a6;
      v25 = *((_QWORD *)this + 13);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v18 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, SIZE_T, __int64 *, SIZE_T *, int, _DWORD, unsigned int))VirtualMemoryInterface
             + 3))(
              v25,
              v29,
              v16,
              0LL,
              v24,
              &v30,
              &a6,
              2,
              0,
              v23);
      if ( v18 >= 0 )
      {
        if ( !v32 || !a5 || (v18 = VidMmiEnsureVirtualAddressRangeValid(*(void **)v16, a6), v18 >= 0) )
        {
          v27 = (char **)*((_QWORD *)v14 + 1);
          v28 = (char *)(v16 + 16);
          if ( *v27 != v14 )
            __fastfail(3u);
          *(_QWORD *)v28 = v14;
          *(_QWORD *)(v16 + 24) = v27;
          *v27 = v28;
          *((_QWORD *)v14 + 1) = v28;
          goto LABEL_31;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 655;
      }
    }
    else
    {
      v18 = -1073741801;
    }
    *((_QWORD *)v13 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( v16 )
    {
      v19 = *(void **)v16;
      if ( *(_QWORD *)v16 )
      {
        v20 = *(_QWORD *)a2;
        v21 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, void *))v21 + 4))(v20, v19);
      }
      ExFreePoolWithTag((PVOID)v16, 0);
    }
    return (unsigned int)v18;
  }
}
