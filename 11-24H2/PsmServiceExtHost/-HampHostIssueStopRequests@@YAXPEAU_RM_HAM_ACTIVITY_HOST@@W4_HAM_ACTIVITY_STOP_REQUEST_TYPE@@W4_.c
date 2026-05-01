/*
 * XREFs of ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180066088
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x18006A18C (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007DA9C (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x180083CA8 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009D50 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180056624 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _HAM_ACTIVITY *__fastcall HampHostIssueStopRequests(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6,
        char a7,
        unsigned int (__fastcall *a8)(__int64, _QWORD),
        __int64 a9,
        struct _HAM_CLIENT_CONTEXT *a10)
{
  __int16 v13; // si
  struct _HAM_ACTIVITY *result; // rax
  __int64 v15; // rbx
  char v16; // al
  struct _HAM_ACTIVITY *v17; // rcx
  int v18; // eax

  if ( a3 == 5 )
    v13 = *(_WORD *)(a1 + 664);
  else
    v13 = 6912;
  result = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  v15 = (__int64)result;
  if ( result )
  {
    do
    {
      if ( (*(_BYTE *)(v15 + 552) & 8) == 0 )
      {
        v16 = *(_BYTE *)(v15 + 562);
        if ( v16 == 3 || v16 == 2 && *(_BYTE *)(v15 + 563) >= a5 )
        {
          v18 = *(_DWORD *)(v15 + 112);
          if ( ((v18 & 0x2000) != 0 || (a7 & 2) == 0)
            && ((v18 & 0x400) != 0 || (a7 & 1) == 0)
            && ((a7 & 4) == 0 || (*(_BYTE *)(v15 + 116) & 0x40) != 0)
            && ((v18 & 0x800) != 0 || (a7 & 8) == 0)
            && (!a8 || a8(v15, 0LL)) )
          {
            HampActRequestStopEx(v15, a2, a3, a4, v13, a6, a10);
          }
        }
      }
      v17 = *(struct _HAM_ACTIVITY **)(v15 + 96);
      result = (struct _HAM_ACTIVITY *)(*(_QWORD *)(v15 + 80) + 608LL);
      if ( v17 == result )
        break;
      v15 = (__int64)v17 - 96;
    }
    while ( v17 != (struct _HAM_ACTIVITY *)96 );
  }
  return result;
}
