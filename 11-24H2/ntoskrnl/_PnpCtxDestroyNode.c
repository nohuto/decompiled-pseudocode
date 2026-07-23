/*
 * XREFs of _PnpCtxDestroyNode @ 0x140817B70
 * Callers:
 *     _PnpCtxCloseMachine @ 0x140817930 (_PnpCtxCloseMachine.c)
 *     _PnpCtxCreateNode @ 0x1408179EC (_PnpCtxCreateNode.c)
 *     _PnpCtxOpenMachine @ 0x140817DD0 (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x1408180DC (_PnpCtxRegisterMachineNode.c)
 *     _PnpCtxUnregisterMachineNode @ 0x1408182FC (_PnpCtxUnregisterMachineNode.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _SysCtxCloseMachine @ 0x140820890 (_SysCtxCloseMachine.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxDestroyNode(UNICODE_STRING *P)
{
  char *v2; // rcx
  wchar_t *Buffer; // rcx
  char *v4; // rcx
  wchar_t *v5; // rcx
  char *v6; // rcx
  wchar_t *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  wchar_t *v10; // rcx
  char *v11; // rcx
  wchar_t *v12; // rcx

  RtlFreeAnsiString(P + 2);
  v2 = *(char **)&P[4].Length;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v2);
  Buffer = P[4].Buffer;
  if ( (unsigned __int64)Buffer - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Buffer);
  v4 = *(char **)&P[5].Length;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v4);
  v5 = P[5].Buffer;
  if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v5);
  v6 = *(char **)&P[6].Length;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v6);
  v7 = P[6].Buffer;
  if ( (unsigned __int64)v7 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v7);
  v8 = *(char **)&P[7].Length;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v8);
  v9 = *(char **)&P[8].Length;
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v9);
  v10 = P[8].Buffer;
  if ( (unsigned __int64)v10 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v10);
  v11 = *(char **)&P[9].Length;
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v11);
  v12 = P[3].Buffer;
  if ( v12 )
    SysCtxCloseMachine(v12);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
