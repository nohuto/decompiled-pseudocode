/*
 * XREFs of GreSelectFont @ 0x1C011C490
 * Callers:
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C013B328 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     MNAllocMenuState @ 0x1C01FE820 (MNAllocMenuState.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011D48C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C013F6EC (--0-$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C013F738 (--1-$HmgShareLockResult@VLFONT@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectFont(HDC a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+54h] [rbp-2Ch]
  _BYTE v16[40]; // [rsp+58h] [rbp-28h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v16);
  XDCOBJ::vLock((XDCOBJ *)&v13, a1);
  v6 = v13;
  if ( v13 )
  {
    v7 = *(__int64 **)(v13 + 152);
    if ( v7 )
      v2 = *v7;
    if ( a2 != v2 )
    {
      LOBYTE(v5) = 10;
      v8 = HmgShareLockCheck(a2, v5);
      HmgShareLockResult<LFONT>::HmgShareLockResult<LFONT>(v12, v8);
      if ( !(unsigned __int8)HmgLockResultBase<META>::operator bool(v12, v9)
        || (*(_BYTE *)(HmgPentryFromPobj(v12[0]) + 15) & 2) != 0 )
      {
        v2 = 0LL;
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v13 + 152));
        v10 = v12[0];
        v12[0] = 0LL;
        *(_QWORD *)(v13 + 152) = v10;
        *(_QWORD *)(*(_QWORD *)(v13 + 976) + 296LL) = a2;
        *(_QWORD *)(v13 + 1744) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v13 + 976) + 152LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(v13 + 976) + 152LL) &= ~0x20u;
      }
      HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(v12);
      v6 = v13;
    }
    if ( v6 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v13);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
  return v2;
}
