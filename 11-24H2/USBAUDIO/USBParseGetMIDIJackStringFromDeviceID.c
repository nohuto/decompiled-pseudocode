/*
 * XREFs of USBParseGetMIDIJackStringFromDeviceID @ 0x14003798C
 * Callers:
 *     USBParseMIDIInJack @ 0x1400385A0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x140038710 (USBParseMIDIOutJack.c)
 * Callees:
 *     memmove @ 0x14001BC00 (memmove.c)
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBParseGetMIDIJackStringFromDeviceID(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v6; // edx
  int v7; // esi
  _WORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  *a3 = 0LL;
  v6 = *(_DWORD *)(v3 + 32);
  if ( v6 <= 0xFF )
  {
    v7 = USBHwAllocateAndBag(&v14, v6 + 12, 256LL, *(void **)(a1 + 8));
    if ( v7 >= 0 )
    {
      v8 = v14;
      memmove(v14, *(const void **)(v3 + 24), *(unsigned int *)(v3 + 32));
      v9 = (unsigned int)(((unsigned __int64)*(unsigned int *)(v3 + 32) - 2) >> 1);
      v10 = (unsigned int)(v9 + 1);
      v8[v9] = 32;
      v11 = (unsigned int)(v9 + 2);
      v12 = (unsigned int)(v9 + 3);
      v8[v10] = 91;
      if ( a2 <= 0xA )
      {
        v8[v11] = a2 + 48;
      }
      else
      {
        v8[(unsigned int)v11] = a2 / 0xA + 48;
        v8[v12] = a2 % 0xA + 48;
        v12 = (unsigned int)(v12 + 1);
      }
      v8[v12] = 93;
      v8[(unsigned int)(v12 + 1)] = 0;
      *a3 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741668;
  }
  return (unsigned int)v7;
}
