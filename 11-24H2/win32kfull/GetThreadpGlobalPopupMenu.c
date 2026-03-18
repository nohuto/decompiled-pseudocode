/*
 * XREFs of GetThreadpGlobalPopupMenu @ 0x1401B0C20
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1401B04B0 (xxxGetMenuBarInfo.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxMNDismissIfOffMenu @ 0x1402BDD9C (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadpGlobalPopupMenu(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 648);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
