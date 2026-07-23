/*
 * XREFs of MiDisablePagingOfDriver @ 0x140A334E4
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x140A33318 (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiDisablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  int v4; // ebp
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS(v2);
  if ( !(_DWORD)result )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      result = MiSnapDriverRange(a1, v4, 4, 0, (__int64)&v8, (__int64)&v9);
      v6 = v8;
      v4 = result;
      if ( v8 )
      {
        if ( v5 )
        {
          if ( v8 < v5 )
            v6 = v5;
          v8 = v6;
        }
        v7 = v9;
        if ( v6 <= v9 )
        {
          result = MiLockCode(a1, v6, v9, 2);
          v5 = v7 + 8;
        }
      }
    }
    while ( v4 );
  }
  return result;
}
