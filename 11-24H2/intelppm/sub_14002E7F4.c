/*
 * XREFs of sub_14002E7F4 @ 0x14002E7F4
 * Callers:
 *     sub_14003CF60 @ 0x14003CF60 (sub_14003CF60.c)
 * Callees:
 *     sub_140006700 @ 0x140006700 (sub_140006700.c)
 *     sub_14000AC00 @ 0x14000AC00 (sub_14000AC00.c)
 *     sub_14003E4A0 @ 0x14003E4A0 (sub_14003E4A0.c)
 */

__int64 __fastcall sub_14002E7F4(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = *(_DWORD *)a2;
  v16 = 0;
  v15 = 0;
  v5 = sub_140006700(v3);
  v6 = 0LL;
  v7 = *(_QWORD *)(v5 + 544);
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 4) )
      return 0LL;
    v8 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 4 * v6);
    v9 = 80 * v8;
    result = sub_14003E4A0(
               v5,
               80 * (int)v8 + (int)v7 + 48,
               -1,
               *(_DWORD *)(80 * v8 + v7 + 36),
               (__int64)&v17,
               (__int64)&v15,
               (__int64)&v16,
               0LL);
    if ( (int)result < 0 )
      return result;
    if ( v15 )
      break;
    v6 = (unsigned int)(v6 + 1);
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    sub_14000AC00(
      (__int64)off_140018050->DeviceExtension,
      v11,
      v12,
      v13,
      v14,
      *(const wchar_t **)(a1 + 272),
      *(const wchar_t **)(v5 + 64),
      *(_QWORD *)(v9 + v7 + 96));
  return 3221225473LL;
}
