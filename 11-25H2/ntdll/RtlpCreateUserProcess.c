/*
 * XREFs of RtlpCreateUserProcess @ 0x1800FDA44
 * Callers:
 *     RtlCreateUserProcessEx @ 0x1800FD8A0 (RtlCreateUserProcessEx.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 * Callees:
 *     NtCreateUserProcess @ 0x180164C30 (NtCreateUserProcess.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, __int64 a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int16 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v27[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+94h] [rbp-6Ch]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  _DWORD v34[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C4h] [rbp-3Ch]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v42[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+140h] [rbp+40h] BYREF
  __int64 v45; // [rsp+148h] [rbp+48h]
  __int64 v46; // [rsp+150h] [rbp+50h]
  _DWORD *v47; // [rsp+158h] [rbp+58h]
  _QWORD v48[5]; // [rsp+160h] [rbp+60h]
  _QWORD v49[37]; // [rsp+188h] [rbp+88h] BYREF

  memset_thunk_772440563353939046(v49, 0, 0x120uLL);
  v24 = 0;
  v34[1] = 0;
  v38 = 0;
  v25 = 0LL;
  v27[1] = 0;
  v31 = 0;
  memset_thunk_772440563353939046(a6 + 1, 0, 0x64uLL);
  *a6 = 104;
  if ( a5 && *(_WORD *)a5 != 1 )
    return 3221225485LL;
  v35 = 0LL;
  v34[0] = 48;
  v37 = 512;
  v36 = 0LL;
  if ( a5 )
    v39 = *(_QWORD *)(a5 + 8);
  else
    v39 = 0LL;
  v40 = 0LL;
  v27[0] = 48;
  v28 = 0LL;
  v30 = 512;
  v29 = 0LL;
  if ( a5 )
    v32 = *(_QWORD *)(a5 + 16);
  else
    v32 = 0LL;
  v33 = 0LL;
  v26 = 0LL;
  memset_thunk_772440563353939046(v42, 0, 0x50uLL);
  v43 |= 4u;
  v47 = a6 + 6;
  v41 = 88LL;
  v48[3] = a6 + 10;
  v11 = 2;
  v45 = 65539LL;
  v46 = 16LL;
  v48[0] = 0LL;
  v48[1] = 6LL;
  v48[2] = 64LL;
  v48[4] = 0LL;
  if ( a1 )
  {
    v11 = 4;
    v49[1] = *a1;
    v49[2] = *((_QWORD *)a1 + 1);
    v49[6] = &v25;
    v49[0] = 131077LL;
    v49[3] = 0LL;
    LODWORD(v25) = 2;
    v49[4] = 131082LL;
    v49[5] = 8LL;
    v49[7] = 0LL;
  }
  if ( a5 )
  {
    v12 = *(_QWORD *)(a5 + 24);
    if ( v12 )
    {
      v13 = 4LL * v11++;
      *(__int64 *)((char *)&v45 + v13 * 8) = 393216LL;
      *(__int64 *)((char *)&v46 + v13 * 8) = 8LL;
      v48[v13] = 0LL;
      v48[v13 - 1] = v12;
    }
    v14 = *(_QWORD *)(a5 + 32);
    if ( v14 )
    {
      v15 = 4LL * v11++;
      *(__int64 *)((char *)&v45 + v15 * 8) = 393217LL;
      *(__int64 *)((char *)&v46 + v15 * 8) = 8LL;
      v48[v15] = 0LL;
      v48[v15 - 1] = v14;
    }
    v16 = *(_QWORD *)(a5 + 40);
    if ( v16 )
    {
      v17 = 4LL * v11++;
      *(__int64 *)((char *)&v45 + v17 * 8) = 393218LL;
      *(__int64 *)((char *)&v46 + v17 * 8) = 8LL;
      v48[v17] = 0LL;
      v48[v17 - 1] = v16;
    }
    if ( *(_QWORD *)(a5 + 48) )
    {
      v18 = 4LL * v11++;
      *(__int64 *)((char *)&v45 + v18 * 8) = 131091LL;
      *(__int64 *)((char *)&v46 + v18 * 8) = 8LL;
      v48[v18] = 0LL;
      v48[v18 - 1] = a5 + 48;
    }
    v19 = *(_WORD *)(a5 + 2);
    if ( v19 )
    {
      v24 = v19 - 1;
      v20 = 4LL * v11++;
      *(__int64 *)((char *)&v45 + v20 * 8) = 131085LL;
      *(__int64 *)((char *)&v46 + v20 * 8) = 2LL;
      v48[v20] = 0LL;
      v48[v20 - 1] = &v24;
    }
    else
    {
      a3 |= 0x100u;
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    v21 = 4LL * v11++;
    *(__int64 *)((char *)&v45 + v21 * 8) = 393233LL;
    *(__int64 *)((char *)&v46 + v21 * 8) = 1LL;
    v48[v21] = 0LL;
    v48[v21 - 1] = 97LL;
  }
  if ( a2 )
  {
    v22 = *(_DWORD *)(a2 + 8);
    if ( v22 < 0 )
    {
      *(_DWORD *)(a2 + 8) = v22 & 0x7FFFFFFF;
      v23 = 4LL * v11++;
      *(__int64 *)((char *)&v45 + v23 * 8) = 131090LL;
      *(__int64 *)((char *)&v46 + v23 * 8) = 8LL;
      v48[v23] = 0LL;
      v48[v23 - 1] = &v26;
    }
  }
  v44 = 32LL * v11 + 8;
  return NtCreateUserProcess(a6 + 2, a6 + 4, 0x2000000LL, 0x2000000LL, v34, v27, a3, a4, a2, &v41, &v44);
}
