/*
 * XREFs of MiVolunteerForTrimFirst @ 0x140303BB0
 * Callers:
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rax
  int v6; // ebp
  __int64 v7; // rax
  __int64 **v8; // rcx
  __int64 **v9; // rax
  __int64 *v10; // rcx
  __int64 **v11; // rcx

  v2 = (_QWORD *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
  v3 = v2[2200];
  if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v3 + 56) )
  {
    if ( a2 < 0 )
      return;
    v4 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) )
      return;
    v5 = (__int64 *)v2[2201];
    v6 = 1;
  }
  else
  {
    if ( a2 > 0 )
      return;
    v4 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) )
      return;
    v5 = (__int64 *)v2[2202];
    v6 = 2;
  }
  if ( v5 != v4 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    if ( *(_BYTE *)(v3 + 53) || (v7 = *v4) == 0 )
    {
      *(_BYTE *)(v3 + 54) = 1;
    }
    else
    {
      if ( *(__int64 **)(v7 + 8) != v4 || (v8 = (__int64 **)v4[1], *v8 != v4) )
LABEL_12:
        __fastfail(3u);
      *v8 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      v9 = (__int64 **)(v2 + 2201);
      if ( v6 == 1 )
      {
        v10 = *v9;
        if ( (__int64 **)(*v9)[1] != v9 )
          goto LABEL_12;
        *v4 = (__int64)v10;
        v4[1] = (__int64)v9;
        v10[1] = (__int64)v4;
        *v9 = v4;
      }
      else
      {
        v11 = (__int64 **)v2[2202];
        if ( *v11 != (__int64 *)v9 )
          goto LABEL_12;
        *v4 = (__int64)v9;
        v4[1] = (__int64)v11;
        *v11 = v4;
        v2[2202] = v4;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  }
}
