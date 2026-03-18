/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400A48D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056040 (memmove.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400C3D24 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C4210 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C4430 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400E5DB0 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rdx
  int v12; // ebx
  struct VIDMM_LOCAL_ALLOC *v13; // rcx
  __int64 v14; // r14
  _QWORD *v15; // rax
  void (__fastcall *v16)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v18; // r8
  struct VIDMM_LOCAL_ALLOC *v19; // rcx
  const void *v20; // rax
  struct _MDL **v21; // r15
  VIDMM_GLOBAL *v23; // r10
  __int64 v24; // rcx
  int v25; // r13d
  __int64 v26; // rcx
  enum _LOCK_OPERATION v27; // [rsp+28h] [rbp-F0h]
  char v28; // [rsp+50h] [rbp-C8h]
  struct VIDMM_LOCAL_ALLOC *v29; // [rsp+58h] [rbp-C0h]
  void *v30; // [rsp+60h] [rbp-B8h] BYREF
  struct _MDL **v31; // [rsp+68h] [rbp-B0h]
  size_t Size; // [rsp+70h] [rbp-A8h]
  VIDMM_APERTURE_SEGMENT *v33; // [rsp+78h] [rbp-A0h]
  struct VIDMM_LOCAL_ALLOC *v34; // [rsp+80h] [rbp-98h]
  __int64 v35; // [rsp+88h] [rbp-90h]
  unsigned __int64 v36; // [rsp+90h] [rbp-88h]
  struct _MDL **v37; // [rsp+98h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-78h] BYREF

  v33 = this;
  v36 = a3;
  Size = a4;
  v11 = a6;
  v30 = a6;
  v31 = a7;
  v37 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v28 = 0;
  *a7 = 0LL;
  v13 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 6);
  v29 = v13;
  v34 = v13;
  v14 = *(_QWORD *)a2;
  v35 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v15[3] = a2;
    v15[4] = a3;
    v15[5] = a4;
    WdLogGlobalForLineNumber = 1170;
    v11 = (unsigned __int8 *)v30;
  }
  *v11 = 0;
  if ( *(_BYTE *)(v14 + 169) )
  {
    if ( a3 == *(_QWORD *)(v14 + 152) && a4 == *(_QWORD *)(v14 + 160) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 3), a2);
    v16 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(*(_QWORD *)this + 120LL);
    MDLForRange = VidMmGetMDLForRange(a2, *(_QWORD *)(v14 + 152), *(_QWORD *)(v14 + 160));
    v16(this, a2, *(_QWORD *)(v14 + 152), *(_QWORD *)(v14 + 160), MDLForRange);
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v18);
    v12 = 0;
  }
  v19 = v29;
  if ( (**((_DWORD **)a2 + 49) & 8) == 0 && v29 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)v29 + 1), &ApcState);
    v12 = 1;
    v19 = v29;
  }
  if ( a5 )
  {
    v28 = 1;
    v30 = 0LL;
    v20 = VidMmMapViewOfAllocation(v19, a3, a4, &v30, 0);
    if ( v20 )
    {
      memmove(*((void **)this + 37), v20, a4);
      v21 = v31;
      VidMmUnmapViewOfAllocation(v29, v30);
    }
    else
    {
      memset(*((void **)this + 37), 0, a4);
      *((_DWORD *)a2 + 6) |= 0x200000u;
      v21 = v31;
    }
    *v21 = (struct _MDL *)*((_QWORD *)this + 38);
    goto LABEL_16;
  }
  v23 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
  if ( (*((_DWORD *)v23 + 1746) & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1400816A4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1330;
    DxgkLogInternalTriageEvent(v24, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v25 = VIDMM_GLOBAL::ProbeAndLockAllocation(v23, v19, a2, a3, a4, v27, this, 1u);
    if ( v25 >= 0 )
    {
LABEL_16:
      *(_QWORD *)(v14 + 160) = a4;
      *(_QWORD *)(v14 + 152) = a3;
      *(_BYTE *)(v14 + 168) = v28;
      *(_BYTE *)(v14 + 169) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1400816A4);
    WdLogSingleEntry3(6LL, a2, a3, a4);
    WdLogGlobalForLineNumber = 1351;
    DxgkLogInternalTriageEvent(v26, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v25;
  }
}
