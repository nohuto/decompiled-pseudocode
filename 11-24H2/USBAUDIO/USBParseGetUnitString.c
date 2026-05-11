/*
 * XREFs of USBParseGetUnitString @ 0x1400381B4
 * Callers:
 *     USBParseExtensionUnit @ 0x1400372D0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x140037500 (USBParseFeatureUnit.c)
 *     USBParseMIDIElement @ 0x1400383B0 (USBParseMIDIElement.c)
 *     USBParseMIDIInJack @ 0x1400385A0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x140038710 (USBParseMIDIOutJack.c)
 *     USBParseMixerUnit @ 0x140038920 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x140038C60 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x140038F70 (USBParseSelectorUnit.c)
 *     USBParseTerminalUnit @ 0x140042740 (USBParseTerminalUnit.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     memmove @ 0x14001BC00 (memmove.c)
 *     USBHwSyncGetStringDescriptor @ 0x14002D008 (USBHwSyncGetStringDescriptor.c)
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  int StringDescriptor; // esi
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int8 *v8; // rax
  __int64 v9; // rcx
  unsigned __int8 v11; // bl
  unsigned __int8 *Pool2; // r14
  _WORD *v13; // rbx
  size_t v14; // rdi
  int v15; // [rsp+20h] [rbp-30h]
  unsigned int v16; // [rsp+30h] [rbp-20h] BYREF
  void *v17; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp-10h]

  StringDescriptor = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL)
     + *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL) + 2LL);
  *a3 = 0LL;
  v7 = *a2;
  if ( a2[2] != 7 )
  {
    v8 = &a2[v7 - 1];
    goto LABEL_13;
  }
  if ( (unsigned __int8)v7 < 7u || (unsigned __int64)&a2[v7] > v6 )
  {
    HIDWORD(v17) = 2;
    goto LABEL_11;
  }
  if ( (unsigned __int16)(*((_WORD *)a2 + 2) - 1) <= 1u )
  {
    v9 = a2[6];
    if ( *a2 >= (unsigned __int64)(v9 + 12) )
    {
      v8 = &a2[v9 + 12 + a2[v9 + 11]];
      if ( (unsigned __int64)v8 < v6 )
        goto LABEL_13;
      HIDWORD(v17) = 9;
    }
    else
    {
      HIDWORD(v17) = 3;
    }
LABEL_11:
    LODWORD(v17) = 55059943;
    v18 = -1073741823;
    RtlLogUnexpectedCodepath(&v17, a2);
    return 3221225473LL;
  }
  v8 = &a2[v7 - 1];
LABEL_13:
  v11 = *v8;
  if ( *v8 )
  {
    v17 = 0LL;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, 255LL, 1096972357LL);
    v16 = 0;
    if ( Pool2 )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v11, 0x409u, Pool2, v15, &v16);
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          StringDescriptor = 0;
      }
      else
      {
        StringDescriptor = USBHwAllocateAndBag(&v17, (unsigned int)*Pool2 + 2, 256LL, *(void **)(a1 + 8));
        if ( StringDescriptor >= 0 )
        {
          v13 = v17;
          v14 = (unsigned int)*Pool2 - 2;
          memmove(v17, Pool2 + 2, v14);
          v13[v14 >> 1] = 0;
          *a3 = v13;
        }
      }
      ExFreePool(Pool2);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
