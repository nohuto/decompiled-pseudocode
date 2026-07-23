/*
 * XREFs of XmInt1aFindPciDevice @ 0x140576574
 * Callers:
 *     XmExecuteInt1a @ 0x1405763B4 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall XmInt1aFindPciDevice(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int8 i; // r14
  unsigned int v6; // esi
  unsigned int j; // ebp
  int v8; // ecx
  int v9; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v9 = 0;
  result = 0xFFFFLL;
  if ( *(_WORD *)(a1 + 24) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -125;
  }
  else
  {
    v4 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int8)XmNumberPciBusses )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        *(_BYTE *)(a1 + 25) = -122;
        return result;
      }
      v6 = 0;
LABEL_6:
      if ( v6 < 0x20 )
        break;
    }
    for ( j = 0; ; ++j )
    {
      if ( j >= 8 )
      {
        ++v6;
        goto LABEL_6;
      }
      v4 = v6 & 0x1F | v4 & 0xFFFFFF00 | (32 * (j & 7));
      result = guard_dispatch_icall_no_overrides(i, v4);
      if ( (_DWORD)result == 4 )
      {
        v8 = v9;
      }
      else
      {
        v8 = -1;
        v9 = -1;
      }
      if ( v8 == __PAIR32__(*(_WORD *)(a1 + 28), *(_WORD *)(a1 + 32)) )
      {
        result = v1++;
        if ( (_DWORD)result == *(unsigned __int16 *)(a1 + 48) )
          break;
      }
    }
    *(_BYTE *)(a1 + 37) = i;
    *(_DWORD *)(a1 + 16) &= ~1u;
    *(_BYTE *)(a1 + 36) = j | (8 * v6);
    *(_BYTE *)(a1 + 25) = 0;
  }
  return result;
}
