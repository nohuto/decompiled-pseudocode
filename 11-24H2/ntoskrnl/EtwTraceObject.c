/*
 * XREFs of EtwTraceObject @ 0x1407A9A04
 * Callers:
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x1403FBEF8 (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140487710 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceObject(__int16 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned __int8 v3; // bl
  int v6; // r15d
  __int64 v7; // rax
  unsigned int v8; // r9d
  bool v9; // zf
  __int64 v10; // r11
  __int64 v11; // r8
  unsigned __int16 *v12; // rdi
  unsigned int v13; // esi
  int v14; // r8d
  char v15; // r11
  __int128 v17; // [rsp+38h] [rbp-50h] BYREF
  __int128 *v18; // [rsp+48h] [rbp-40h] BYREF
  int v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+54h] [rbp-34h]

  v2 = 0;
  v3 = ObHeaderCookie ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2);
  v17 = 0LL;
  v6 = *(_DWORD *)(ObTypeIndexTable[v3] + 192);
  LODWORD(v7) = EtwpHostSiloState;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v9 = !_BitScanForward((unsigned int *)&v10, v8);
  if ( !v9 )
  {
    do
    {
      v8 &= v8 - 1;
      v7 = 32LL * (unsigned int)v10 + EtwpHostSiloState + 4556;
      if ( v7 )
      {
        LODWORD(v7) = *(_DWORD *)(v7 + 16);
        if ( (v7 & 0x80u) != 0LL )
        {
          LODWORD(v7) = 5 * v10;
          v11 = 0LL;
          v12 = (unsigned __int16 *)((char *)&EtwpObjectTypeFilter + 20 * v10);
          v13 = *v12;
          while ( (unsigned int)v11 < v13 )
          {
            LODWORD(v7) = ExCheckSingleFilter(v6, *(_DWORD *)&v12[2 * v11 + 2]);
            if ( (_DWORD)v7 )
            {
              LODWORD(v7) = 1 << v15;
              v2 |= 1 << v15;
              break;
            }
            v11 = (unsigned int)(v14 + 1);
          }
        }
      }
      v9 = !_BitScanForward((unsigned int *)&v10, v8);
    }
    while ( !v9 );
    if ( v2 )
    {
      v20 = 0;
      *(_QWORD *)&v17 = a2 + 48;
      WORD4(v17) = v3;
      v19 = 16;
      v18 = &v17;
      LODWORD(v7) = EtwpTraceKernelEventWithFilter((__int64)&v18, 1u, v2, a1, 0x10601902u);
    }
  }
  return v7;
}
