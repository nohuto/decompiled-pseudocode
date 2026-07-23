/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x140408570
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x140904C60 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140905750 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1409064C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  _DWORD *v6; // rsi
  _BYTE *v8; // rbx
  int v9; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 EffectiveServerSilo; // rax
  _QWORD *v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // r15
  __int64 v16; // r11
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int16 v20; // dx
  __int64 v21; // rcx
  unsigned __int16 v22; // r10
  __int16 v23; // dx
  unsigned int v25; // eax
  int v26; // [rsp+60h] [rbp+8h]

  v26 = (int)a1;
  v6 = a3;
  v8 = a1;
  v9 = (int)a1;
  if ( !KeGetPcr()->Prcb.NestingLevel
    && ((CurrentThread = KeGetCurrentThread(),
         Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink,
         Blink != -3)
      ? (EffectiveServerSilo = PsGetEffectiveServerSilo(Blink))
      : (EffectiveServerSilo = CurrentThread->Process[3].ActiveGroupsMask.Masks[0]),
        EffectiveServerSilo) )
  {
    v13 = *(_QWORD **)(EffectiveServerSilo + 1504);
  }
  else
  {
    v13 = &PspHostSiloGlobals;
  }
  v14 = a5;
  v15 = v13[133];
  v16 = v13[134];
  v17 = v13[147];
  v18 = v13[150];
  if ( a5 )
  {
    while ( a2 )
    {
      v19 = *a4++;
      v20 = *(_WORD *)(v16 + 2 * v19);
      v21 = *(unsigned __int16 *)(v17 + 2 * ((unsigned __int64)v20 >> 8));
      if ( (_WORD)v21 )
        v22 = *(_WORD *)(v13[136] + 2 * ((unsigned __int8)v20 + v21));
      else
        v22 = *(_WORD *)(v15 + 2LL * (unsigned __int8)v20);
      if ( v22 >= 0x61u )
      {
        if ( v22 > 0x7Au )
        {
          if ( v18 && v22 >= 0xC0u )
            v22 += *(_WORD *)(v18
                            + 2LL
                            * ((v22 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v18
                                                                 + 2LL
                                                                 * (((v22 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v18 + 2 * ((unsigned __int64)v22 >> 8))))));
        }
        else
        {
          v22 -= 32;
        }
      }
      v23 = *(_WORD *)(v16 + 2LL * v22);
      if ( HIBYTE(v23) )
      {
        v25 = a2--;
        if ( v25 < 2 )
          break;
        *v8++ = HIBYTE(v23);
      }
      *v8 = v23;
      --a2;
      ++v8;
      if ( !--v14 )
        break;
    }
    v6 = a3;
    v9 = v26;
  }
  if ( v6 )
    *v6 = (_DWORD)v8 - v9;
  return a2 < v14 ? 0x80000005 : 0;
}
