/*
 * XREFs of ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AB904
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801AB9FC (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_atan2f_0 @ 0x18009D4B4 (_o_atan2f_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1801ABB5C (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnFlick(EdgyProcessorTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  double v7; // xmm0_8
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+24h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v9 = 12;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 19) + 88LL))(
         *((_QWORD *)this + 19),
         7LL,
         &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = HIDWORD(v10);
    if ( v10 )
    {
      v7 = o_atan2f_0();
      if ( (*(float *)&v7 < 0.78539819 || *(float *)&v7 > 2.3561945)
        && (*(float *)&v7 < -2.3561945 || *(float *)&v7 > -0.78539819) )
      {
        v8 = (unsigned int)v10;
        LOBYTE(v6) = 1;
      }
      else
      {
        v8 = v5;
        v6 = 0LL;
      }
      *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe(this, v6, v8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
