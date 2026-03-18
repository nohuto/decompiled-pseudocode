/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1401A2E38
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1401A2BB0 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400280F8 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(char **a1)
{
  char *v1; // rbx
  __int64 UserSessionState; // rax

  if ( *a1 != (char *)&gSmartObjNullRef && !--*((_DWORD *)*a1 + 2) )
  {
    if ( (*a1)[12] )
    {
      v1 = *a1;
      UserSessionState = W32GetUserSessionState(a1);
      Win32FreeToPagedLookasideListImpl(*(char **)(UserSessionState + 42624), v1);
    }
  }
}
