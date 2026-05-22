/*
 * XREFs of std::call_once__lambda_4bfd0116db80ce4255855ce8af72e9c8___ @ 0x180033504
 * Callers:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800334CC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 * Callees:
 *     ??0MPC3DStateHelper@@AEAA@XZ @ 0x180094F98 (--0MPC3DStateHelper@@AEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009AC04 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009E538 (__std_init_once_link_alternate_names_and_abort.c)
 */

// Hidden C++ exception states: #wind=2
BOOL __fastcall std::call_once__lambda_4bfd0116db80ce4255855ce8af72e9c8___(__int64 a1, __int64 a2)
{
  BOOL result; // eax
  void *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  MPC3DStateHelper *v6; // [rsp+40h] [rbp+8h]
  WINBOOL v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+4Ch] [rbp+14h]

  v8 = HIDWORD(a2);
  v7 = 0;
  result = __std_init_once_begin_initialize(&MPC3DStateHelper::s_singletonCreated, 0, &v7, 0LL);
  if ( !result )
    abort();
  if ( v7 )
  {
    v6 = (MPC3DStateHelper *)operator new(0x58uLL);
    MPC3DStateHelper::s_instance = MPC3DStateHelper::MPC3DStateHelper(v6);
    wil::details::SetEvent(MPC3DStateHelper::s_isInstanceCreatedEvent, v3);
    result = InitOnceComplete(&MPC3DStateHelper::s_singletonCreated, 0, 0LL);
    if ( !result )
      _std_init_once_link_alternate_names_and_abort(v5, v4);
  }
  return result;
}
