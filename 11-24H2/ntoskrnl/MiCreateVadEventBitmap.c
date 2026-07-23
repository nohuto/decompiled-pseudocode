/*
 * XREFs of MiCreateVadEventBitmap @ 0x1408DC8AC
 * Callers:
 *     MiCreateWriteWatchView @ 0x1408DC84C (MiCreateWriteWatchView.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  ULONG_PTR v8; // rsi
  __int64 Pool; // rbx
  int v11; // esi
  __int64 v12; // rcx

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 11LL);
  Pool = MiAllocatePool(0x40uLL, v8, 2004315469);
  if ( !Pool )
    return 3221225626LL;
  v11 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v11 >= 0 )
  {
    *(_DWORD *)(Pool + 80) = a4;
    if ( a4 == 64 )
    {
      v12 = 8LL;
    }
    else
    {
      v12 = 16LL;
      if ( a4 == 256 )
        v12 = 56LL;
    }
    *(_QWORD *)(Pool + v12) = a3;
    *(_QWORD *)(Pool + v12 + 8) = Pool + 88;
    MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 1);
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag((PVOID)Pool, 0);
    return (unsigned int)v11;
  }
}
