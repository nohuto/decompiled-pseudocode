/*
 * XREFs of EtwpFlushBuffer @ 0x140990BD4
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpFileModeCompress @ 0x140426E94 (EtwpFileModeCompress.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpFlushBufferToRealtime @ 0x140990D5C (EtwpFlushBufferToRealtime.c)
 *     EtwpFlushBufferToLogfile @ 0x1409912C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpSendSessionNotification @ 0x1409914E0 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  char v6; // r14
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // ecx
  char v10; // r14
  int v11; // eax
  int v13; // eax
  int v14; // eax

  v4 = -1073741823;
  v5 = *(unsigned int *)(a2 + 4);
  v6 = a3;
  v7 = a2;
  v8 = -1073741823;
  if ( !(_DWORD)v5 )
    v5 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v5;
  if ( (_WORD)a3 != 1 && (_DWORD)v5 == 72 )
  {
    v9 = -2147483614;
  }
  else
  {
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    if ( (*(_QWORD *)(a1 + 800) || (a3 & 0x40) == 0) && *(_DWORD *)a2 - (int)v5 > 0 )
      memset_0((void *)(a2 + v5), 255, *(_DWORD *)a2 - (int)v5);
    v9 = 0;
    if ( *(_DWORD *)(v7 + 48) == 72 )
      v9 = -2147483614;
  }
  v10 = v6 & 1;
  if ( v9 == -2147483614 && !v10 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 8) != 0 )
  {
    LOBYTE(a3) = v9 == -2147483614;
    v11 = EtwpFlushBufferToRealtime(a1, v7, a3);
    v4 = v11;
    if ( v11 < 0 )
      EtwpSendSessionNotification(a1, 4LL, (unsigned int)v11);
  }
  if ( *(_QWORD *)(a1 + 800) )
  {
    v13 = *(_DWORD *)(a1 + 12);
    if ( (v13 & 0x4000000) != 0 && (v13 & 1) != 0 && !(unsigned int)EtwpFileModeCompress(a1, v7) )
      v7 = *(_QWORD *)(a1 + 1416);
    v14 = EtwpFlushBufferToLogfile(a1, v7);
    v8 = v14;
    if ( v14 < 0 )
      EtwpSendSessionNotification(a1, 3LL, (unsigned int)v14);
  }
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741432 || v8 >= 0 )
    return 0LL;
  if ( v8 != -1073741823 )
    return (unsigned int)v8;
  return v4;
}
