/*
 * XREFs of _PnpCtxRegisterMachineNode @ 0x1408180DC
 * Callers:
 *     PiPnpRtlInit @ 0x1407247D4 (PiPnpRtlInit.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpCtxCreateNode @ 0x1408179EC (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x140817B70 (_PnpCtxDestroyNode.c)
 *     _PnpCtxFindNode @ 0x140817C70 (_PnpCtxFindNode.c)
 *     _SysCtxGetTransaction @ 0x1408208F8 (_SysCtxGetTransaction.c)
 */

__int64 __fastcall PnpCtxRegisterMachineNode(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5, void *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  int Node; // ebx
  int Transaction; // eax
  __int64 v11; // r9
  void *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  UNICODE_STRING *v18; // rcx
  __int64 v20; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  a6 = 0LL;
  v7 = *(_QWORD *)&PiPnpRtlCtx;
  v8 = a3;
  if ( a3 == 1 || a3 == 2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24) != *(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24 )
      return (unsigned int)-1073741298;
  }
  else if ( a3 != 3 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (int)PnpCtxFindNode(*(__int64 *)&PiPnpRtlCtx, a2, 0, (const UNICODE_STRING **)&P) >= 0 )
    return (unsigned int)-1073741771;
  Transaction = SysCtxGetTransaction(*(_QWORD *)(v7 + 224), &a6);
  Node = Transaction;
  if ( Transaction == -1072103421 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( Transaction < 0 )
      goto LABEL_18;
    v12 = a6;
  }
  Node = PnpCtxCreateNode((int *)v7, a2, v8, v11, a5, v20, -1, v12, (UNICODE_STRING **)&P);
  if ( Node >= 0 )
  {
    v13 = *(_QWORD **)(v7 + 16);
    if ( *v13 != v7 + 8 )
      goto LABEL_17;
    v14 = P;
    *((_QWORD *)P + 1) = v13;
    *v14 = v7 + 8;
    *v13 = v14;
    *(_QWORD *)(v7 + 16) = v14;
    v15 = v7 + 16 * v8 + 24;
    v16 = v14 + 2;
    v17 = *(_QWORD **)(v15 + 8);
    if ( *v17 != v15 )
LABEL_17:
      __fastfail(3u);
    *v16 = v15;
    v16[1] = v17;
    *v17 = v16;
    *(_QWORD *)(v15 + 8) = v16;
    memset_0((void *)(v7 + 96), 0, 0x80uLL);
    *(_BYTE *)(v7 + 4) = *(_QWORD *)(v7 + 56) != v7 + 56;
    v18 = 0LL;
    goto LABEL_19;
  }
LABEL_18:
  v18 = (UNICODE_STRING *)P;
LABEL_19:
  if ( v18 )
    PnpCtxDestroyNode(v18);
  return (unsigned int)Node;
}
