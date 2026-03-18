/*
 * XREFs of EtwpTraceThreadRundown @ 0x140433490
 * Callers:
 *     EtwpThreadRundownApc @ 0x140650A30 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140650A6C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x14094A5E0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 v4; // rsi
  char v5; // r14
  unsigned __int16 v6; // di
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r11
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  __int16 v18; // cx
  __int64 v19; // rax
  unsigned __int16 *v20; // rax
  __int64 *v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  char v25; // cl
  _DWORD v26[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  char v35; // [rsp+A4h] [rbp-64h]
  char v36; // [rsp+A5h] [rbp-63h]
  char IoPriorityThread; // [rsp+A6h] [rbp-62h]
  char v38; // [rsp+A7h] [rbp-61h]
  __int64 v39; // [rsp+A8h] [rbp-60h]
  _QWORD v40[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v41; // [rsp+C0h] [rbp-48h]
  __int64 v42; // [rsp+C8h] [rbp-40h]
  __int64 *v43; // [rsp+D0h] [rbp-38h]
  __int64 v44; // [rsp+D8h] [rbp-30h]

  v3 = 2;
  v39 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_BYTE *)(a2 + 65);
  v6 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  v26[0] = *(_DWORD *)(a1 + 1288);
  v26[1] = *(_DWORD *)(a1 + 1296);
  v27 = *(_QWORD *)(a1 + 56);
  v28 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v31 = v9;
  v32 = *(_QWORD *)(a1 + 1376);
  v10 = *(_QWORD *)(a1 + 240);
  v29 = 0LL;
  v30 = 0LL;
  v33 = v10;
  v34 = 0;
  v35 = *(_BYTE *)(a1 + 563);
  v11 = (*(_DWORD *)(a1 + 1440) >> 12) & 7;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 1092);
    if ( v11 >= v13 )
      LOBYTE(v11) = v13;
  }
  v36 = v11;
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v38 = 0;
  if ( (*(_BYTE *)(v15 + 1448) & 8) != 0 )
  {
    v25 = v38;
    if ( *(_QWORD *)(v15 + 1240) != v15 + 1240 )
      v25 = 1;
    v38 = v25;
  }
  if ( v16 && v5 )
  {
    v17 = *(_QWORD *)(v15 + 544);
    if ( *(_QWORD *)(v17 + 784) && ((v18 = *(_WORD *)(v17 + 1772), v18 == 332) || v18 == 452) )
    {
      v34 = *(_DWORD *)(v16 + 12128);
      v29 = *(unsigned int *)(v16 + 8196);
      v19 = *(unsigned int *)(v16 + 8200);
    }
    else
    {
      v34 = *(_DWORD *)(v16 + 5920);
      v29 = *(_QWORD *)(v16 + 8);
      v19 = *(_QWORD *)(v16 + 16);
    }
    v30 = v19;
  }
  v40[0] = v26;
  v40[1] = 72LL;
  v20 = *(unsigned __int16 **)(v15 + 1696);
  if ( v20 && (v22 = (__int64 *)*((_QWORD *)v20 + 1)) != 0LL )
  {
    v23 = *v20;
    v24 = 2048LL;
    if ( (unsigned __int16)v23 < 0x800u )
      v24 = v23;
    v41 = v22;
    v42 = (unsigned int)v24;
    if ( !(_DWORD)v24 || *((_WORD *)v22 + (v24 >> 1) - 1) )
    {
      v43 = &EtwpNull;
      v44 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v41 = &EtwpNull;
    v42 = 2LL;
  }
  return EtwpLogSystemEventUnsafe(*(_QWORD *)(v4 + 1360), (__int64)v40, (_KTHREAD *)v15, *(_DWORD *)v4, v3, v6, v14, 0);
}
