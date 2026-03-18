/*
 * XREFs of ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x140008878
 * Callers:
 *     ??1CFlipManagerSignal@@UEAA@XZ @ 0x14004F144 (--1CFlipManagerSignal@@UEAA@XZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CF6C (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 * Callees:
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14000A074 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14000A0E0 (-Release@CFlipResource@@QEAAKXZ.c)
 */

void __fastcall CFlipManagerSignal::ServiceBufferSignals(CFlipManagerSignal *this)
{
  __int64 v2; // r14
  CFlipResource ***v3; // rsi
  CFlipResource **v4; // rbx
  CFlipResource **v5; // rcx

  if ( *((_DWORD *)this + 10) )
  {
    v2 = 0LL;
    v3 = (CFlipResource ***)((char *)this + 32);
    do
    {
      v4 = *v3;
      CPoolBufferResource::RemoveUsageReference((*v3)[v2]);
      CFlipResource::Release(v4[v2]);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 10) );
    v5 = *v3;
    *((_DWORD *)this + 10) = 0;
    ExFreePoolWithTag(v5, 0);
    *v3 = 0LL;
  }
}
