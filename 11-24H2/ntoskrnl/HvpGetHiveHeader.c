/*
 * XREFs of HvpGetHiveHeader @ 0x14096A16C
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF9A4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpHeaderCheckSum @ 0x140BBB7A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // r15
  char *v6; // rax
  char *v7; // rbx
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  int v12; // eax
  int v14; // eax

  *a2 = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v6 = (char *)guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 132), a2);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x1000uLL);
    if ( (int)guard_dispatch_icall_no_overrides(a1, 0LL) >= 0 )
    {
      if ( *(_DWORD *)v7 == 1718052210 && *((_DWORD *)v7 + 127) == (unsigned int)HvpHeaderCheckSum(v7) )
      {
        v8 = *((_DWORD *)v7 + 10);
        if ( (unsigned int)(v8 - 1) <= 0x7FFFDFFF && (v8 & 0xFFF) == 0 )
        {
          if ( !*((_DWORD *)v7 + 7) )
          {
            v9 = *((_DWORD *)v7 + 5);
            if ( v9 <= 1 )
            {
              v10 = *((_DWORD *)v7 + 6);
              v11 = 3;
              if ( v10 >= 3 && (v10 <= 6 || v9 != 1) && *((_DWORD *)v7 + 8) == 1 )
              {
                *a3 = *(_QWORD *)(v7 + 12);
                v12 = *((_DWORD *)v7 + 2);
                *v4 = v7;
                if ( *((_DWORD *)v7 + 1) == v12 )
                  *((_DWORD *)v7 + 11) = 1;
                else
                  return 5;
                return v11;
              }
            }
          }
          goto LABEL_17;
        }
      }
      v14 = guard_dispatch_icall_no_overrides(a1, 0LL);
      if ( v14 == -1073741807 )
      {
LABEL_17:
        v11 = 0;
LABEL_18:
        guard_dispatch_icall_no_overrides(v7, *(unsigned int *)(a1 + 132));
        return v11;
      }
      if ( v14 >= 0 )
      {
        if ( *(_DWORD *)v7 == 1852400232 && !*((_DWORD *)v7 + 1) )
        {
          v11 = 4;
          *a3 = *(_QWORD *)(v7 + 20);
          goto LABEL_18;
        }
        goto LABEL_17;
      }
    }
    v11 = 7;
    goto LABEL_18;
  }
  return 2LL;
}
