/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180221E90
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A64D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1805A64D0.c)
 *     ?QueryInterface@CSnapAssistController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A64E0 (-QueryInterface@CSnapAssistController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A64F0 (-QueryInterface@CSnapAssistController@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A6510 (-QueryInterface@CSnapAssistController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A6520 (-QueryInterface@CSnapAssistController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A6530 (-QueryInterface@CSnapAssistController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSnapAssistController@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A6540 (-QueryInterface@CSnapAssistController@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>>(
           a1,
           a2,
           a3);
}
