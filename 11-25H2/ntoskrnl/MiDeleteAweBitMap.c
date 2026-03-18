/*
 * XREFs of MiDeleteAweBitMap @ 0x1407E97B8
 * Callers:
 *     MiDeleteAweInfo @ 0x1407E9808 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x1407E9B10 (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
