/*
 * XREFs of ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401527F8
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ @ 0x140119718 (-Initialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14011E5BC (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14023E698 (-Destroy@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ @ 0x14023E84C (-Initialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<180224,704>::Create()
{
  _QWORD *Pool2; // rax
  void *v1; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 0LL;
  Pool2[2] = 0LL;
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<180224,704>::Initialize(Pool2) )
  {
    NSInstrumentation::CSectionEntry<180224,704>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
