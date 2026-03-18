/*
 * XREFs of PnpiCmResourceToBiosAddressQuad @ 0x1400A6110
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400A5714 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddressQuad(__int64 a1, __int64 a2)
{
  unsigned int v5; // r9d
  __int64 i; // rdx
  __int64 v7; // rdi
  char v8; // al
  __int16 v9; // cx
  ULONGLONG v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 Start; // [rsp+30h] [rbp+8h] BYREF

  Start = 0LL;
  if ( *(_BYTE *)(a1 + 3) )
    return 3221225473LL;
  v5 = *(_DWORD *)(a2 + 16);
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    v7 = a2 + 20 * i;
    if ( ((*(_BYTE *)(v7 + 20) - 3) & 0xFB) == 0 )
    {
      *(_BYTE *)(a1 + 5) = 0;
      v8 = (*(_BYTE *)(v7 + 22) & 3) == 0;
      *(_BYTE *)(a1 + 5) = v8;
      v9 = *(_WORD *)(v7 + 22);
      if ( (v9 & 0x20) != 0 )
      {
        v8 |= 2u;
      }
      else if ( (v9 & 8) != 0 )
      {
        v8 |= 4u;
      }
      else if ( (v9 & 4) != 0 )
      {
        v8 |= 6u;
      }
      *(_BYTE *)(a1 + 5) = v8;
      v10 = RtlCmDecodeMemIoResource((PCM_PARTIAL_RESOURCE_DESCRIPTOR)(v7 + 20), &Start);
      v11 = Start + v10 - 1;
      *(_QWORD *)(a1 + 14) = Start;
      *(_QWORD *)(a1 + 22) = v11;
      *(_BYTE *)(v7 + 20) = 0;
      return 0LL;
    }
  }
  return 0LL;
}
