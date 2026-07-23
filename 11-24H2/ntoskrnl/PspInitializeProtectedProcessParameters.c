/*
 * XREFs of PspInitializeProtectedProcessParameters @ 0x140771E58
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 *     PspInitPhase2 @ 0x140C372AC (PspInitPhase2.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspInitializeProtectedProcessParameters(__int64 a1)
{
  __int128 v2; // xmm1
  unsigned __int16 v3; // ax
  __int64 Pool2; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx

  *(_OWORD *)(a1 + 968) = *(_OWORD *)(a1 + 1232);
  v2 = *(_OWORD *)(a1 + 1232);
  v3 = 2 * (*(_WORD *)(a1 + 1232) + 42);
  *(_WORD *)(a1 + 984) = v3;
  v3 += 2;
  *(_WORD *)(a1 + 986) = v3;
  Pool2 = ExAllocatePool2(0x100uLL, v3, 0x6C537350u);
  *(_QWORD *)(a1 + 992) = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)Pool2 = *(_QWORD *)L"Path=";
  *(_WORD *)(Pool2 + 8) = aPath_0[4];
  v6 = Pool2 + 10;
  memmove((void *)(Pool2 + 10), *(const void **)(a1 + 1240), *(unsigned __int16 *)(a1 + 1232));
  v7 = *(unsigned __int16 *)(a1 + 1232);
  *(_OWORD *)(v7 + v6) = *(_OWORD *)L"\\System32";
  *(_WORD *)(v7 + v6 + 16) = aSystem32[8];
  *(_WORD *)(v7 + v6 + 18) = 0;
  *(_OWORD *)(v7 + v6 + 20) = *(_OWORD *)L"SystemDrive=";
  *(_QWORD *)(v7 + v6 + 36) = *(_QWORD *)L"ive=";
  *(_DWORD *)(v7 + v6 + 44) = **((_DWORD **)&v2 + 1);
  *(_WORD *)(v7 + v6 + 48) = 0;
  *(_OWORD *)(v7 + v6 + 50) = *(_OWORD *)L"SystemRoot=";
  *(_DWORD *)(v7 + v6 + 66) = *(_DWORD *)L"ot=";
  *(_WORD *)(v7 + v6 + 70) = aSystemroot_9[10];
  v8 = v7 + v6;
  memmove((void *)(v8 + 72), *(const void **)(a1 + 1240), *(unsigned __int16 *)(a1 + 1232));
  *(_DWORD *)(v8 + *(unsigned __int16 *)(a1 + 1232) + 72) = 0;
  return 0LL;
}
