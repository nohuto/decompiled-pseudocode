/*
 * XREFs of ?GetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAA_NU_LUID@@@Z @ 0x140028530
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

char __fastcall DISPLAY_MUX_MGR::GetDisableQueryConnectionDdiStatus(DISPLAY_MUX_MGR *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  __int64 v4; // rdx
  char v5; // di
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = *((_QWORD *)this + 9);
  v5 = 0;
  if ( v4 )
  {
    if ( (v7 = *(_QWORD *)(v4 + 16)) != 0 && *(_QWORD *)(v7 + 16) == __PAIR64__(HighPart, LowPart)
      || (v7 = *(_QWORD *)(v4 + 24)) != 0 && *(_QWORD *)(v7 + 16) == __PAIR64__(HighPart, LowPart) )
    {
      v5 = *(_BYTE *)(v7 + 360);
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  return v5;
}
