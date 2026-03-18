/*
 * XREFs of ??1XFERDCOBJ@@QEAA@XZ @ 0x1C02746A0
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0274F5C (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall XFERDCOBJ::~XFERDCOBJ(XFERDCOBJ *this)
{
  if ( *((_DWORD *)this + 20) )
    PopThreadGuardedObject((char *)this + 48);
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)this + 16);
}
