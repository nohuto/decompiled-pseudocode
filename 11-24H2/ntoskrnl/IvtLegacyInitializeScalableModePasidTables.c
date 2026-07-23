/*
 * XREFs of IvtLegacyInitializeScalableModePasidTables @ 0x14056DEF4
 * Callers:
 *     IvtLegacyExtendScalableModePasidTables @ 0x14056D45C (IvtLegacyExtendScalableModePasidTables.c)
 * Callees:
 *     IvtLegacySetScalableModePasidTableEntry @ 0x1404CE494 (IvtLegacySetScalableModePasidTableEntry.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1404D1ACC (IvtBuildScalableModePasidDirectoryEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtLegacyInitializeScalableModePasidTables(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int128 *v9; // rax
  __int128 v10; // xmm2
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v13; // edi
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  signed __int64 v16[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v17; // [rsp+50h] [rbp-58h]
  __int128 v18; // [rsp+60h] [rbp-48h]
  __int128 v19; // [rsp+70h] [rbp-38h]

  v15 = 0LL;
  v4 = a3;
  memset_0(v16, 0, 0x40uLL);
  memset_0(*(void **)(a2 + 8 * v4 + 64), 0, 0x1000uLL);
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 && !(_DWORD)v4 )
  {
    v9 = *(__int128 **)(v8 + 64);
    v10 = *v9;
    v11 = v9[2];
    v17 = v9[1];
    v12 = v9[3];
    v16[1] = *((_QWORD *)&v10 + 1);
    v18 = v11;
    v16[0] = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    v19 = v12;
    IvtLegacySetScalableModePasidTableEntry(v6, a2, 0, v16);
  }
  v13 = (_DWORD)v4 << 6;
  IvtBuildScalableModePasidDirectoryEntry(v6, a2, v13, v7, &v15);
  result = v15;
  *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * ((v13 >> 6) & 0x3FFF)) = v15;
  return result;
}
