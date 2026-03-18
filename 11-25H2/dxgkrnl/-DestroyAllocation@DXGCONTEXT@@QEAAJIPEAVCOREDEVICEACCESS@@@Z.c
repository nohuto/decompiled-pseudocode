/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403332B8
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x140349ACC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, unsigned int a2, struct COREDEVICEACCESS *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned int v10; // edx
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rcx
  DXGDEVICE *v14; // r10
  unsigned int v16; // ecx
  _BYTE v17[32]; // [rsp+50h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this);
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 200LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)v7 + 74) )
    goto LABEL_13;
  v9 = *((_QWORD *)v7 + 35);
  v10 = *(_DWORD *)(v9 + 16LL * v8 + 8);
  if ( a2 >> 30 != ((v10 >> 5) & 3) )
    goto LABEL_13;
  if ( (v10 & 0x2000) != 0 )
    goto LABEL_13;
  v11 = v10 & 0x1F;
  if ( !v11 )
    goto LABEL_13;
  if ( v11 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(v9 + 16LL * v8);
  if ( v12 )
  {
    if ( v8 < *((_DWORD *)v7 + 74) )
    {
      v16 = *(_DWORD *)(v9 + 16LL * v8 + 8);
      if ( a2 >> 30 == ((v16 >> 5) & 3) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
        *(_DWORD *)(v9 + 16 * (((unsigned __int64)a2 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
LABEL_8:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  if ( v12 )
  {
    v13 = *(unsigned int *)(*((_QWORD *)this + 2) + 608LL);
    v14 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( (_DWORD)v13 == 4 )
      DxgkDestroyClientAllocation(v13, v14, 0LL, 0LL, *(_QWORD *)(v12 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v14,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v12 + 40),
        a3,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
    return 0LL;
  }
  return 3221225485LL;
}
