/*
 * XREFs of ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180092154
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18003310C (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180032D94 (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 *     ??4?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800921EC (--4-$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(
        PSRWLOCK SRWLock,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int Ptr; // edx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _BYTE v10[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = a2;
  AcquireSRWLockExclusive(SRWLock);
  Ptr = (unsigned int)SRWLock[2].Ptr;
  LODWORD(SRWLock[2].Ptr) = Ptr + 1;
  *a3 = Ptr;
  v7 = (_QWORD *)std::map<unsigned int,std::function<void (bool)>>::_Try_emplace<unsigned int const &,>(
                   &SRWLock[6].Ptr,
                   (__int64)v10,
                   a3);
  std::function<void (_MIT_INPUT_INTEROP_MESSAGE const *)>::operator=(*v7 + 40LL, a2);
  ReleaseSRWLockExclusive(SRWLock);
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2, v8);
}
