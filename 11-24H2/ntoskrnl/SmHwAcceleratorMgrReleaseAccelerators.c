/*
 * XREFs of SmHwAcceleratorMgrReleaseAccelerators @ 0x14079C918
 * Callers:
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BF68 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorMgrPartitionUnregister @ 0x14079C83C (SmHwAcceleratorMgrPartitionUnregister.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmHwAcceleratorCleanup @ 0x14079BCFC (SmHwAcceleratorCleanup.c)
 */

__int64 __fastcall SmHwAcceleratorMgrReleaseAccelerators(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // edi
  struct _EX_RUNDOWN_REF **v4; // rcx
  struct _EX_RUNDOWN_REF *v5; // rsi
  __int64 v6; // rcx
  struct _EX_RUNDOWN_REF *Count; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    while ( 1 )
    {
      v4 = (struct _EX_RUNDOWN_REF **)(a1 + 16LL * i + 24);
      v5 = *v4;
      if ( *v4 == (struct _EX_RUNDOWN_REF *)v4 )
        break;
      if ( (struct _EX_RUNDOWN_REF **)v5[1].Count != v4
        || (Count = (struct _EX_RUNDOWN_REF *)v5->Count, *(struct _EX_RUNDOWN_REF **)(v5->Count + 8) != v5) )
      {
        __fastfail(3u);
      }
      *v4 = Count;
      Count[1].Count = (unsigned __int64)v4;
      SmHwAcceleratorCleanup(v5);
      CmSiFreeMemory((PPRIVILEGE_SET)v5);
      --*(_DWORD *)(a1 + 4LL * i + 1048);
      --*(_DWORD *)(a1 + 1304);
    }
    result = (unsigned __int16)KeNumberNodes;
  }
  v6 = *(_QWORD *)(a1 + 1320);
  if ( v6 )
  {
    result = AccelDestroyOffloadWorkspace(v6);
    *(_QWORD *)(a1 + 1320) = 0LL;
  }
  return result;
}
