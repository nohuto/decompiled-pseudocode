/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x14010F850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1401105D4 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x140110A1C (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x140110A8C (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqi @ 0x140274FA0 (WPP_RECORDER_AND_TRACE_SF_qqi.c)
 */

__int64 __fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        struct tagWND *a2,
        void *a3,
        unsigned __int64 *a4,
        struct tagWND *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  struct tagWND *v6; // r14
  __int64 v7; // rdi
  int v8; // ebx
  void *v9; // rbp
  unsigned int v10; // r15d
  char v11; // si
  __int64 v12; // rdx
  struct tagINPUTTRANSFORMLIST *inited; // rax
  __int64 v14; // rdx
  struct CompositionInputObject **v15; // rbx
  CompositionObject *v16; // rcx
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // bl
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx

  v6 = *(struct tagWND **)(a1 + 80);
  v7 = 0LL;
  v8 = (int)a4;
  v9 = a3;
  v10 = 0;
  if ( (!a2 || SetCompositionInputWindowUIOwner(*(struct tagWND **)(a1 + 80), a2)) && !v8 )
  {
    v11 = 1;
    v10 = 1;
    if ( (unsigned int)InputTransform::StoreTransform(v6, a5, a6, a4) )
    {
      inited = InitInputTransformList(v6);
      if ( !inited )
        goto LABEL_23;
      v15 = (struct CompositionInputObject **)((char *)inited + 96);
      v16 = (CompositionObject *)*((_QWORD *)inited + 12);
      if ( v16 )
      {
        CompositionObject::Release(v16);
        *v15 = 0LL;
      }
      if ( (int)CompositionInputObject::ResolveHandle(v9, 1u, 1, v15) < 0 )
      {
LABEL_23:
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v11 = 0;
        }
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v11;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v24,
            *(_QWORD *)(UserSessionState + 69416),
            4,
            20,
            44,
            (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids,
            (char)v6,
            (char)v9);
        }
      }
    }
    else
    {
      v10 = 0;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v11;
        WPP_RECORDER_AND_TRACE_SF_qqi(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v21,
          v20,
          *(_QWORD *)(v19 + 69416));
      }
      v9 = a3;
    }
  }
  if ( v6 )
    v7 = *(_QWORD *)v6;
  return EtwTraceDITResolveDCompInputHandleToHwnd(v9, v7, *(_QWORD *)a6, v10);
}
