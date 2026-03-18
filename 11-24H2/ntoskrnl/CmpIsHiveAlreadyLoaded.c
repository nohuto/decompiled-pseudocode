/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x1407DA6B4
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     CmpUnfreezeHive @ 0x1407DA898 (CmpUnfreezeHive.c)
 *     CmpConstructName @ 0x1408763E0 (CmpConstructName.c)
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpIsThisSameFile @ 0x14092E898 (CmpIsThisSameFile.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5)
{
  char v5; // bl
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = (*(_DWORD *)(v9 + 184) & 0x40000) == 0;
        v11 = *(_QWORD *)(v9 + 32);
        *(_QWORD *)a4 = v11;
        if ( !v10 )
        {
          if ( (unsigned __int8)CmpIsThisSameFile(a2, *(_QWORD *)(v11 + 1544)) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a4 + 4112LL) & 0x40) == 0
              && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x40000) == 0 )
            {
              v5 = 1;
              if ( *(_BYTE *)(*(_QWORD *)a4 + 2944LL) == 1 )
              {
                CmpUnfreezeHive();
                *(_BYTE *)(*(_QWORD *)a4 + 2944LL) = 0;
              }
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = v14 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v14 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (*(_DWORD *)(NextActiveHive + 4112) & 0x20) != 0
          && (unsigned __int8)CmpIsThisSameFile(a2, *(_QWORD *)(NextActiveHive + 1544))
          && (*(_DWORD *)(v14 + 4112) & 0x40) == 0 )
        {
          v15 = *(_QWORD *)(v14 + 2936);
          *(_QWORD *)a4 = v14;
          v16 = CmpConstructName(v15);
          *a5 = v16;
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v14 + 1640));
          return v16 != 0;
        }
      }
    }
  }
  return v5;
}
