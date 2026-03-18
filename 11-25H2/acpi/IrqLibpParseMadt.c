/*
 * XREFs of IrqLibpParseMadt @ 0x1400C8660
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1400C4BEC (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     ProcessorAddInstance @ 0x1400AA62C (ProcessorAddInstance.c)
 *     IcAddGicInstance @ 0x1400AABFC (IcAddGicInstance.c)
 *     IcAddApicInstance @ 0x1400C8B7C (IcAddApicInstance.c)
 */

__int64 __fastcall IrqLibpParseMadt(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned int v5; // ecx
  __int16 v6; // ax
  bool v7; // cf
  __int64 v8; // rax

  v1 = a1 + 44;
  v2 = a1 + *(unsigned int *)(a1 + 4);
  while ( v1 + 2 <= v2 )
  {
    v3 = *(unsigned __int8 *)(v1 + 1);
    if ( (unsigned __int8)v3 < 2u || v1 + v3 > v2 )
      break;
    switch ( *(_BYTE *)v1 )
    {
      case 0:
        if ( (_BYTE)v3 != 8 || (*(_BYTE *)(v1 + 4) & 1) == 0 )
          goto LABEL_37;
        v5 = *(unsigned __int8 *)(v1 + 3);
        goto LABEL_35;
      case 1:
        if ( (_BYTE)v3 != 12 )
          goto LABEL_37;
        result = IcAddApicInstance(*(unsigned int *)(v1 + 8));
        goto LABEL_36;
      case 2:
        if ( (_BYTE)v3 == 10 && !*(_BYTE *)(v1 + 2) && *(_BYTE *)(v1 + 3) < 0x10u )
        {
          *((_DWORD *)&IsaVectorOverrides + 2 * *(unsigned __int8 *)(v1 + 3)) = *(_DWORD *)(v1 + 4);
          v6 = *(_WORD *)(v1 + 8);
          if ( (v6 & 0xF) != 0 )
          {
            v7 = (v6 & 3u) < 2;
            v8 = *(unsigned __int8 *)(v1 + 3);
            if ( v7 )
              *((_BYTE *)&IsaVectorOverrides + 8 * v8 + 4) = 0;
            else
              *((_BYTE *)&IsaVectorOverrides + 8 * v8 + 4) = 2;
            if ( (*(_BYTE *)(v1 + 8) & 8) != 0 )
              *((_BYTE *)&IsaVectorOverrides + 8 * *(unsigned __int8 *)(v1 + 3) + 4) |= 1u;
          }
        }
        goto LABEL_37;
      case 9:
        if ( (_BYTE)v3 != 16 || (*(_BYTE *)(v1 + 8) & 1) == 0 )
          goto LABEL_37;
        break;
      case 0xB:
        if ( (unsigned __int8)v3 < 0x28u || (*(_BYTE *)(v1 + 12) & 1) == 0 )
          goto LABEL_37;
        if ( (unsigned int)IrqLibGicVersion >= 3 )
        {
          if ( (unsigned __int8)v3 < 0x4Cu )
            goto LABEL_37;
          v5 = (*(_QWORD *)(v1 + 68) >> 8) ^ (*(_DWORD *)(v1 + 68) ^ (*(_QWORD *)(v1 + 68) >> 8)) & 0xFFFFFF;
          goto LABEL_35;
        }
        break;
      default:
        if ( *(_BYTE *)v1 != 12 || (unsigned __int8)v3 < 0x18u )
          goto LABEL_37;
        result = IcAddGicInstance(*(_DWORD *)(v1 + 16));
        goto LABEL_36;
    }
    v5 = *(_DWORD *)(v1 + 4);
LABEL_35:
    result = ProcessorAddInstance(v5, -1);
LABEL_36:
    if ( (int)result < 0 )
      return result;
LABEL_37:
    v1 += *(unsigned __int8 *)(v1 + 1);
  }
  return 0LL;
}
