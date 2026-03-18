/*
 * XREFs of NtGdiSetColorSpace @ 0x1C02CECC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02CD900 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _BYTE v6[32]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  _QWORD v8[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+58h] [rbp-28h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v8[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v6, a2);
      if ( v7 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v8[0] + 96LL));
        *(_QWORD *)(*(_QWORD *)(v8[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v8[0] + 96LL) = v7;
        INC_SHARE_REF_CNT(v7);
        v3 = 1;
        if ( v7 )
          DEC_SHARE_REF_CNT(v7);
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v6);
      v4 = v8[0];
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v9);
  return v3;
}
