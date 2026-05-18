/*
 * XREFs of sub_18007CD98 @ 0x18007CD98
 * Callers:
 *     sub_18007BBF0 @ 0x18007BBF0 (sub_18007BBF0.c)
 *     sub_180082384 @ 0x180082384 (sub_180082384.c)
 *     sub_1800C30B4 @ 0x1800C30B4 (sub_1800C30B4.c)
 *     sub_1800C5E60 @ 0x1800C5E60 (sub_1800C5E60.c)
 * Callees:
 *     sub_180040B74 @ 0x180040B74 (sub_180040B74.c)
 */

__int64 *__fastcall sub_18007CD98(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_180040B74(a1, &v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_DWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
