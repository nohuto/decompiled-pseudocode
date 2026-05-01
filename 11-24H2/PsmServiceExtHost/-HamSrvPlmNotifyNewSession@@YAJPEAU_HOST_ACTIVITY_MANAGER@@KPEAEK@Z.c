/*
 * XREFs of ?HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z @ 0x18006D784
 * Callers:
 *     HamRpcSrvPlmNotifyNewSession @ 0x18006D720 (HamRpcSrvPlmNotifyNewSession.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064E3C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HamSrvPlmNotifyNewSession(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  SIZE_T v7; // r15
  void *v8; // r14
  int v9; // r12d
  unsigned int v10; // edi
  HRESULT v11; // eax
  unsigned int v12; // eax
  HGLOBAL v13; // rax
  LPSTREAM ppstm; // [rsp+30h] [rbp-99h] BYREF
  int v16; // [rsp+38h] [rbp-91h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-89h] BYREF
  struct _HAM_SESSION *v18; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v19[144]; // [rsp+50h] [rbp-79h] BYREF

  v18 = 0LL;
  v16 = 0;
  v7 = a4;
  memset_0(v19, 0, 0x88uLL);
  ppv = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  v8 = 0LL;
  ppstm = 0LL;
  v9 = 0;
  if ( (int)HampSessionFindOrCreate(a1, a2, &v18) < 0 )
  {
    v10 = -1073741275;
    goto LABEL_14;
  }
  v11 = CoInitializeEx(0LL, 0);
  if ( v11 < 0 )
    goto LABEL_4;
  v9 = 1;
  v13 = GlobalAlloc(2u, v7);
  v8 = v13;
  if ( !v13 )
  {
    v10 = -1073741801;
    goto LABEL_14;
  }
  v11 = CreateStreamOnHGlobal(v13, 0, &ppstm);
  if ( v11 < 0
    || (v11 = (*(__int64 (__fastcall **)(LPSTREAM, unsigned __int8 *, _QWORD, int *))(*(_QWORD *)ppstm + 32LL))(
                ppstm,
                a3,
                (unsigned int)v7,
                &v16),
        v11 < 0)
    || (v11 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(
                ppstm,
                0LL,
                0LL,
                0LL),
        v11 < 0)
    || (v11 = CoUnmarshalInterface(ppstm, &GUID_cf354276_51cb_46d8_9470_b192975390a1, &ppv), v11 < 0) )
  {
LABEL_4:
    v10 = (unsigned __int16)v11;
    v12 = (unsigned __int16)v11 | 0xC0070000;
    if ( v10 )
      v10 = v12;
  }
  else
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
    v10 = 0;
    *((_QWORD *)v18 + 17) = ppv;
  }
LABEL_14:
  if ( ppstm )
  {
    (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
    CoReleaseMarshalData(ppstm);
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)ppstm + 16LL))(ppstm);
  }
  if ( v8 )
    GlobalFree(v8);
  if ( v9 )
    CoUninitialize();
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v10;
}
