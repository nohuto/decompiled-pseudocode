/*
 * XREFs of cParseFontResources @ 0x1401FD82C
 * Callers:
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1401FD678 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?pvFindResource@@YAPEAXPEAX0HHPEAK@Z @ 0x1401D3838 (-pvFindResource@@YAPEAXPEAX0HHPEAK@Z.c)
 */

__int64 __fastcall cParseFontResources(__int64 a1, _QWORD *a2, _QWORD *a3, PVOID *a4)
{
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // edi
  __int64 *v11; // rax
  unsigned __int16 *v12; // r12
  signed int i; // r14d
  __int64 Resource; // rax
  __int64 *v15; // rdx
  unsigned int v17[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-60h]
  unsigned __int16 *v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h]
  __int64 *v22; // [rsp+70h] [rbp-48h]

  v5 = a3;
  v6 = a2;
  v18 = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  v8 = a1 + 16;
  v21 = a1 + 16;
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)v9 == 23117 && *(_DWORD *)(v9 + 60) > *(_DWORD *)(a1 + 24) )
    return 0LL;
  if ( (int)LdrResFindResourceDirectory(v9 | 1, 8LL, 0LL, &v18, 0LL, 0LL, 0) < 0 )
    return 0LL;
  v10 = *(unsigned __int16 *)(v18 + 14);
  if ( !*(_WORD *)(v18 + 14) )
    return 0LL;
  if ( a4 )
  {
    v11 = (__int64 *)EngAllocMem(1u, 8 * v10, 0x64666D42u);
    v19 = v11;
    *a4 = v11;
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v18 + 16);
      for ( i = 0; ; ++i )
      {
        v20 = v12;
        v17[1] = i;
        if ( i >= v10 )
          break;
        v17[0] = 0;
        Resource = pvFindResource(
                     (void *)(*(_QWORD *)v8 + 1LL),
                     *(_QWORD *)v8 + *(unsigned int *)(a1 + 24),
                     *v12,
                     8,
                     v17);
        v15 = v19;
        *v19 = Resource;
        v19 = v15 + 1;
        v22 = v15 + 1;
        if ( !Resource )
        {
          v10 = 0;
          v17[2] = 0;
          break;
        }
        v12 += 4;
      }
      v5 = a3;
      v6 = a2;
      goto LABEL_13;
    }
    return 0LL;
  }
LABEL_13:
  if ( v10 <= 0 )
  {
    if ( a4 )
    {
      EngFreeMem(*a4);
      *a4 = 0LL;
    }
  }
  else
  {
    *v6 = *(_QWORD *)v8;
    *v5 = *(unsigned int *)(a1 + 24);
  }
  return (unsigned int)v10;
}
