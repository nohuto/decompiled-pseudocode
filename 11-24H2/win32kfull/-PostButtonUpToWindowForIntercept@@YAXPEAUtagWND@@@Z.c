/*
 * XREFs of ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402B5060
 * Callers:
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402B4E84 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x14012E3D4 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 */

void __fastcall PostButtonUpToWindowForIntercept(struct tagWND *a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // [rsp+80h] [rbp+37h] BYREF
  __int64 v6[3]; // [rsp+88h] [rbp+3Fh] BYREF
  struct tagWND *v7; // [rsp+B0h] [rbp+67h] BYREF
  unsigned __int64 v8; // [rsp+B8h] [rbp+6Fh] BYREF
  unsigned int v9; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v10; // [rsp+C8h] [rbp+7Fh] BYREF

  v7 = a1;
  v1 = *((_QWORD *)a1 + 2);
  v10 = 0LL;
  v5 = v1;
  SetSystemInputSource(&v10);
  v2 = *(unsigned __int16 *)(v1 + 800);
  v3 = *(unsigned __int16 *)(v1 + 796);
  v9 = 0;
  LODWORD(v8) = 0;
  v6[0] = *(_QWORD *)(v1 + 472);
  v4 = v3 | (v2 << 16);
  if ( (unsigned int)AdjustPwndPtiPqForDelegation(v6, (__int64 *)&v7, &v5, 0x202u, &v10, &v9, &v8) )
    PostInputMessage(
      *(struct tagQ **)(v5 + 472),
      (LARGE_INTEGER *)v7,
      0x202u,
      0LL,
      v4,
      0,
      0LL,
      0LL,
      0,
      (struct tagINPUT_MESSAGE_SOURCE *)&v10,
      0LL,
      0LL,
      v9,
      v8,
      v5);
}
