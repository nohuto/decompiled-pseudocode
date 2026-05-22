/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18001499C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180015334 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x180014A64 (-CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  __int64 v4; // r9
  int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE v11[4]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h] BYREF
  char v13; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  memset_0(v11, 0, 0x40uLL);
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)this + 72LL))(
         *(_QWORD *)this,
         0LL,
         1LL,
         v4);
  if ( !CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(this) )
    return 0LL;
  if ( v5 < 0 )
    return 0LL;
  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)this + 3);
  v11[0] = 3;
  v13 = a2;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64))(*(_QWORD *)v7 + 184LL))(v7, v8, v11, 64LL);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornoti"
                  "ficationprocessor.cpp",
    (const char *)(unsigned int)v9,
    (int)&v12);
  return v10;
}
