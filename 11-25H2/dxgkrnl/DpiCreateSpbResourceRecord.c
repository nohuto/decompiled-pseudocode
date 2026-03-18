/*
 * XREFs of DpiCreateSpbResourceRecord @ 0x1401857B0
 * Callers:
 *     DpOpenSpbResource @ 0x14038ECF0 (DpOpenSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCreateSpbResourceRecord(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3, __int64 a4)
{
  __int64 Pool2; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned int v9; // ebx
  __int64 result; // rax
  PKEVENT NotificationEvent; // rax
  struct _EX_RUNDOWN_REF **v12; // rcx

  Pool2 = ExAllocatePool2(256LL, 72LL, 1953656900LL, a4);
  v8 = (struct _EX_RUNDOWN_REF *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 109;
    return v9;
  }
  *(_DWORD *)(Pool2 + 16) = 1953656900;
  *(_DWORD *)(Pool2 + 20) = 12;
  *(_QWORD *)(Pool2 + 32) = a1;
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_DWORD *)(Pool2 + 48) = 1;
  NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)(Pool2 + 56));
  v8[8].Count = (ULONG_PTR)NotificationEvent;
  if ( !NotificationEvent )
  {
    v9 = -1073741670;
    WdLogSingleEntry1(2LL, -1073741670LL);
    WdLogGlobalForLineNumber = 136;
    ExFreePoolWithTag(a3, 0);
    return v9;
  }
  ExInitializeRundownProtection(v8 + 3);
  v12 = *(struct _EX_RUNDOWN_REF ***)(a1 + 2736);
  if ( *v12 != (struct _EX_RUNDOWN_REF *)(a1 + 2728) )
    __fastfail(3u);
  v8->Count = a1 + 2728;
  v8[1].Count = (ULONG_PTR)v12;
  *v12 = v8;
  *(_QWORD *)(a1 + 2736) = v8;
  result = 0LL;
  *a3 = v8;
  return result;
}
