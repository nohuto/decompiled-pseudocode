/*
 * XREFs of ?RegisterAPOWithProcessingHost@CAPONode@@QEAAJXZ @ 0x14000F184
 * Callers:
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D97C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPONode::RegisterAPOWithProcessingHost(CAPONode *this)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))this)(
         *(_QWORD *)this,
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v9) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 24LL))(
           *((_QWORD *)this + 5),
           *(_QWORD *)this);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x196,
        (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
        (const char *)(unsigned int)v4);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
      return v5;
    }
    v6 = v9;
    v2 = 0LL;
    v9 = 0LL;
    v7 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v6;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v2 = v9;
    }
  }
  else
  {
    v2 = v9;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
