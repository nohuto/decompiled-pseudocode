/*
 * XREFs of EtwpBuildNotificationPacket @ 0x1409F6588
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409F6160 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     EtwpCopySchematizedFilters @ 0x14083DD00 (EtwpCopySchematizedFilters.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpBuildNotificationPacket(__int64 a1, _OWORD *a2, unsigned __int16 a3, __int64 *a4)
{
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // r12d
  int v10; // esi
  unsigned int v11; // edx
  _DWORD *v12; // r9
  __int64 v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  v4 = *(_QWORD *)(a1 + 640);
  v5 = 0;
  v6 = a3;
  v10 = 0;
  if ( !v4 )
    goto LABEL_6;
  v11 = 0;
  v12 = (_DWORD *)(a1 + 128);
  v13 = v4 + 88;
  do
  {
    if ( *v12 && *(_QWORD *)v13 && _bittest(&v6, (unsigned __int8)v11) )
      v10 += (*(_DWORD *)(*(_QWORD *)v13 + 16LL) + 7) & 0xFFFFFFF8;
    ++v11;
    v12 += 8;
    v13 += 104LL;
  }
  while ( v11 < 0x10 );
  if ( !v10 )
  {
LABEL_6:
    if ( a2 )
    {
      v14 = *((_DWORD *)a2 + 1);
      *a4 = 0LL;
      v15 = v14;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v17 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, a2, v15);
        v17[2] = 1;
        *a4 = (__int64)v17;
        return v5;
      }
    }
    else
    {
      v20 = ExAllocatePool2(0x100uLL);
      if ( v20 )
      {
        *(_DWORD *)(v20 + 8) = 1;
        *(_DWORD *)(v20 + 4) = 120;
        *a4 = v20;
        return v5;
      }
    }
    return (unsigned int)-1073741801;
  }
  v19 = ExAllocatePool2(0x100uLL);
  if ( !v19 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(v19 + 8) = 1;
  if ( a2 )
  {
    *(_OWORD *)v19 = *a2;
    *(_OWORD *)(v19 + 16) = a2[1];
    *(_OWORD *)(v19 + 32) = a2[2];
    *(_OWORD *)(v19 + 48) = a2[3];
    *(_OWORD *)(v19 + 64) = a2[4];
    *(_OWORD *)(v19 + 80) = a2[5];
    *(_OWORD *)(v19 + 96) = a2[6];
    *(_QWORD *)(v19 + 112) = *((_QWORD *)a2 + 14);
  }
  *(_DWORD *)(v19 + 116) = 1;
  *(_DWORD *)(v19 + 8) = 1;
  *(_DWORD *)(v19 + 4) = v10 + 136;
  *(_DWORD *)(v19 + 132) = 0x80000000;
  *(_DWORD *)(v19 + 128) = v10;
  *(_QWORD *)(v19 + 120) = 136LL;
  *a4 = v19;
  EtwpCopySchematizedFilters((char *)(v19 + 136), a1, v6);
  return v5;
}
