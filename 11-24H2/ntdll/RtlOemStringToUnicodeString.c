/*
 * XREFs of RtlOemStringToUnicodeString @ 0x1800D40E0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x1800D3E90 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000CEE0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlMultiByteToUnicodeSize @ 0x1800D41D0 (RtlMultiByteToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x1800D4290 (RtlOemToUnicodeN.c)
 */

__int64 __fastcall RtlOemStringToUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // edx
  _WORD *v7; // r15
  __int64 *v8; // rdi
  __int64 result; // rax
  int v10; // ebx
  __int16 v11; // dx
  unsigned int v12; // [rsp+78h] [rbp+10h] BYREF
  char v13; // [rsp+80h] [rbp+18h]

  v13 = a3;
  v12 = 0;
  RtlMultiByteToUnicodeSize(&v12, *((_QWORD *)a2 + 1), *a2);
  v6 = v12 + 2;
  v12 = v6;
  if ( v6 > 0xFFFE )
    return 3221225712LL;
  v7 = (_WORD *)(a1 + 2);
  v8 = (__int64 *)(a1 + 8);
  result = AllocateOrValidateUnicodeStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v10 = RtlOemToUnicodeN(*v8, (unsigned __int16)*v7, (unsigned int)&v12, *((_QWORD *)a2 + 1), *a2);
    if ( v10 >= 0 )
    {
      v11 = v12;
      *(_WORD *)(*v8 + 2 * ((unsigned __int64)v12 >> 1)) = 0;
      *(_WORD *)a1 = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        RtlpSysVolFree(*v8);
        *v8 = 0LL;
        *v7 = 0;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
