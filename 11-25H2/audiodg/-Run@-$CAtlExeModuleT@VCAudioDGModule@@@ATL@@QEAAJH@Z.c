/*
 * XREFs of ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001D6A8
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x14001D644 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x14001D70C (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001E110 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140049200 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14006560C (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::Run(CAudioDGModule *this, int a2)
{
  void *v3; // rdx
  wil::details *v4; // rcx
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v6[0] = this;
  v6[1] = &v7;
  *((_DWORD *)this + 28) = lambda_d1a8b950306abda3aed68804ea97f7ae_::operator()(v6);
  v4 = (wil::details *)*((_QWORD *)this + 16);
  if ( v4 )
    wil::details::SetEvent(v4, v3);
  result = *((unsigned int *)this + 28);
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    CAudioDGModule::RunMessageLoop(this);
  }
  return CAudioDGModule::PostMessageLoop(this);
}
