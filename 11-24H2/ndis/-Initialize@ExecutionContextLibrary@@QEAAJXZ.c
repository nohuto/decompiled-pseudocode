/*
 * XREFs of ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x14014A4FC
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x140138938 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x14014A704 (-Initialize@NdisPoll@@QEAAJXZ.c)
 * Callees:
 *     KLoaderReferenceModule @ 0x1400656D0 (KLoaderReferenceModule.c)
 *     KLoaderQueryDispatchTable @ 0x1400DC7E0 (KLoaderQueryDispatchTable.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionContextLibrary::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v4; // rcx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  _OWORD *v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  struct KLOADER_MODULE_REFERENCE__ **v10; // [rsp+40h] [rbp-18h]

  v1 = (__int64 *)(this + 19);
  v8 = 32LL;
  v9 = EXECUTION_CONTEXT_MODULE_ID;
  v10 = this;
  result = KLoaderReferenceModule((struct _KLOADER_REFERENCE_MODULE_CONFIG *)&v8, this + 19);
  if ( !(_DWORD)result )
  {
    v4 = *v1;
    v7 = 0LL;
    result = KLoaderQueryDispatchTable(v4, (__int64)&EXECUTION_CONTEXT_DISPATCH_TABLE_ID, (__int64)&v7);
    if ( !(_DWORD)result )
    {
      v5 = v7;
      if ( *(_QWORD *)v7 >= 0x80uLL )
      {
        *(_OWORD *)this = *v7;
        *((_OWORD *)this + 1) = v5[1];
        *((_OWORD *)this + 2) = v5[2];
        *((_OWORD *)this + 3) = v5[3];
        *((_OWORD *)this + 4) = v5[4];
        *((_OWORD *)this + 5) = v5[5];
        *((_OWORD *)this + 6) = v5[6];
        v6 = v5[7];
        result = 0LL;
        *((_OWORD *)this + 7) = v6;
      }
      else
      {
        return 3221225476LL;
      }
    }
  }
  return result;
}
