/*
 * XREFs of imp_WdfObjectGetTypedContextWorker @ 0x140046F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1400373C0 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall imp_WdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  _FX_DRIVER_GLOBALS **_a2; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO **v6; // rax
  const char *_a1; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  _a2 = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    _a2 = (_FX_DRIVER_GLOBALS **)((char *)_a2 - *(unsigned __int16 *)_a2);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(_a2[2], retaddr);
  v4 = *((unsigned __int16 *)_a2 + 5);
  v5 = 0LL;
  if ( (_WORD)v4 )
    v6 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO **)((char *)_a2 + v4);
  else
    v6 = 0LL;
  while ( v6 )
  {
    if ( v6[4] == TypeInfo )
      return (char *)(v6 + 6);
    v6 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v6[1];
  }
  _a1 = "<no typename given>";
  if ( TypeInfo->ContextName )
    _a1 = TypeInfo->ContextName;
  WPP_IFR_SF_sq(_a2[2], 3u, 0xBu, 0xDu, WPP_HandleAPI_cpp_Traceguids, _a1, _a2);
  return (char *)v5;
}
