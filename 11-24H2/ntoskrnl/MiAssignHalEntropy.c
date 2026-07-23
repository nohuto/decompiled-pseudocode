/*
 * XREFs of MiAssignHalEntropy @ 0x140C5679C
 * Callers:
 *     MiInitializeSystemVa @ 0x140C693AC (MiInitializeSystemVa.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiAssignHalEntropy(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // r9
  unsigned int v5; // r10d
  unsigned __int64 v6; // r11
  __int16 v7; // ax
  ULONG ClearBitsAndSet; // eax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset_0(v11, 0, sizeof(v11));
  BitMapHeader.Buffer = (unsigned int *)v11;
  v4 = (_QWORD *)0xFFFFF6FB7DBEDF78LL;
  if ( (MEMORY[0xFFFFF6FB7DBEDF78] & 1) != 0 )
  {
    v5 = 0;
    v4 = (_QWORD *)0xFFFFF6FB7DBEF000LL;
    v6 = 0LL;
    do
    {
      if ( *v4 )
      {
        v3 = v6 >> 3;
        v2 = (unsigned int)(char)v11[v6 >> 3];
        LODWORD(v2) = v2 | (1 << (v5 & 7));
        v11[v6 >> 3] = v2;
      }
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 0x200 );
  }
  v7 = ExGenRandom(1, v2, v3, (__int64)v4);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 3u, v7 & 0x1FF);
  qword_140E2F1A0 = 0x80000000LL;
  qword_140E2F198 = (ClearBitsAndSet - 8704LL) << 30;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2960LL) = qword_140E2F198;
  result = qword_140E2F1A0;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2968LL) = qword_140E2F1A0;
  return result;
}
