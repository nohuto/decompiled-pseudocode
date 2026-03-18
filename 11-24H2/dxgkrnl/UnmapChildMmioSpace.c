/*
 * XREFs of UnmapChildMmioSpace @ 0x1403DE850
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall UnmapChildMmioSpace(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int32 *v5; // rax
  unsigned __int64 v6; // rdx
  volatile signed __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct _KPROCESS *v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v5 = &g_VgpuNumVaToGpaMappings;
  if ( !a4 )
    v5 = &g_VgpuNumHpaToGpaMappings;
  v6 = -a2;
  _InterlockedDecrement(v5);
  v7 = &g_VgpuSizeVaToGpaMappings;
  if ( !a4 )
    v7 = &g_VgpuSizeHpaToGpaMappings;
  _InterlockedAdd64(v7, v6);
  v8 = *(_DWORD *)(a1 + 408);
  if ( (v8 & 0x100) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
LABEL_7:
    v10 = v9 + 160;
    goto LABEL_8;
  }
  if ( (v8 & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 592);
    goto LABEL_7;
  }
  v10 = 0LL;
LABEL_8:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)&ApcState, (struct _KTHREAD **)(v10 + 16));
  ((void (__fastcall *)(_QWORD, __int64))qword_140160620)(*(_QWORD *)v10, a3);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v11 = *(struct _KPROCESS **)(a3 + 40);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v11, &ApcState);
    ObCloseHandle(*(HANDLE *)(a3 + 16), 0);
    KeUnstackDetachProcess(&ApcState);
  }
  ExFreePoolWithTag((PVOID)a3, 0x4B677844u);
}
