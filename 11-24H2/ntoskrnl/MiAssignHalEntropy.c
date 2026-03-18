/*
 * XREFs of MiAssignHalEntropy @ 0x140C5460C
 * Callers:
 *     MiInitializeSystemVa @ 0x140C67230 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiAssignHalEntropy(__int64 a1)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r9
  unsigned __int64 v4; // r11
  __int16 v5; // ax
  ULONG ClearBitsAndSet; // eax
  __int64 result; // rax
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset_0(v9, 0, sizeof(v9));
  BitMapHeader.Buffer = (unsigned int *)v9;
  if ( (MEMORY[0xFFFFF6FB7DBEDF78] & 1) != 0 )
  {
    v2 = 0;
    v3 = (_QWORD *)0xFFFFF6FB7DBEF000LL;
    v4 = 0LL;
    do
    {
      if ( *v3 )
        v9[v4 >> 3] |= 1 << (v2 & 7);
      ++v3;
      ++v2;
      ++v4;
    }
    while ( v2 < 0x200 );
  }
  v5 = ExGenRandom(1);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 3u, v5 & 0x1FF);
  qword_140E2F060 = 0x80000000LL;
  qword_140E2F058 = (ClearBitsAndSet - 8704LL) << 30;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2960LL) = qword_140E2F058;
  result = qword_140E2F060;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2968LL) = qword_140E2F060;
  return result;
}
