/*
 * XREFs of MiCreateVadEventBitmap @ 0x1408F94AC
 * Callers:
 *     MiCreateWriteWatchView @ 0x1408F944C (MiCreateWriteWatchView.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C5810 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  ULONG_PTR v8; // rsi
  _DWORD *Pool; // rbx
  int v10; // esi
  __int64 v11; // rdx

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 11LL);
  Pool = (_DWORD *)MiAllocatePool(0x40uLL, v8, 2004315469);
  if ( !Pool )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)v10;
  }
  else
  {
    Pool[20] = a4;
    if ( a4 == 64 )
    {
      v11 = 8LL;
    }
    else if ( a4 == 256 )
    {
      v11 = 56LL;
    }
    else
    {
      v11 = (-(__int64)(MmVadEventBlockFixEnabled != 0) & 8) + 8;
    }
    *(_QWORD *)((char *)Pool + v11) = a3;
    *(_QWORD *)((char *)Pool + v11 + 8) = Pool + 22;
    MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 1);
    return 0LL;
  }
}
