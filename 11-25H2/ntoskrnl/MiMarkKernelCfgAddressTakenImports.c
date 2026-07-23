/*
 * XREFs of MiMarkKernelCfgAddressTakenImports @ 0x140A85AE4
 * Callers:
 *     MiProcessKernelCfgAddressTakenImports @ 0x140AB735C (MiProcessKernelCfgAddressTakenImports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiMarkKernelCfgTarget @ 0x140481744 (MiMarkKernelCfgTarget.c)
 */

__int64 __fastcall MiMarkKernelCfgAddressTakenImports(__int64 a1)
{
  _DWORD *v2; // rax
  unsigned int v3; // r14d
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  unsigned int i; // edi
  __int64 result; // rax
  ULONG v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &v8);
  v3 = v2[42];
  v4 = (_DWORD *)*((_QWORD *)v2 + 20);
  v5 = (v2[36] >> 28) + 4;
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
