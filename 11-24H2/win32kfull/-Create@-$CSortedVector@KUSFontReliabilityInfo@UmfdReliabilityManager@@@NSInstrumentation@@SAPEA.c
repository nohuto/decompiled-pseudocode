/*
 * XREFs of ?Create@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@SAPEAV12@XZ @ 0x140265FC8
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x140102270 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::Create()
{
  _QWORD *Pool2; // rbx
  _QWORD *result; // rax
  __int64 v2; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 56LL, 1665758037LL);
  if ( !Pool2 )
    return 0LL;
  v2 = ExAllocatePool2(258LL, 4096LL, 1665758037LL);
  if ( !v2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  Pool2[5] = 0LL;
  Pool2[6] = v2;
  result = Pool2;
  Pool2[4] = 512LL;
  *((_DWORD *)Pool2 + 6) = 0;
  *((_DWORD *)Pool2 + 7) = 0;
  *Pool2 = 0LL;
  *((_DWORD *)Pool2 + 4) = 0;
  return result;
}
