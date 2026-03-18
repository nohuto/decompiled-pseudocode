/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1400067D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiLogInterrupt @ 0x140006960 (VidSchiLogInterrupt.c)
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 DxgAdapter; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v15 = 1;
    v13 = 4015;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 4015LL);
  }
  else
  {
    v15 = 0;
  }
  ((void (__fastcall *)(unsigned int *, __int64))DxgCoreInterface[82])(&v13, 4015LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 2) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v7 = DxgAdapter;
    if ( DxgAdapter )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 3128) + 744LL);
      if ( v8 )
      {
        LOBYTE(v6) = 1;
        VidSchiLogInterrupt(v8, a2, v6);
        if ( *a2 <= 0x12 )
        {
          v9 = 263304;
          if ( _bittest(&v9, *a2) )
          {
            if ( !*(_QWORD *)(v7 + 3120) )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 281LL, 7LL, v7, 0LL, 0LL);
              WdLogGlobalForLineNumber = 906;
              JUMPOUT(0x140006958LL);
            }
          }
        }
        VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v7 + 3128), a2, 1LL);
      }
    }
  }
  result = ((__int64 (__fastcall *)(unsigned int *))DxgCoreInterface[83])(&v13);
  if ( v15 )
  {
    if ( (byte_140081242 & 1) != 0 )
      return McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v13);
  }
  return result;
}
