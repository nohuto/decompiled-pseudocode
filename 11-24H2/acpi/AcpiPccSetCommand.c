/*
 * XREFs of AcpiPccSetCommand @ 0x1400642C8
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x140051170 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccSetCommand(unsigned __int8 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r9d
  unsigned __int8 v4; // cl
  __int16 v5; // ax

  v2 = 0;
  if ( a1 )
  {
    v4 = *a1;
    if ( v4 == 0xFF )
    {
      *(_BYTE *)(*((_QWORD *)a1 + 7) + 12LL) = a2;
      *(_WORD *)(*((_QWORD *)a1 + 7) + 12LL) = *(_WORD *)(*((_QWORD *)a1 + 7) + 12LL) & 0x7FFF | (*((_WORD *)a1 + 4) << 15);
    }
    else if ( v4 < 3u )
    {
      *(_BYTE *)(*((_QWORD *)a1 + 7) + 4LL) = a2;
      if ( *a1 )
        v5 = 0;
      else
        v5 = *((_WORD *)a1 + 4);
      *(_WORD *)(*((_QWORD *)a1 + 7) + 4LL) = *(_WORD *)(*((_QWORD *)a1 + 7) + 4LL) & 0x7FFF | (v5 << 15);
    }
    else if ( v4 == 3 )
    {
      *(_DWORD *)(*((_QWORD *)a1 + 7) + 12LL) = a2;
      *(_DWORD *)(*((_QWORD *)a1 + 7) + 4LL) |= 1u;
    }
    else
    {
      v2 = -1073741822;
      if ( v4 == 4 )
        return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
