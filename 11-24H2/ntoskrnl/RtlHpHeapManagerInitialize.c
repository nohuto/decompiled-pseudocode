/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x1405F27A0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x14065A518 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x140607034 (RtlCSparseBitmapInitialize.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmSiRWLockInitialize @ 0x140ABD190 (CmSiRWLockInitialize.c)
 */

void __fastcall RtlHpHeapManagerInitialize(union _RTL_RUN_ONCE *a1, union _RTL_RUN_ONCE *a2)
{
  union _RTL_RUN_ONCE *v4; // rbx
  __int64 v5; // rax
  union _RTL_RUN_ONCE *v6; // rdi
  __int64 v7; // rbx

  memset_0(&a1[11], 0, 0x3888uLL);
  a1->Value = (unsigned __int64)&RtlpHpHeapGlobals;
  memset_0(&a1[1], 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&a1[2], 72LL);
  memset_0(&a1[11], 0, 0x3840uLL);
  memset_0(&a1[13], 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&a1[15], 2112LL);
  v4 = a1 + 282;
  v5 = 255LL;
  do
  {
    v4[-1].Value = 0LL;
    v4[2].Value = 0LL;
    v4[3].Value = 0LL;
    v4[4].Value = 0LL;
    v4->Value = 0LL;
    v4[1].Value = 0LL;
    v4 += 6;
    --v5;
  }
  while ( v5 );
  qword_140F04BF0 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  qword_140F04BE8 = (__int64)&unk_140F04BF8;
  dword_140F04BE4 = 2048;
  memset64(&unk_140F04BF8, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  v6 = a1 + 1812;
  a1[1819].Ptr = a2->Ptr;
  v7 = 4LL;
  do
  {
    CmSiRWLockInitialize(v6);
    v6 += 2;
    --v7;
  }
  while ( v7 );
}
