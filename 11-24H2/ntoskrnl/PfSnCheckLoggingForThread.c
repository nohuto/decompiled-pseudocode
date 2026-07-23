/*
 * XREFs of PfSnCheckLoggingForThread @ 0x14034F870
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckLoggingForThread(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rax

  if ( (*(_BYTE *)(a1 + 1448) & 0x40) == 0 || (a3 & 2) != 0 )
  {
    v4 = (*(_DWORD *)(a1 + 1440) >> 9) & 7;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 1084);
      if ( v4 >= v6 )
        v4 = v6;
    }
    if ( v4 >= 2 || (struct _KTHREAD *)a1 == KeGetCurrentThread() && *(_DWORD *)(a1 + 1504) )
    {
      v7 = *(_QWORD *)(a2 + 432);
      if ( !v7 || v7 == a1 && *(_QWORD *)(a2 + 440) == *(_QWORD *)(a1 + 1296) )
        return 1LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 336));
    }
  }
  return 0LL;
}
