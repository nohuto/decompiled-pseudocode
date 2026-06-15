/*
 * XREFs of ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x1400638AC
 * Callers:
 *     ?GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z @ 0x140044A40 (-GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z.c)
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14004B6E4 (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@H@Z @ 0x140055170 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOServiceProvider::GetApoWorkQueueId(CAPOServiceProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned int *v4; // rbx
  int v5; // edx
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v8 = v2;
  v3 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (unsigned int *)((char *)this + 96);
  if ( (int)CRTThreadManager::GetRTThreadManagerInstance((struct CRTThreadManager **)this + 11, 0) < 0 )
    RtwqAllocateWorkQueue(RTWQ_STANDARD_WORKQUEUE, (DWORD *)this + 24);
  else
    *v4 = CRTThreadManager::GetApoWorkQueueId(*((CRTThreadManager **)this + 11), v5);
  v6 = *v4;
  CSAutoLock<1>::~CSAutoLock<1>(&v8);
  return v6;
}
