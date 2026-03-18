/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401C09A4
 * Callers:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119414 (-Create@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140119034 (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1401583B4 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_DWORD *)(Pool2 + 36) = 0;
  if ( !NSInstrumentation::CSectionBitmapAllocator<81920,320>::Initialize((_QWORD *)Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
