/*
 * XREFs of ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1402E7E38
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 */

__int64 __fastcall SmKmProbeAndLockAddress(unsigned __int64 a1, __int64 a2, struct _MDL *a3)
{
  __int64 result; // rax

  a3->ByteCount = a2;
  a3->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  a3->Next = 0LL;
  a3->MdlFlags = 0;
  a3->Size = 8 * (((a2 + (a1 & 0xFFF) + 4095) >> 12) + 6);
  a3->ByteOffset = a1 & 0xFFF;
  result = MmStoreProbeAndLockPages((ULONG_PTR)a3);
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result == -1073741801 )
    return 3221225901LL;
  return result;
}
