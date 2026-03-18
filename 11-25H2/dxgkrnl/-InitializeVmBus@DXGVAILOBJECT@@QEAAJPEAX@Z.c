/*
 * XREFs of ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x140200AB4
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401E7624 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x140079E34 (-SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401FFE68 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::InitializeVmBus(DXGVAILOBJECT *this, void *a2, const struct _GUID *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID v9; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)&v9.Data1 = 0LL;
  v4 = CreateVmBusChannel(a2, &v9, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGVAILOBJECT *)((char *)this + 40), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    DXGVAILOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v9.Data1);
    *((_QWORD *)this + 13) = PsGetCurrentProcess(v6);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 1663;
  }
  return v5;
}
