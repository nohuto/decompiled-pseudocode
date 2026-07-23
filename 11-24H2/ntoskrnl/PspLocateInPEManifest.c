/*
 * XREFs of PspLocateInPEManifest @ 0x1408DFF78
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     LdrResSearchResource @ 0x1408E01B0 (LdrResSearchResource.c)
 */

__int64 __fastcall PspLocateInPEManifest(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 result; // rax
  int v5; // eax
  __int16 v6; // ax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 688);
  if ( *(_QWORD *)(a1 + 784) )
  {
    v6 = *(_WORD *)(a1 + 1772);
    if ( v6 == 332 || v6 == 452 )
    {
      v7 = *(_QWORD *)(a1 + 680);
      if ( !v7 )
        return 3221225477LL;
      v8 = MiSectionControlArea(v7);
      if ( (*(_DWORD *)(v8 + 56) & 0x20) == 0 )
        return 3221225477LL;
      if ( !*(_QWORD *)(v8 + 144) )
        LODWORD(v3) = v3 | 1;
    }
  }
  v9[2] = 0LL;
  v10 = 0LL;
  v9[0] = 24LL;
  v9[1] = 1LL;
  result = LdrResSearchResource(v3, (unsigned int)v9, 3, 48, a2 + 304, (__int64)&v10, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741308 || (unsigned int)(result + 1073741687) <= 2 )
      return 0LL;
  }
  else
  {
    v5 = v10;
    if ( v10 <= 0xFFFFFFFF )
    {
      *(_BYTE *)(a2 + 16) |= 0x20u;
      *(_DWORD *)(a2 + 312) = v5;
      *(_DWORD *)(*(_QWORD *)(a2 + 216) + 8LL) |= 0x2000u;
      return 0LL;
    }
    return 3221225595LL;
  }
  return result;
}
