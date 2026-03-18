/*
 * XREFs of HvpGetHiveHeader @ 0x14098195C
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF454 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvLoadHive @ 0x14098133C (HvLoadHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvpHeaderCheckSum @ 0x140BB97A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v5; // r15
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  int v15; // eax
  int v17; // eax

  *a2 = 0LL;
  v5 = a2;
  LOBYTE(a2) = 1;
  v7 = (char *)guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 132), a2, 842222915LL, a4);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x1000uLL);
    if ( (int)guard_dispatch_icall_no_overrides(a1, 0LL, 0LL, v8) >= 0 )
    {
      if ( *(_DWORD *)v8 == 1718052210 && *((_DWORD *)v8 + 127) == (unsigned int)HvpHeaderCheckSum(v8) )
      {
        v11 = *((_DWORD *)v8 + 10);
        if ( (unsigned int)(v11 - 1) <= 0x7FFFDFFF && (v11 & 0xFFF) == 0 )
        {
          if ( !*((_DWORD *)v8 + 7) )
          {
            v12 = *((_DWORD *)v8 + 5);
            if ( v12 <= 1 )
            {
              v13 = *((_DWORD *)v8 + 6);
              v14 = 3;
              if ( v13 >= 3 && (v13 <= 6 || v12 != 1) && *((_DWORD *)v8 + 8) == 1 )
              {
                *a3 = *(_QWORD *)(v8 + 12);
                v15 = *((_DWORD *)v8 + 2);
                *v5 = v8;
                if ( *((_DWORD *)v8 + 1) == v15 )
                  *((_DWORD *)v8 + 11) = 1;
                else
                  return 5;
                return v14;
              }
            }
          }
          goto LABEL_17;
        }
      }
      v17 = guard_dispatch_icall_no_overrides(a1, 0LL, 4096LL, v8);
      if ( v17 == -1073741807 )
      {
LABEL_17:
        v14 = 0;
LABEL_18:
        guard_dispatch_icall_no_overrides(v8, *(unsigned int *)(a1 + 132), v9, v10);
        return v14;
      }
      if ( v17 >= 0 )
      {
        if ( *(_DWORD *)v8 == 1852400232 && !*((_DWORD *)v8 + 1) )
        {
          v14 = 4;
          *a3 = *(_QWORD *)(v8 + 20);
          goto LABEL_18;
        }
        goto LABEL_17;
      }
    }
    v14 = 7;
    goto LABEL_18;
  }
  return 2LL;
}
