/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1800D06E0
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x180036440 (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18003A820 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateServiceSid @ 0x1800D0430 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800D0580 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlUpcaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v5; // r14
  unsigned __int16 v6; // si
  __int64 Atom; // rax
  unsigned int v8; // r11d
  __int64 i; // r9
  unsigned __int64 v10; // r10

  if ( !a3 && !*a2 )
  {
    *(_WORD *)a1 = 0;
    return 0LL;
  }
  v5 = qword_1801CD038;
  v6 = *a2;
  if ( a3 )
  {
    Atom = RtlpAllocateAtom(*a2);
    *(_QWORD *)(a1 + 8) = Atom;
    if ( Atom )
    {
      *(_WORD *)(a1 + 2) = v6;
      goto LABEL_5;
    }
    *(_WORD *)(a1 + 2) = 0;
    return 3221225495LL;
  }
  else
  {
    if ( v6 <= *(_WORD *)(a1 + 2) && *(_QWORD *)(a1 + 8) )
    {
LABEL_5:
      v8 = *a2 >> 1;
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
      {
        v10 = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2 * i);
        if ( (unsigned int)v10 >= 0x61 )
        {
          if ( (unsigned int)v10 > 0x7A )
          {
            if ( v5 )
            {
              if ( (unsigned __int16)v10 >= 0xC0u )
                LOWORD(v10) = *(_WORD *)(v5
                                       + 2
                                       * ((v10 & 0xF)
                                        + *(unsigned __int16 *)(v5
                                                              + 2LL
                                                              * (((unsigned __int8)v10 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v5 + 2 * (v10 >> 8))))))
                            + v10;
            }
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * i) = v10;
      }
      *(_WORD *)a1 = *a2;
      return 0LL;
    }
    return 2147483653LL;
  }
}
