/*
 * XREFs of PopWriteImageHeader @ 0x140B60DD0
 * Callers:
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     tcpxsum @ 0x1406B44D0 (tcpxsum.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteImageHeader(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r10d
  __int64 i; // rbp
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r11
  char *v16; // rdx
  __int64 v17; // rcx
  _OWORD *v18; // rcx
  __int64 *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 result; // rax

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  qword_140F0C0B8 = *(_QWORD *)(a2 + 1176);
  dword_140F0C0C0 = *(_DWORD *)(a1 + 288);
  v8 = __rdtsc();
  qword_140F0BFD0 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  dword_140F0C19C = ((unsigned int)dword_140F0BBA0 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  qword_140F0C008 = PerformanceCounter.QuadPart;
  for ( i = 5LL; v10 < *(_DWORD *)(a1 + 288); qword_140F0BFE8 += *(_QWORD *)(*(_QWORD *)(a1 + 296) + v13 + 80) )
  {
    v12 = &unk_140F0C248;
    v13 = 168LL * v10;
    v14 = 5LL;
    v15 = v13 - (_QWORD)&unk_140F0C248;
    do
    {
      v16 = (char *)v12 + v15;
      *v12 += *(_QWORD *)((char *)v12 + v15 + *(_QWORD *)(a1 + 296) + 88);
      ++v12;
      *(_QWORD *)&v16[*(_QWORD *)(a1 + 296) + 88] = 0LL;
      --v14;
    }
    while ( v14 );
    ++v10;
    qword_140F0C168 += *(_QWORD *)(*(_QWORD *)(a1 + 296) + v13 + 56);
    qword_140F0BFE0 += *(_QWORD *)(*(_QWORD *)(a1 + 296) + v13 + 40);
  }
  qword_140F0C178 = qword_140F0C190;
  qword_140F0C188 = (unsigned int)dword_140F0C198;
  qword_140F0C190 += qword_140F0C170;
  v17 = qword_140F0C160;
  dword_140F0C198 += qword_140F0C180;
  *(_QWORD *)(a2 + 88) = qword_140F0C160;
  if ( byte_140F0BBC1 )
    *(_QWORD *)(a2 + 88) = qword_140F0C168 + v17;
  v18 = (_OWORD *)(a2 + 136);
  v19 = &qword_140F0BFB8;
  do
  {
    *v18 = *(_OWORD *)v19;
    v18[1] = *((_OWORD *)v19 + 1);
    v18[2] = *((_OWORD *)v19 + 2);
    v18[3] = *((_OWORD *)v19 + 3);
    v18[4] = *((_OWORD *)v19 + 4);
    v18[5] = *((_OWORD *)v19 + 5);
    v18[6] = *((_OWORD *)v19 + 6);
    v18 += 8;
    v20 = *((_OWORD *)v19 + 7);
    v19 += 16;
    *(v18 - 1) = v20;
    --i;
  }
  while ( i );
  *v18 = *(_OWORD *)v19;
  v18[1] = *((_OWORD *)v19 + 1);
  v18[2] = *((_OWORD *)v19 + 2);
  v18[3] = *((_OWORD *)v19 + 3);
  v18[4] = *((_OWORD *)v19 + 4);
  v18[5] = *((_OWORD *)v19 + 5);
  *((_QWORD *)v18 + 12) = v19[12];
  *(_DWORD *)a2 = 1380075848;
  *(_DWORD *)(a2 + 8) = tcpxsum(0, (const char *)a2, 0x4D8u);
  PopWriteHiberPages(a1, a2, 1uLL, 0LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 72LL);
  if ( result )
    return guard_dispatch_icall_no_overrides(v22, v21);
  return result;
}
