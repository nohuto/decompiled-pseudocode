/*
 * XREFs of XilCoreCommand_AddCommandTRBToRing @ 0x14000A19C
 * Callers:
 *     Command_InternalSendCommand @ 0x1400080E4 (Command_InternalSendCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 */

char __fastcall XilCoreCommand_AddCommandTRBToRing(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _UNKNOWN **v5; // rax
  __int64 v6; // rcx
  BOOL v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 12) & 0xFFFFFFFE | (*((_DWORD *)a1 + 11) != 1);
  *(_OWORD *)(a1[6] + 16LL * *((unsigned int *)a1 + 9)) = *(_OWORD *)a2;
  v3 = *((unsigned int *)a1 + 9);
  v4 = a1[6];
  v3 *= 2LL;
  LOBYTE(v5) = *(_BYTE *)(v4 + 8 * v3 + 12) ^ 1;
  *(_BYTE *)(v4 + 8 * v3 + 12) = (_BYTE)v5;
  _InterlockedOr(v12, 0);
  ++*((_DWORD *)a1 + 9);
  v6 = *((unsigned int *)a1 + 8);
  if ( *((_DWORD *)a1 + 9) == (_DWORD)v6 )
  {
    *(_BYTE *)(a1[6] + 16 * v6 + 12) ^= 1u;
    _InterlockedOr(v12, 0);
    v7 = *((_DWORD *)a1 + 11) != 1;
    *((_DWORD *)a1 + 11) = v7;
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = (_BYTE)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v8 = *((_DWORD *)a1 + 8);
        v9 = *a1;
        LODWORD(v15) = v7;
        LODWORD(v14) = v8;
        v10 = *(_QWORD *)(v9 + 16);
        LODWORD(v13) = *((_DWORD *)a1 + 9);
        LOBYTE(v5) = WPP_RECORDER_SF_ddL(
                       v10,
                       5u,
                       7u,
                       0xBu,
                       (__int64)&WPP_0ca11c42166c3ea98264a17e501f5a94_Traceguids,
                       v13,
                       v14,
                       v15);
      }
    }
    *((_DWORD *)a1 + 9) = 0;
  }
  return (char)v5;
}
