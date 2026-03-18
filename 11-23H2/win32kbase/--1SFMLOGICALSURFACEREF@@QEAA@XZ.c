/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0159D38
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C015A180 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( qword_1C0294700 && (int)qword_1C0294700() >= 0 && qword_1C0294708 )
    qword_1C0294708(this);
  PopThreadGuardedObject(this);
}
