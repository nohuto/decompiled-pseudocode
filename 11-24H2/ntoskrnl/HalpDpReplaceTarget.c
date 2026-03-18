/*
 * XREFs of HalpDpReplaceTarget @ 0x140B4FE30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140B4F7D0 (HalpDpOfflineProcessorForReplace.c)
 */

__int64 __fastcall HalpDpReplaceTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v6; // edi
  int v7; // eax
  int v8; // esi
  unsigned int v9; // edi
  __int64 result; // rax

  v4 = *(_DWORD *)a1;
  v6 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  v7 = *(_DWORD *)(a1 + 48);
  v8 = v4 + 1;
  while ( v7 < v8 )
  {
    if ( (++v6 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v6, a2, a3, a4);
    v7 = *(_DWORD *)(a1 + 48);
  }
  if ( !*(_BYTE *)(a1 + 68) )
    HalpDpOfflineProcessorForReplace(a1);
  v9 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (int)result >= v8 )
      break;
    if ( (++v9 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v9, a2, a3, a4);
  }
  return result;
}
