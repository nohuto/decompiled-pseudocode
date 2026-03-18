/*
 * XREFs of ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1401D315C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1403369A0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AcquireAdapterOrdinal(struct _RTL_BITMAP *this, char a2)
{
  unsigned int v4; // edi
  ULONG ClearBitsAndSet; // ebp
  ULONG v6; // eax
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)&this[51], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = -1;
  if ( a2 && this[55].SizeOfBitMap )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(this + 55, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v4 = DXGGLOBAL::GetMaximumGlobalAdapterCount((DXGGLOBAL *)this) + ClearBitsAndSet;
      goto LABEL_9;
    }
    DxgkLogCodePointPacket(0x74u, 2u, this[55].SizeOfBitMap, 0, 0LL);
  }
  v6 = RtlFindClearBitsAndSet(this + 54, 1u, 0);
  if ( v6 == -1 )
  {
    DxgkLogCodePointPacket(0x74u, 1u, this[54].SizeOfBitMap, 0, 0LL);
    WdLogSingleEntry1(3LL, 1024LL);
    WdLogGlobalForLineNumber = 3987;
  }
  else
  {
    v4 = v6;
  }
LABEL_9:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  return v4;
}
