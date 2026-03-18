/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801AD450 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x18004DEFC (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801ADB88 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 *     ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801ADDC0 (-QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?IsManipulationThread@CManipulationManager@@SA_NXZ @ 0x1801ADE70 (-IsManipulationThread@CManipulationManager@@SA_NXZ.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x1801ADE98 (-IsVailContainer@@YA_NXZ.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801ADF00 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1801ADFFC (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1801AE108 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801AF2D8 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801FFA0C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CManipulationManager *a2)
{
  struct CManipulationFrame *v2; // rbx
  unsigned int *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // r12d
  int v8; // eax
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v14; // r8
  __int64 i; // rdx
  struct CManipulationFrame *v16; // [rsp+70h] [rbp+40h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+50h] BYREF
  CEffectCompilationTask *v18; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  if ( !a1 )
    goto LABEL_10;
  v5 = (unsigned int *)((char *)a1 + 148);
  v6 = *((_QWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 42);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_FRAME_RECEIVED,
      v7,
      *v5);
  InputTraceLogging::GestureTargeting::QueueFrame(v6, *(_QWORD *)a1, v7, *v5);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v16);
  v8 = CManipulationFrame::Create(a1, &v16);
  v2 = v16;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x15Cu, 0LL);
LABEL_14:
    v16 = (struct CManipulationFrame *)&CManipulationManager::s_rwPointerBufferLock;
    CReadWriteLock::AcquireExclusive(&CManipulationManager::s_rwPointerBufferLock);
    v14 = *v5;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v14; v14 = *v5 )
    {
      CManipulationManager::s_rgPointerIds[i] = *((_DWORD *)a1 + 60 * (unsigned int)i + 41);
      i = (unsigned int)(i + 1);
    }
    if ( (*((_DWORD *)a1 + 43) & 0x180000) == 0 )
      SetManipulationInputTarget(*((unsigned int *)a1 + 42), 0LL, v14, CManipulationManager::s_rgPointerIds, a1);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v16);
    goto LABEL_10;
  }
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v9 = PerformanceCount;
  *(LARGE_INTEGER *)((char *)v2 + (IsVailContainer() ? 0x48 : 0) + 72) = v9;
  InputTraceLogging::TelemetryDebug::GestureTargeting::QueueFrame((struct CManipulationFrame *)((char *)v2 + 32));
  v18 = v2;
  Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(&v18);
  v16 = v2;
  Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(&v16);
  v12 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v11, v10, &v16);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v18);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x164u, 0LL);
    goto LABEL_14;
  }
  if ( !CManipulationManager::IsManipulationThread() )
  {
LABEL_7:
    if ( SetEvent(hEvent) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_FRAME_QUEUED,
          v7,
          *v5);
      goto LABEL_10;
    }
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(&CManipulationManager::s_InputQueue, &v16, 0LL, 0LL);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v16);
    goto LABEL_14;
  }
  if ( !a2 )
  {
    v5 = (unsigned int *)((char *)a1 + 148);
    goto LABEL_7;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qq_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_FRAME_QUEUED, v7, *v5);
  CManipulationManager::OnInput(a2);
LABEL_10:
  if ( v2 )
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v2 + 8LL))(v2);
  return 1LL;
}
