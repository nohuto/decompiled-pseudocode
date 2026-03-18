/*
 * XREFs of ArbAllocateEntry @ 0x140AAD6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAllocateEntry(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  unsigned __int64 v7; // rbx
  char v8; // di
  unsigned __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rax
  __int16 v12; // ax
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  _QWORD *i; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx

  v4 = 0;
  v7 = a2;
  v8 = 0;
  v9 = MEMORY[0xFFFFF78000000008] + 10000000LL;
LABEL_2:
  while ( v7 >= a2 && *(_QWORD *)(v7 + 32) )
  {
    result = guard_dispatch_icall_no_overrides(a1, v7, a3, a4);
    if ( (int)result < 0 )
      return result;
    if ( !v4 )
      goto LABEL_17;
    v11 = *(_QWORD *)(v7 + 40);
    v4 = 0;
    *(_QWORD *)(v7 + 120) = 0LL;
    if ( *(_QWORD *)(v11 + 16) )
    {
      guard_dispatch_icall_no_overrides(a1, v7, a3, a4);
      v12 = *(_WORD *)(v7 + 64);
      if ( (v12 & 0x40) != 0 )
      {
        *(_WORD *)(v7 + 64) = v12 & 0xFFBF;
      }
      else
      {
        v13 = *(_QWORD *)v7 - 1LL;
        if ( v13 <= *(_QWORD *)v7 && v13 >= **(_QWORD **)(v7 + 40) && MEMORY[0xFFFFF78000000008] <= v9 )
        {
          *(_QWORD *)(v7 + 24) = v13;
          goto LABEL_18;
        }
LABEL_17:
        while ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v7, a3, a4) )
        {
LABEL_18:
          if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v7, a3, a4) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v7 + 40) + 16LL) )
              guard_dispatch_icall_no_overrides(a1, v7, a3, a4);
            else
              *(_DWORD *)(*(_QWORD *)(v7 + 32) + 88LL) = 2;
            v7 += 80LL;
            goto LABEL_2;
          }
        }
      }
    }
    if ( (*(_BYTE *)(v7 + 64) & 0x20) != 0 )
      v8 = 1;
    if ( v7 == a2 )
    {
      v14 = v8 != 0 ? -1073739512 : -1073741823;
      goto LABEL_28;
    }
    v4 = 1;
    v7 -= 80LL;
  }
  for ( i = (_QWORD *)(a2 + 32); *i; i += 10 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(i[1] + 40LL), *(i - 4), *(_QWORD *)(*i + 72LL), a4);
    v16 = i[1];
    v17 = *i;
    *(_QWORD *)(v17 + 80) = *(_QWORD *)(v16 + 40);
  }
  v14 = 0;
LABEL_28:
  if ( *(_QWORD *)(a2 + 32) )
  {
    v18 = a2 + 64;
    do
    {
      if ( (*(_BYTE *)v18 & 0x10) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v18 + 8), 0);
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_WORD *)v18 &= ~0x10u;
      }
      v18 += 80LL;
    }
    while ( *(_QWORD *)(v18 - 32) );
  }
  return v14;
}
