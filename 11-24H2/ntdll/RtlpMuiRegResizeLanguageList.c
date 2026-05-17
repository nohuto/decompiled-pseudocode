/*
 * XREFs of RtlpMuiRegResizeLanguageList @ 0x180149A84
 * Callers:
 *     RtlpMuiRegGrowLanguageList @ 0x18008001C (RtlpMuiRegGrowLanguageList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180113D64 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguageList(__int64 a1, int a2)
{
  signed int v2; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 v5; // [rsp+28h] [rbp-20h]
  unsigned int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  if ( !a1 )
    return 0LL;
  if ( v2 < *(unsigned __int16 *)(a1 + 4) )
    return 0LL;
  result = SafeReallocBlob(a1, 0x40u, v2, 6u, v4, v5, &v6);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v6;
  *(_QWORD *)(result + 24) = result + 64;
  *(_WORD *)(result + 6) = v2;
  return result;
}
