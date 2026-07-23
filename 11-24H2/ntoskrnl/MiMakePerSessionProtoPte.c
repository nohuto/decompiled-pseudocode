/*
 * XREFs of MiMakePerSessionProtoPte @ 0x140269F88
 * Callers:
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 */

__int64 __fastcall MiMakePerSessionProtoPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebp
  unsigned int SessionId; // r14d
  __int64 v9; // rbx
  __int64 ProtoPteAddress; // rdi
  __int64 v12; // rdi
  __int64 SharedProtos; // rax
  _DWORD *v14; // [rsp+20h] [rbp-18h] BYREF

  v7 = ((__int64 (*)(void))PsGetSessionIdEx)();
  SessionId = PsGetSessionIdEx(a2);
  if ( v7 == SessionId )
    return CLFS_LSN_NULL_EXT;
  v14 = *(_DWORD **)(a4 + 72);
  v9 = *(_QWORD *)v14;
  if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x8000000) == 0 )
    return CLFS_LSN_NULL_EXT;
  ProtoPteAddress = MiGetProtoPteAddress(a4, (unsigned __int64)(a3 << 25 >> 16) >> 12, 8LL, &v14);
  if ( !ProtoPteAddress || (v14[8] & 0x20000) == 0 )
    return CLFS_LSN_NULL_EXT;
  v12 = (ProtoPteAddress - *(_QWORD *)(MiGetSharedProtos(v9, v7, v14) + 72)) >> 3;
  SharedProtos = MiGetSharedProtos(v9, SessionId, v14);
  return MiMakePrototypePteDirect(*(_QWORD *)(SharedProtos + 72) + 8 * v12);
}
