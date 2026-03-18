/*
 * XREFs of ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x140125508
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x140124F6C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1401254D0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EA4D8 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this)
{
  bool v2; // zf
  __int64 i; // rdi
  char *v4; // rcx

  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  v2 = *((_DWORD *)this + 4) == 2;
  *(_DWORD *)this = 1;
  if ( v2 && *((_QWORD *)this + 3) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
    {
      v4 = *(char **)(*((_QWORD *)this + 3) + 24 * i + 8);
      if ( v4 )
        GreDeleteFastMutex(v4);
    }
    GreDeleteFastMutex(*((char **)this + 3));
  }
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
