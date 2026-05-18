/*
 * XREFs of sub_180014B00 @ 0x180014B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010478 @ 0x180010478 (sub_180010478.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180014B00(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_180010478((volatile signed __int32 *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, v1 + 1);
    if ( qword_1801C3430 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C3430 + 16LL))(qword_1801C3430);
  }
  return v1;
}
