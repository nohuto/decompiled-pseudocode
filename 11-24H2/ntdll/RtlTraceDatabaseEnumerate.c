/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x1801466B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseEnumerate(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ecx
  char v8; // di
  __int64 i; // rax

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a2 != a1 || (v7 = *(_DWORD *)(a2 + 8), LODWORD(v6) = v7, v7 >= *(_DWORD *)(a1 + 88)) )
    {
LABEL_4:
      v8 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    *(_QWORD *)a2 = a1;
    LODWORD(v6) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = **(_QWORD **)(a1 + 96);
    v7 = 0;
  }
  for ( i = *(_QWORD *)(a2 + 16); !i; *(_QWORD *)(a2 + 16) = i )
  {
    v6 = v7 + 1;
    *(_DWORD *)(a2 + 8) = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 88) )
      goto LABEL_11;
    ++v7;
    i = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v6);
  }
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 88) )
    goto LABEL_13;
LABEL_11:
  if ( !i )
  {
    *a3 = 0LL;
    goto LABEL_4;
  }
LABEL_13:
  *a3 = i;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  v8 = 1;
LABEL_14:
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return v8;
}
