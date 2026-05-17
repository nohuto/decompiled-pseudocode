/*
 * XREFs of TppIsWorkerThread @ 0x1800044A0
 * Callers:
 *     TpCheckTerminateWorker @ 0x180004410 (TpCheckTerminateWorker.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 */

bool __fastcall TppIsWorkerThread(__int64 a1)
{
  struct _TEB *v1; // rbx
  bool v2; // zf
  bool v3; // bl
  __int128 v5; // [rsp+40h] [rbp-40h] BYREF
  __int128 v6; // [rsp+50h] [rbp-30h] BYREF
  __int128 v7; // [rsp+60h] [rbp-20h]
  __int64 v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+90h] [rbp+10h] BYREF
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v9 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1 = NtCurrentTeb();
  if ( !a1 )
    return v1->ThreadPoolData != 0LL;
  if ( (int)ZwDuplicateObject(-1LL, a1, -1LL, &Handle, 2072, 0, 0) < 0 )
    return 0;
  if ( (int)ZwQueryInformationThread(Handle, 0LL, &v6, 48LL, 0LL) >= 0 && v1->ClientId.UniqueProcess == (void *)v7 )
  {
    if ( v1->ClientId.UniqueThread == (void *)*((_QWORD *)&v7 + 1) )
    {
      v2 = v1->ThreadPoolData == 0LL;
      goto LABEL_10;
    }
    *(_QWORD *)&v5 = &v11;
    *((_QWORD *)&v5 + 1) = 0x800001778LL;
    if ( (int)ZwQueryInformationThread(Handle, 26LL, &v5, 16LL, 0LL) >= 0 )
    {
      v2 = v11 == 0;
LABEL_10:
      v3 = !v2;
      goto LABEL_11;
    }
  }
  v3 = 0;
LABEL_11:
  if ( Handle )
    NtClose(Handle);
  return v3;
}
