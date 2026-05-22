/*
 * XREFs of ?IsEndOfCapture@MPCHandProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C2340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 */

char __fastcall MPCHandProcessor::IsEndOfCapture(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  char v3; // di
  MPCGestureHandlerManager *Instance; // rbx
  __int64 *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( ((*(_DWORD *)a2 & 0x662600) == 0 || *((_DWORD *)a2 + 16) != 3)
    && ((*(_DWORD *)a2 & 0x662600) == 0 || *((_DWORD *)a2 + 16) != 4) )
  {
    return 0;
  }
  v3 = 1;
  if ( *(_BYTE *)(this + 3624) && !*((_BYTE *)a2 + 240) && *((_BYTE *)a2 + 1204) )
  {
    *(_DWORD *)(this + 7536) = 2;
    Instance = MPCGestureHandlerManager::GetInstance();
    v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v8,
           this & ((unsigned __int128)-(__int128)(this - 24) >> 64));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (struct LegacyInputInfo *)(this + 6680), v5, v6);
  }
  return v3;
}
