/*
 * XREFs of _GetWindowIcon @ 0x1C01E2F5C
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C01D5310 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C0212F48 (xxxSendShutdownData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C035C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rax
  __int64 v7; // rax
  struct tagCURSOR *v8; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( a2 == 1 )
    v5 = *(_QWORD *)(v2 + 272);
  else
    v5 = *(_QWORD *)(v2 + 264);
  v6 = (struct tagCURSOR *)HMValidateHandleNoRip(v5, 3);
  if ( (v6
     || ((v7 = *(_QWORD *)(a1 + 136), a2 != 1)
       ? (v6 = *(struct tagCURSOR **)(v7 + 112))
       : (v6 = *(struct tagCURSOR **)(v7 + 80)),
         v6 || (v6 = (struct tagCURSOR *)qword_1C0359CF0) != 0LL))
    && (v8 = _DuplicateCursor(v6)) != 0LL )
  {
    return *(_QWORD *)v8;
  }
  else
  {
    return 0LL;
  }
}
