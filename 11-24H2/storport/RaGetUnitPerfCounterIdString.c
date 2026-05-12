/*
 * XREFs of RaGetUnitPerfCounterIdString @ 0x14000904C
 * Callers:
 *     RaUnitSendInstanceCounters @ 0x140008E78 (RaUnitSendInstanceCounters.c)
 * Callees:
 *     RaTrimString @ 0x140009488 (RaTrimString.c)
 *     RtlStringCbPrintfExA @ 0x1400095E8 (RtlStringCbPrintfExA.c)
 *     RtlUnicodeStringCatString @ 0x140053458 (RtlUnicodeStringCatString.c)
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall RaGetUnitPerfCounterIdString(__int64 a1, struct _UNICODE_STRING *a2)
{
  int v3; // edi
  __int16 v5; // bx
  unsigned __int16 v6; // bx
  __int64 v7; // r15
  char *Pool2; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  void *v11; // r12
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  PVOID v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  const wchar_t *v17; // rdx
  PVOID v18; // rcx
  PVOID P[2]; // [rsp+58h] [rbp-39h] BYREF
  PVOID v20[2]; // [rsp+68h] [rbp-29h] BYREF
  PVOID v21[2]; // [rsp+78h] [rbp-19h] BYREF
  struct _STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  struct _STRING v23; // [rsp+98h] [rbp+7h] BYREF
  struct _STRING v24; // [rsp+A8h] [rbp+17h] BYREF
  struct _STRING SourceString; // [rsp+B8h] [rbp+27h] BYREF

  v23 = 0LL;
  *(_OWORD *)P = 0LL;
  v24 = 0LL;
  *(_OWORD *)v21 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)v20 = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(a1 + 168));
  v3 = RaTrimString(1229218130LL, &DestinationString, v20);
  if ( v3 >= 0 )
  {
    RtlInitAnsiString(&v23, (PCSZ)(a1 + 177));
    v3 = RaTrimString(1229218130LL, &v23, P);
    if ( v3 >= 0 )
    {
      if ( !v20[1] && !P[1] )
      {
        v3 = -1073741811;
        goto LABEL_2;
      }
      if ( *(_DWORD *)(a1 + 3432) == 17 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5080LL);
        if ( v15 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( *(_WORD *)(v15 + 2 * v16) );
        }
        else
        {
          LOWORD(v16) = 0;
        }
        v6 = v16 + LOWORD(P[0]) + 4;
      }
      else
      {
        RtlInitAnsiString(&v24, (PCSZ)(a1 + 242));
        v3 = RaTrimString(1229218130LL, &v24, v21);
        if ( v3 < 0 )
          goto LABEL_2;
        if ( LOWORD(v21[0]) )
          v5 = LOWORD(v21[0]) + LOWORD(v20[0]) + 5;
        else
          v5 = LOWORD(v20[0]) + 32;
        v6 = LOWORD(P[0]) + v5;
      }
      v7 = *(_QWORD *)(a1 + 8);
      Pool2 = (char *)ExAllocatePool2(64LL, v6, 1229218130LL);
      if ( Pool2 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = ExAllocatePool2(64LL, 2LL * v6, 1229218130LL);
        v11 = (void *)v10;
        if ( v10 || !v9 )
        {
          if ( v10 )
          {
            if ( *(_DWORD *)(a1 + 3432) == 17 )
            {
              v12 = RtlStringCbPrintfExA(Pool2, v6, 0LL, 0LL, 0, "%s : ", (const char *)P[1]);
            }
            else if ( LOWORD(v21[0]) )
            {
              if ( LOWORD(v20[0]) )
              {
                v14 = &unk_140151064;
                if ( P[1] )
                  v14 = P[1];
                v12 = RtlStringCbPrintfExA(Pool2, v6, 0LL, 0LL, 0, "%s %s : %s", v20[1], v14, v21[1]);
              }
              else
              {
                v12 = RtlStringCbPrintfExA(Pool2, v6, 0LL, 0LL, 0, "%s : %s", P[1], v21[1]);
              }
            }
            else if ( LOWORD(v20[0]) )
            {
              v18 = &unk_140151064;
              if ( P[1] )
                v18 = P[1];
              v12 = RtlStringCbPrintfExA(
                      Pool2,
                      v6,
                      0LL,
                      0LL,
                      0,
                      "%s %s : LUN %d",
                      v20[1],
                      v18,
                      *(unsigned __int8 *)(a1 + 106));
            }
            else
            {
              v12 = RtlStringCbPrintfExA(Pool2, v6, 0LL, 0LL, 0, "%s : LUN %d", P[1], *(unsigned __int8 *)(a1 + 106));
            }
            v3 = v12;
            if ( v12 < 0 )
            {
              ExFreePoolWithTag(v11, 0x49446152u);
            }
            else
            {
              a2->Buffer = (wchar_t *)v11;
              a2->Length = 0;
              a2->MaximumLength = 2 * v6;
              RtlInitAnsiString(&SourceString, Pool2);
              v13 = RtlAnsiStringToUnicodeString(a2, &SourceString, 0);
              v3 = v13;
              if ( *(_DWORD *)(a1 + 3432) == 17 && v13 >= 0 )
              {
                v17 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 5080LL);
                if ( v17 )
                  RtlUnicodeStringCatString(a2, v17);
              }
            }
            goto LABEL_23;
          }
        }
        else
        {
          RaidLogAllocationFailure(v9, 64, 2 * v6, 1229218130, 0x80000000);
        }
        v3 = -1073741801;
LABEL_23:
        ExFreePoolWithTag(Pool2, 0x49446152u);
        goto LABEL_2;
      }
      if ( v7 )
        RaidLogAllocationFailure(v7, 64, v6, 1229218130, 0x80000000);
      v3 = -1073741801;
    }
  }
LABEL_2:
  if ( v21[1] )
    ExFreePoolWithTag(v21[1], 0x49446152u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x49446152u);
  if ( v20[1] )
    ExFreePoolWithTag(v20[1], 0x49446152u);
  return (unsigned int)v3;
}
