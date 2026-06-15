/*
 * XREFs of ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x140091748
 * Callers:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x14003CEFC (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveServer::ValidateStopListening(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *const *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  signed int v6; // ecx
  DWORD ProcessId; // edi
  DWORD CurrentProcessId; // ebx
  _DWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  HANDLE Process; // [rsp+90h] [rbp+20h] BYREF

  v2 = (__int64)*a2;
  v10[1] = 0;
  v4 = *((_QWORD *)this + 1);
  v14 = 0;
  Process = 0LL;
  v11 = 0LL;
  v13 = 0;
  v12 = 0LL;
  v10[0] = 48;
  v15 = 0LL;
  v6 = NtAlpcOpenSenderProcess(&Process, v4, v2, 0LL, 0x80000000, v10);
  if ( v6 >= 0 )
  {
    ProcessId = GetProcessId(Process);
    CurrentProcessId = GetCurrentProcessId();
    NtClose(Process);
    v6 = ProcessId != CurrentProcessId ? 0xC0000001 : 0;
    if ( CurrentProcessId == ProcessId )
    {
      v6 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 1), 0x10000LL, *a2, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v6 >= 0 )
        _InterlockedExchange((volatile __int32 *)this + 12, 1);
    }
  }
  return (unsigned int)v6;
}
