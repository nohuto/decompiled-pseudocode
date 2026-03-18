/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x14000BDD4
 * Callers:
 *     Interrupter_D0Entry @ 0x140032140 (Interrupter_D0Entry.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 * Callees:
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     Interrupter_UpdateERDP @ 0x14000BF30 (Interrupter_UpdateERDP.c)
 *     XilRegister_WriteUlong64 @ 0x14000C120 (XilRegister_WriteUlong64.c)
 *     WPP_RECORDER_SF_qqdddi @ 0x14002ECAC (WPP_RECORDER_SF_qqdddi.c)
 */

__int64 __fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  int *v6; // rdx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-68h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 92); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(result + 8 * i);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqdddi(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          *(_DWORD *)(v4 + 140),
          *(_QWORD *)(v4 + 160),
          33,
          v11[8],
          v4,
          *(_QWORD *)(v4 + 160),
          *(_DWORD *)(v4 + 136),
          *(_DWORD *)(v4 + 144),
          *(_DWORD *)(v4 + 140),
          *(_BYTE *)(*(_QWORD *)(v4 + 160) + 24LL) + 16 * *(_DWORD *)(v4 + 140));
      v6 = (int *)(*(_QWORD *)(v4 + 24) + 8LL);
      v7 = (unsigned __int16)*(_DWORD *)(v4 + 124);
      if ( *(_BYTE *)(v5 + 137) )
      {
        *v6 = v7;
        _InterlockedOr(v11, 0);
      }
      else
      {
        XilRegister_WriteUlong(v5, v6, v7);
      }
      LOBYTE(v6) = 1;
      Interrupter_UpdateERDP(v4, v6);
      v8 = *(_QWORD *)(v4 + 24);
      v9 = *(_QWORD *)(*(_QWORD *)(v4 + 168) + 24LL);
      v10 = (_DWORD *)(v8 + 16);
      if ( *(_BYTE *)(v5 + 137) )
      {
        result = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 736LL);
        if ( (result & 1) != 0 )
        {
          *v10 = v9;
          _InterlockedOr(v11, 0);
          *(_DWORD *)(v8 + 20) = HIDWORD(v9);
        }
        else
        {
          *(_QWORD *)v10 = v9;
        }
        _InterlockedOr(v11, 0);
      }
      else
      {
        result = XilRegister_WriteUlong64(v5, v10, v9);
      }
    }
  }
  return result;
}
