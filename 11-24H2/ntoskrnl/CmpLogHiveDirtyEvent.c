/*
 * XREFs of CmpLogHiveDirtyEvent @ 0x1408872EC
 * Callers:
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CmpLogHiveDirtyEvent(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 result; // rax
  __int16 v8; // [rsp+30h] [rbp-9h] BYREF
  int v9; // [rsp+34h] [rbp-5h] BYREF
  __int64 *v10; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp+Fh]
  int v12; // [rsp+58h] [rbp+1Fh]
  int v13; // [rsp+5Ch] [rbp+23h]
  __int64 v14; // [rsp+A0h] [rbp+67h] BYREF

  v14 = a1;
  if ( (DWORD2(PerfGlobalGroupMask[0]) & 0x1000000) != 0 )
  {
    v9 = a2;
    v8 = 0;
    v10 = &v14;
    v11[0] = 8LL;
    v2 = *(_QWORD *)(a1 + 1864);
    v3 = 1;
    if ( v2 )
    {
      v3 = 2;
      v12 = *(unsigned __int16 *)(a1 + 1856);
      v11[1] = v2;
      v13 = 0;
    }
    v4 = 2LL * v3;
    v5 = v3 + 1;
    v11[v4 - 1] = &v8;
    v11[v4] = 2LL;
    v6 = 2LL * v5;
    v11[v6 - 1] = &v9;
    v11[v6] = 4LL;
    return EtwTraceKernelEvent((int)&v10, v5 + 1, 0x41000000u, 2344, 6297858);
  }
  return result;
}
