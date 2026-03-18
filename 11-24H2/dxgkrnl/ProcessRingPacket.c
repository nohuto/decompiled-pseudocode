/*
 * XREFs of ProcessRingPacket @ 0x14020C600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x14020BFFC (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

__int64 __fastcall ProcessRingPacket(__int64 a1, struct VMBPACKETCOMPLETION__ *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax

  if ( a4 <= 8
    || (v8 = ((__int64 (*)(void))qword_140160398)()) == 0
    || *(_BYTE *)(v8 + 28)
    || (result = DXGVMBUSCHANNEL::ProcessPacket((struct _EX_RUNDOWN_REF *)v8, *a3, a2, a3, a4), (int)result < 0) )
  {
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304882) )
    {
      v10 = ((__int64 (__fastcall *)(__int64))qword_140160398)(a1);
      if ( v10 )
        *(_BYTE *)(v10 + 28) = 1;
    }
    return ((__int64 (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1401603D8)(a2, 0LL, 0LL);
  }
  return result;
}
