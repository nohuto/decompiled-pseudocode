/*
 * XREFs of ?FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z @ 0x140047030
 * Callers:
 *     imp_WdfCxDeviceInitGetTypedContextWorker @ 0x140092C30 (imp_WdfCxDeviceInitGetTypedContextWorker.c)
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1400373C0 (WPP_IFR_SF_sq.c)
 */

char *__fastcall FxObjectGetTypedContext(FxObject *Object, const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  __int64 m_ObjectSize; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO **v3; // rax
  const char *ContextName; // rax
  const char *_a1; // rdx

  m_ObjectSize = Object->m_ObjectSize;
  if ( (_WORD)m_ObjectSize )
    v3 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO **)((char *)Object + m_ObjectSize);
  else
    v3 = 0LL;
  while ( v3 )
  {
    if ( v3[4] == TypeInfo )
      return (char *)(v3 + 6);
    v3 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v3[1];
  }
  ContextName = TypeInfo->ContextName;
  _a1 = "<no typename given>";
  if ( ContextName )
    _a1 = ContextName;
  WPP_IFR_SF_sq(Object->m_Globals, 3u, 0xBu, 0xDu, WPP_HandleAPI_cpp_Traceguids, _a1, Object);
  return 0LL;
}
