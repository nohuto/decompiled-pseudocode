/*
 * XREFs of ?CommitResources@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400E9640
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::CommitResources(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ebp
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 **v12; // rcx
  __int64 v13; // r10
  int v14; // r8d
  int v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int16 v19; // ax
  __int16 v20; // ax
  int v21; // ecx
  _BOOL8 v22; // rax
  _QWORD *i; // r10
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+38h] [rbp-30h]
  _QWORD *v32; // [rsp+50h] [rbp-18h] BYREF
  char v33; // [rsp+58h] [rbp-10h]

  v2 = *(_QWORD **)a2;
  v33 = 0;
  v5 = v2 + 17;
  v32 = v2 + 17;
  if ( v2 == (_QWORD *)-136LL )
  {
    WdLogSingleEntry0(1LL);
    v31 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    v28 = 637LL;
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v6, 262146LL);
    v5 = v32;
  }
  if ( (struct _KTHREAD *)v5[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v31 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    v28 = 644LL;
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(v7, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32);
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC *))(**((_QWORD **)a2 + 13) + 40LL))(
         *((_QWORD *)a2 + 13),
         a2);
  if ( v8 >= 0 )
  {
    v10 = v2 + 33;
    *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 11);
    v11 = *((_QWORD *)a2 + 8) + 8LL;
    *((_QWORD *)a2 + 11) = 0LL;
    v12 = *(__int64 ***)(v11 + 8);
    if ( *v12 != (__int64 *)v11 )
      __fastfail(3u);
    *v10 = v11;
    v2[34] = v12;
    *v12 = v10;
    *(_QWORD *)(v11 + 8) = v10;
    *((_DWORD *)v2 + 18) = 2;
    *((_BYTE *)v2 + 42) = 1;
    v13 = *((_QWORD *)a2 + 8);
    v14 = *((_DWORD *)a2 + 14) | 3;
    *((_DWORD *)a2 + 14) = v14;
    v15 = 0;
    if ( (*(_DWORD *)(v13 + 104) & 0x1001) == 0 )
      v15 = 16;
    v16 = (*(_DWORD *)(v13 + 104) & 0x1001) != 0 ? 4 : 0;
    v17 = (2 * (v16 & 0xFFFFFFF7)) | v16 & 0xFFFFFFE7 | v14 & 0xFFFFFFE3;
    v18 = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 14) = (2 * v15) | (v15 | v17) & 0xFFFFFFDF;
    if ( !v18
      || ((*(_DWORD *)(v13 + 104) & 0x1000) == 0 ? (v19 = *(_WORD *)(v13 + 40) + 1) : (v19 = 0),
          (v18 & 0x1F) == v19
       || ((*(_DWORD *)(v13 + 104) & 0x1000) == 0 ? (v20 = *(_WORD *)(v13 + 40) + 1) : (v20 = 0),
           v21 = 0,
           ((v18 >> 6) & 0x1F) == v20)) )
    {
      v21 = 0x1000000;
    }
    *((_DWORD *)v2 + 6) = v21 | v2[3] & 0xFEFFFFFF;
    v22 = (*(_DWORD *)(*((_QWORD *)a2 + 8) + 104LL) & 0x1001) != 0;
    *((_QWORD *)this + v22 + 203) += *((_QWORD *)a2 + 2);
    for ( i = (_QWORD *)v2[14]; i != v2 + 14; i = (_QWORD *)*i )
    {
      v24 = ((*(_DWORD *)(*((_QWORD *)a2 + 8) + 104LL) & 0x1001) != 0) + 29LL + 38LL * (v2[3] & 0x3F);
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 16LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 240LL))
                      + 16LL);
      *(_QWORD *)(v25 + 8 * v24 + 8) += *((_QWORD *)a2 + 2);
    }
    v26 = *((_QWORD *)this + 6);
    _InterlockedOr(v27, 0);
    ++*(_QWORD *)(v26 + 40);
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v32);
    return 0LL;
  }
  else
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v32);
    return (unsigned int)v8;
  }
}
