/*
 * XREFs of FsRtlSendModernAppTermination @ 0x140495500
 * Callers:
 *     FsRtlpOplockSendModernAppTermination @ 0x1404953E4 (FsRtlpOplockSendModernAppTermination.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall FsRtlSendModernAppTermination(_DWORD *Buffer, ULONG Length, int a3)
{
  WNF_STATE_NAME v3; // rax
  _DWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-20h] BYREF

  if ( Buffer && Length )
  {
    if ( Length > 0x1000 )
      return -2147483643;
  }
  else
  {
    v5[0] = -1;
    Buffer = v5;
    v5[1] = 0;
    Length = 4;
  }
  if ( !a3 )
  {
    v3 = (WNF_STATE_NAME)WNF_FLT_RUNDOWN_WAIT;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v3 = (WNF_STATE_NAME)WNF_FSRL_OPLOCK_BREAK;
LABEL_7:
    StateName = v3;
    return ZwUpdateWnfStateData(&StateName, Buffer, Length, 0LL, 0LL, 0, 0);
  }
  return -1073741811;
}
