/*
 * XREFs of sub_1400039B0 @ 0x1400039B0
 * Callers:
 *     sub_140042AE4 @ 0x140042AE4 (sub_140042AE4.c)
 *     sub_140042EB4 @ 0x140042EB4 (sub_140042EB4.c)
 *     sub_14004314C @ 0x14004314C (sub_14004314C.c)
 *     sub_140043404 @ 0x140043404 (sub_140043404.c)
 *     sub_140043650 @ 0x140043650 (sub_140043650.c)
 *     sub_1400437C4 @ 0x1400437C4 (sub_1400437C4.c)
 *     sub_140043AF8 @ 0x140043AF8 (sub_140043AF8.c)
 *     sub_14004446C @ 0x14004446C (sub_14004446C.c)
 *     sub_1400456F0 @ 0x1400456F0 (sub_1400456F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400039B0(ULONG *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG v6; // eax
  __int64 v8; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  v6 = a1[20];
  if ( v6 == 1 )
  {
    *(_DWORD *)a4 = a1[18];
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 4;
  }
  else
  {
    if ( v6 == 2 || KeGetProcessorNumberFromIndex(a1[14], &ProcNumber) < 0 )
      return 0LL;
    a3 = a2;
    *(_WORD *)a4 = ProcNumber.Group;
    *(_BYTE *)(a4 + 2) = ProcNumber.Number;
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 3;
  }
  *(_DWORD *)(v8 + 12) = 0;
  *(_QWORD *)v8 = a4;
  return a3;
}
