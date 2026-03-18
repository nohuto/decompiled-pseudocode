/*
 * XREFs of DxgkDisconnectDoorbellCB @ 0x1401D5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x140029B7C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ?Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z @ 0x1401D3038 (-Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z.c)
 */

__int64 __fastcall DxgkDisconnectDoorbellCB(int *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  BOOL v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r8
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1[5];
  if ( (unsigned int)(v2 - 2) <= 1 )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 16LL);
    v6 = !*(_BYTE *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v10,
      *(struct DXGDEVICE **)(*(_QWORD *)(v4 + 16) + 16LL),
      v6);
    v7 = *(_QWORD *)(v4 + 144);
    v8 = *((_QWORD *)a1 + 1);
    if ( v7 && v8 == v7 )
    {
      if ( (unsigned int)**(_QWORD **)(v8 + 136) > 1 )
      {
        WdLogSingleEntry2(3LL, v4, 0LL);
        WdLogGlobalForLineNumber = 4219;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
        return 0LL;
      }
      v3 = DXGDOORBELL::Disconnect(*((_QWORD *)a1 + 1), a1[5]);
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry2(3LL, v4, -1073741811LL);
      WdLogGlobalForLineNumber = 4211;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry2(3LL, v2, -1073741811LL);
    WdLogGlobalForLineNumber = 4193;
  }
  return v3;
}
