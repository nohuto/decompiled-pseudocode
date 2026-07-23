/*
 * XREFs of IvtLegacySetPasidAddressSpace @ 0x14056E0E0
 * Callers:
 *     <none>
 * Callees:
 *     IvtLegacySetScalableModePasidTableEntry @ 0x1404CE494 (IvtLegacySetScalableModePasidTableEntry.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1404F322C (IvtBuildScalableModePasidTableS1Entry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IvtEnsureNoPendingFaults @ 0x14056B71C (IvtEnsureNoPendingFaults.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056CAC8 (IvtInvalidateScalableModePasidCache.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtLegacySetPasidAddressSpace(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG_PTR *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int128 v19; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v20[8]; // [rsp+90h] [rbp-88h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v10 = *(_QWORD *)(a2 + 64);
  v11 = a4 >> 12;
  v12 = (unsigned __int64)(a3 & 0x3F) << 6;
  v13 = *(_QWORD *)(v10 + 8LL * ((a3 >> 6) & 0x3FFF) + 64);
  v19 = *(_OWORD *)(v13 + v12);
  if ( (v19 & 1) != 0 && *(_QWORD *)(v13 + v12 + 16) >> 12 == v11 )
  {
    if ( a5 )
      *a5 = 0;
  }
  else
  {
    if ( !v11 )
    {
      v14 = (ULONG_PTR *)IvtEnsureNoPendingFaults(a1, a3);
      if ( v14 )
        KeBugCheckEx(0x159u, 0x1000uLL, (ULONG_PTR)v14, *v14, v14[1]);
    }
    IvtBuildScalableModePasidTableS1Entry((__int64)a1, 1, v11, v9, 0, 0, v20);
    IvtLegacySetScalableModePasidTableEntry(v15, v10, a3, (signed __int64 *)v20);
    if ( (v19 & 1) != 0 )
    {
      v16 = WORD4(v19);
      if ( (((unsigned __int64)v19 >> 6) & 7) != 2 )
        v16 = 0x10000;
      IvtInvalidateScalableModePasidCache((__int64)a1, **(_DWORD **)(a2 + 56), v16, a3, 0, 0, 0);
    }
    if ( a5 )
      *a5 = 1;
  }
  return 0LL;
}
