/*
 * XREFs of CrmSrvUnregister @ 0x1800646C4
 * Callers:
 *     CrmRpcSrvUnregister @ 0x1800646A0 (CrmRpcSrvUnregister.c)
 *     CrmGlobalsCleanupCrmRegistrations @ 0x18007B5B8 (CrmGlobalsCleanupCrmRegistrations.c)
 *     CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800A76C0 (CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmRegistrationRemoveActivity @ 0x18003190C (CrmRegistrationRemoveActivity.c)
 *     CrmLogRegistrationStop @ 0x1800647B0 (CrmLogRegistrationStop.c)
 *     CrmLogSrvUnregisterStop @ 0x180064874 (CrmLogSrvUnregisterStop.c)
 *     CrmLogSrvUnregisterStart @ 0x180064974 (CrmLogSrvUnregisterStart.c)
 *     CrmGlobalsRegistrationRemove @ 0x180064A0C (CrmGlobalsRegistrationRemove.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvUnregister(char *a1)
{
  bool v2; // zf
  int v3; // eax
  __int128 v4; // xmm1
  unsigned int v5; // esi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _QWORD **i; // rdi
  void *v9; // rcx
  _OWORD v11[4]; // [rsp+20h] [rbp-68h] BYREF
  int v12; // [rsp+60h] [rbp-28h]

  memset_0(v11, 0, 0x44uLL);
  CrmLogSrvUnregisterStart();
  v2 = *((_QWORD *)a1 + 6) == -1LL;
  v3 = *((_DWORD *)a1 + 34);
  v4 = *(_OWORD *)(a1 + 88);
  v5 = *((_DWORD *)a1 + 6);
  v11[0] = *(_OWORD *)(a1 + 72);
  v6 = *(_OWORD *)(a1 + 104);
  v12 = v3;
  v11[1] = v4;
  v7 = *(_OWORD *)(a1 + 120);
  v11[2] = v6;
  v11[3] = v7;
  if ( !v2 )
    CrmGlobalsRegistrationRemove(a1);
  for ( i = (_QWORD **)(a1 + 56); *i != i; CrmRegistrationRemoveActivity((__int64)a1, *i, 0) )
    ;
  v9 = (void *)*((_QWORD *)a1 + 18);
  if ( v9 )
    HampFreeHeap(v9);
  CrmLogRegistrationStop(*((_QWORD *)a1 + 2));
  HampFreeHeap(a1);
  return CrmLogSrvUnregisterStop(v5, v11);
}
