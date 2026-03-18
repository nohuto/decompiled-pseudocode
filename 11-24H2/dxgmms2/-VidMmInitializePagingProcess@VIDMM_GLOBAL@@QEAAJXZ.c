/*
 * XREFs of ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400D339C
 * Callers:
 *     VidMmInitializePagingProcess @ 0x14004BDA0 (VidMmInitializePagingProcess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1400523B8 (VidSchiCreateNodeSchedulingLog.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x140090678 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400911C0 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400D364C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     VidSchCreateSystemDevices @ 0x1400D380C (VidSchCreateSystemDevices.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  int inited; // edi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int i; // ebx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int j; // ebx
  unsigned int v10; // edx
  struct _VIDSCH_NODE **v11; // r8
  struct _VIDSCH_NODE **v12; // rax
  int NodeSchedulingLog; // eax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384), this);
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 21410;
    goto LABEL_3;
  }
  inited = VidSchCreateSystemDevices(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 2) + 744LL));
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 21421;
    goto LABEL_3;
  }
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 21433;
    goto LABEL_3;
  }
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 21444;
LABEL_3:
    WdLogGlobalForLineNumber = v4;
LABEL_4:
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    goto LABEL_29;
  }
  for ( i = 0; i < *((_DWORD *)this + 1736); ++i )
  {
    v6 = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
    inited = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 21456;
      goto LABEL_4;
    }
  }
  v7 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 40940) = 1;
  v8 = *(_QWORD *)(v7 + 744);
  if ( *(int *)(*(_QWORD *)(v8 + 16) + 3004LL) >= 2500 )
  {
    for ( j = 0; j < *(_DWORD *)(v8 + 80); ++j )
    {
      v10 = *(_DWORD *)(v8 + 760);
      v11 = *(struct _VIDSCH_NODE ***)(v8 + 688);
      if ( j >= v10 )
        v12 = *(struct _VIDSCH_NODE ***)(v8 + 688);
      else
        v12 = &v11[j];
      if ( (*((_DWORD *)*v12 + 3) & 2) != 0 )
      {
        if ( j < v10 )
          v11 += j;
        NodeSchedulingLog = VidSchiCreateNodeSchedulingLog(*v11, 0x800u);
        inited = NodeSchedulingLog;
        if ( NodeSchedulingLog < 0 )
        {
          WdLogSingleEntry1(1LL, NodeSchedulingLog);
          WdLogGlobalForLineNumber = 21472;
          goto LABEL_4;
        }
      }
    }
  }
  inited = 0;
LABEL_29:
  *((_BYTE *)this + 40940) = 0;
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
