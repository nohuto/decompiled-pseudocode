/*
 * XREFs of DpiDxgkDdiQueryMonitorDescriptor @ 0x14008BC6C
 * Callers:
 *     DpiFdoGetMonitorDescriptorFromDriver @ 0x14023A0E4 (DpiFdoGetMonitorDescriptorFromDriver.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x14023DB08 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x14024EB9C (DpiQueryDisplayIDDescriptor.c)
 * Callees:
 *     McTemplateK0qqbr1pqqp_EtwWriteTransfer @ 0x14005252C (McTemplateK0qqbr1pqqp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiQueryMonitorDescriptor(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  __int64 v4; // r14
  _QWORD *v5; // rsi
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // r9d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  _QWORD *v19; // rax

  v3 = 0;
  v4 = a2;
  v5 = (_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 6432) )
  {
    if ( bTracingEnabled )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0LL;
      if ( a3 )
      {
        v10 = *a3;
        v5 = (_QWORD *)(a1 + 48);
        v11 = a3[1];
        v12 = *((_QWORD *)a3 + 1);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqbr1pqqp_EtwWriteTransfer(
          v12,
          &EventEnterDdiQueryMonitorDescriptor,
          (__int64)a3,
          v10,
          v11,
          v12,
          v8,
          v4,
          0,
          v12);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 6432))(v8, (unsigned int)v4, a3);
    v18 = v13;
    if ( bTracingEnabled )
    {
      v14 = 0LL;
      v15 = 0LL;
      if ( a3 )
      {
        v3 = *a3;
        v14 = (unsigned int)a3[1];
        v15 = *((_QWORD *)a3 + 1);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqbr1pqqp_EtwWriteTransfer(
          v15,
          &EventExitDdiQueryMonitorDescriptor,
          v16,
          v3,
          v14,
          v15,
          v8,
          v4,
          v13,
          v15);
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    v19[3] = *v5;
    v19[4] = v4;
    v19[5] = *a3;
    v19[6] = (unsigned int)a3[1];
    v19[7] = v18;
    result = (unsigned int)v18;
    WdLogGlobalForLineNumber = 364;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225474LL;
    WdLogGlobalForLineNumber = 345;
  }
  return result;
}
