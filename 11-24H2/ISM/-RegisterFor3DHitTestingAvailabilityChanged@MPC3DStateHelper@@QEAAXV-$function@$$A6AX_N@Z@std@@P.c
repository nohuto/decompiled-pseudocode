/*
 * XREFs of ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800922F4
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004E364 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000AB8C (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18004DFEC (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 *     ??4?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009238C (--4-$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
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
  return std::_Func_class<void,>::~_Func_class<void,>(a2, v8);
}
