/*
 * XREFs of RtlSetBits @ 0x180032C60
 * Callers:
 *     LdrpInitializeTls @ 0x1800266A4 (LdrpInitializeTls.c)
 *     RtlpValidateRange @ 0x18002B23C (RtlpValidateRange.c)
 *     LdrpAcquireTlsIndex @ 0x180032A38 (LdrpAcquireTlsIndex.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlTlsAlloc @ 0x1800B1410 (RtlTlsAlloc.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __cdecl RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_180191058[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_18017EB08[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_thunk_772440563353939046(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_180191058[v6];
      goto LABEL_4;
    }
  }
}
