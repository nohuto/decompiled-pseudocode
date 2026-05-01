/*
 * XREFs of ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x180529F54
 * Callers:
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x180529F80 (--1WindowArrangementView@@UEAA@XZ.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052CF20 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801204E0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::~TMAppArrange(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&TabletModeTelemetry::TMAppArrange::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
