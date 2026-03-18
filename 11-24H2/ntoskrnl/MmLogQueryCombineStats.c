/*
 * XREFs of MmLogQueryCombineStats @ 0x140932778
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140933148 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     EtwTraceSiloDcEvent @ 0x140480320 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

int __fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  int v5; // eax
  _OWORD *v6; // r10
  int v7; // eax
  int v8; // ecx
  _OWORD *v9; // rax
  unsigned int v10; // r9d
  _OWORD *v12; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+38h] [rbp-48h]
  int v14; // [rsp+3Ch] [rbp-44h]
  _OWORD *v15; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-38h]
  int v17; // [rsp+4Ch] [rbp-34h]
  _OWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(v18, 0, sizeof(v18));
  if ( a3 )
    v5 = *a3;
  else
    v5 = 0;
  v6 = v18;
  if ( a3 )
    v6 = a3;
  *(_DWORD *)v6 = v5 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v6 + 1) = dword_140E3CFD8;
  *((_QWORD *)v6 + 1) = qword_140E3CFC0 + qword_140E3CFC8;
  *((_QWORD *)v6 + 2) = qword_140E3CFD0;
  v7 = dword_140E3CFDC;
  *((_DWORD *)v6 + 6) = dword_140E3CFDC;
  v8 = dword_140E3CFE0;
  *((_DWORD *)v6 + 7) = dword_140E3CFE0;
  if ( v7 > v8 )
    *((_DWORD *)v6 + 6) = v8;
  v9 = v18;
  if ( v6 == v18 )
  {
    if ( a1 && a2 )
    {
      v14 = 0;
      v10 = *a2;
      v12 = v6;
      v13 = 32;
      LODWORD(v9) = EtwTraceSiloDcEvent((__int64)&v12, 1u, a1, v10, 636, 0x501802u);
    }
    else
    {
      v17 = 0;
      v15 = v6;
      v16 = 32;
      LODWORD(v9) = EtwTraceKernelEvent((int)&v15, 1, 0x20080000u, 636, 5249026);
    }
  }
  return (int)v9;
}
