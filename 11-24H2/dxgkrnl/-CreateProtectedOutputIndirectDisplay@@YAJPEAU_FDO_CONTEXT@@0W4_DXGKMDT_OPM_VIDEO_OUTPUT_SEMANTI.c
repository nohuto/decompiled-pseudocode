/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089E28
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004A800 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkOpmCreateHandle @ 0x1401A0260 (DxgkOpmCreateHandle.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1401A0478 (DxgkOpmGetRedirectionInfo.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403C4838 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403CDE4C (DxgkAcquireAdapterOpmI2CSync.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        void **a6)
{
  __int64 v9; // r14
  __int64 RedirectionInfo; // rbx
  int v11; // eax
  void *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v17; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v19[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]

  v17 = 0LL;
  v18 = 0LL;
  v9 = a4;
  if ( *((_DWORD *)a1 + 788) >= 2u )
  {
    v11 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
    LODWORD(RedirectionInfo) = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 77;
      return (unsigned int)RedirectionInfo;
    }
    v12 = (void *)*((_QWORD *)a2 + 504);
    memset(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0;
    RedirectionInfo = (int)DxgkOpmGetRedirectionInfo(v12, v9, &v18);
    DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
    if ( (int)RedirectionInfo < 0 )
    {
      WdLogSingleEntry1(3LL, RedirectionInfo);
      WdLogGlobalForLineNumber = 88;
      return (unsigned int)RedirectionInfo;
    }
    if ( !v18 )
    {
      LODWORD(RedirectionInfo) = -1073741637;
      WdLogSingleEntry1(3LL, -1073741637LL);
      WdLogGlobalForLineNumber = 96;
      return (unsigned int)RedirectionInfo;
    }
    v13 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
    LODWORD(RedirectionInfo) = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(3LL, v13);
      WdLogGlobalForLineNumber = 106;
      return (unsigned int)RedirectionInfo;
    }
    DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 504));
    DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 504), 1LL);
    v14 = *((_DWORD *)a1 + 788);
    if ( v14 == 2 )
    {
      v15 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, _DWORD, void **))a1 + 409))(
              *((_QWORD *)a1 + 6),
              a3,
              v18,
              v19,
              v9,
              &v17);
    }
    else
    {
      if ( v14 != 3 )
      {
        LODWORD(RedirectionInfo) = -1073741637;
LABEL_20:
        DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 504));
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
        return (unsigned int)RedirectionInfo;
      }
      v15 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, __int64, int, void **))a1 + 408))(
              *((_QWORD *)a1 + 6),
              a3,
              v18,
              v19,
              v9,
              15,
              &v17);
    }
    LODWORD(RedirectionInfo) = v15;
    if ( v15 >= 0 )
    {
      LODWORD(RedirectionInfo) = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 504));
      if ( (int)RedirectionInfo < 0 )
        (*((void (__fastcall **)(_QWORD, void *))a1 + 407))(*((_QWORD *)a1 + 6), v17);
      else
        *a6 = v17;
    }
    goto LABEL_20;
  }
  LODWORD(RedirectionInfo) = -1073741637;
  WdLogSingleEntry1(3LL, -1073741637LL);
  WdLogGlobalForLineNumber = 67;
  return (unsigned int)RedirectionInfo;
}
