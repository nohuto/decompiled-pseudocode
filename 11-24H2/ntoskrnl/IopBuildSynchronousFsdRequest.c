/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x140A326E0
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x140A326A0 (IoBuildSynchronousFsdRequest.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x14025DD60 (IopBuildAsynchronousFsdRequest.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v8; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result);
    return v8;
  }
  return result;
}
