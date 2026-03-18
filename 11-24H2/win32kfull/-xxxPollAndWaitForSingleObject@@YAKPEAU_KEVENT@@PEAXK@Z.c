/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14003D46C
 * Callers:
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxRemoveQueueCompletion @ 0x140065F00 (xxxRemoveQueueCompletion.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x140066D74 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167D6C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ClientDeliverUserApc @ 0x14019A1F4 (ClientDeliverUserApc.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  struct tagTHREADINFO *v6; // rsi
  struct tagTHREADINFO *v7; // rax
  unsigned __int64 v8; // rbp
  int v9; // ebx
  NTSTATUS v10; // ebx
  __int64 v12; // rax
  unsigned int v13; // eax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]
  char v17; // [rsp+A8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v6 = PtiCurrent();
  if ( !*((_QWORD *)v6 + 116) )
  {
    v12 = Win32AllocPoolNonPagedZInit(24LL, 1819308885LL);
    *((_QWORD *)v6 + 116) = v12;
    if ( !v12 )
      return 0xFFFFFFFFLL;
  }
  v7 = PtiCurrent();
  v15[0] = *((_QWORD *)v7 + 48);
  *((_QWORD *)v7 + 48) = v15;
  v16 = UserDereferenceObject;
  v15[1] = Object;
  if ( Object )
    ObfReferenceObject(Object);
  ClearQueueServerEvent(0x40u);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v9 = a3;
LABEL_7:
      a3 = 0;
      goto LABEL_8;
    }
    v9 = 500;
    if ( a3 != -1 )
    {
      v13 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
      LODWORD(v8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v13 >= a3 )
        goto LABEL_7;
      a3 -= v13;
    }
LABEL_8:
    Timeout.QuadPart = -10000LL * v9;
    **((_QWORD **)v6 + 116) = Object;
    *(_QWORD *)(*((_QWORD *)v6 + 116) + 8LL) = *((_QWORD *)v6 + 201);
    *(_QWORD *)(*((_QWORD *)v6 + 116) + 16LL) = a2;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v17, 1);
    v10 = KeWaitForMultipleObjects((a2 != 0LL) + 2, *((PVOID **)v6 + 116), WaitAny, WrUserRequest, 1, 0, &Timeout, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v17);
    if ( v10 == 1 )
    {
      xxxRemoveQueueCompletion();
    }
    else
    {
      if ( v10 >= 0 )
      {
        if ( v10 != 192 )
          goto LABEL_11;
        ClientDeliverUserApc();
      }
      v10 = -1;
    }
LABEL_11:
    if ( (INTERLOCKEDINT::operator int(*((_QWORD *)v6 + 61) + 4LL) & 0x40) != 0 )
      xxxReceiveMessages(v6);
    if ( v10 != 258 && v10 != 1 )
      goto LABEL_17;
  }
  while ( a3 );
  if ( v10 == 1 )
    v10 = 258;
LABEL_17:
  if ( v16 != -1 )
    PopAndFreeW32ThreadLock(v15);
  return (unsigned int)v10;
}
