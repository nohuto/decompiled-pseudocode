/*
 * XREFs of MiCopyImageExtentContents @ 0x1404C5964
 * Callers:
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 * Callees:
 *     MiFillPageWithImageExtentContents @ 0x14067BED4 (MiFillPageWithImageExtentContents.c)
 */

unsigned __int64 __fastcall MiCopyImageExtentContents(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  __int64 v4; // r8
  unsigned __int64 result; // rax
  ULONG_PTR v6; // rbp
  __int64 v7; // rbx
  unsigned int v8; // esi

  v2 = a2 + 48;
  v3 = *(_DWORD *)(a2 + 40);
  v4 = **(_QWORD **)(a1 + 208);
  result = *(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v6 = *(_QWORD *)(result + 48);
  if ( (*(_DWORD *)(result + 56) & 0x1000) != 0 )
    v7 = (__int64)(*(_QWORD *)(a1 + 240) - *(_QWORD *)(v4 + 136)) >> 3 << 12;
  else
    v7 = *(_QWORD *)(a1 + 96);
  for ( ; v3; v3 -= v8 )
  {
    v8 = 4096;
    if ( v3 <= 0x1000 )
      v8 = v3;
    result = MiFillPageWithImageExtentContents(v6);
    if ( v3 <= 0x1000 )
      break;
    result = v8;
    v2 += 8LL;
    v7 += v8;
  }
  return result;
}
