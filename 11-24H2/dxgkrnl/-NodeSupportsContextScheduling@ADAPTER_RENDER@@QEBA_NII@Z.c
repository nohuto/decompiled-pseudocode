/*
 * XREFs of ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x1400513CC
 * Callers:
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401ABF08 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1402CFD80 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403FD47C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::NodeSupportsContextScheduling(ADAPTER_RENDER *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdx
  bool result; // al

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2992LL) + 344LL * a2 + 32);
  result = 0;
  if ( v3 )
    return *(_BYTE *)(74LL * a3 + v3 + 68) & 1;
  return result;
}
