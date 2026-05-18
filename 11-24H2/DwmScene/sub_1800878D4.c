/*
 * XREFs of sub_1800878D4 @ 0x1800878D4
 * Callers:
 *     ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z_1 @ 0x180087A00 (--_Gcritical_section@Concurrency@@QEAAPEAXI@Z_1.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_1800878D4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 32);
  if ( v2 )
    result = sub_180010644(v2);
  v4 = *(volatile signed __int32 **)(a1 + 16);
  if ( v4 )
    return sub_180010644(v4);
  return result;
}
