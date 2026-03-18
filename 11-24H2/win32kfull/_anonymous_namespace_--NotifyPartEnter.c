/*
 * XREFs of _anonymous_namespace_::NotifyPartEnter @ 0x140252210
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140252128 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x14014884C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyPartEnter(__int64 a1, unsigned __int16 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const struct tagWND *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  char v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int16 v17; // bx
  unsigned __int16 v18; // bx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // ax

  result = GetTopLevelWindow(a1);
  v9 = (const struct tagWND *)result;
  if ( result )
  {
    v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19928);
    v13 = *(unsigned __int16 *)(v10 + 4960) | (*(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19928)
                                                                   + 4964LL) << 16);
    v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 472LL) + 284LL);
    v15 = v14 & 1;
    LOWORD(v15) = 4 * v15;
    v16 = (unsigned __int16)v15;
    LOWORD(v16) = v15 | 1;
    if ( (v14 & 0x10) == 0 )
      LOWORD(v16) = v15;
    v17 = v16 | 2;
    if ( (v14 & 4) == 0 )
      v17 = v16;
    v18 = v17 | 0x8000;
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v16) + 18944)
      && *(const struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 18944) + 128LL) == v9 )
    {
      v18 |= 0x200u;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 1) != 0 )
    {
      v21 = 2048;
    }
    else
    {
      if ( !IsArranged(v9) )
        goto LABEL_14;
      v21 = 1024;
    }
    v18 |= v21;
LABEL_14:
    result = anonymous_namespace_::NotifyShellSimplePayload(
               *(_QWORD *)v9,
               10,
               v18 | (a2 << 16) | (unsigned __int16)(16 * (*a3 & 0x1F)),
               v13,
               0);
    if ( (_BYTE)result )
      *(_DWORD *)(a1 + 380) |= 1u;
  }
  return result;
}
