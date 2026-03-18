/*
 * XREFs of sub_1408F9528 @ 0x1408F9528
 * Callers:
 *     sub_1408A95DC @ 0x1408A95DC (sub_1408A95DC.c)
 *     sub_1408F94D0 @ 0x1408F94D0 (sub_1408F94D0.c)
 *     WbHeapExecutionUnloadModule @ 0x140A50CFC (WbHeapExecutionUnloadModule.c)
 *     sub_140A50E08 @ 0x140A50E08 (sub_140A50E08.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1406956DC (Feature_58333519__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     sub_1408FCBC0 @ 0x1408FCBC0 (sub_1408FCBC0.c)
 */

__int64 __fastcall sub_1408F9528(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // edi
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 == -1 )
  {
    v5 = sub_1408FCBC0(a1, a2, a3, a5, (__int64)&v9);
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
