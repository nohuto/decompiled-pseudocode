/*
 * XREFs of DbgkpSendApiMessageLpc @ 0x140A24CFC
 * Callers:
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     DbgkpSuspendProcess @ 0x1408F3A64 (DbgkpSuspendProcess.c)
 *     LpcSendWaitReceivePort @ 0x140A24F40 (LpcSendWaitReceivePort.c)
 *     DbgkpResumeProcess @ 0x140A5A3B4 (DbgkpResumeProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessageLpc(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  _KPROCESS *Process; // rbp
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v20; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v21[688]; // [rsp+40h] [rbp-2D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  Process = CurrentThread->ApcState.Process;
  if ( a3 )
    v4 = DbgkpSuspendProcess((__int64)CurrentThread->ApcState.Process);
  *(_DWORD *)(a1 + 44) = 259;
  v20 = 688LL;
  v8 = LpcSendWaitReceivePort(a2, 0x20000, a1, (unsigned int)v21, (__int64)&v20, 0LL);
  v9 = v8;
  if ( v8 == 192 )
  {
    v9 = -1073741749;
  }
  else if ( v8 >= 0 )
  {
    v10 = 2LL;
    v11 = v21;
    do
    {
      v12 = v11[1];
      *(_OWORD *)a1 = *v11;
      v13 = v11[2];
      *(_OWORD *)(a1 + 16) = v12;
      v14 = v11[3];
      *(_OWORD *)(a1 + 32) = v13;
      v15 = v11[4];
      *(_OWORD *)(a1 + 48) = v14;
      v16 = v11[5];
      *(_OWORD *)(a1 + 64) = v15;
      v17 = v11[6];
      *(_OWORD *)(a1 + 80) = v16;
      v18 = v11[7];
      v11 += 8;
      *(_OWORD *)(a1 + 96) = v17;
      a1 += 128LL;
      *(_OWORD *)(a1 - 16) = v18;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)a1 = *v11;
  }
  if ( v4 )
    DbgkpResumeProcess(Process);
  return v9;
}
