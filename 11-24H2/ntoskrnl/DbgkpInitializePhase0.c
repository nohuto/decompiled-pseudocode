/*
 * XREFs of DbgkpInitializePhase0 @ 0x140C180F8
 * Callers:
 *     DbgkInitialize @ 0x140C18074 (DbgkInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     DbgkpInitializePhase0SiloState @ 0x140704C24 (DbgkpInitializePhase0SiloState.c)
 *     DbgkpGetServerSiloState @ 0x140A78398 (DbgkpGetServerSiloState.c)
 *     CmSiRWLockInitialize @ 0x140AB8200 (CmSiRWLockInitialize.c)
 */

void DbgkpInitializePhase0()
{
  char *ServerSiloState; // rax
  __int64 v1; // rbx
  _RTL_RUN_ONCE *v2; // rcx
  _RTL_RUN_ONCE *v3; // rcx
  UNICODE_STRING v4; // [rsp+20h] [rbp-49h] BYREF
  __int16 v5; // [rsp+30h] [rbp-39h] BYREF
  char v6; // [rsp+32h] [rbp-37h]
  int v7; // [rsp+38h] [rbp-31h]
  int v8; // [rsp+3Ch] [rbp-2Dh]
  int v9; // [rsp+40h] [rbp-29h]
  int v10; // [rsp+44h] [rbp-25h]
  int v11; // [rsp+48h] [rbp-21h]
  int v12; // [rsp+4Ch] [rbp-1Dh]
  int v13; // [rsp+54h] [rbp-15h]
  int v14; // [rsp+58h] [rbp-11h]
  int v15; // [rsp+5Ch] [rbp-Dh]
  void (__fastcall *v16)(__int64, __int64, __int64, unsigned __int64); // [rsp+70h] [rbp+7h]
  void (__stdcall *v17)(POPLOCK); // [rsp+78h] [rbp+Fh]

  *(_QWORD *)&v4.Length = 1572886LL;
  v4.Buffer = L"DebugObject";
  memset_0(&v5, 0, 0x78uLL);
  DbgkpProcessDebugPortMutex.Owner = 0LL;
  DbgkpProcessDebugPortMutex.Contention = 0;
  DbgkpProcessDebugPortMutex.Event.Header.SignalState = 0;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Blink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Flink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  DbgkpProcessDebugPortMutex.Count = 1;
  LOWORD(DbgkpProcessDebugPortMutex.Event.Header.Lock) = 1;
  DbgkpProcessDebugPortMutex.Event.Header.Size = 6;
  ServerSiloState = DbgkpGetServerSiloState(0LL);
  if ( (int)DbgkpInitializePhase0SiloState(ServerSiloState) >= 0 )
  {
    v7 = 0;
    v14 = 0;
    v15 = 0;
    v17 = AlpcMessageDeleteProcedure;
    v5 = 120;
    v16 = DbgkpCloseObject;
    v1 = 8LL;
    v6 |= 8u;
    v12 = 2031631;
    v11 = 2031631;
    v13 = 512;
    v8 = 131073;
    v9 = 131074;
    v10 = 1179648;
    if ( (int)ObCreateObjectType(&v4, &v5, 0LL, (__int64)&DbgkDebugObjectType) >= 0 )
    {
      v2 = &RunOnce;
      do
      {
        CmSiRWLockInitialize(v2);
        v2 = v3 + 2;
        --v1;
      }
      while ( v1 );
    }
  }
}
