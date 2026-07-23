/*
 * XREFs of __longjmp_internal @ 0x1406A69B0
 * Callers:
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 * Callees:
 *     RtlUnwind @ 0x140230F50 (RtlUnwind.c)
 */

__int64 __fastcall _longjmp_internal(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp-8h]

  if ( !a2 )
    a2 = 1LL;
  v2 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      v4[0] = -2147483610;
      v4[1] = v2;
      v5 = v2;
      v6 = v2;
      v7 = v2 + 1;
      v8 = a1;
      RtlUnwind(*(PVOID *)a1, *(PVOID *)(a1 + 80), (PEXCEPTION_RECORD)v4, (PVOID)a2);
    }
  }
  _mm_lfence();
  _mm_setcsr(*(_DWORD *)(a1 + 88));
  return (*(__int64 (**)(void))(a1 + 80))();
}
