/*
 * XREFs of ?TransferInkPoints@BamoShellHandwritingHostClientProxy@@UEAAJPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z @ 0x18015AA20
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@QEAAJPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z @ 0x180080A74 (-TransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@QEAAJPEBUSyntheticPenInfo@I.c)
 */

__int64 __fastcall BamoShellHandwritingHostClientProxy::TransferInkPoints(
        BamoShellHandwritingHostClientProxy *this,
        const struct Windows::UI::Internal::Input::SyntheticPenInfo *a2,
        unsigned int a3)
{
  BamoShellHandwritingHostClientProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoShellHandwritingHostClientProxyImpl::TransferInkPoints(
                  (BamoShellHandwritingHostClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
