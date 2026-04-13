/*
 * XREFs of ?underflow@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MEAAGXZ @ 0x18005E420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstringbuf::underflow(__int64 a1)
{
  unsigned __int16 **v1; // r10
  unsigned __int16 *v3; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int16 *v7; // rcx

  v1 = *(unsigned __int16 ***)(a1 + 56);
  v3 = *v1;
  if ( !*v1 )
    return 0xFFFFLL;
  if ( v3 < &v3[**(int **)(a1 + 80)] )
    return *v3;
  if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
    return 0xFFFFLL;
  v5 = **(_QWORD **)(a1 + 64);
  if ( !v5 || v5 <= (unsigned __int64)v3 && *(_QWORD *)(a1 + 104) <= (unsigned __int64)v3 )
    return 0xFFFFLL;
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 < v5 )
  {
    *(_QWORD *)(a1 + 104) = v5;
    v6 = v5;
  }
  v7 = *v1;
  *v1 = *v1;
  **(_DWORD **)(a1 + 80) = (__int64)(v6 - (_QWORD)v7) >> 1;
  return ***(unsigned __int16 ***)(a1 + 56);
}
