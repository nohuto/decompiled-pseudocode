/*
 * XREFs of ?QueryInterface@CSnapAssistController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A6510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnapAssistController::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::QueryInterface(
           a1 - 24,
           a2,
           a3);
}
