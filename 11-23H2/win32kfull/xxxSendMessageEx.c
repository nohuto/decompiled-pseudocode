/*
 * XREFs of xxxSendMessageEx @ 0x1C0077760
 * Callers:
 *     xxxSendMessageFF @ 0x1C0077720 (xxxSendMessageFF.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageEx(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  _BYTE *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9[3]; // [rsp+58h] [rbp-50h] BYREF
  int v10[4]; // [rsp+70h] [rbp-38h]
  __int64 v11; // [rsp+80h] [rbp-28h]

  if ( !a5 )
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 0, 1);
  v9[0] = 0LL;
  *(_QWORD *)v10 = 0LL;
  if ( !KeGetCurrentThread() )
    return 0LL;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (_BYTE *)a5;
  if ( a5 >= MmUserProbeAddress )
    v5 = (_BYTE *)MmUserProbeAddress;
  *v5 = *v5;
  v5[23] = v5[23];
  *(_OWORD *)v10 = *(_OWORD *)a5;
  v11 = *(_QWORD *)(a5 + 16);
  v6 = xxxSendTransformableMessageTimeout(BugCheckParameter2, v10[0], v10[1], (__int64)v9, 0, 1);
  v7 = v9[0];
  v11 = v9[0];
  *(_QWORD *)&v10[2] = v6;
  *(_OWORD *)a5 = *(_OWORD *)v10;
  *(_QWORD *)(a5 + 16) = v11;
  return v7;
}
