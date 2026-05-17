/*
 * XREFs of RtlSetBits @ 0x180006260
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x180006038 (LdrpAcquireTlsIndex.c)
 *     RtlpValidateRange @ 0x18004723C (RtlpValidateRange.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 *     RtlTlsAlloc @ 0x1800B9670 (RtlTlsAlloc.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( a3 )
  {
    v3 = a2;
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (v3 >> 3));
    v6 = a3;
    if ( (unsigned int)v4 + a3 <= 8 )
    {
      v7 = byte_180192060[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
      *v5++ |= byte_180180328[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset_thunk_772440563353939046(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_180192060[v6];
      goto LABEL_4;
    }
  }
}
