/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1803F24B8
 * Callers:
 *     ??1?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803F2484 (--1-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802C19B4 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803F3CEC (-Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(
        _DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = PenWorkspaceBrokerLogging::Provider();
    _tlgWriteActivityAutoStop<35184372088832,5>(v2);
  }
  *a1 = 3;
}
