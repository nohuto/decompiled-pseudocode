/*
 * XREFs of _PnpCtxUnregisterMachineNode @ 0x1408182FC
 * Callers:
 *     PiDrvDbUnregisterNode @ 0x140737BD8 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpCtxDestroyNode @ 0x140817B70 (_PnpCtxDestroyNode.c)
 *     _PnpCtxFindNode @ 0x140817C70 (_PnpCtxFindNode.c)
 */

__int64 __fastcall PnpCtxUnregisterMachineNode(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  UNICODE_STRING *v4; // rbx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  _QWORD **v7; // rdx
  PVOID *Buffer; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)&PiPnpRtlCtx;
  P = 0LL;
  result = PnpCtxFindNode(*(__int64 *)&PiPnpRtlCtx, a2, 0, (const UNICODE_STRING **)&P);
  if ( (int)result >= 0 )
  {
    v4 = (UNICODE_STRING *)P;
    if ( P == *(PVOID *)(v2 + 88) )
    {
      return 3221225659LL;
    }
    else
    {
      v5 = *(_QWORD **)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P
        || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P)
        || (*v6 = v5, v5[1] = v6, v7 = *(_QWORD ***)&v4[1].Length, v7[1] != (_QWORD *)&v4[1])
        || (Buffer = (PVOID *)v4[1].Buffer, *Buffer != &v4[1]) )
      {
        __fastfail(3u);
      }
      *Buffer = v7;
      v7[1] = Buffer;
      memset_0((void *)(v2 + 96), 0, 0x80uLL);
      *(_BYTE *)(v2 + 4) = *(_QWORD *)(v2 + 56) != v2 + 56;
      return PnpCtxDestroyNode(v4);
    }
  }
  return result;
}
