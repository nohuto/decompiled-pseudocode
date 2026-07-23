/*
 * XREFs of IopMemQueryConflict @ 0x140723890
 * Callers:
 *     <none>
 * Callees:
 *     ArbQueryConflict @ 0x1407038D0 (ArbQueryConflict.c)
 *     IopIsPciRootBus @ 0x140723670 (IopIsPciRootBus.c)
 */

__int64 __fastcall IopMemQueryConflict(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  NTSTATUS IsPciRootBus; // r11d
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // r10
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // rax
  bool v12; // cf
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  result = ArbQueryConflict(a1, a2);
  if ( (int)result >= 0 )
  {
    IsPciRootBus = IopIsPciRootBus(*(PDEVICE_OBJECT *)a2, &v13);
    if ( IsPciRootBus >= 0 && v13 )
    {
      v5 = 0LL;
      v6 = **(_DWORD **)(a2 + 16);
      v7 = **(_QWORD **)(a2 + 24);
      if ( v6 )
      {
        v8 = ArbMmConfigRange;
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 24 * v5 + 8);
          if ( ArbMmConfigRange )
            break;
LABEL_17:
          v5 = (unsigned int)(v5 + 1);
LABEL_18:
          if ( (unsigned int)v5 >= v6 )
            goto LABEL_19;
        }
        for ( i = ArbMmConfigRange + 8; ; i += 32LL )
        {
          if ( i >= 32 * (unsigned __int64)*(unsigned int *)(v8 + 4) + ArbMmConfigRange + 8 )
            goto LABEL_17;
          if ( ((*(_BYTE *)(i + 1) - 3) & 0xFB) == 0 )
          {
            v11 = *(_QWORD *)(i + 16);
            v12 = v9 < v11;
            if ( v9 > v11 )
            {
              if ( *(_QWORD *)(i + 24) < v9 )
                continue;
              v12 = v9 < v11;
            }
            if ( !v12 || *(_QWORD *)(v7 + 24 * v5 + 16) >= v11 )
            {
              *(_OWORD *)(v7 + 24 * v5) = *(_OWORD *)(v7 + 24LL * --v6);
              *(_QWORD *)(v7 + 24 * v5 + 16) = *(_QWORD *)(v7 + 24LL * v6 + 16);
              goto LABEL_18;
            }
          }
        }
      }
LABEL_19:
      **(_DWORD **)(a2 + 16) = v6;
      return (unsigned int)IsPciRootBus;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
