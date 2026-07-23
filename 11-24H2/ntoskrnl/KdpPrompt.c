/*
 * XREFs of KdpPrompt @ 0x140B7B0AC
 * Callers:
 *     KdpTrap @ 0x140B772B8 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdpQuickMoveMemory @ 0x140B77490 (KdpQuickMoveMemory.c)
 *     KdLogDbgPrint @ 0x140B7AC20 (KdLogDbgPrint.c)
 *     KdpPromptString @ 0x140B7BDE0 (KdpPromptString.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
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
  _BYTE v20[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v21[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v22[2]; // [rsp+400h] [rbp+0h] BYREF
  int v23; // [rsp+404h] [rbp+4h]
  char *v24; // [rsp+408h] [rbp+8h]
  __int128 v25; // [rsp+410h] [rbp+10h] BYREF
  _BYTE *v26; // [rsp+420h] [rbp+20h]

  v8 = a1;
  v23 = 0;
  v25 = 0LL;
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
    v26 = v21;
    KdpQuickMoveMemory((__int64)v21, v8, v9);
    v8 = v13;
    ProbeForWrite(a3, v10, 1u);
    v14 = alloca(512LL);
    v15 = v20;
    v26 = v20;
  }
  else
  {
    v15 = (char *)a3;
  }
  v24 = v15;
  v22[0] = 0;
  v22[1] = v10;
  *((_QWORD *)&v25 + 1) = v8;
  LOWORD(v25) = v9;
  KdLogDbgPrint((void **)&v25);
  v16 = KdEnterDebugger(a6, a7);
  while ( (unsigned __int8)KdpPromptString(&v25, v22) == 1 )
    ;
  LOBYTE(v18) = v16;
  KdExitDebugger(v18, v17);
  if ( a5 == 1 )
    KdpQuickMoveMemory((__int64)a3, v24, v22[0]);
  return v22[0];
}
