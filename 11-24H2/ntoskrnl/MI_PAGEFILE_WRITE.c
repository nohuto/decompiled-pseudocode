/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x1404637C0
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, __int64 a2, char a3, int a4, int a5)
{
  __int64 v5; // r10
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  char Priority; // cl
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(v5 + 216);
  v8 = (unsigned __int64)(((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 19712), 1u) + 1) & 0x1F) << 7;
  *(_DWORD *)(v8 + v7 + 19720) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v8 + v7 + 19727) = a4 != 0;
  *(_BYTE *)(v8 + v7 + 19725) = Priority;
  *(_BYTE *)(v8 + v7 + 19726) = a3;
  *(_QWORD *)(v8 + v7 + 19728) = a2;
  *(_BYTE *)(v8 + v7 + 19724) = *(_BYTE *)(v5 + 172) & 0xF;
  *(_QWORD *)(v8 + v7 + 19736) = *(_QWORD *)(v7 + 18688);
  *(_QWORD *)(v8 + v7 + 19744) = *(_QWORD *)(v7 + 19392);
  *(_QWORD *)(v8 + v7 + 19752) = *(_QWORD *)(v7 + 19616);
  *(_QWORD *)(v8 + v7 + 19760) = *(_QWORD *)(v7 + 19520);
  *(_QWORD *)(v8 + v7 + 19784) = *(_QWORD *)(88 * ((*(_WORD *)(v5 + 172) & 0xF) + 48LL) + v7);
  *(_QWORD *)(v8 + v7 + 19768) = *(_QWORD *)(v7 + 3968);
  result = *(_QWORD *)(v7 + 4096);
  *(_QWORD *)(v8 + v7 + 19776) = result;
  *(_OWORD *)(v8 + v7 + 19792) = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(v8 + v7 + 19808) = *(_OWORD *)(a1 + 120);
  *(_OWORD *)(v8 + v7 + 19824) = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(v8 + v7 + 19840) = *(_QWORD *)(a1 + 152);
  return result;
}
