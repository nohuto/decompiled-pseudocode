/*
 * XREFs of EtwTraceObjectOperation @ 0x1403FBD80
 * Callers:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x1403FBEF8 (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140487710 (EtwpTraceKernelEventWithFilter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceObjectOperation(unsigned __int16 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v5; // r10d
  unsigned __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 result; // rax
  unsigned int v11; // r9d
  bool v12; // zf
  __int64 v13; // r11
  __int64 v14; // r8
  unsigned __int16 *v15; // rbx
  unsigned int v16; // edi
  int v17; // r8d
  char v18; // r11
  __int128 v20; // [rsp+38h] [rbp-60h] BYREF
  __int128 *v21; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+58h] [rbp-40h]
  int v23; // [rsp+5Ch] [rbp-3Ch]

  v5 = 0;
  v8 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  v20 = 0LL;
  v9 = *(_DWORD *)(ObTypeIndexTable[v8] + 192);
  result = EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v12 = !_BitScanForward((unsigned int *)&v13, v11);
  if ( !v12 )
  {
    do
    {
      v11 &= v11 - 1;
      result = 32LL * (unsigned int)v13 + EtwpHostSiloState + 4556;
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x80u) != 0LL )
        {
          result = 5 * v13;
          v14 = 0LL;
          v15 = (unsigned __int16 *)((char *)&EtwpObjectTypeFilter + 20 * v13);
          v16 = *v15;
          while ( (unsigned int)v14 < v16 )
          {
            result = ExCheckSingleFilter(v9, *(unsigned int *)&v15[2 * v14 + 2]);
            if ( (_DWORD)result )
            {
              result = (unsigned int)(1 << v18);
              v5 |= result;
              break;
            }
            v14 = (unsigned int)(v17 + 1);
          }
        }
      }
      v12 = !_BitScanForward((unsigned int *)&v13, v11);
    }
    while ( !v12 );
    if ( v5 )
    {
      v23 = 0;
      *(_QWORD *)&v20 = a2 + 48;
      *((_QWORD *)&v20 + 1) = __PAIR64__(a3, a4);
      v21 = &v20;
      v22 = 16;
      return EtwpTraceKernelEventWithFilter((unsigned int)&v21, 1, v5, a1, 291512066);
    }
  }
  return result;
}
