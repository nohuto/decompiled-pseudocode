/*
 * XREFs of PiDevCfgCopyVariableData @ 0x140726FB8
 * Callers:
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072A040 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8DDE0 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgCopyVariableData(__int64 a1, __int64 a2)
{
  int v2; // esi
  void *v4; // rdi
  __int64 v5; // rdx
  unsigned int v7; // eax
  void *Pool2; // rax
  void *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5 )
    goto LABEL_9;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) == 0x8000 )
  {
    v2 = PnpCtxRegOpenKey(PiPnpRtlCtx, v5, 0, 0, 131097, (__int64)&v10);
    if ( v2 >= 0 )
    {
      v4 = v10;
LABEL_9:
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)(a1 + 40) = v4;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 36);
    if ( !v7 )
      goto LABEL_9;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v7, 0x63647050u);
    v4 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 36));
      goto LABEL_9;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v2;
}
