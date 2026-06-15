/*
 * XREFs of ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x1800A5AB0
 * Callers:
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800A5A48 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800FAA60 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeterControlBase::Initialize(CMeterControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 16);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(CMeterControlBase *, char *))(*(_QWORD *)this + 40LL))(this, (char *)this + 24),
        v3 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::Initialize", 163, v3);
  }
  return (unsigned int)v3;
}
