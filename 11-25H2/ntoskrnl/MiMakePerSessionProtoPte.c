/*
 * XREFs of MiMakePerSessionProtoPte @ 0x1402CF61C
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiMakePerSessionProtoPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int SessionId; // ebp
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 ProtoPteAddress; // rdi
  __int64 v12; // rdi
  __int64 SharedProtos; // rax
  unsigned __int64 *v14; // [rsp+20h] [rbp-18h] BYREF

  SessionId = PsGetSessionIdEx(a1);
  v8 = PsGetSessionIdEx(a2);
  if ( SessionId == v8 )
    return CLFS_LSN_NULL_EXT;
  v14 = *(unsigned __int64 **)(a4 + 72);
  v9 = *v14;
  if ( (*(_DWORD *)(*v14 + 56) & 0x8000000) == 0 )
    return CLFS_LSN_NULL_EXT;
  ProtoPteAddress = MiGetProtoPteAddress(a4, (unsigned __int64)(a3 << 25 >> 16) >> 12, 8, &v14);
  if ( !ProtoPteAddress || (v14[4] & 0x20000) == 0 )
    return CLFS_LSN_NULL_EXT;
  v12 = (ProtoPteAddress - *(_QWORD *)(MiGetSharedProtos(v9, SessionId, v14) + 72)) >> 3;
  SharedProtos = MiGetSharedProtos(v9, v8, v14);
  return MiMakePrototypePteDirect(*(_QWORD *)(SharedProtos + 72) + 8 * v12);
}
