/*
 * XREFs of ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140012F40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400130A4 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400136B0 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterProcess(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r14
  void *v4; // r12
  GraphStreamingResourceManager *v5; // r15
  DWORD ProcessId; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rbx
  __int64 i; // rbx
  int v10; // edi
  ATL::CAtlException *v12; // rbx
  __int64 v13; // [rsp+20h] [rbp-78h]
  char *v14; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = this;
  ProcessId = GetProcessId(a2);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  v14 = (char *)v5 + 56;
  v8 = *((_QWORD *)v5 + 7);
  if ( v8 )
  {
    for ( i = *(_QWORD *)(v8 + 8LL * (ProcessId % *((_DWORD *)v5 + 18))); i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_DWORD *)(i + 40) == ProcessId && *(_DWORD *)i == ProcessId )
        goto LABEL_5;
    }
  }
  i = 0LL;
LABEL_5:
  if ( i )
  {
    _InterlockedIncrement((volatile signed __int32 *)(i + 8));
    goto LABEL_14;
  }
  try
  {
    v16 = 0LL;
    v17 = 0LL;
    LODWORD(v16) = 1;
    i = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
          (char *)v5 + 56,
          ProcessId,
          &v16);
    v13 = i;
  }
  catch ( ATL::CAtlException *v15 )
  {
    v12 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _o__resetstkoflw();
    v21 = *(_DWORD *)v12;
    v10 = *(_DWORD *)v12;
    i = v13;
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16);
    if ( v21 < 0 )
      goto LABEL_8;
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*((_QWORD *)v5 - 1) + 32LL))((__int64)v5 - 8, v4, i + 16);
  if ( v10 >= 0 )
  {
LABEL_14:
    *v3 = (struct ProcessRegistrationToken__ *)i;
    v10 = 0;
    goto LABEL_10;
  }
LABEL_8:
  if ( i )
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      v14,
      i);
LABEL_10:
  if ( v7 )
    LeaveCriticalSection(v7);
  return (unsigned int)v10;
}
