/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1403CFD70
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1400349E4 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x140034A5C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyPagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x140223E70 (-VmBusSendDestroyPagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this)
{
  DXGDEVICESYNCOBJECT *v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdi
  int HostProcess; // eax

  if ( !*((_BYTE *)this + 72) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 36;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"_DestroyedCoreState", 36LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
  if ( v2 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v2);
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
    DXGPROCESS::FreeResourceHandleNoRefSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v3);
  if ( *((_DWORD *)this + 7) )
  {
    v4 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v4 + 608) != 4 )
    {
      v5 = *((_DWORD *)this + 7);
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
      HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v4 + 40));
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyPagingQueue(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4664),
        HostProcess,
        v5);
    }
  }
  *((_QWORD *)this + 2) = 0LL;
}
