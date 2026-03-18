/*
 * XREFs of ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x140206CB0
 * Callers:
 *     ??1DXGVAILOBJECT@@UEAA@XZ @ 0x14020574C (--1DXGVAILOBJECT@@UEAA@XZ.c)
 *     NtDxgkVailConnect @ 0x140209C10 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x14020A1A0 (NtDxgkVailDisconnect.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x14034D1D8 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGVAILOBJECT::DestroyVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v2 = *((_QWORD *)this + 15);
  v3 = 0;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  else if ( !*((_QWORD *)this + 16) )
  {
    v3 = -2147483611;
    goto LABEL_7;
  }
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    *((_QWORD *)this + 16) = 0LL;
  }
LABEL_7:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  return v3;
}
