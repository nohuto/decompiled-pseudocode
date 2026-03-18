/*
 * XREFs of ?CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z @ 0x140153410
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x14023D790 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 */

__int64 __fastcall CheckQuitMessage(struct tagTHREADINFO *a1, struct tagMSG *a2, unsigned int a3)
{
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 0x40000000) == 0
    || *((_DWORD *)a1 + 216) )
  {
    return 0LL;
  }
  if ( a3 )
    _InterlockedAnd((volatile signed __int32 *)a1 + 132, 0xBFFFFFFF);
  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 18;
  v7 = *((unsigned int *)a1 + 156);
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 2) = v7;
  *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v8 = PtiKbdFromQ(*((_QWORD *)a1 + 59));
  *(_QWORD *)((char *)a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v8 + 464) + 268LL));
  EtwTraceRetrievePseudoMessage(a1, a2, a3);
  return 1LL;
}
