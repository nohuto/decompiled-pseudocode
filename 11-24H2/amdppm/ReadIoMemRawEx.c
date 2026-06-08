/*
 * XREFs of ReadIoMemRawEx @ 0x140002010
 * Callers:
 *     WriteGenAddrEx @ 0x140001BD0 (WriteGenAddrEx.c)
 *     PerfControlCppcRequestMsr @ 0x140001E30 (PerfControlCppcRequestMsr.c)
 *     ReadGenAddrEx @ 0x1400025CC (ReadGenAddrEx.c)
 *     PerfControlCpcSingleRegister @ 0x140006A20 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRawEx(unsigned __int8 *a1)
{
  int v1; // eax
  unsigned int v3; // ecx
  __int64 v4; // rax
  unsigned __int64 result; // rax
  __int64 v6; // r9
  unsigned __int8 v7; // r8
  unsigned __int8 *v8; // rcx
  unsigned __int8 v9; // al

  v1 = *a1;
  if ( !(_BYTE)v1 )
  {
    v9 = a1[3];
    v8 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
    switch ( v9 )
    {
      case 8u:
        return *v8;
      case 0x10u:
        return *(unsigned __int16 *)v8;
      case 0x20u:
        return *(unsigned int *)v8;
      case 0x40u:
        return *(_QWORD *)v8;
    }
    return 0LL;
  }
  if ( (_BYTE)v1 != 10 )
  {
    v6 = *(_QWORD *)(a1 + 4);
    v7 = a1[3];
    if ( v1 == 1 )
    {
      switch ( v7 )
      {
        case 8u:
          LOBYTE(result) = __inbyte(v6);
          return (unsigned __int8)result;
        case 0x10u:
          LOWORD(result) = __inword(v6);
          return (unsigned __int16)result;
        case 0x20u:
          LODWORD(result) = __indword(v6);
          return (unsigned int)result;
      }
    }
    else if ( v1 == 127 && v7 == 64 )
    {
      return __readmsr(v6);
    }
    return 0LL;
  }
  v3 = a1[1] + a1[2];
  v4 = *((_QWORD *)a1 + 2);
  if ( v3 <= 8 )
    return *(unsigned __int8 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v4 + 88));
  if ( v3 <= 0x10 )
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v4 + 88));
  if ( v3 > 0x20 )
  {
    v8 = (unsigned __int8 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v4 + 88));
    return *(_QWORD *)v8;
  }
  return *(unsigned int *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v4 + 88));
}
