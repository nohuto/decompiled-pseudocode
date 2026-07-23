/*
 * XREFs of sub_14091BE04 @ 0x14091BE04
 * Callers:
 *     sub_1408FF83C @ 0x1408FF83C (sub_1408FF83C.c)
 *     sub_14091BDAC @ 0x14091BDAC (sub_14091BDAC.c)
 *     WbHeapExecutionUnloadModule @ 0x140A480AC (WbHeapExecutionUnloadModule.c)
 *     sub_140A481B8 @ 0x140A481B8 (sub_140A481B8.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1406967AC (Feature_58333519__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     sub_14091F4A0 @ 0x14091F4A0 (sub_14091F4A0.c)
 */

__int64 __fastcall sub_14091BE04(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // edi
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 == -1 )
  {
    v5 = sub_14091F4A0(a1, a2, a3, a5, (__int64)&v9);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v6 = v9;
  }
  memmove(
    (void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(v6 * *(_DWORD *)a1)),
    (const void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)a1 * (v6 + 1))),
    (unsigned int)(*(_DWORD *)a1 * (*(_DWORD *)(a1 + 4) - v6 - 1)));
  if ( (unsigned int)Feature_58333519__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4));
  else
    --*(_DWORD *)(a1 + 4);
  return (unsigned int)v5;
}
