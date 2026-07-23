/*
 * XREFs of RtlpHpLargeWalkHeap @ 0x18009F9A0
 * Callers:
 *     RtlpHpHeapWalk @ 0x18002B340 (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpLargeAllocGetMetadata @ 0x18009EE8C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeAllocReport @ 0x18011D070 (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpHpLargeWalkHeap(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r11d
  _QWORD *Metadata; // rax
  _QWORD *v10; // r11
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rdx

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    Metadata = (_QWORD *)RtlpHpLargeAllocGetMetadata(a1, *a2);
    v6 = (unsigned __int64)v10;
    if ( Metadata )
    {
      v11 = (_QWORD *)*Metadata;
      if ( *Metadata || (v11 = (_QWORD *)Metadata[1]) != 0LL )
      {
        Metadata = v11;
      }
      else
      {
        while ( Metadata )
        {
          if ( Metadata == *(_QWORD **)(v3 + 72) )
            return (unsigned int)-2147483622;
          v12 = Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL;
          v13 = *(_QWORD **)(v12 + 8);
          if ( Metadata != v13 && v13 )
          {
            Metadata = *(_QWORD **)(v12 + 8);
            break;
          }
          Metadata = (_QWORD *)(Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL);
        }
      }
      v6 = (unsigned __int64)Metadata;
    }
    goto LABEL_8;
  }
  v4 = a1 + 72;
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    v6 = *(_QWORD *)v4;
    if ( !*(_QWORD *)v4 )
      return (unsigned int)-2147483622;
    v5 = v4 ^ v6;
  }
  else
  {
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)v4;
  }
  if ( v5 )
  {
LABEL_8:
    RtlpHpLargeAllocReport(v3, v6, v2);
    return v7;
  }
  return (unsigned int)-2147483622;
}
