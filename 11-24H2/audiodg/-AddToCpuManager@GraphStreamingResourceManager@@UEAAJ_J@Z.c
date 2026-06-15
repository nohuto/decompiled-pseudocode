/*
 * XREFs of ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140048D80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x1400683BC (-GetCpuManager@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?GetNext@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x14006840C (-GetNext@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140068540 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GraphStreamingResourceManager::AddToCpuManager(struct CpuManager **this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v5; // r14
  int CpuManager; // ebx
  __int64 StartPosition; // rax
  __int64 Next; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  if ( a2 < (unsigned int)dword_1400C48A0 )
  {
    v5 = this + 34;
    CpuManager = GetCpuManager(this + 34);
    if ( CpuManager < 0 )
      goto LABEL_17;
    StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 7);
    v14 = StartPosition;
    while ( StartPosition )
    {
      Next = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
               this + 7,
               &v14);
      CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(
                     *v5,
                     *(_QWORD *)(Next + 16),
                     Next + 24);
      if ( CpuManager < 0 )
      {
LABEL_15:
        (*((void (__fastcall **)(char *))*(this - 1) + 10))((char *)this - 8);
        goto LABEL_17;
      }
      StartPosition = v14;
    }
    v9 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 16);
    v14 = v9;
    while ( v9 )
    {
      v10 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
              this + 16,
              &v14);
      CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 48LL))(
                     *v5,
                     *(_QWORD *)(v10 + 16),
                     v10 + 24);
      if ( CpuManager < 0 )
        goto LABEL_15;
      v9 = v14;
    }
    v11 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 25);
    v14 = v11;
    while ( v11 )
    {
      v12 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
              this + 25,
              &v14);
      CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 64LL))(
                     *v5,
                     *(_QWORD *)(v12 + 16),
                     v12 + 24);
      if ( CpuManager < 0 )
        goto LABEL_15;
      v11 = v14;
    }
  }
  CpuManager = 0;
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)CpuManager;
}
