/*
 * XREFs of RaidUnitAssignIdentity @ 0x14002FE48
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x14002FCD8 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidUnitAssignIdentity(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  size_t v6; // r8
  __int64 result; // rax

  *(_OWORD *)(a1 + 112) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v5 = *(_QWORD *)(v4 + 6000);
  if ( v5 )
  {
    *(_OWORD *)(a1 + 177) = *(_OWORD *)(v5 + 24);
    *(_OWORD *)(a1 + 193) = *(_OWORD *)(v5 + 40);
    *(_QWORD *)(a1 + 209) = *(_QWORD *)(v5 + 56);
  }
  else
  {
    *(_OWORD *)(a1 + 177) = *(_OWORD *)(*(_QWORD *)a2 + 16LL);
  }
  *(_DWORD *)(a1 + 498) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( *(_WORD *)(a2 + 10) )
  {
    v6 = 255LL;
    if ( *(_WORD *)(a2 + 8) < 0xFFu )
      v6 = *(unsigned __int16 *)(a2 + 8);
    memmove((void *)(a1 + 242), *(const void **)(a2 + 16), v6);
  }
  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return result;
}
