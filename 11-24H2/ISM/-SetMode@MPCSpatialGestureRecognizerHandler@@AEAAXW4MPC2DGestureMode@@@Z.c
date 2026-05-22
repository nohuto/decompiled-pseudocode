/*
 * XREFs of ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800C454C
 * Callers:
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x1800C2478 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800C2B48 (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::SetMode(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v4 = (unsigned int)a2;
  if ( !(_DWORD)a2 )
    goto LABEL_5;
  v4 = (unsigned int)(a2 - 1);
  if ( (_DWORD)a2 != 1 )
  {
    v4 = (unsigned int)(a2 - 2);
    if ( (_DWORD)a2 == 2 )
    {
      v5 = 32776;
      goto LABEL_6;
    }
    if ( (_DWORD)a2 != 3 )
    {
LABEL_5:
      v5 = 0;
      goto LABEL_6;
    }
  }
  v5 = 48;
LABEL_6:
  v6 = *(_QWORD *)(a1 + 16);
  v11 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 280LL))(v6, a2, v4);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v7,
      v9);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(a1 + 16) + 288LL))(
             *(_QWORD *)(a1 + 16),
             v5,
             &v11);
  if ( (int)result < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x81,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)result,
      v9);
  *(_DWORD *)(a1 + 168) = v2;
  return result;
}
