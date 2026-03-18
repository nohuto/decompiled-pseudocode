/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0151BBC
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0088B30 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0159028 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  if ( qword_1C0294C68 && (int)qword_1C0294C68() >= 0 && qword_1C0294C70 )
    qword_1C0294C70(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
