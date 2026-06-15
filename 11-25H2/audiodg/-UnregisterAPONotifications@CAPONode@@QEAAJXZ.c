/*
 * XREFs of ?UnregisterAPONotifications@CAPONode@@QEAAJXZ @ 0x140008EF8
 * Callers:
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140008E88 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPONode::UnregisterAPONotifications(CAPONode *this)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 48) )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 48LL))(
         *((_QWORD *)this + 5),
         *((_QWORD *)this + 4));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_BYTE *)this + 48) = 0;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B4,
    (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
    (const char *)(unsigned int)v3,
    v5);
  return v4;
}
