/*
 * XREFs of ?RegisterAPONotifications@CAPOWrapperSrv@@AEAAJPEBG@Z @ 0x140049F28
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004EC80 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::RegisterAPONotifications(CAPOWrapperSrv *this, const unsigned __int16 *a2)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_QWORD *)((char *)this + 128);
  result = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 12))(
             *((_QWORD *)this + 12),
             &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
             (char *)this + 128);
  if ( (int)result >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const unsigned __int16 *))(**((_QWORD **)this + 11) + 40LL))(
           *((_QWORD *)this + 11),
           *v4,
           a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *((_DWORD *)this + 34) = 1;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  return result;
}
