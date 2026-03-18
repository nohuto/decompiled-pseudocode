/*
 * XREFs of EtwpSetPmcProfileSource @ 0x14079AD18
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     KeInitializeProfileCallback @ 0x1406EAD3C (KeInitializeProfileCallback.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetPmcProfileSource(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdi

  v2 = 0;
  v3 = a2;
  if ( !a2 || a2 > EtwpMaxProfilingSources )
    return 3221225485LL;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_140EFED68 )
    {
      ExFreePoolWithTag(qword_140EFED68, 0);
      qword_140EFED68 = 0LL;
      EtwpPmcProfile = 0;
    }
    v5 = v3;
    qword_140EFED68 = (PVOID)ExAllocatePool2(0x40uLL);
    if ( qword_140EFED68 )
    {
      EtwpPmcProfile = v3;
      if ( (_DWORD)v3 )
      {
        v6 = 0LL;
        do
        {
          KeInitializeProfileCallback((char *)qword_140EFED68 + v6, (__int64)EtwpPmcInterrupt, (unsigned int)*a1, *a1);
          v6 += 616LL;
          ++a1;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v2;
}
