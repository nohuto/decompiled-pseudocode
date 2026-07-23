/*
 * XREFs of EtwpTraceIo @ 0x1403C2130
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     EtwpDiskProvTraceDisk @ 0x1403C379C (EtwpDiskProvTraceDisk.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

_DWORD *__fastcall EtwpTraceIo(int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  char *v4; // rbx
  __int64 ThreadServerSilo; // r12
  char v9; // dl
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int16 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  __int128 *v15; // rax
  unsigned __int16 v16; // di
  unsigned int v17; // ebx
  bool i; // zf
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *result; // rax
  int v22; // edi
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r9d
  __int64 *v26; // rbx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // ebx
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int128 v33; // [rsp+30h] [rbp-59h] BYREF
  __int128 v34; // [rsp+40h] [rbp-49h]
  __int128 v35; // [rsp+50h] [rbp-39h]
  __int64 v36; // [rsp+60h] [rbp-29h]
  __int128 v37; // [rsp+70h] [rbp-19h] BYREF
  __int128 v38; // [rsp+80h] [rbp-9h]
  __int128 *v39; // [rsp+90h] [rbp+7h] BYREF
  __int64 v40; // [rsp+98h] [rbp+Fh]
  __int128 v41; // [rsp+A0h] [rbp+17h] BYREF

  v3 = *(_QWORD *)(a3 + 152);
  v4 = *(char **)(a3 + 184);
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( v3 )
    ThreadServerSilo = PsGetThreadServerSilo(v3);
  else
    ThreadServerSilo = 0LL;
  v9 = *v4;
  v10 = *(_DWORD *)(a3 + 16);
  if ( *v4 != 9 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    *(_QWORD *)&v33 = __PAIR64__(v10, a2);
    *(_QWORD *)&v35 = a3;
    v12 = (v9 != 3) + 266;
    *((_QWORD *)&v33 + 1) = v11;
    *(_QWORD *)&v34 = *((_QWORD *)v4 + 3);
    *((_QWORD *)&v35 + 1) = *((_QWORD *)v4 + 1);
    if ( v3 )
      v13 = *(_DWORD *)(v3 + 1296);
    else
      v13 = -1;
    LODWORD(v36) = v13;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      HIDWORD(v33) = 1;
    }
    else
    {
      v22 = a1 & 0xFFFFFF;
      if ( v22 == 5460546 || v22 == 5467492 )
        HIDWORD(v33) = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v14 = *(_QWORD *)(a3 + 24);
      if ( v14 )
      {
        v23 = *(_QWORD *)(v14 + 192);
        if ( v23 )
          goto LABEL_31;
        v23 = *(_QWORD *)(*(_QWORD *)(v14 + 184) + 48LL);
        if ( v23 )
          goto LABEL_31;
      }
    }
    else
    {
      v23 = *(_QWORD *)(a3 + 192);
      if ( v23 )
      {
LABEL_31:
        *((_QWORD *)&v34 + 1) = *(_QWORD *)(v23 + 24);
        goto LABEL_11;
      }
      v24 = *(unsigned __int8 *)(a3 + 67);
      v25 = *(char *)(a3 + 66);
      if ( v24 <= v25 )
      {
        v26 = (__int64 *)(v4 + 48);
        do
        {
          v23 = *v26;
          if ( *v26 )
            goto LABEL_31;
          LOBYTE(v24) = v24 + 1;
          v26 += 9;
        }
        while ( (unsigned __int8)v24 <= v25 );
      }
    }
    *((_QWORD *)&v34 + 1) = 0LL;
LABEL_11:
    v15 = &v33;
    v40 = 52LL;
    v16 = v12;
    goto LABEL_12;
  }
  *(_QWORD *)&v37 = __PAIR64__(v10, a2);
  v16 = 270;
  *((_QWORD *)&v37 + 1) = *((_QWORD *)v4 + 1);
  *(_QWORD *)&v38 = a3;
  if ( v3 )
    v27 = *(_DWORD *)(v3 + 1296);
  else
    v27 = -1;
  DWORD2(v38) = v27;
  v15 = &v37;
  v40 = 28LL;
LABEL_12:
  v39 = v15;
  v17 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v19, v17); !i; i = !_BitScanForward((unsigned int *)&v19, v17) )
  {
    v17 &= v17 - 1;
    v20 = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v19 + 4556);
    if ( v20 && (*v20 & 0x100) != 0 )
      EtwpLogKernelEvent(
        (__int64)&v39,
        EtwpHostSiloState,
        *(unsigned __int8 *)(EtwpHostSiloState + 2 * v19 + 4504),
        1u,
        v16,
        0x501803u);
  }
  if ( ThreadServerSilo )
  {
    v29 = *(_QWORD *)(PsGetServerSiloGlobals(ThreadServerSilo) + 832);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v31, v30); !i; i = !_BitScanForward((unsigned int *)&v31, v30) )
      {
        v30 &= v30 - 1;
        v32 = (_DWORD *)(v29 + 32 * v31 + 4556);
        if ( v32 && (*v32 & 0x100) != 0 )
          EtwpLogKernelEvent((__int64)&v39, v29, *(unsigned __int8 *)(v29 + 2 * v31 + 4504), 1u, v16, 0x501803u);
      }
    }
  }
  result = (_DWORD *)(EtwpHostSiloState + 4812);
  if ( EtwpHostSiloState != -4812 && (*result & 0x100) != 0 )
  {
    v28 = *(_QWORD *)(a3 + 200);
    v41 = 0LL;
    if ( *(char *)(a3 + 71) >= 0 && v28 && (*(_BYTE *)(v28 + 2) & 1) != 0 )
    {
      v41 = *(_OWORD *)(*(_QWORD *)(a3 + 200) + 24LL);
      return (_DWORD *)EtwpDiskProvTraceDisk(v16, &v39, v3, &v41);
    }
    else
    {
      return (_DWORD *)EtwpDiskProvTraceDisk(v16, &v39, v3, 0LL);
    }
  }
  return result;
}
