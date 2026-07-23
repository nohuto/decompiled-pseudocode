/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x1403C1D70
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x140904C60 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140905750 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1409064C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 */

__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rbp
  unsigned __int64 v16; // r8

  v7 = a2;
  v8 = a5;
  if ( KeGetPcr()->Prcb.NestingLevel )
    goto LABEL_5;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
  {
    Blink = (struct _LIST_ENTRY *)CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  }
  else if ( Blink && !(unsigned __int8)PsIsServerSilo(Blink) )
  {
    while ( !(unsigned __int8)PsIsServerSilo(Blink[81].Blink) )
      ;
  }
  if ( Blink )
    Flink = Blink[94].Flink;
  else
LABEL_5:
    Flink = (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  v13 = Flink[75].Flink;
  v14 = v8;
  if ( v8 >= v7 )
    v14 = v7;
  if ( a3 )
    *a3 = v14;
  if ( v14 )
  {
    v15 = v14;
    do
    {
      v16 = *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6));
      if ( (unsigned int)v16 >= 0x61 )
      {
        if ( (unsigned int)v16 > 0x7A )
        {
          if ( v13 && (unsigned __int16)v16 >= 0xC0u )
            LOWORD(v16) = *((_WORD *)&v13->Flink
                          + (v16 & 0xF)
                          + *((unsigned __int16 *)&v13->Flink
                            + ((unsigned __int8)v16 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&v13->Flink + (v16 >> 8))))
                        + v16;
        }
        else
        {
          LOWORD(v16) = v16 - 32;
        }
      }
      ++a4;
      *a1++ = *(_BYTE *)((unsigned __int16)v16 + a6);
      --v15;
    }
    while ( v15 );
  }
  return v7 < v8 ? 0x80000005 : 0;
}
