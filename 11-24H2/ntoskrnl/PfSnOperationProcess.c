/*
 * XREFs of PfSnOperationProcess @ 0x14094AD54
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14094AB4C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnCheckScenario @ 0x14094870C (PfSnCheckScenario.c)
 *     PfSnBeginScenario @ 0x140948770 (PfSnBeginScenario.c)
 *     PfCalculateProcessHash @ 0x140949AC0 (PfCalculateProcessHash.c)
 *     PfSnEndProcessTrace @ 0x14094BF24 (PfSnEndProcessTrace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  bool v2; // zf
  PVOID v3; // rdi
  unsigned __int8 v4; // cl
  unsigned int v5; // eax
  bool v6; // cf
  _KPROCESS *Process; // r14
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  _WORD *v13; // rax
  int v14; // ecx
  unsigned int v15; // edx
  int v17; // [rsp+38h] [rbp-19h] BYREF
  PVOID P; // [rsp+40h] [rbp-11h] BYREF
  wchar_t pszDest[30]; // [rsp+48h] [rbp-9h] BYREF
  int v20; // [rsp+84h] [rbp+33h]

  memset_0(pszDest, 0, 0x40uLL);
  v2 = *(_BYTE *)a1 == 1;
  v3 = 0LL;
  v17 = 0;
  P = 0LL;
  if ( v2 )
  {
    v4 = *(_BYTE *)(a1 + 1);
    if ( v4 < 2u && !*(_WORD *)(a1 + 2) )
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( (v4 & 1) != 0 )
      {
        v6 = v5 < 2;
      }
      else
      {
        if ( (v5 & 4) != 0 && (v5 & 3) != 0 )
          return (unsigned int)-1073741811;
        v6 = v5 < 8;
      }
      if ( v6 )
      {
        if ( (int)PfSnCheckScenario(1, &v17) < 0 )
          return 0;
        Process = KeGetCurrentThread()->ApcState.Process;
        v8 = PfCalculateProcessHash((__int64)Process, (unsigned __int64)&P);
        v3 = P;
        v9 = v8;
        if ( v8 >= 0 )
        {
          v10 = 0;
          v11 = *((_QWORD *)P + 1);
          v12 = *(unsigned __int16 *)P >> 1;
          v13 = (_WORD *)(v11 - 2 + 2 * v12);
          if ( (unsigned __int64)v13 < v11 )
            goto LABEL_27;
          do
          {
            if ( *v13 == 92 )
              break;
            ++v10;
            --v13;
          }
          while ( (unsigned __int64)v13 >= v11 );
          if ( v10 && v11 + 2LL * (unsigned int)(v12 - v10) )
          {
            RtlStringCbPrintfW(pszDest, 0x3CuLL, L"Op-%.17s-%08X");
            v14 = *(_DWORD *)(a1 + 4);
            v15 = v14 & 1;
            v2 = (*(_BYTE *)(a1 + 1) & 1) == 0;
            v20 = *(_DWORD *)(a1 + 8);
            if ( v2 )
            {
              if ( (v14 & 2) != 0 || v17 == 2 )
              {
                v15 |= 2u;
              }
              else if ( (v14 & 4) != 0 )
              {
                v15 |= 4u;
              }
              PfSnBeginScenario((ULONG_PTR)Process, (__int64)pszDest, 1u, v15, 0LL, 0LL);
            }
            else
            {
              PfSnEndProcessTrace(Process, v15 + 8, pszDest);
            }
            v9 = 0;
          }
          else
          {
LABEL_27:
            v9 = -1073741595;
          }
        }
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
    }
  }
  v9 = -1073741811;
LABEL_17:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v9;
}
