/*
 * XREFs of ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019CF00
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x140124F6C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EA4D8 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1401254D0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeLeftHandedDeadzone(RIMDeadzone *this)
{
  _DWORD *v2; // rax
  _DWORD *v4; // rcx

  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  v2 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x7A645052u);
  *((_QWORD *)this + 3) = v2;
  if ( !v2 )
    return 3221225495LL;
  *v2 = 100;
  *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 270;
  *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = Win32AllocPoolZInitImpl(
                                               256LL,
                                               8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL),
                                               0x7A645052u);
  v4 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
  if ( !v4 )
  {
    RIMDeadzone::Release((char **)this);
    return 3221225495LL;
  }
  *v4 = 0;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 12000;
  *(_DWORD *)this = 0;
  return 0LL;
}
