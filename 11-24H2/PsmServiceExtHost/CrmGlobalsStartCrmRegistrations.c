/*
 * XREFs of CrmGlobalsStartCrmRegistrations @ 0x18007B7A8
 * Callers:
 *     CrmGlobalsStart @ 0x180078A68 (CrmGlobalsStart.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CrmSrvActivityAllocate @ 0x180030E68 (CrmSrvActivityAllocate.c)
 *     CrmSrvRegister @ 0x18003DBE0 (CrmSrvRegister.c)
 *     CrmRegistrationInitialize @ 0x18003EA70 (CrmRegistrationInitialize.c)
 *     CrmRegistrationStartWithActivity @ 0x18006E3D4 (CrmRegistrationStartWithActivity.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmGlobalsStartCrmRegistrations(__int64 a1)
{
  PVOID Heap; // rax
  PVOID v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned int i; // ebx
  PVOID v9; // rax
  __int64 v10; // r8
  int j; // ebx
  __int64 *v12; // r14
  __int64 v13; // rbx
  unsigned int k; // edi
  __int64 v15; // rdx
  __int64 v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-48h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  Heap = HampAllocateHeap(0x720uLL);
  v3 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(a1 + 560) = Heap;
  *(_DWORD *)(a1 + 568) = 12;
  v5 = 12LL;
  v6 = (__int64)Heap;
  do
  {
    CrmRegistrationInitialize(v6);
    v6 += 152LL;
    --v5;
  }
  while ( v5 );
  for ( i = 0; i < 0xC; ++i )
  {
    result = CrmRegistrationStartWithActivity((__int64)v3 + 152 * i, i + 5, v7, 1, (__int64)L"CrmInternalTelemetry");
    if ( (int)result < 0 )
      return result;
  }
  v9 = HampAllocateHeap(0x98uLL);
  *(_QWORD *)(a1 + 576) = v9;
  if ( !v9 )
    return 3221225495LL;
  CrmRegistrationInitialize((__int64)v9);
  result = CrmRegistrationStartWithActivity(*(_QWORD *)(a1 + 576), 0x11u, v10, 2, (__int64)L"CrmInternalQuietMode");
  if ( (int)result >= 0 )
  {
    result = CrmSrvRegister(
               (_QWORD *)(a1 + 552),
               1,
               (__int64)L"CrmInternalApiTelemetry",
               0LL,
               (__int64)L"CrmInternalApiTelemetry");
    if ( (int)result >= 0 )
    {
      for ( j = 0; !j; j = 1 )
      {
        result = CrmSrvActivityAllocate(
                   &v17,
                   *(_QWORD *)(a1 + 552),
                   0x517u,
                   0LL,
                   (__int64)L"CrmInternalApiTelemetryActivity",
                   &v16);
        if ( (int)result < 0 )
          return result;
      }
      v12 = (__int64 *)(a1 + 544);
      result = CrmSrvRegister(
                 (_QWORD *)(a1 + 544),
                 307,
                 (__int64)L"CrmPublicApiTelemetry",
                 0LL,
                 (__int64)L"CrmPublicApiTelemetry");
      if ( (int)result >= 0 )
      {
        v13 = 0LL;
        v18[0] = _mm_load_si128((const __m128i *)&_xmm);
        v18[1] = v18[0];
        while ( (unsigned int)v13 < 8 )
        {
          for ( k = 0; k < 2; ++k )
          {
            v15 = *v12;
            *((_DWORD *)v18 + v13) = k;
            result = CrmSrvActivityAllocate(
                       &v17,
                       v15,
                       0x515u,
                       (__int64)v18,
                       (__int64)L"CrmPublicApiTelemetryActivity",
                       &v16);
            if ( (int)result < 0 )
              return result;
          }
          *((_DWORD *)v18 + v13) = 2;
          v13 = (unsigned int)(v13 + 1);
        }
        return 0LL;
      }
    }
  }
  return result;
}
