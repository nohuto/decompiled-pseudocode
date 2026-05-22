/*
 * XREFs of ?TouchpadActionPerformed@BamoShellGesturesClientProxy@@UEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x18015A3B0
 * Callers:
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180159C88 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x18015A410 (-TouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_JW4TouchpadGlobalActio.c)
 */

__int64 __fastcall BamoShellGesturesClientProxy::TouchpadActionPerformed(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoShellGesturesClientProxyImpl::TouchpadActionPerformed(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
