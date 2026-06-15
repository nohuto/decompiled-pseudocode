/*
 * XREFs of wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___ @ 0x1400564B4
 * Callers:
 *     _CPipeInstance::AddConnectionsAndActivateAPOs_::_1_::dtor$1 @ 0x140093A96 (_CPipeInstance--AddConnectionsAndActivateAPOs_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x140006DBC (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140035A70 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___(
        _QWORD **a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD ***Prev; // rax
  CConnectionInstance **Next; // rax
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v1 = (__int64)*a1;
    v2 = *a1[1];
    v6 = (*a1)[9];
    while ( v6 )
    {
      Prev = (_QWORD ***)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)a1, &v6);
      a1 = *Prev;
      v5 = **Prev;
      while ( v5 )
      {
        Next = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                         (__int64)a1,
                                         &v5);
        CConnectionInstance::RemoveConnections(*Next, *(struct IAudioProcessor **)(v1 + 152), v2);
      }
    }
  }
}
