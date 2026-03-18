/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x140391784
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x140391060 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003B884 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x140391A8C (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v6; // r15
  BOOLEAN v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rbx
  int v10; // ecx
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v13; // rax
  const wchar_t *v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-89h]
  _OWORD v18[3]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v19[24]; // [rsp+80h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v3 = *((_QWORD *)a1 + 17);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  v6 = 0;
  v7 = 0;
  if ( *(_DWORD *)(v3 + 8) )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, (struct DXGPROCESS *)v2);
    v8 = (*(_DWORD *)(v3 + 8) >> 6) & 0xFFFFFF;
    if ( v8 < *(_DWORD *)(v2 + 296) )
    {
      v9 = *(_QWORD *)(v2 + 280);
      if ( ((*(_DWORD *)(v3 + 8) >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60)
        && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) == 0 )
      {
        v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
        if ( v10 )
        {
          if ( v10 == 12 )
          {
            v11 = *(struct _EX_RUNDOWN_REF **)(v9 + 16LL * v8);
            if ( !v11 )
              goto LABEL_9;
            v7 = ExAcquireRundownProtection(v11 + 30);
            if ( v7 )
              goto LABEL_9;
            WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 8));
            v13 = *(unsigned int *)(v3 + 8);
            v14 = L"Failed to acquire process rundown protection: 0x%I64x";
            WdLogGlobalForLineNumber = 309;
          }
          else
          {
            WdLogSingleEntry0(2LL);
            v13 = 318LL;
            v14 = L"Handle type mismatch";
            WdLogGlobalForLineNumber = 318;
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v11 = 0LL;
LABEL_9:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(v3 + 12) )
    goto LABEL_18;
  v15 = *(int *)(v3 + 16);
  if ( (unsigned int)v15 > 0x30 )
    goto LABEL_18;
  v16 = 0x1000000000104LL;
  if ( !_bittest64(&v16, v15) )
    goto LABEL_18;
  v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 12);
LABEL_10:
  if ( !v11 )
  {
LABEL_18:
    WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 8));
    v17 = *(unsigned int *)(v3 + 8);
    WdLogGlobalForLineNumber = 330;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process handle specified: 0x%I64x",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  memset(v18, 0, sizeof(v18));
  CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)v18, (struct DXGPROCESS *)v11, 0);
  if ( *((_QWORD *)&v18[0] + 1) )
  {
    *((_QWORD *)a1 + 11) = v11;
    v6 = a2(a1);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 343;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Setting current DXGPROCESS failed",
      343LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v18);
  if ( v7 )
    ExReleaseRundownProtection(v11 + 30);
LABEL_15:
  KeUnstackDetachProcess(&ApcState);
  return v6;
}
