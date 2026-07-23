/*
 * XREFs of ArbAllocateEntry @ 0x140AA8760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAllocateEntry(__int64 a1, unsigned __int64 a2)
{
  char v2; // r14
  unsigned __int64 v5; // rbx
  char v6; // di
  unsigned __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  unsigned __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 *i; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx

  v2 = 0;
  v5 = a2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] + 10000000LL;
LABEL_2:
  while ( v5 >= a2 && *(_QWORD *)(v5 + 32) )
  {
    result = guard_dispatch_icall_no_overrides(a1, v5);
    if ( (int)result < 0 )
      return result;
    if ( !v2 )
      goto LABEL_17;
    v9 = *(_QWORD *)(v5 + 40);
    v2 = 0;
    *(_QWORD *)(v5 + 120) = 0LL;
    if ( *(_QWORD *)(v9 + 16) )
    {
      guard_dispatch_icall_no_overrides(a1, v5);
      v10 = *(_WORD *)(v5 + 64);
      if ( (v10 & 0x40) != 0 )
      {
        *(_WORD *)(v5 + 64) = v10 & 0xFFBF;
      }
      else
      {
        v11 = *(_QWORD *)v5 - 1LL;
        if ( v11 <= *(_QWORD *)v5 && v11 >= **(_QWORD **)(v5 + 40) && MEMORY[0xFFFFF78000000008] <= v7 )
        {
          *(_QWORD *)(v5 + 24) = v11;
          goto LABEL_18;
        }
LABEL_17:
        while ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v5) )
        {
LABEL_18:
          if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v5) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) )
              guard_dispatch_icall_no_overrides(a1, v5);
            else
              *(_DWORD *)(*(_QWORD *)(v5 + 32) + 88LL) = 2;
            v5 += 80LL;
            goto LABEL_2;
          }
        }
      }
    }
    if ( (*(_BYTE *)(v5 + 64) & 0x20) != 0 )
      v6 = 1;
    if ( v5 == a2 )
    {
      v12 = v6 != 0 ? -1073739512 : -1073741823;
      goto LABEL_28;
    }
    v2 = 1;
    v5 -= 80LL;
  }
  for ( i = (__int64 *)(a2 + 32); *i; i += 10 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(i[1] + 40), *(i - 4));
    v14 = i[1];
    v15 = *i;
    *(_QWORD *)(v15 + 80) = *(_QWORD *)(v14 + 40);
  }
  v12 = 0;
LABEL_28:
  if ( *(_QWORD *)(a2 + 32) )
  {
    v16 = a2 + 64;
    do
    {
      if ( (*(_BYTE *)v16 & 0x10) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v16 + 8), 0);
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_WORD *)v16 &= ~0x10u;
      }
      v16 += 80LL;
    }
    while ( *(_QWORD *)(v16 - 32) );
  }
  return v12;
}
