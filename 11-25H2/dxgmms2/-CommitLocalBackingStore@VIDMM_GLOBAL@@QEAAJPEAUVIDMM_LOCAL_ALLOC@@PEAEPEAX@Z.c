/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1400CC1F4
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400CBC98 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F39C8 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x14010322C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        void **a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  int v6; // edi
  _QWORD *v7; // r14
  __int64 v8; // r13
  __int64 v9; // r8
  VIDMM_PROCESS *v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // edx
  VIDMM_GLOBAL *v14; // r10
  unsigned int v15; // esi
  char v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  VIDMM_GLOBAL *v20; // rsi
  VIDMM_PROCESS *v21; // rcx
  __int64 v23; // rcx
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v25; // eax
  unsigned __int8 *v26; // r12
  __int64 v27; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v29; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rdx
  void *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  VIDMM_PROCESS *v52; // rcx
  __int64 v53; // rbx
  struct _MDL *v54; // rbx
  __int64 v55; // rcx
  PVOID Base; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int8 *v58; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-A0h] BYREF
  VIDMM_PROCESS *v60; // [rsp+80h] [rbp-98h]
  __int64 v61; // [rsp+88h] [rbp-90h] BYREF
  VIDMM_PROCESS *v62; // [rsp+90h] [rbp-88h]
  struct _KAPC_STATE v63; // [rsp+98h] [rbp-80h] BYREF
  VIDMM_PROCESS *v64; // [rsp+C8h] [rbp-50h]

  v58 = a3;
  v62 = (VIDMM_PROCESS *)a2;
  v6 = 0;
  Base = 0LL;
  v7 = *a2;
  v8 = *(_QWORD *)*a2;
  v60 = (VIDMM_PROCESS *)a2[1];
  v64 = v60;
  VIDMM_PROCESS::SafeAttach(v60, &v63);
  v9 = *((unsigned int *)v7 + 7);
  if ( (v9 & 0x4000) != 0 )
  {
    v44 = (void *)v7[52];
LABEL_37:
    Base = v44;
    goto LABEL_22;
  }
  v10 = v60;
  if ( (v9 & 0x88000) == 0x88000 )
  {
    v48 = *((_QWORD *)v60 + 4);
    if ( v48 )
    {
      if ( (*(_DWORD *)(v48 + 408) & 0x100) != 0 )
      {
        v44 = (void *)v7[49];
        goto LABEL_37;
      }
    }
  }
  if ( (v9 & 0x10800) != 0 )
    goto LABEL_22;
  v11 = *(unsigned int *)v7[47];
  if ( (v9 & 0x80000) != 0 )
  {
    if ( (v11 & 0x400000) != 0
      || (ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v7[26], v11, v9, v60),
          v25 = ObOpenObjectByPointer((PVOID)v7[26], 0, 0LL, 0, ObjectType, 1, a2 + 11),
          v6 = v25,
          v25 >= 0) )
    {
      if ( (*((_DWORD *)v7 + 7) & 0x80u) == 0 )
        goto LABEL_22;
      v59 = 0LL;
      v26 = *(unsigned __int8 **)(v8 + 16);
      v58 = v26;
      v27 = *(unsigned int *)v7[47];
      if ( (v27 & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess(v27, v11, v9, v10);
        v29 = v7[26];
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v31 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, unsigned __int8 *, __int64 *, unsigned __int8 **, int, _DWORD, int))VirtualMemoryInterface
               + 3))(
                v29,
                CurrentProcess,
                &Base,
                0LL,
                v26,
                &v59,
                &v58,
                2,
                0,
                4);
      }
      else
      {
        v45 = PsGetCurrentProcess(v27, v11, v9, v10);
        v46 = v7[26];
        v47 = DxgkGetVirtualMemoryInterface();
        v31 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, unsigned __int8 *, __int64 *, unsigned __int8 **, int, _DWORD, int))v47
               + 3))(
                v46,
                v45,
                &Base,
                0LL,
                v26,
                &v59,
                &v58,
                2,
                0,
                1028);
      }
      v6 = v31;
      if ( v31 >= 0 )
        goto LABEL_22;
      _InterlockedAdd(&dword_14008169C, 1u);
      v36 = v31;
      v37 = PsGetCurrentProcess(v33, v32, v34, v35);
      WdLogSingleEntry3(6LL, v7, v37, v36);
      WdLogGlobalForLineNumber = 27413;
      PsGetCurrentProcess(v39, v38, v40, v41);
      v43 = 262145LL;
    }
    else
    {
      WdLogSingleEntry2(1LL, v7[26], v25);
      WdLogGlobalForLineNumber = 27355;
      v42 = v7[26];
      v43 = 0x40000LL;
    }
    DxgkLogInternalTriageEvent(v42, v43);
    goto LABEL_24;
  }
  if ( (v11 & 8) != 0 || (v11 & 0x20000) != 0 )
  {
LABEL_22:
    v20 = this;
    goto LABEL_23;
  }
  if ( (v11 & 0x10) != 0 )
  {
    if ( (v9 & 0x2000) == 0 )
    {
      if ( a4 != (a4 & 0xFFFFFFFFFFFFF000uLL) || *(_QWORD *)(v8 + 8) != (*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFF000uLL) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 27450;
        DxgkLogInternalTriageEvent(v49, 0x40000LL);
        v6 = -1073741811;
        goto LABEL_24;
      }
      if ( (v7[3] & 0x1000) == 0 )
        ProbeForWrite((volatile void *)a4, *(_QWORD *)(v8 + 16), 1u);
    }
    goto LABEL_47;
  }
  if ( (v11 & 0x20) == 0 )
  {
    if ( (v9 & 0x8000) != 0 )
    {
      v15 = ((v11 & 4) != 0) + 9;
    }
    else if ( (v9 & 0x200000) != 0 )
    {
      v15 = 2;
    }
    else
    {
      if ( (v9 & 0x80u) == 0LL )
      {
        v14 = this;
        v15 = 4;
        if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 8) == 0 && (v11 & 4) == 0 )
          v15 = 3;
LABEL_15:
        v61 = 0LL;
        v16 = BYTE1(v9) & 1;
        if ( v15 - 3 > 3
          && (*((_DWORD *)v7 + 6) & 0x80u) == 0
          && ((*(_DWORD *)(*((_QWORD *)v14 + 3) + 444LL) & 8) != 0 || (*(_DWORD *)v7[47] & 1) != 0) )
        {
          v16 = 0;
        }
        if ( v15 - 9 <= 1 )
          v16 = 0;
        v17 = *((_QWORD *)v60 + 3);
        v7[28] = v17;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD *, PVOID *, __int64 *, unsigned __int8 *, bool, char))(*(_QWORD *)v17 + 16LL))(
                v17,
                *(_QWORD *)(v8 + 16),
                *(unsigned int *)(v8 + 32),
                v15,
                v7 + 29,
                &Base,
                &v61,
                v58,
                (*((_DWORD *)v7 + 7) & 0x100000) != 0,
                v16);
        v6 = v18;
        if ( v18 < 0 )
        {
          _InterlockedAdd(&dword_140081728, 1u);
          WdLogSingleEntry2(6LL, *(_QWORD *)(v8 + 16), v18);
          WdLogGlobalForLineNumber = 27626;
          DxgkLogInternalTriageEvent(v23, 262145LL);
        }
        else
        {
          v19 = *((_DWORD *)v7 + 7);
          if ( (v19 & 0x8000) != 0 )
            v7[52] = v61;
          if ( (v19 & 0x200000) != 0 )
          {
            v53 = v7[43];
            MmGetPhysicalAddress(*(PVOID *)(v53 + 56));
            v54 = VidMmiBuildMdlForContiguousMmIo(Base, *(_QWORD *)(v8 + 16), *(union _LARGE_INTEGER *)(v53 + 64));
            if ( v54 )
            {
              v20 = this;
              v6 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, _QWORD, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v7[28] + 48LL))(
                     v7[28],
                     this,
                     v7[29],
                     1LL,
                     v54,
                     *(_QWORD *)(v8 + 16),
                     0LL,
                     0LL,
                     0);
              if ( v6 < 0 )
                ExFreePoolWithTag(v54, 0);
              else
                *((_BYTE *)v7 + 36) |= 1u;
              if ( v6 >= 0 )
                goto LABEL_23;
            }
            else
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 27646;
              DxgkLogInternalTriageEvent(v55, 0x40000LL);
              v6 = -1073741801;
              v20 = this;
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7[28] + 24LL))(v7[28], v7[29]);
LABEL_23:
            _InterlockedAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 2)
                                                                + 8LL * *(unsigned int *)(*((_QWORD *)v20 + 3) + 240LL))
                                                    + 16LL)
                                        + 304LL * (v7[3] & 0x3F)
                                        + 232),
              *(_QWORD *)(v8 + 16));
            v21 = v62;
            *((_QWORD *)v62 + 2) = Base;
LABEL_24:
            VIDMM_PROCESS::SafeDetach(v21, &v63);
            return (unsigned int)v6;
          }
        }
        goto LABEL_22;
      }
      v12 = *(_DWORD *)v7[47] & 4;
      if ( (v7[3] & 0x100) == 0 )
      {
        v13 = *(_DWORD *)v7[47] & 0x800;
        v14 = this;
        if ( v12 )
          v15 = v13 != 0 ? 8 : 2;
        else
          v15 = v13 != 0 ? 7 : 1;
        goto LABEL_15;
      }
      v15 = (v12 != 0) + 5;
    }
    v14 = this;
    goto LABEL_15;
  }
  if ( a4 < MmUserProbeAddress )
  {
    WdLogSingleEntry0(1LL);
    v51 = 27502;
  }
  else
  {
    if ( a4 == (a4 & 0xFFFFFFFFFFFFF000uLL) && *(_QWORD *)(v8 + 8) == (*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFF000uLL) )
    {
LABEL_47:
      Base = (PVOID)a4;
      goto LABEL_22;
    }
    WdLogSingleEntry0(1LL);
    v51 = 27515;
  }
  WdLogGlobalForLineNumber = v51;
  DxgkLogInternalTriageEvent(v50, 0x40000LL);
  VIDMM_PROCESS::SafeDetach(v52, &v63);
  return 3221225485LL;
}
