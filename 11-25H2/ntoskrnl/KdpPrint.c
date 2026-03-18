/*
 * XREFs of KdpPrint @ 0x140B68F08
 * Callers:
 *     KdpTrap @ 0x140B652B8 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdpQuickMoveMemory @ 0x140B65490 (KdpQuickMoveMemory.c)
 *     KdLogDbgPrint @ 0x140B68C20 (KdLogDbgPrint.c)
 *     KdpPrintString @ 0x140B69CE8 (KdpPrintString.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpPrint(
        unsigned int a1,
        unsigned int a2,
        char *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  unsigned __int16 v11; // r10
  void *v12; // rsp
  char *v13; // r9
  char v14; // si
  __int64 v15; // rcx
  _BYTE v17[480]; // [rsp+0h] [rbp-200h] BYREF
  __int128 v18; // [rsp+200h] [rbp+0h] BYREF

  v18 = 0LL;
  v8 = 101LL;
  if ( a1 < 0x9C )
    v8 = a1;
  v9 = 3;
  if ( a1 < 0x9C )
    v9 = a2;
  *a8 = 0;
  if ( v9 <= 0x1F )
    v9 = 1 << v9;
  if ( (v9 & Kd_WIN2000_Mask) != 0 || (_mm_lfence(), (v9 & *(_DWORD *)*(&KdComponentTable + v8)) != 0) )
  {
    v11 = 512;
    if ( a4 <= 0x200u )
      v11 = a4;
    if ( a5 )
    {
      v12 = alloca(512LL);
      KdpQuickMoveMemory((__int64)v17, a3, v11);
      a3 = v13;
    }
    *((_QWORD *)&v18 + 1) = a3;
    LOWORD(v18) = v11;
    KdLogDbgPrint((void **)&v18);
    if ( (_BYTE)KdDebuggerNotPresent && !KdEventLoggingPresent )
    {
      v10 = -1073741667;
      goto LABEL_24;
    }
    v14 = KdEnterDebugger(a6, a7);
    if ( (unsigned __int8)KdpPrintString(&v18) )
    {
      v10 = -2147483645;
      if ( KdDisableNoUmExBreakFix || !a5 || !KdIgnoreUmExceptions )
        goto LABEL_23;
      BYTE4(KdpContext) = 1;
    }
    v10 = 0;
LABEL_23:
    LOBYTE(v15) = v14;
    KdExitDebugger(v15);
    goto LABEL_24;
  }
  v10 = 0;
LABEL_24:
  *a8 = 1;
  return v10;
}
