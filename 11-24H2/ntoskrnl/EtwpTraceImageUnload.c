/*
 * XREFs of EtwpTraceImageUnload @ 0x1403B36B8
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x1403B35C0 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x14064C9E0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpPsProvTraceImage @ 0x1409FF944 (EtwpPsProvTraceImage.c)
 */

void __fastcall EtwpTraceImageUnload(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8,
        __int64 a9,
        unsigned int a10)
{
  int v12; // eax
  int v13; // esi
  __int64 v14; // rdi
  unsigned int v15; // ebx
  bool v16; // zf
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  _QWORD v23[2]; // [rsp+40h] [rbp-81h] BYREF
  int v24; // [rsp+50h] [rbp-71h]
  int v25; // [rsp+54h] [rbp-6Dh]
  int v26; // [rsp+58h] [rbp-69h]
  char v27; // [rsp+5Ch] [rbp-65h]
  char v28; // [rsp+5Dh] [rbp-64h]
  __int16 v29; // [rsp+5Eh] [rbp-63h]
  __int64 v30; // [rsp+60h] [rbp-61h]
  _BYTE v31[24]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v32[3]; // [rsp+80h] [rbp-41h] BYREF
  int v33; // [rsp+98h] [rbp-29h]
  int v34; // [rsp+9Ch] [rbp-25h]
  int *v35; // [rsp+A0h] [rbp-21h]
  __int64 v36; // [rsp+A8h] [rbp-19h]

  memset(v31, 0, sizeof(v31));
  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    if ( a2 )
      v12 = *(_DWORD *)(a2 + 464);
    else
      v12 = 0;
    v24 = v12;
    v25 = a5;
    v26 = a6;
    v27 = a7;
    v28 = a8;
    v23[0] = a3;
    v23[1] = a4;
    v29 = 0;
    v30 = a9;
    *(_OWORD *)v31 = 0LL;
    if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 4) != 0 )
      EtwpPsProvTraceImage(a1, v23, 5122LL, a10);
    v32[1] = 56LL;
    v34 = 0;
    v32[0] = v23;
    v32[2] = *((_QWORD *)a1 + 1);
    v13 = a10 != 0 ? 22026499 : 5249283;
    v33 = *a1;
    v35 = &EtwpNull;
    v36 = 2LL;
    if ( a2 )
    {
      v14 = *(_QWORD *)(a2 + 1520);
      v15 = *(_DWORD *)(EtwpHostSiloState + 4520);
      while ( 1 )
      {
        v16 = !_BitScanForward((unsigned int *)&v17, v15);
        if ( v16 )
          break;
        v15 &= v15 - 1;
        v18 = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v17 + 4556);
        if ( v18 )
        {
          if ( (*v18 & 4) != 0 )
            EtwpLogKernelEvent(
              (__int64)v32,
              EtwpHostSiloState,
              *(unsigned __int8 *)(EtwpHostSiloState + 2 * v17 + 4504),
              3u,
              5122,
              v13);
        }
      }
      if ( v14 )
      {
        v19 = *(_QWORD *)(PsGetServerSiloGlobals(v14) + 832);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 + 4520);
          while ( 1 )
          {
            v16 = !_BitScanForward((unsigned int *)&v21, v20);
            if ( v16 )
              break;
            v20 &= v20 - 1;
            v22 = (_DWORD *)(v19 + 32LL * (unsigned int)v21 + 4556);
            if ( v22 && (*v22 & 4) != 0 )
              EtwpLogKernelEvent((__int64)v32, v19, *(unsigned __int8 *)(v19 + 2 * v21 + 4504), 3u, 5122, v13);
          }
        }
      }
    }
    else
    {
      EtwTraceKernelEvent((int)v32, 3, 4u, 5122, v13);
    }
  }
}
