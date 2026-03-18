/*
 * XREFs of AcpiArblibCommitResources @ 0x14009AE70
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x14009B960 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiArblibCommitResources(__int64 a1, __int64 a2)
{
  bool v3; // zf
  int v5; // r12d
  int v6; // r14d
  unsigned __int8 *v7; // rsi
  unsigned __int64 v8; // r15
  int v9; // eax
  unsigned __int8 *i; // rax
  NTSTATUS v11; // edi
  struct _RTL_RANGE_LIST RangeList; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF
  ULONGLONG Start; // [rsp+98h] [rbp+38h] BYREF

  Start = 0LL;
  v14 = 0LL;
  v3 = *(_BYTE *)(a1 + 129) == 0;
  v5 = *(_DWORD *)(a1 + 168);
  memset(&RangeList, 0, sizeof(RangeList));
  if ( !v3 )
  {
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 176));
    *(_BYTE *)(a1 + 131) = 0;
    *(_BYTE *)(a1 + 129) = 0;
  }
  v6 = 0;
  RtlInitializeRangeList(&RangeList);
  if ( a2 )
  {
    v7 = (unsigned __int8 *)(a2 + 20);
    v8 = a2 + 20 + 20LL * *(unsigned int *)(a2 + 16);
    while ( (unsigned __int64)v7 < v8 )
    {
      v9 = *v7;
      if ( v9 == v5 || (_BYTE)v9 == 7 && v5 == 3 )
      {
        for ( i = v7 + 20; (unsigned __int64)i < v8 && *i == 0x81; i += 20 )
        {
          if ( *((_WORD *)i + 1) == 1 )
          {
            v11 = (*(__int64 (__fastcall **)(unsigned __int8 *, ULONGLONG *, __int64 *))(a1 + 272))(v7, &Start, &v14);
            if ( v11 < 0 )
              goto LABEL_22;
            if ( v14 )
            {
              v11 = RtlAddRange(&RangeList, Start, Start + v14 - 1, 0, 3u, 0LL, 0LL);
              if ( v11 < 0 )
                goto LABEL_22;
              ++v6;
            }
            break;
          }
        }
      }
      v7 += 20;
    }
  }
  v11 = RtlInvertRangeList(*(PRTL_RANGE_LIST *)(a1 + 176), &RangeList);
  if ( v11 >= 0 )
  {
    *(_BYTE *)(a1 + 129) = 1;
    if ( !v6 )
      *(_BYTE *)(a1 + 131) = 1;
  }
LABEL_22:
  RtlFreeRangeList(&RangeList);
  return (unsigned int)v11;
}
