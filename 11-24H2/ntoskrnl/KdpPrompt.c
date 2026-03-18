/*
 * XREFs of KdpPrompt @ 0x140B790AC
 * Callers:
 *     KdpTrap @ 0x140B752B8 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdpQuickMoveMemory @ 0x140B75490 (KdpQuickMoveMemory.c)
 *     KdLogDbgPrint @ 0x140B78C20 (KdLogDbgPrint.c)
 *     KdpPromptString @ 0x140B79DE0 (KdpPromptString.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpPrompt(
        char *a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  char *v8; // rbx
  unsigned __int16 v9; // di
  unsigned __int16 v10; // r14
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  char *v13; // r9
  void *v14; // rsp
  char *v15; // rcx
  char v16; // bl
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _BYTE v21[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v22[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v23[2]; // [rsp+400h] [rbp+0h] BYREF
  int v24; // [rsp+404h] [rbp+4h]
  char *v25; // [rsp+408h] [rbp+8h]
  __int128 v26; // [rsp+410h] [rbp+10h] BYREF
  _BYTE *v27; // [rsp+420h] [rbp+20h]

  v8 = a1;
  v24 = 0;
  v26 = 0LL;
  v9 = 512;
  if ( a2 <= 0x200u )
    v9 = a2;
  v10 = 512;
  if ( a4 <= 0x200u )
    v10 = a4;
  if ( a5 )
  {
    if ( v9 )
    {
      v11 = (unsigned __int64)&a1[v9];
      if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)v8 )
        v8 = a1;
    }
    v12 = alloca(512LL);
    v27 = v22;
    KdpQuickMoveMemory((__int64)v22, v8, v9);
    v8 = v13;
    ProbeForWrite(a3, v10, 1u);
    v14 = alloca(512LL);
    v15 = v21;
    v27 = v21;
  }
  else
  {
    v15 = (char *)a3;
  }
  v25 = v15;
  v23[0] = 0;
  v23[1] = v10;
  *((_QWORD *)&v26 + 1) = v8;
  LOWORD(v26) = v9;
  KdLogDbgPrint((void **)&v26);
  v16 = KdEnterDebugger(a6, a7);
  while ( (unsigned __int8)KdpPromptString(&v26, v23) == 1 )
    ;
  LOBYTE(v18) = v16;
  KdExitDebugger(v18, v17, v19);
  if ( a5 == 1 )
    KdpQuickMoveMemory((__int64)a3, v25, v23[0]);
  return v23[0];
}
