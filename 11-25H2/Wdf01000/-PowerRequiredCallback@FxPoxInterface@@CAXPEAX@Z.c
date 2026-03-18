/*
 * XREFs of ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x14003BB20
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x14003BB38 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerRequiredCallbackWorker(Context, 1u);
}
