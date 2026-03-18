/*
 * XREFs of HMValidateHandleWithDescriptor @ 0x140099270
 * Callers:
 *     ValidateHmenu @ 0x140099210 (ValidateHmenu.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401053D0 (NtMITSynthesizeKeyboardInput.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x14011C6D4 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BA9F0 (NtUserGetExtendedPointerDeviceProperty.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ValidateHandleSecure @ 0x140099530 (ValidateHandleSecure.c)
 *     HMSDCheck @ 0x1400E10F0 (HMSDCheck.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall HMValidateHandleWithDescriptor(void *a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // r14d
  __int64 v4; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int16 v18; // ax
  char v19; // al
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v24; // ecx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v26; // rdx
  __int16 v27; // ax
  _QWORD *v28; // rax
  __int64 v29; // rax

  v3 = a2;
  v4 = 0LL;
  W32GetCurrentThreadNonPaged(a1);
  v8 = *(_QWORD *)(W32GetUserSessionState(v7) + 19928);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v8 + 8) )
    goto LABEL_17;
  UserSessionState = W32GetUserSessionState(v8);
  v11 = *(_DWORD *)(W32GetUserSessionState(v10) + 19952) * (unsigned int)(unsigned __int16)a1;
  v12 = v11 + *(_QWORD *)(UserSessionState + 19944);
  v13 = W32GetUserSessionState(v11);
  v15 = *(_QWORD *)(v13 + 19888);
  v16 = 0x7FFFLL;
  v17 = 5LL * (unsigned int)((v12 - *(_QWORD *)(v13 + 19944)) >> 5);
  v18 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v12 + 26) && v18 != 0x7FFF && (v18 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_17;
  v19 = *(_BYTE *)(v12 + 25);
  if ( (v19 & 1) == 0 && *(_BYTE *)(v12 + 24) == (_BYTE)v3 )
  {
    v4 = *(_QWORD *)(v15 + 8 * v17);
    if ( (v19 & 4) != 0 )
    {
      LOBYTE(v14) = v3;
      v16 = -(__int64)((unsigned int)HMSDCheck(a1, v14, a3) != 0);
      v4 &= v16;
    }
  }
  if ( (*(_BYTE *)(v12 + 25) & 4) == 0 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v16);
    v21 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v21 + 528), 0, 0) & 0x20000000) != 0 )
    {
      if ( !(unsigned int)ValidateHandleSecure(a1, 3u) )
        v4 = 0LL;
    }
    else
    {
      v22 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2u) != 0);
      v4 &= v22;
    }
    if ( *(char *)(v12 + 25) < 0 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v22);
      v26 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *CurrentProcessWin32Process )
        {
          v27 = *((_WORD *)&unk_1402437BC + 12 * *(unsigned __int8 *)(v12 + 24));
          if ( (v27 & 2) != 0 )
          {
            v28 = *(_QWORD **)(v15 + 8 * v17 + 8);
LABEL_39:
            if ( v28 && v28 != v26 )
              goto LABEL_17;
            goto LABEL_13;
          }
          if ( (v27 & 1) != 0 )
          {
            v29 = *(_QWORD *)(v15 + 8 * v17 + 8);
            if ( v29 )
            {
              v28 = *(_QWORD **)(v29 + 464);
              goto LABEL_39;
            }
          }
        }
      }
    }
  }
LABEL_13:
  if ( v4 )
    return v4;
LABEL_17:
  switch ( v3 )
  {
    case 1:
      v24 = 1400;
      break;
    case 2:
      v24 = 1401;
      break;
    case 3:
      v24 = 1402;
      break;
    case 4:
      v24 = 1405;
      break;
    case 5:
      v24 = 1404;
      break;
    case 8:
      v24 = 1403;
      break;
    default:
      v24 = 6;
      break;
  }
  UserSetLastError(v24);
  return 0LL;
}
