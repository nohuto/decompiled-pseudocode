/*
 * XREFs of IopMcCreateBufferEntry @ 0x14059FA2C
 * Callers:
 *     IopIoRingDispatchRegisterBuffers @ 0x1407143D8 (IopIoRingDispatchRegisterBuffers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopMcCreateBufferEntry(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned __int64 v7; // rdi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  _QWORD *v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // rcx
  KIRQL v15; // al
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx

  v7 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  Pool2 = ExAllocatePool2(0x41uLL, (unsigned int)(32 * (v7 + 3)), 0x6542634Du);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_WORD *)Pool2 = 3074;
  *(_DWORD *)(Pool2 + 4) = 32 * (v7 + 3);
  *(_DWORD *)(Pool2 + 8) = 1;
  *(_QWORD *)(Pool2 + 32) = a1;
  *(_DWORD *)(Pool2 + 40) = a2;
  *(_BYTE *)(Pool2 + 44) = a3;
  *(_WORD *)(Pool2 + 64) = 0;
  *(_BYTE *)(Pool2 + 66) = 6;
  *(_DWORD *)(Pool2 + 68) = 0;
  v12 = (_QWORD *)(Pool2 + 72);
  v12[1] = v12;
  *v12 = v12;
  if ( (_DWORD)v7 )
  {
    v13 = (_DWORD *)(v10 + 120);
    v14 = (unsigned int)v7;
    do
    {
      *v13 = -1;
      v13 += 8;
      --v14;
    }
    while ( v14 );
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C4C8);
  v16 = (_QWORD *)qword_140F8C4D8;
  v17 = (_QWORD *)(v10 + 16);
  if ( *(__int64 **)qword_140F8C4D8 != &qword_140F8C4D0 )
    __fastfail(3u);
  *(_QWORD *)(v10 + 24) = qword_140F8C4D8;
  *v17 = &qword_140F8C4D0;
  *v16 = v17;
  qword_140F8C4D8 = v10 + 16;
  KeReleaseSpinLock(&qword_140F8C4C8, v15);
  result = 0LL;
  *a4 = v10;
  return result;
}
