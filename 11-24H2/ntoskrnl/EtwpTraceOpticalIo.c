/*
 * XREFs of EtwpTraceOpticalIo @ 0x14064CFC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14064CB04 (EtwpGetScsiPassThroughCdb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceOpticalIo(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v9; // rax
  int v10; // eax
  __int16 v11; // r9
  int *v12; // rax
  char v13; // r9
  __int16 v14; // dx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  __int16 v19; // r11
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r9d
  __int64 *v29; // r8
  int v30; // [rsp+30h] [rbp-29h] BYREF
  int v31; // [rsp+34h] [rbp-25h]
  int v32; // [rsp+38h] [rbp-21h]
  int v33; // [rsp+3Ch] [rbp-1Dh]
  __int64 v34; // [rsp+40h] [rbp-19h]
  __int64 v35; // [rsp+48h] [rbp-11h]
  __int64 v36; // [rsp+50h] [rbp-9h]
  __int64 v37; // [rsp+58h] [rbp-1h]
  int v38; // [rsp+60h] [rbp+7h]
  int v39; // [rsp+64h] [rbp+Bh]
  _DWORD v40[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+70h] [rbp+17h]
  __int64 v42; // [rsp+78h] [rbp+1Fh]
  int v43; // [rsp+80h] [rbp+27h]
  int v44; // [rsp+84h] [rbp+2Bh]
  int *v45; // [rsp+88h] [rbp+2Fh] BYREF
  int v46; // [rsp+90h] [rbp+37h]
  int v47; // [rsp+94h] [rbp+3Bh]

  v44 = 0;
  v4 = a3;
  v39 = 0;
  v5 = *(_QWORD *)(a3 + 184);
  LOBYTE(a3) = *(_BYTE *)v5;
  result = (unsigned int)(a3 - 3);
  if ( (unsigned __int8)(*(_BYTE *)v5 - 3) <= 1u )
  {
    v32 = *(_DWORD *)(v4 + 56);
    v30 = a2;
    v36 = v4;
    v19 = ((_BYTE)a3 != 3) + 311;
    v20 = *(_DWORD *)(v4 + 16);
    v31 = v20;
    v21 = *(_QWORD *)(v5 + 24);
    v33 = 0;
    v34 = v21;
    v22 = *(_QWORD *)(v4 + 152);
    v37 = a4;
    if ( v22 )
      v23 = *(_DWORD *)(v22 + 1296);
    else
      v23 = -1;
    v38 = v23;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v33 = 1;
    }
    else
    {
      v24 = a1 & 0xFFFFFF;
      if ( v24 == 5467492 || v24 == 5460546 )
        v33 = 2;
    }
    if ( (v20 & 8) != 0 )
    {
      v25 = *(_QWORD *)(v4 + 24);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 192);
        if ( v26 )
          goto LABEL_37;
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 184) + 48LL);
LABEL_36:
        if ( v26 )
          goto LABEL_37;
      }
    }
    else
    {
      v26 = *(_QWORD *)(v4 + 192);
      if ( v26 )
      {
LABEL_37:
        v35 = *(_QWORD *)(v26 + 24);
LABEL_39:
        v46 = 52;
        v11 = v19;
        goto LABEL_40;
      }
      v27 = *(unsigned __int8 *)(v4 + 67);
      v28 = *(char *)(v4 + 66);
      if ( v27 <= v28 )
      {
        v29 = (__int64 *)(v5 + 48);
        while ( 1 )
        {
          v26 = *v29;
          if ( *v29 )
            goto LABEL_37;
          LOBYTE(v27) = v27 + 1;
          v29 += 9;
          if ( (unsigned __int8)v27 > v28 )
            goto LABEL_36;
        }
      }
    }
    v35 = 0LL;
    goto LABEL_39;
  }
  if ( (_BYTE)a3 == 9 )
  {
LABEL_3:
    v40[1] = *(_DWORD *)(v4 + 16);
    v9 = *(_QWORD *)(v4 + 152);
    v40[0] = a2;
    v41 = a4;
    v42 = v4;
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1296);
    else
      v10 = -1;
    v43 = v10;
    v11 = 313;
    v12 = v40;
    v46 = 28;
    goto LABEL_41;
  }
  if ( (_BYTE)a3 == 14 )
  {
    result = (__int64)EtwpGetScsiPassThroughCdb((IRP *)v4);
    if ( result )
    {
      v13 = *(_BYTE *)result;
      result = (*(unsigned __int8 *)(result + 5) | (unsigned __int64)((*(unsigned __int8 *)(result + 4) | ((*(unsigned __int8 *)(result + 3) | (*(unsigned __int8 *)(result + 2) << 8)) << 8)) << 8)) << 11;
      if ( ((v13 - 40) & 0x7F) != 0 )
      {
        if ( ((v13 - 42) & 0x7F) != 0 )
        {
          if ( v13 != 53 )
            return result;
          goto LABEL_3;
        }
        v14 = 312;
      }
      else
      {
        v14 = 311;
      }
      v15 = *(_DWORD *)(v4 + 16);
      v33 = 0;
      v35 = 0LL;
      v34 = result;
      v16 = *(_QWORD *)(v4 + 152);
      v31 = v15;
      v17 = *(_DWORD *)(v4 + 56);
      v30 = a2;
      v36 = v4;
      v32 = v17;
      v37 = a4;
      if ( v16 )
        v18 = *(_DWORD *)(v16 + 1296);
      else
        v18 = -1;
      v38 = v18;
      v11 = v14;
      v46 = 28;
LABEL_40:
      v12 = &v30;
LABEL_41:
      v47 = 0;
      v45 = v12;
      return EtwTraceKernelEvent((int)&v45, 1, 0x80000001, v11, 5249027);
    }
  }
  return result;
}
