/*
 * XREFs of ?AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ @ 0x1403FD370
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AcquireSessionAdapterOrdinal(DXGSESSIONDATA *this)
{
  ULONG ClearBitsAndSet; // eax
  unsigned int v3; // ebx
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGSESSIONDATA *)((char *)this + 19192), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)((char *)this + 19240), 1u, 0);
  v3 = -1;
  if ( ClearBitsAndSet == -1 )
  {
    DxgkLogCodePointPacket(0x74u, 0, *((_DWORD *)this + 4810), 0, 0LL);
    WdLogSingleEntry2(3LL, *(unsigned int *)this, 2LL);
    WdLogGlobalForLineNumber = 5116;
  }
  else
  {
    v3 = ClearBitsAndSet;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
  return v3;
}
