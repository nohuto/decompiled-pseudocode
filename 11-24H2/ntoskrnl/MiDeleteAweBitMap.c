/*
 * XREFs of MiDeleteAweBitMap @ 0x1407F9648
 * Callers:
 *     MiDeleteAweInfo @ 0x1407F9698 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x1407F99A0 (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweBitMap(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( a1 )
    {
      LOBYTE(v3) = (*(_QWORD *)a2 & 0x3FLL) != 0;
      PsReturnProcessNonPagedPoolQuota(a1, 8 * ((*(_QWORD *)a2 >> 6) + v3));
    }
    ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
  }
}
