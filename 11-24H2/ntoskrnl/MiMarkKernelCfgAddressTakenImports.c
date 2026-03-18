/*
 * XREFs of MiMarkKernelCfgAddressTakenImports @ 0x140A8A44C
 * Callers:
 *     MiProcessKernelCfgAddressTakenImports @ 0x140ABB69C (MiProcessKernelCfgAddressTakenImports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     MiMarkKernelCfgTarget @ 0x140482574 (MiMarkKernelCfgTarget.c)
 */

__int64 __fastcall MiMarkKernelCfgAddressTakenImports(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r14d
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  unsigned int i; // edi
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 0xAu, &v8);
  v3 = *(_DWORD *)(v2 + 168);
  v4 = *(_DWORD **)(v2 + 160);
  v5 = (*(_DWORD *)(v2 + 144) >> 28) + 4;
  for ( i = 0; ; ++i )
  {
    if ( i >= v3 )
    {
      *(_DWORD *)(a1 + 104) |= 0x100u;
      return 0LL;
    }
    if ( *v4 > (unsigned int)(*(_DWORD *)(a1 + 64) - 8) || (*v4 & 7) != 0 )
      break;
    result = MiMarkKernelCfgTarget();
    if ( (int)result < 0 )
      return result;
    v4 = (_DWORD *)((char *)v4 + v5);
  }
  return 3221225595LL;
}
