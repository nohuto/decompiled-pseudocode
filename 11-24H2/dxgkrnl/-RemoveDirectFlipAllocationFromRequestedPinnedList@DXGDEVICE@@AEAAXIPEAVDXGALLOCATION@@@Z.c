/*
 * XREFs of ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403B27E8
 * Callers:
 *     ?RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401BB754 (-RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034FAE8 (-ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINAT.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1403ADAF0 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *v6; // rdx
  _BYTE v7[32]; // [rsp+50h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, this + 46);
  v6 = this[v3 + 165];
  if ( v6
    && ((*((_DWORD *)a3 + 18) >> 1) & 0x3FFu) < *((_DWORD *)this + v3 + 362)
    && *((struct DXGALLOCATION **)v6 + (((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF)) == a3 )
  {
    if ( !*((_DWORD *)this + v3 + 378) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9583;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
        9583LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)this[v3 + 165] + (((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF)) = 0LL;
    --*((_DWORD *)this + v3 + 378);
    *((_DWORD *)a3 + 18) &= 0xFFFFF801;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
}
