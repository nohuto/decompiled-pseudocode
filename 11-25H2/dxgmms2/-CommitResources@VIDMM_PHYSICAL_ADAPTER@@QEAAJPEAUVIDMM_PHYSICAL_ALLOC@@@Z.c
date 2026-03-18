/*
 * XREFs of ?CommitResources@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400EEF40
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400F11A0 (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::CommitResources(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  _QWORD *v2; // rdi
  int v5; // esi
  int v6; // r14d
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 **v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  _QWORD **v18; // r10
  __int64 v19; // rax
  _QWORD *i; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int16 v25; // ax
  __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]
  __int64 v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+38h] [rbp-30h]
  _QWORD *v34; // [rsp+50h] [rbp-18h] BYREF
  char v35; // [rsp+58h] [rbp-10h]

  v2 = *(_QWORD **)a2;
  v35 = 0;
  v34 = v2 + 17;
  if ( v2 == (_QWORD *)-136LL )
  {
    WdLogSingleEntry0(1LL);
    v5 = 0;
    WdLogGlobalForLineNumber = 638;
    v33 = 0LL;
    v32 = 0LL;
    v31 = 0LL;
    v30 = 638LL;
    DxgkLogInternalTriageEvent(v27, 262146LL);
  }
  else
  {
    v5 = 0;
  }
  if ( (struct _KTHREAD *)v34[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v33 = 0LL;
    v32 = 0LL;
    v31 = 0LL;
    v30 = 645LL;
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(v28, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC *))(**((_QWORD **)a2 + 13) + 40LL))(
         *((_QWORD *)a2 + 13),
         a2);
  if ( v6 < 0 )
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v34);
    return (unsigned int)v6;
  }
  else
  {
    v7 = v2 + 31;
    *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 11);
    v8 = *((_QWORD *)a2 + 8) + 8LL;
    *((_QWORD *)a2 + 11) = 0LL;
    v9 = *(__int64 ***)(v8 + 8);
    if ( *v9 != (__int64 *)v8 )
      __fastfail(3u);
    *v7 = v8;
    v2[32] = v9;
    *v9 = v7;
    *(_QWORD *)(v8 + 8) = v7;
    *((_DWORD *)v2 + 18) = 2;
    *((_BYTE *)v2 + 42) = 1;
    v10 = *((_QWORD *)a2 + 8);
    v11 = *((_DWORD *)a2 + 14) | 3;
    *((_DWORD *)a2 + 14) = v11;
    if ( (*(_DWORD *)(v10 + 104) & 0x1001) != 0 )
    {
      v12 = 4;
      v13 = 0;
    }
    else
    {
      v12 = 0;
      v13 = 16;
    }
    v14 = (2 * (v12 & 0xFFFFFFF7)) | v12 & 0xFFFFFFE7 | v11 & 0xFFFFFFE3;
    v15 = 2 * v13;
    v16 = v13 | v14;
    v17 = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 14) = v15 | v16 & 0xFFFFFFDF;
    if ( !v17
      || ((*(_DWORD *)(v10 + 104) & 0x1000) != 0 ? (v25 = 0) : (v25 = *(_WORD *)(v10 + 40) + 1),
          (v17 & 0x1F) == v25
       || ((*(_DWORD *)(v10 + 104) & 0x1000) != 0 ? (v26 = 0) : (v26 = *(_WORD *)(v10 + 40) + 1),
           ((v17 >> 6) & 0x1F) == v26)) )
    {
      v5 = 0x1000000;
    }
    v18 = (_QWORD **)(v2 + 14);
    *((_DWORD *)v2 + 6) = v5 | v2[3] & 0xFEFFFFFF;
    v19 = 1632LL;
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 8) + 104LL) & 0x1001) == 0 )
      v19 = 1624LL;
    *(_QWORD *)((char *)this + v19) += *((_QWORD *)a2 + 2);
    for ( i = *v18; i != v18; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 8) + 104LL) & 0x1001) != 0 )
        v22 = 248LL;
      else
        v22 = 240LL;
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 16LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 240LL))
                      + 16LL)
          + 304LL * (v2[3] & 0x3F);
      *(_QWORD *)(v21 + v22) += *((_QWORD *)a2 + 2);
    }
    v23 = *((_QWORD *)this + 6);
    _InterlockedOr(v29, 0);
    ++*(_QWORD *)(v23 + 40);
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v34);
    return 0LL;
  }
}
