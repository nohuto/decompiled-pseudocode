/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140306EE8
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030635C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x140305710 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x140306208 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037FEA4 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        BLTENTRY *this,
        struct BLTQUEUE *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        char a7)
{
  __int64 *v10; // r12
  __int64 v11; // rcx
  D3DKMT_HANDLE *p_hSource; // r14
  D3DKMT_HANDLE hDestination; // r8d
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  struct DXGALLOCATION *v15; // rbx
  const struct tagRECT *v16; // r14
  __int64 v17; // rbx
  const wchar_t *v19; // r9
  __int64 v20; // rbx
  void *v21; // rcx
  NTSTATUS v22; // eax
  void *v23; // rcx
  NTSTATUS v24; // eax
  int v25; // ebx
  struct _EX_RUNDOWN_REF **v26; // rcx
  __int64 v27; // rdx
  __int64 HandleInformation; // [rsp+28h] [rbp-110h]
  PVOID Object; // [rsp+50h] [rbp-E8h] BYREF
  PVOID v30; // [rsp+58h] [rbp-E0h] BYREF
  struct COREDEVICEACCESS *v31; // [rsp+60h] [rbp-D8h]
  struct _EX_RUNDOWN_REF *v32; // [rsp+68h] [rbp-D0h] BYREF
  __int128 *v33; // [rsp+70h] [rbp-C8h]
  BLTENTRY *v34; // [rsp+78h] [rbp-C0h]
  struct DXGCONTEXT *v35; // [rsp+80h] [rbp-B8h]
  unsigned int v36[20]; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-58h] BYREF

  v34 = this;
  v35 = a3;
  v31 = a6;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v10 = (__int64 *)((char *)this + 32);
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 40LL);
  p_hSource = &a4->hSource;
  if ( (a4->Flags.Value & 4) != 0 )
    hDestination = *p_hSource;
  else
    hDestination = a4->hDestination;
  AllocationSafe = DXGPROCESS::GetAllocationSafe(v11, (DXGALLOCATIONREFERENCE *)&v32, hDestination);
  DXGALLOCATIONREFERENCE::MoveAssign(v10, AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
  v15 = (struct DXGALLOCATION *)*v10;
  if ( !*v10 )
  {
    WdLogSingleEntry3(2LL, a3, *p_hSource, -1073741811LL);
    WdLogGlobalForLineNumber = 111;
    HandleInformation = *p_hSource;
    v19 = L"Context 0x%I64x: Invalid hAllocation specified: 0x%I64x, returning 0x%I64x";
LABEL_11:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v19, (__int64)a3, HandleInformation, -1073741811LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v16 = 0LL;
  if ( !a7 )
  {
    v27 = *((_QWORD *)a3 + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) )
    {
      WdLogSingleEntry3(2LL, v27, *v10, -1073741811LL);
      WdLogGlobalForLineNumber = 120;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)a3 + 2),
        *v10,
        -1073741811LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) & 4) == 0 && !a7 )
  {
    WdLogSingleEntry3(2LL, a3, *v10, -1073741811LL);
    WdLogGlobalForLineNumber = 130;
    HandleInformation = *v10;
    v19 = L"Context 0x%I64x: Source allocation: 0x%I64x for Present is not DOD primary, returning 0x%I64x";
    goto LABEL_11;
  }
  *((_QWORD *)this + 65) = 0LL;
  if ( a7 )
  {
    *((_DWORD *)this + 130) = 1;
LABEL_9:
    *((_DWORD *)this + 16) = a4->Flags.0;
    *((_DWORD *)this + 14) = a4->FlipInterval;
    *((_DWORD *)this + 15) = a4->PresentCount;
    *((_OWORD *)this + 33) = 0LL;
    *((_OWORD *)this + 34) = 0LL;
    *((LARGE_INTEGER *)this + 67) = KeQueryPerformanceCounter(0LL);
    v17 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 66) = v17 * KeQueryTimeIncrement();
    return 0LL;
  }
  if ( *((_BYTE *)a3 + 434) )
  {
    v25 = PRESENTDODARG::SetPresentDodArg(
            (BLTENTRY *)((char *)this + 72),
            a3,
            *(_DWORD *)(*((_QWORD *)this + 3) + 256LL),
            v15,
            0,
            0,
            0LL,
            a4,
            a5,
            v31);
    if ( v25 >= 0 )
    {
      *((_DWORD *)this + 130) |= 1u;
      goto LABEL_9;
    }
    v26 = (struct _EX_RUNDOWN_REF **)v10;
  }
  else
  {
    memset(v36, 0, sizeof(v36));
    DxgkpGetDodPrimaryInfo(*((struct DXGDEVICE **)a3 + 2), v15, (struct _D3DKMT_KMDOD_ESCAPE *)v36);
    if ( !v36[8] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 180;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Primary pitch invalid", 180LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    v20 = *((_QWORD *)a3 + 7);
    v37 = 0LL;
    v33 = 0LL;
    if ( *(_DWORD *)v20 != -791674878 || (v21 = *(void **)(v20 + 16)) == 0LL || !*(_QWORD *)(v20 + 24) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 194;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid Dod esacpe", 194LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    Object = 0LL;
    v22 = ObReferenceObjectByHandle(v21, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    *((_QWORD *)this + 5) = Object;
    if ( v22 < 0 )
      return 3221225485LL;
    v23 = *(void **)(v20 + 24);
    v30 = 0LL;
    v24 = ObReferenceObjectByHandle(v23, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v30, 0LL);
    *((_QWORD *)this + 6) = v30;
    if ( v24 < 0 )
      return 3221225485LL;
    if ( *(_QWORD *)(v20 + 32) == v20 + 32 && *(int *)(v20 + 40) < 0 )
    {
      v37 = *(_OWORD *)(v20 + 44);
      v16 = (const struct tagRECT *)&v37;
      v33 = &v37;
    }
    v25 = PRESENTDODARG::SetPresentDodArg(
            (BLTENTRY *)((char *)this + 72),
            a3,
            *(_DWORD *)(*((_QWORD *)this + 3) + 256LL),
            *((struct DXGALLOCATION **)this + 4),
            v36[8],
            v36[10],
            v16,
            a4,
            a5,
            v31);
    if ( v25 >= 0 )
      goto LABEL_9;
    v26 = (struct _EX_RUNDOWN_REF **)((char *)this + 32);
  }
  DXGALLOCATIONREFERENCE::AssignNull(v26);
  return (unsigned int)v25;
}
