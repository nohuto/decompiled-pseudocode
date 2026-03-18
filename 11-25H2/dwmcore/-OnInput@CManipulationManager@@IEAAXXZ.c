/*
 * XREFs of ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1801AE108
 * Callers:
 *     _lambda_19664e0b56b7920f045ba8c67b2f55c3_::_lambda_invoker_cdecl_ @ 0x1801AD930 (_lambda_19664e0b56b7920f045ba8c67b2f55c3_--_lambda_invoker_cdecl_.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x18004DEFC (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180135FAC (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180136020 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE308 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x1801AF25C (-DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::OnInput(CManipulationManager *this)
{
  int v2; // edi
  int *v3; // r14
  unsigned int *v4; // rbx
  unsigned int *v5; // r12
  __int64 *v6; // rsi
  __int64 v7; // rax
  unsigned int *v8; // rbp
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-B8h] BYREF
  CEffectCompilationTask *v12; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v13[56]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v14[56]; // [rsp+68h] [rbp-70h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v13, "GestureTargetingInput", 0LL);
  v2 = 0;
  v3 = &v11;
  v11 = 0;
  v4 = 0LL;
  do
  {
    v5 = v4;
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v14,
      "GestureTargetingInputFrame",
      (const struct InputTraceLogging::PerfRegion *)v13);
    v4 = 0LL;
    EnterCriticalSection(&stru_1804051B8);
    v6 = (__int64 *)CManipulationManager::s_InputQueue;
    if ( *((void ***)CManipulationManager::s_InputQueue + 1) != &CManipulationManager::s_InputQueue
      || (v7 = *(_QWORD *)CManipulationManager::s_InputQueue,
          *(void **)(*(_QWORD *)CManipulationManager::s_InputQueue + 8LL) != CManipulationManager::s_InputQueue) )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InputQueue = *(void **)CManipulationManager::s_InputQueue;
    *(_QWORD *)(v7 + 8) = &CManipulationManager::s_InputQueue;
    if ( v6 == (__int64 *)&CManipulationManager::s_InputQueue )
    {
      v9 = dword_1804051B0;
    }
    else
    {
      v8 = (unsigned int *)v6[2];
      if ( v8 )
      {
        v12 = (CEffectCompilationTask *)v6[2];
        Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(&v12);
        v4 = v8;
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v6 + 2);
      operator delete(v6, 0x18uLL);
      v9 = --dword_1804051B0;
    }
    if ( v3 )
    {
      *v3 = v9;
      v2 = v11;
    }
    LeaveCriticalSection(&stru_1804051B8);
    if ( v5 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v5 + 8LL))(v5);
    v3 = 0LL;
    if ( v4 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_FRAME_DEQUEUED,
          v4[6],
          v4[4]);
      InputTraceLogging::GestureTargeting::DequeueFrame((struct CManipulationFrame *)v4);
      CManipulationManager::ProcessManipulationInfo(this, (struct CManipulationFrame *)v4);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v14);
    v10 = v2--;
    v11 = v2;
  }
  while ( v10 );
  if ( v4 )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 8LL))(v4);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v13);
}
