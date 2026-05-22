/*
 * XREFs of ?IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801B4980
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 */

char __fastcall MPCSixDofProcessor::IsEndOfCapture(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  char v3; // di
  MPCGestureHandlerManager *Instance; // rbx
  __int64 *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)a2 + 2280) & 0x3F) != 0 )
    return 0;
  v3 = 1;
  if ( *(_BYTE *)(this + 3624) && !*((_BYTE *)a2 + 240) )
  {
    *(_DWORD *)(this + 5616) = 2;
    Instance = MPCGestureHandlerManager::GetInstance();
    v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v8,
           this & ((unsigned __int128)-(__int128)(this - 24) >> 64));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (struct LegacyInputInfo *)(this + 4760), v5, v6);
  }
  return v3;
}
