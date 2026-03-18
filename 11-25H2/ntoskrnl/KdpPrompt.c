/*
 * XREFs of KdpPrompt @ 0x140B690AC
 * Callers:
 *     KdpTrap @ 0x140B652B8 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdpQuickMoveMemory @ 0x140B65490 (KdpQuickMoveMemory.c)
 *     KdLogDbgPrint @ 0x140B68C20 (KdLogDbgPrint.c)
 *     KdpPromptString @ 0x140B69DE0 (KdpPromptString.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
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
  __int64 v17; // rcx
  _BYTE v19[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v20[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v21[2]; // [rsp+400h] [rbp+0h] BYREF
  int v22; // [rsp+404h] [rbp+4h]
  char *v23; // [rsp+408h] [rbp+8h]
  __int128 v24; // [rsp+410h] [rbp+10h] BYREF
  _BYTE *v25; // [rsp+420h] [rbp+20h]

  v8 = a1;
  v22 = 0;
  v24 = 0LL;
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
    v25 = v20;
    KdpQuickMoveMemory((__int64)v20, v8, v9);
    v8 = v13;
    ProbeForWrite(a3, v10, 1u);
    v14 = alloca(512LL);
    v15 = v19;
    v25 = v19;
  }
  else
  {
    v15 = (char *)a3;
  }
  v23 = v15;
  v21[0] = 0;
  v21[1] = v10;
  *((_QWORD *)&v24 + 1) = v8;
  LOWORD(v24) = v9;
  KdLogDbgPrint((void **)&v24);
  v16 = KdEnterDebugger(a6, a7);
  while ( (unsigned __int8)KdpPromptString(&v24, v21) == 1 )
    ;
  LOBYTE(v17) = v16;
  KdExitDebugger(v17);
  if ( a5 == 1 )
    KdpQuickMoveMemory((__int64)a3, v23, v21[0]);
  return v21[0];
}
