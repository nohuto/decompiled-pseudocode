/*
 * XREFs of ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140064FA8
 * Callers:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x14006D3A0 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14006C2C4 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(
        CAudioDeviceGraph *this,
        enum EAudioConstriction a2)
{
  int v4; // esi
  int v5; // ebp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  CPipeInstance **Next; // rax
  CPipeInstance **v9; // rax
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v13 = v6;
  if ( *((_DWORD *)this + 64) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
    v11 = (_QWORD *)*((_QWORD *)this + 21);
    if ( !v11 )
      goto LABEL_13;
    do
    {
      Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v11);
      v4 = CPipeInstance::SetLoopbackConstriction(*Next, a2);
      if ( v4 >= 0 )
        v5 = 1;
    }
    while ( v11 );
    if ( v4 >= 0 )
    {
LABEL_13:
      CSAutoLock<1>::~CSAutoLock<1>(&v12);
      *((_DWORD *)this + 28) = a2;
      goto LABEL_14;
    }
    if ( v5 )
    {
      v11 = (_QWORD *)*((_QWORD *)this + 21);
      while ( v11 )
      {
        v9 = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v11);
        CPipeInstance::SetLoopbackConstriction(*v9, *((enum EAudioConstriction *)this + 28));
      }
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v12);
  }
  else
  {
    v4 = -2005139437;
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::UpdateLoopbackConstrictionLevel", 0x4AFu, v4);
LABEL_14:
  CSAutoLock<1>::~CSAutoLock<1>(&v13);
  return (unsigned int)v4;
}
