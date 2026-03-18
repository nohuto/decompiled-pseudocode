/*
 * XREFs of ?SetRecoveryOptionForGivenInstanceGuid@LongPowerButtonHoldListener@@QEAAXU_GUID@@_N@Z @ 0x14006EDB8
 * Callers:
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C19E4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall LongPowerButtonHoldListener::SetRecoveryOptionForGivenInstanceGuid(
        LongPowerButtonHoldListener *this,
        struct _GUID *a2,
        char a3)
{
  __int64 v6; // r9
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (LongPowerButtonHoldListener *)((char *)this + 24), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v6 = *(_QWORD *)&a2->Data1 - *((_QWORD *)this + 9);
  if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)this + 9) )
    v6 = *(_QWORD *)a2->Data4 - *((_QWORD *)this + 10);
  if ( !v6 )
    *((_BYTE *)this + 88) = a3;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
