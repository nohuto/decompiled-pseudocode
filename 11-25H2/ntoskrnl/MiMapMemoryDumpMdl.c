/*
 * XREFs of MiMapMemoryDumpMdl @ 0x14049C45C
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x14049C420 (MmMapMemoryDumpMdl.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x1404F5FD4 (MmMapMemoryDumpMdlEx2.c)
 *     MmMapMemoryDumpMdlEx @ 0x14066C4C0 (MmMapMemoryDumpMdlEx.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall MiMapMemoryDumpMdl(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rdx
  __int64 v8; // r12
  ULONG_PTR *v9; // rsi
  unsigned __int64 v10; // rbp
  ULONG_PTR *v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned __int64 result; // rax
  __int64 v15; // rbp
  int v16; // r15d
  __int64 v17; // r14
  int ProtectionPfnCompatible; // eax
  ULONG_PTR v19; // rbx
  _BYTE v21[12]; // [rsp+40h] [rbp-108h] BYREF
  int v22; // [rsp+4Ch] [rbp-FCh]
  int v23; // [rsp+5Ch] [rbp-ECh]

  memset_0(v21, 0, 0xC8uLL);
  v7 = *(unsigned int *)(a3 + 44);
  v8 = ((unsigned int)(v7 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v7 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  *(_QWORD *)(a3 + 24) = a1 + v7;
  v9 = (ULONG_PTR *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v9;
  MiInitializeTbFlushList((__int64)v21, (__int64)&unk_140E37EC0, 20, 9, 1);
  do
  {
    if ( *v11 )
    {
      if ( (*v11 & 1) != 0 )
      {
        MiInsertTbFlushEntry((__int64)v21, v10, 1LL, 0);
        if ( v23 == v22 )
          MiFlushTbList((__int64)v21);
      }
      *v11 = 0LL;
    }
    ++v11;
    v10 += 4096LL;
    --v8;
  }
  while ( v8 );
  if ( v23 )
    MiFlushTbList((__int64)v21);
  v12 = *(unsigned int *)(a3 + 44);
  v13 = v12 + *(_DWORD *)(a3 + 40);
  result = (v13 & 0xFFF) != 0;
  *(_QWORD *)(a3 + 24) = a1 + v12;
  v15 = (v13 >> 12) + (unsigned int)result;
  if ( (a4 & 2) != 0 )
  {
    *(_WORD *)(a3 + 10) &= 0xFFDEu;
  }
  else
  {
    v16 = a4 & 1;
    v17 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
    do
    {
      ProtectionPfnCompatible = 4;
      if ( !v16 )
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(
                                    4,
                                    48 * *(ULONG_PTR *)((char *)v9 + v17 + 48) - 0x220000000000LL);
      result = MiMakeValidPte(
                 (unsigned __int64)v9,
                 *(ULONG_PTR *)((char *)v9 + v17 + 48),
                 ProtectionPfnCompatible | 0xA0000000);
      v19 = result;
      if ( _bittest64(&MiFlags, 0x24u) && (result & 0x20) == 0 )
      {
        result = 0xFFFFF6C000000000uLL;
        if ( (unsigned __int64)v9 >= 0xFFFFF6C000000000uLL )
          result = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v9, v19, 128);
      }
      *v9++ = v19;
      --v15;
    }
    while ( v15 );
    *(_WORD *)(a3 + 10) |= 0x11u;
  }
  return result;
}
