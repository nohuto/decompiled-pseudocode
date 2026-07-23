/*
 * XREFs of EtwTraceJobSetQuery @ 0x140A4E224
 * Callers:
 *     PspSetNetRateControl @ 0x1407783E4 (PspSetNetRateControl.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int128 *__fastcall EtwTraceJobSetQuery(__int64 a1, int a2, __int64 a3, _DWORD *a4, char a5, unsigned __int16 a6)
{
  __int128 v7; // xmm0
  __int16 v8; // r9
  __int128 *result; // rax
  int v10; // edx
  _QWORD *v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // r9
  _QWORD *v15; // r9
  _QWORD *v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // r10
  __int64 v20; // r11
  char **v21; // rbx
  __int64 *v22; // rdi
  _QWORD *v23; // rax
  __int64 *v24; // rsi
  _QWORD *v25; // r14
  unsigned __int64 **v26; // r15
  unsigned __int64 **v27; // r12
  _QWORD *v28; // r13
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v32; // [rsp+50h] [rbp-B8h]
  _QWORD *v33; // [rsp+58h] [rbp-B0h]
  _QWORD *v34; // [rsp+60h] [rbp-A8h]
  _QWORD *v35; // [rsp+68h] [rbp-A0h]
  _QWORD *v36; // [rsp+70h] [rbp-98h]
  __int128 v37; // [rsp+78h] [rbp-90h] BYREF
  int v38; // [rsp+88h] [rbp-80h]
  int v39; // [rsp+8Ch] [rbp-7Ch]
  _QWORD v40[2]; // [rsp+98h] [rbp-70h] BYREF
  char *v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-58h]
  __int64 v43; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int64 v45; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-38h]
  _QWORD v47[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v48[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v49[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v50[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v51[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v52[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v53[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v54[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v55[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v56[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v57[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v58[8]; // [rsp+188h] [rbp+80h] BYREF

  LODWORD(v29) = 0;
  v31 = 0LL;
  v30 = 0LL;
  v37 = 0uLL;
  if ( a1 )
  {
    v7 = *(_OWORD *)(a1 + 1472);
    v38 = *(_DWORD *)(a1 + 1468);
    v37 = v7;
  }
  else
  {
    v38 = 0;
  }
  v8 = a6;
  result = &v37;
  v39 = a2;
  v40[0] = &v37;
  v40[1] = 24LL;
  if ( a6 == 1829 )
  {
    switch ( a2 )
    {
      case 15:
        v41 = (char *)a3;
        v43 = a3 + 4;
        v10 = 3;
        v42 = 4LL;
        v8 = 1836;
        v44 = 4LL;
        return (__int128 *)EtwTraceKernelEvent((int)v40, v10, 0x80000u, v8, 6297860);
      case 12:
        v10 = 13;
        v32 = v51;
        v21 = &v41;
        v33 = v52;
        v22 = &v43;
        v34 = v53;
        v24 = &v45;
        v35 = v54;
        v25 = v47;
        v23 = v55;
        v26 = (unsigned __int64 **)v48;
        v27 = (unsigned __int64 **)v49;
        v28 = v50;
        v19 = a3 + 8;
        v20 = a3 + 16;
        break;
      case 32:
        v41 = (char *)a3;
        v32 = v54;
        v19 = a3 + 8;
        v42 = 4LL;
        v33 = v55;
        v20 = a3 + 16;
        v43 = a3 + 8;
        v34 = v56;
        v21 = (char **)v47;
        v44 = 8LL;
        v35 = v57;
        v22 = v48;
        v23 = v58;
        v45 = a3 + 16;
        v46 = 1LL;
        v24 = v49;
        v10 = 16;
        v25 = v50;
        v26 = (unsigned __int64 **)v51;
        v27 = (unsigned __int64 **)v52;
        v28 = v53;
        break;
      default:
        return result;
    }
    *((_DWORD *)v21 + 3) = 0;
    v11 = v32;
    *((_DWORD *)v21 + 2) = 4;
    v36 = v23;
    *v21 = (char *)(a3 + 40);
    v12 = *(_QWORD *)(a3 + 48);
    *v22 = a3;
    v22[1] = 8LL;
    *v24 = v19;
    v24[1] = 8LL;
    *v25 = v20;
    v25[1] = 8LL;
    v26[1] = (unsigned __int64 *)8;
    v30 = v12 >> 12;
    *v26 = &v30;
    v13 = *(_QWORD *)(a3 + 24);
    v27[1] = (unsigned __int64 *)8;
    v31 = v13 >> 12;
    *v27 = &v31;
    *v28 = a3 + 32;
    v28[1] = 4LL;
    *v11 = a3 + 36;
    v11[1] = 4LL;
    v14 = v33;
    *v33 = a3 + 44;
    v14[1] = 4LL;
    v15 = v34;
    *v34 = a3 + 56;
    v15[1] = 4LL;
    v16 = v35;
    *v35 = a3 + 60;
    v17 = a3 + 64;
    v18 = v36;
    v16[1] = 4LL;
    v8 = 1833;
    *v18 = v17;
    v18[1] = 4LL;
    return (__int128 *)EtwTraceKernelEvent((int)v40, v10, 0x80000u, v8, 6297860);
  }
  if ( a6 == 1830 )
  {
    if ( a2 != 13 )
      return result;
    v41 = (char *)a3;
    v43 = a3 + 4;
    v10 = 19;
    v42 = 4LL;
    v45 = a3 + 8;
    v8 = 1835;
    v44 = 4LL;
    v47[0] = a3 + 16;
    v48[0] = a3 + 24;
    v49[0] = a3 + 32;
    v50[0] = a3 + 40;
    v51[0] = a3 + 48;
    v52[0] = a3 + 56;
    v53[0] = a3 + 80;
    v54[0] = a3 + 64;
    v55[0] = a3 + 72;
    v56[0] = a3 + 76;
    v57[0] = a3 + 88;
    v58[0] = a3 + 92;
    v58[2] = a3 + 96;
    v58[4] = a3 + 100;
    LODWORD(v29) = *a4;
    v58[6] = &v29;
    v46 = 8LL;
    v47[1] = 8LL;
    v48[1] = 8LL;
    v49[1] = 8LL;
    v50[1] = 8LL;
    v51[1] = 8LL;
    v52[1] = 8LL;
    v53[1] = 8LL;
    v54[1] = 8LL;
    v55[1] = 4LL;
    v56[1] = 4LL;
    v57[1] = 4LL;
    v58[1] = 4LL;
    v58[3] = 4LL;
    v58[5] = 4LL;
    v58[7] = 4LL;
    return (__int128 *)EtwTraceKernelEvent((int)v40, v10, 0x80000u, v8, 6297860);
  }
  if ( (unsigned int)a6 - 1831 <= 1 )
  {
    v42 = 4LL;
    v41 = &a5;
    v10 = 2;
    return (__int128 *)EtwTraceKernelEvent((int)v40, v10, 0x80000u, v8, 6297860);
  }
  return result;
}
