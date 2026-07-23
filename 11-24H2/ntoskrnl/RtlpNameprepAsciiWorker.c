/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x14078456C
 * Callers:
 *     RtlIdnToAscii @ 0x140784470 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1407844A0 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpNameprepAsciiRealWorker @ 0x1405EC1F8 (RtlpNameprepAsciiRealWorker.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, const WCHAR *a2, unsigned int a3, void *a4, LONG *a5, char a6)
{
  void *Pool2; // rsi
  const WCHAR *v11; // rax
  WCHAR *v12; // rbx
  unsigned int v13; // edi
  char v15; // [rsp+38h] [rbp-40h]
  char v16; // [rsp+48h] [rbp-30h]

  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x3FEuLL, 0x456E6449u);
  v11 = (const WCHAR *)ExAllocatePool2(0x100uLL, 0x406uLL, 0x456E6449u);
  v12 = (WCHAR *)v11;
  if ( Pool2 && v11 )
  {
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Pool2, v15, v11, v16);
  }
  else
  {
    v13 = -1073741801;
    if ( !Pool2 )
      goto LABEL_6;
  }
  ExFreePoolWithTag(Pool2, 0);
LABEL_6:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v13;
}
