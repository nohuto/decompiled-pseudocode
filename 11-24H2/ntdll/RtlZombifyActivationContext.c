/*
 * XREFs of RtlZombifyActivationContext @ 0x180134A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlZombifyActivationContext(__int64 a1)
{
  unsigned int v1; // edi
  void (__fastcall *v3)(__int64, __int64, __int64, __int64, _QWORD, char *); // rax
  __int64 v4; // r9
  __int64 v5; // r8
  char v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || ((a1 - 1) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return (unsigned int)-1073741811;
  }
  else if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    v3 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, char *))(a1 + 32);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 40);
      v5 = *(_QWORD *)(a1 + 24);
      v7 = 0;
      v3(2LL, a1, v5, v4, 0LL, &v7);
    }
    *(_DWORD *)(a1 + 4) |= 1u;
  }
  return v1;
}
