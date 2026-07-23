/*
 * XREFs of PsAcquireSiloHardReference @ 0x140453640
 * Callers:
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PsAcquireSiloHardReference(_DWORD *a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rtt

  if ( !a1 )
    return 0LL;
  if ( (a1[388] & 0x40000000) == 0 )
    NT_ASSERT("PspJobIsSilo(Silo)");
  _m_prefetchw(a1 + 438);
  v1 = *((_QWORD *)a1 + 219);
  while ( (unsigned __int64)(v1 + 1) > 1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 219, v1 + 1, v1);
    if ( v2 == v1 )
    {
      ObfReferenceObjectWithTag(a1, 0x486C6953u);
      return 0LL;
    }
  }
  if ( v1 )
    __fastfail(0xEu);
  return 3221225738LL;
}
