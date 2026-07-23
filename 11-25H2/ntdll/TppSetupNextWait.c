/*
 * XREFs of TppSetupNextWait @ 0x1800D70F0
 * Callers:
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 * Callees:
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     TppRaiseHandleStatus @ 0x1800D71E8 (TppRaiseHandleStatus.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180164450 (ZwAssociateWaitCompletionPacket.c)
 */

__int64 __fastcall TppSetupNextWait(_QWORD *a1, void *a2, __int64 *a3)
{
  _RTL_SRWLOCK *v3; // rbp
  void *v4; // r9
  void *v8; // rcx
  NTSTATUS v9; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14; // eax
  BOOLEAN v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = (_RTL_SRWLOCK *)a1[18];
  v4 = a1 + 49;
  a1[45] = a2;
  v8 = (void *)a1[46];
  v16 = 0;
  v9 = ZwAssociateWaitCompletionPacket(v8, v3[8].Ptr, a2, v4, a1, 0, 0LL, &v16);
  if ( v9 < 0 )
  {
    a1[45] = 0LL;
    TppRaiseHandleStatus((unsigned int)v9, a2, a1);
    return 0LL;
  }
  else if ( !a3 || v16 )
  {
    return 1LL;
  }
  else
  {
    v11 = *a3;
    if ( *a3 < 0 )
    {
      v12 = -v11;
    }
    else
    {
      v12 = v11 - MEMORY[0x7FFE0014];
      if ( *a3 <= MEMORY[0x7FFE0014] )
        v12 = 0LL;
    }
    v13 = v12 >> 16;
    v14 = 300;
    if ( v13 <= 0x12C )
      v14 = v13;
    TppSetTimer((__int64)a1, v3 + 14, a3, 0LL, v14);
    return 2LL;
  }
}
