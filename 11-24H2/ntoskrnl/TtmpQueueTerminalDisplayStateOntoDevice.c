/*
 * XREFs of TtmpQueueTerminalDisplayStateOntoDevice @ 0x140769980
 * Callers:
 *     TtmpPushTerminalState @ 0x1407698B0 (TtmpPushTerminalState.c)
 * Callees:
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall TtmpQueueTerminalDisplayStateOntoDevice(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rsi
  __int64 *v5; // rdx
  __int64 *i; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 Pool2; // rax
  _QWORD *v10; // rcx
  __int64 *v11; // rax

  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    v5 = (__int64 *)(a1 + 16 * (a3 + 8LL));
    for ( i = (__int64 *)*v5; ; i = (__int64 *)*i )
    {
      if ( i == v5 )
        goto LABEL_11;
      if ( i[3] == *(_QWORD *)(a2 + 24) && *((_DWORD *)i + 8) == *(_DWORD *)(a2 + 32) )
      {
        v7 = 2867LL;
        v8 = 3221226026LL;
LABEL_9:
        TtmiLogError("TtmpQueueTerminalDisplayStateOntoDevice", v7, v8, 0xFFFFFFFFLL);
        return;
      }
      if ( i[2] >= v3 )
        break;
    }
    i = (__int64 *)i[1];
LABEL_11:
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x446D7454u);
    v10 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      v7 = 2902LL;
      v8 = 3221225626LL;
      goto LABEL_9;
    }
    *(_QWORD *)(Pool2 + 16) = v3;
    *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a2 + 32);
    v11 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i )
      __fastfail(3u);
    *v10 = v11;
    v10[1] = i;
    v11[1] = (__int64)v10;
    *i = (__int64)v10;
  }
}
