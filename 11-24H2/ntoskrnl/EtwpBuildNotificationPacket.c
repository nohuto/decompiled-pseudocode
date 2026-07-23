/*
 * XREFs of EtwpBuildNotificationPacket @ 0x1408321B8
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpCopySchematizedFilters @ 0x14083A308 (EtwpCopySchematizedFilters.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpBuildNotificationPacket(__int64 a1, _OWORD *a2, unsigned __int16 a3, __int64 *a4)
{
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // r12d
  int v9; // esi
  unsigned int v10; // edx
  _DWORD *v11; // r9
  __int64 v12; // r10
  ULONG_PTR v13; // rdx
  unsigned int v14; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = *(_QWORD *)(a1 + 640);
  v5 = 0;
  v6 = a3;
  v9 = 0;
  if ( !v4 )
    goto LABEL_6;
  v10 = 0;
  v11 = (_DWORD *)(a1 + 128);
  v12 = v4 + 88;
  do
  {
    if ( *v11 && *(_QWORD *)v12 && _bittest(&v6, (unsigned __int8)v10) )
      v9 += (*(_DWORD *)(*(_QWORD *)v12 + 16LL) + 7) & 0xFFFFFFF8;
    ++v10;
    v11 += 8;
    v12 += 104LL;
  }
  while ( v10 < 0x10 );
  if ( !v9 )
  {
LABEL_6:
    if ( a2 )
    {
      v13 = *((unsigned int *)a2 + 1);
      *a4 = 0LL;
      v14 = v13;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v13, 0x44777445u);
      v16 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, a2, v14);
        v16[2] = 1;
        *a4 = (__int64)v16;
        return v5;
      }
    }
    else
    {
      v19 = ExAllocatePool2(0x100uLL, 0x78uLL, 0x44777445u);
      if ( v19 )
      {
        *(_DWORD *)(v19 + 8) = 1;
        *(_DWORD *)(v19 + 4) = 120;
        *a4 = v19;
        return v5;
      }
    }
    return (unsigned int)-1073741801;
  }
  v18 = ExAllocatePool2(0x100uLL, (unsigned int)(v9 + 136), 0x44777445u);
  if ( !v18 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(v18 + 8) = 1;
  if ( a2 )
  {
    *(_OWORD *)v18 = *a2;
    *(_OWORD *)(v18 + 16) = a2[1];
    *(_OWORD *)(v18 + 32) = a2[2];
    *(_OWORD *)(v18 + 48) = a2[3];
    *(_OWORD *)(v18 + 64) = a2[4];
    *(_OWORD *)(v18 + 80) = a2[5];
    *(_OWORD *)(v18 + 96) = a2[6];
    *(_QWORD *)(v18 + 112) = *((_QWORD *)a2 + 14);
  }
  *(_DWORD *)(v18 + 116) = 1;
  *(_DWORD *)(v18 + 8) = 1;
  *(_DWORD *)(v18 + 4) = v9 + 136;
  *(_DWORD *)(v18 + 132) = 0x80000000;
  *(_DWORD *)(v18 + 128) = v9;
  *(_QWORD *)(v18 + 120) = 136LL;
  *a4 = v18;
  EtwpCopySchematizedFilters((void *)(v18 + 136));
  return v5;
}
