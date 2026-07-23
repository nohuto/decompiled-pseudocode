/*
 * XREFs of EtwpEnableStackCaching @ 0x140A39C78
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x1409D11F4 (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     EtwpFreeStackCache @ 0x140A3A000 (EtwpFreeStackCache.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpEnableStackCaching(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // esi
  unsigned int v9; // r15d
  __int64 Pool2; // rax
  _SLIST_HEADER *v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // ebp
  _SLIST_HEADER *v15; // rax
  __int64 v16; // rcx
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0;
  if ( *(_QWORD *)(a1 + 1056) )
  {
    return (unsigned int)-1073741053;
  }
  else
  {
    v8 = 3145728;
    v9 = 256;
    if ( a2 >= 0x300000 )
      v8 = a2;
    if ( v8 > 0x3200000 )
      v8 = 52428800;
    if ( a3 >= 0x100 )
      v9 = a3;
    if ( v9 > 0x1000 )
      v9 = 4096;
    Pool2 = ExAllocatePool2(0x40uLL, 24 * v9 + 32, 0x73777445u);
    v11 = (_SLIST_HEADER *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 8) = v9;
      *(_QWORD *)Pool2 = a1;
      InitializeSListHead((PSLIST_HEADER)(Pool2 + 16));
      v15 = v11 + 2;
      v16 = v9;
      do
      {
        v15[1].Alignment = 0LL;
        v15->Region = (unsigned __int64)v15;
        v15->Alignment = (unsigned __int64)v15;
        v15 = (_SLIST_HEADER *)((char *)v15 + 24);
        --v16;
      }
      while ( v16 );
      v14 = 0;
      v12 = v8 / 0x128;
      while ( v14 < v12 )
      {
        v13 = ExAllocatePool2(0x40uLL, 0x128uLL, 0x78777445u);
        if ( !v13 )
        {
          EtwpFreeStackCache(v11);
          return (unsigned int)-1073741801;
        }
        *(_DWORD *)(v13 + 24) = 0;
        RtlpInterlockedPushEntrySList(v11 + 1, (PSLIST_ENTRY)v13);
        ++v14;
      }
      *(_QWORD *)(a1 + 1056) = v11;
      _InterlockedOr(v17, 0);
      _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x1000000u);
      if ( a4 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 820), 1u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v4;
}
