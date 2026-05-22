/*
 * XREFs of ?OnInput@BamoAttachableInputObjectSampleProxy@@UEAAJ_J0PEBG@Z @ 0x18011D8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x18011D910 (-OnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z.c)
 */

__int64 __fastcall BamoAttachableInputObjectSampleProxy::OnInput(
        BamoAttachableInputObjectSampleProxy *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  BamoAttachableInputObjectSampleProxy *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoAttachableInputObjectSampleProxyImpl::OnInput(
                  (BamoAttachableInputObjectSampleProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
