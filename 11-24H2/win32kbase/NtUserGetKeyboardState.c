/*
 * XREFs of NtUserGetKeyboardState @ 0x1400244A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x140024704 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140025314 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x1400256B0 (EtwTraceUIPIInputError.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserGetKeyboardState(_BYTE *a1)
{
  char v1; // bl
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rsi
  _BYTE *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  unsigned __int8 v9; // r8
  int i; // ecx
  __int64 v11; // r9
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  _BYTE v16[24]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h] BYREF
  int v18; // [rsp+68h] [rbp-30h]
  __int64 v20; // [rsp+B0h] [rbp+18h]
  __int64 v21; // [rsp+B8h] [rbp+20h]

  v1 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    LODWORD(v3) = 0;
  if ( !(unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
      goto LABEL_5;
    v13 = *(_QWORD *)(W32GetUserSessionState() + 18944);
    v20 = *(_QWORD *)(v13 + 472);
    v14 = *(_DWORD *)(v13 + 480);
    v15 = *(_QWORD *)(W32GetUserSessionState() + 18944);
    v17 = v20;
    v18 = v14;
    EtwTraceUIPIInputError(v3, 0, v15, (unsigned int)&v17, 3);
  }
  v1 = 0;
LABEL_5:
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[255] = v4[255];
  v5 = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  v21 = *(_QWORD *)(v6 + 472);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( v8 < 256 )
  {
    *a1 = 0;
    if ( v1 || v9 < 0x20u )
      goto LABEL_16;
    for ( i = 0; (unsigned __int64)i < 0xE; ++i )
    {
      if ( byte_14025E220[i] == (_BYTE)v7 )
        goto LABEL_16;
    }
    if ( (unsigned __int8)v7 == 165 )
    {
LABEL_16:
      v11 = v21 + ((unsigned __int64)(unsigned __int8)v7 >> 2);
      if ( ((unsigned __int8)(1 << (2 * (v7 & 3))) & *(_BYTE *)(v11 + 280)) != 0 )
        *a1 |= 0x80u;
      if ( ((unsigned __int8)(1 << (2 * (v7 & 3) + 1)) & *(_BYTE *)(v11 + 280)) != 0 )
        *a1 |= 1u;
    }
    else
    {
      switch ( (char)v7 )
      {
        case 91:
        case 92:
        case -96:
        case -95:
        case -94:
        case -93:
        case -92:
          goto LABEL_16;
        default:
          break;
      }
    }
    v8 = ++v7;
    ++a1;
    v9 = v7;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return 1LL;
}
