/*
 * XREFs of EtwpTraceThreadRundown @ 0x1403044A0
 * Callers:
 *     EtwpThreadRundownApc @ 0x140644A20 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140644A5C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x1408BD820 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v3; // r15d
  __int64 v4; // rsi
  char v5; // r14
  __int16 v6; // di
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r11
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // eax
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rax
  __int16 v19; // cx
  unsigned __int16 *v20; // rax
  __int64 *v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  char v25; // cl
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  __int64 v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int64 *v37; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-50h]
  __int64 *v39; // [rsp+C0h] [rbp-48h]
  __int64 v40; // [rsp+C8h] [rbp-40h]
  __int64 *v41; // [rsp+D0h] [rbp-38h]
  __int64 v42; // [rsp+D8h] [rbp-30h]

  v3 = 2;
  v36 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_BYTE *)(a2 + 65);
  v6 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  LODWORD(v27) = *(_DWORD *)(a1 + 1288);
  HIDWORD(v27) = *(_DWORD *)(a1 + 1296);
  v28 = *(_QWORD *)(a1 + 56);
  v29 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v32 = v9;
  v33 = *(_QWORD *)(a1 + 1376);
  v10 = *(_QWORD *)(a1 + 240);
  v30 = 0LL;
  v31 = 0LL;
  v34 = v10;
  LODWORD(v35) = 0;
  BYTE4(v35) = *(_BYTE *)(a1 + 563);
  v11 = (*(_DWORD *)(a1 + 1440) >> 12) & 7;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 1092);
    if ( v11 >= v13 )
      LOBYTE(v11) = v13;
  }
  BYTE5(v35) = v11;
  HIWORD(v35) = (unsigned __int8)PsGetIoPriorityThread(a1);
  if ( (*(_BYTE *)(v15 + 1448) & 8) != 0 )
  {
    v25 = HIBYTE(v35);
    if ( *(_QWORD *)(v15 + 1240) != v15 + 1240 )
      v25 = 1;
    HIBYTE(v35) = v25;
  }
  if ( v16 && v5 )
  {
    v17 = *(_QWORD *)(v15 + 544);
    if ( *(_QWORD *)(v17 + 784) && ((v19 = *(_WORD *)(v17 + 1772), v19 == 332) || v19 == 452) )
    {
      LODWORD(v35) = *(_DWORD *)(v16 + 12128);
      v30 = *(unsigned int *)(v16 + 8196);
      v18 = *(unsigned int *)(v16 + 8200);
    }
    else
    {
      LODWORD(v35) = *(_DWORD *)(v16 + 5920);
      v30 = *(_QWORD *)(v16 + 8);
      v18 = *(_QWORD *)(v16 + 16);
    }
    v31 = v18;
  }
  v37 = &v27;
  v38 = 72LL;
  v20 = *(unsigned __int16 **)(v15 + 1696);
  if ( v20 && (v22 = (__int64 *)*((_QWORD *)v20 + 1)) != 0LL )
  {
    v23 = *v20;
    v24 = 2048LL;
    if ( (unsigned __int16)v23 < 0x800u )
      v24 = v23;
    v39 = v22;
    v40 = (unsigned int)v24;
    if ( !(_DWORD)v24 || *((_WORD *)v22 + (v24 >> 1) - 1) )
    {
      v41 = &EtwpNull;
      v42 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v39 = &EtwpNull;
    v40 = 2LL;
  }
  return EtwpLogSystemEventUnsafe(
           *(_QWORD *)(v4 + 1360),
           (unsigned int)&v37,
           v15,
           *(_DWORD *)v4,
           v3,
           v6,
           v14,
           0,
           v6,
           2,
           v4,
           a1,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42);
}
