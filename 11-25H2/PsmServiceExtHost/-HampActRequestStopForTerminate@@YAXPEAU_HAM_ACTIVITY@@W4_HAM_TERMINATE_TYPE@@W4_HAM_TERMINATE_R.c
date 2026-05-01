/*
 * XREFs of ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18006B604
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007734 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 */

void __fastcall HampActRequestStopForTerminate(__int64 a1, int a2, __int16 a3, struct _HAM_CLIENT_CONTEXT *a4)
{
  int v4; // edx
  unsigned int v5; // edx

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 1) > 1 )
      return;
    v5 = 3;
  }
  else
  {
    v5 = ((*(_QWORD *)(*(_QWORD *)(a1 + 80) + 664LL) & 0x100000000000LL) != 0) + 1;
  }
  HampActRequestStopEx(a1, v5, 5LL, 0LL, a3, (*(_DWORD *)(a1 + 112) >> 7) & 0x400, a4);
}
