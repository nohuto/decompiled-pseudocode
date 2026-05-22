/*
 * XREFs of ??1ConnectionIndirector@BamoImpl@Microsoft@@MEAA@XZ @ 0x1800B5F00
 * Callers:
 *     ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x1800B6110 (--_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::ConnectionIndirector::~ConnectionIndirector(
        Microsoft::BamoImpl::ConnectionIndirector *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)this + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
  v1 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 4) + 16LL);
  if ( v1 )
    (**v1)(v1, 1LL);
}
