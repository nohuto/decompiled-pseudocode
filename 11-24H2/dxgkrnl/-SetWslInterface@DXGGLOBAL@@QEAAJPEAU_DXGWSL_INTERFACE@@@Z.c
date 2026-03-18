/*
 * XREFs of ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1401D6D9C
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403A9E70 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetWslInterface(DXGGLOBAL *this, struct _DXGWSL_INTERFACE *a2)
{
  _QWORD *v4; // rax

  if ( *((_QWORD *)this + 4) )
    goto LABEL_4;
  v4 = (_QWORD *)operator new(0x20uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *((_QWORD *)this + 4) = v4;
LABEL_4:
    g_WslSubsystem = *((_QWORD *)a2 + 2);
    qword_140160A98 = *((_QWORD *)a2 + 4);
    qword_140160AA0 = *((_QWORD *)a2 + 5);
    qword_140160AA8 = *((_QWORD *)a2 + 6);
    qword_140160AB0 = *((_QWORD *)a2 + 7);
    qword_140160AB8 = *((_QWORD *)a2 + 8);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 9);
    return 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 2385;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocated WSL shared NT handle table",
    2385LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
