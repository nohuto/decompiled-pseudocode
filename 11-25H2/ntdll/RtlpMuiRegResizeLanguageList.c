/*
 * XREFs of RtlpMuiRegResizeLanguageList @ 0x18014B034
 * Callers:
 *     RtlpMuiRegGrowLanguageList @ 0x180088948 (RtlpMuiRegGrowLanguageList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180116A54 (_SafeReallocBlob.c)
 */

_QWORD *__fastcall RtlpMuiRegResizeLanguageList(unsigned __int16 *a1, int a2)
{
  signed int v2; // ebx
  _QWORD *result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 v5; // [rsp+28h] [rbp-20h]
  unsigned int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  if ( !a1 )
    return 0LL;
  if ( v2 < a1[2] )
    return 0LL;
  result = SafeReallocBlob(a1, 0x40u, v2, 6u, v4, v5, &v6);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v6;
  result[3] = result + 8;
  *((_WORD *)result + 3) = v2;
  return result;
}
