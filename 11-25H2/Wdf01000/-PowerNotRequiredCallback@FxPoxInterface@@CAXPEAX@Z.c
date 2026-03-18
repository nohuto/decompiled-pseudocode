/*
 * XREFs of ?PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x14003B920
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x14003B950 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerNotRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerNotRequiredCallbackWorker(Context, 1u);
  PoFxCompleteDevicePowerNotRequired(Context->m_PoHandle);
}
