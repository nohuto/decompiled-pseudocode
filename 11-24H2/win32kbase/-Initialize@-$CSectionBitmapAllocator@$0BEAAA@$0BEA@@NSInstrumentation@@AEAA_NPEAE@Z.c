/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1401583B4
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401C09A4 (-Create@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::Initialize(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *Pool2; // rax
  struct _RTL_BITMAP *v9; // rax
  struct _RTL_BITMAP *v10; // rdi
  char result; // al
  __int64 v12; // rdx
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v4 = __rdtsc();
  Seed = v4;
  a1[2] = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  v5 = RtlRandomEx(&Seed);
  v6 = (v5 | a1[2]) == 0LL;
  a1[2] |= v5;
  v7 = a1[2];
  if ( v6 )
  {
    a1[2] = 1LL;
    v7 = 1LL;
  }
  a1[3] ^= v7;
  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 8LL, 1869834581LL);
  *a1 = Pool2;
  if ( !Pool2 )
    return 0;
  *Pool2 = 0LL;
  v9 = (struct _RTL_BITMAP *)ExAllocatePool2(258LL, 48LL, 1869834581LL);
  v10 = v9;
  if ( !v9 )
    return 0;
  RtlInitializeBitMap(v9, &v9[1].SizeOfBitMap, 0xF0u);
  RtlClearAllBits(v10);
  result = 1;
  v12 = a2 ^ a1[2];
  a1[3] = (unsigned __int64)v10 ^ a1[2];
  a1[1] = v12;
  return result;
}
