/*
 * XREFs of ACPIRegReadEntireAcpiTable @ 0x1400A37D8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireAcpiTable(__int64 a1, const void **a2)
{
  _DWORD *v2; // r13
  char *Pool2; // rbx
  unsigned int v6; // r13d
  int v7; // r12d
  unsigned int i; // esi
  _DWORD *v9; // r15
  char *v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  void *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  void *v16; // rax
  const void *v17; // r13
  const void *v18; // [rsp+30h] [rbp-68h]
  unsigned int v19; // [rsp+30h] [rbp-68h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *a2;
  Pool2 = (char *)ExAllocatePool2(256LL, 0x4000LL, 1114661697LL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = v2[1];
  v7 = 0;
LABEL_4:
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v7);
  if ( (int)OSReadRegValue(pszDest) >= 0 )
  {
    for ( i = 0; ; i += *((_DWORD *)v10 + 1) + 8 )
    {
      if ( i >= 0x4000 )
      {
        ++v7;
        goto LABEL_4;
      }
      v9 = *a2;
      v10 = &Pool2[i];
      v11 = *((_DWORD *)v10 + 1);
      v12 = *(_DWORD *)v10;
      if ( v11 )
      {
        v15 = v11 + v12;
        if ( v15 > v6 )
        {
          v19 = v15;
          v16 = (void *)ExAllocatePool2(64LL, v15, 1953522497LL);
          v17 = v16;
          if ( !v16 )
          {
LABEL_19:
            ExFreePoolWithTag(Pool2, 0);
            return 3221225626LL;
          }
          memmove(v16, *a2, (unsigned int)v9[1]);
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v17;
          v9 = v17;
          v6 = v19;
        }
        memmove((char *)v9 + *(unsigned int *)v10, v10 + 8, *((unsigned int *)v10 + 1));
      }
      else if ( v12 != v9[1] )
      {
        v6 = *(_DWORD *)v10;
        v13 = (void *)ExAllocatePool2(64LL, v12, 1953522497LL);
        v18 = v13;
        if ( !v13 )
          goto LABEL_19;
        v14 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 >= v9[1] )
          v14 = v9[1];
        memmove(v13, *a2, v14);
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v18;
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  return 0LL;
}
