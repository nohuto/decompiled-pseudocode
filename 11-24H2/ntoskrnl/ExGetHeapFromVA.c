/*
 * XREFs of ExGetHeapFromVA @ 0x1402B3750
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x1402B3980 (ExpHpCompactHeapCallback.c)
 *     ExIsSpecialPoolAddress @ 0x1402B4928 (ExIsSpecialPoolAddress.c)
 *     ExFreeHeapPages @ 0x14044074C (ExFreeHeapPages.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B381C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  __int64 v3; // rcx
  ULONG_PTR v4; // rax
  ULONG_PTR result; // rax
  __int64 v6; // rax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h]
  int v10; // [rsp+64h] [rbp+Ch]

  if ( (_WORD)BugCheckParameter3 )
  {
    v2 = 0;
LABEL_3:
    v9 = 0x100000;
    v10 = 0x1000000;
    v3 = 192LL * v2;
    v4 = BugCheckParameter3 & -(__int64)(unsigned int)*(&v9 + v2);
    result = (RtlpHpHeapGlobals ^ *(_QWORD *)(v4 + 16) ^ v4) - v3 - 320;
    goto LABEL_4;
  }
  v6 = RtlCSparseBitmapBitmaskRead(&dword_140E68310, 2 * ((BugCheckParameter3 - qword_140E68308) >> 20));
  if ( v6 )
  {
    v2 = v6 - 1;
    if ( v2 != 2 )
      goto LABEL_3;
  }
  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68358, BugCheckParameter3, &v7);
  result = *(_QWORD *)v8;
LABEL_4:
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}
