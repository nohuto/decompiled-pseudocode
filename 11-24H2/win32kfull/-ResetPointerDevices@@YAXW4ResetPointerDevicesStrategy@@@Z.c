/*
 * XREFs of ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x14020E9C8
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x140279AD0 (EditionPrepareHidForInputThreadMigration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ResetPointerDevices(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(UserSessionState + 16840), &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle, v2);
    return ZwClose(Handle);
  }
  return result;
}
