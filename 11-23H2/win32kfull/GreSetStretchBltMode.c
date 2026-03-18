/*
 * XREFs of GreSetStretchBltMode @ 0x1C0041990
 * Callers:
 *     BltIcon @ 0x1C0041788 (BltIcon.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011D48C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  char v6; // r8
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v11);
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  if ( v8 )
  {
    v5 = *(_QWORD *)(v8 + 976);
    v6 = 2;
    v2 = *(_DWORD *)(v5 + 232);
    *(_DWORD *)(v5 + 232) = a2;
    if ( a2 <= 4 )
      v6 = a2;
    *(_BYTE *)(*(_QWORD *)(v8 + 976) + 215LL) = v6;
    if ( v8 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
  return v2;
}
