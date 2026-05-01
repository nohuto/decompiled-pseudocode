/*
 * XREFs of ?CrmpActivityWNFSyncCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18001B940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmpActivityWNFSyncCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        HANDLE *a4,
        _DWORD *a5,
        unsigned int a6)
{
  if ( a6 >= 4 && !*a5 )
    SetEvent(a4[8]);
  return 0LL;
}
