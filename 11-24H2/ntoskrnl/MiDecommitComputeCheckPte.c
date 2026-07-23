/*
 * XREFs of MiDecommitComputeCheckPte @ 0x140406A40
 * Callers:
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiDecommitComputeCheckPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r8d
  __int64 v4; // r8
  int v5; // r9d

  *(_QWORD *)(a1 + 72) = a2;
  result = 0LL;
  *(_QWORD *)(a1 + 56) = (__int64)(a2 << 25) >> 16;
  v3 = *(_DWORD *)(a1 + 204);
  if ( v3 <= 1 )
  {
    v4 = 2 - v3;
    v5 = v4;
    do
    {
      result = 0xFFFFF68000000000uLL;
      a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v4;
    }
    while ( v4 );
    *(_DWORD *)(a1 + 96) = v5;
    *(_QWORD *)(a1 + 88) = a2;
  }
  else
  {
    *(_DWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 88) = a2;
  }
  return result;
}
