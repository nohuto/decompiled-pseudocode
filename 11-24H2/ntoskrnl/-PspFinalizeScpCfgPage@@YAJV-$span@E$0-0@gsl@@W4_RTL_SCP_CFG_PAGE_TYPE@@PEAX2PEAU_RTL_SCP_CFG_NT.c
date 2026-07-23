/*
 * XREFs of ?PspFinalizeScpCfgPage@@YAJV?$span@E$0?0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@EK@Z @ 0x140C3826C
 * Callers:
 *     PsInitializeScpCfgPages @ 0x140C386CC (PsInitializeScpCfgPages.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall PspFinalizeScpCfgPage(gsl::details *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int128 v5; // xmm0
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-28h]

  v5 = *(_OWORD *)a1;
  v18 = *(_OWORD *)a1;
  if ( *(_QWORD *)a1 < 0x18uLL )
  {
    gsl::details::terminate(a1, a2);
    __debugbreak();
  }
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    v11 = (unsigned int)(**((_DWORD **)&v18 + 1) + 2);
    if ( (unsigned __int64)v5 < 8 )
      return 3221225485LL;
    if ( (__int64)v5 - 8 < v11 )
      return 3221225485LL;
    if ( !(v11 + *((_QWORD *)&v5 + 1)) )
      return 3221225485LL;
    *(_QWORD *)(v11 + *((_QWORD *)&v5 + 1)) = a3;
    v12 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v18 + 1) + 4LL) + 2);
    if ( (__int64)v5 - 8 < v12 )
      return 3221225485LL;
    if ( !(v12 + *((_QWORD *)&v5 + 1)) )
      return 3221225485LL;
    *(_QWORD *)(v12 + *((_QWORD *)&v5 + 1)) = a3;
    v13 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL) + 2);
    if ( (__int64)v5 - 8 < v13 )
      return 3221225485LL;
    if ( !(v13 + *((_QWORD *)&v5 + 1)) )
      return 3221225485LL;
    *(_QWORD *)(v13 + *((_QWORD *)&v5 + 1)) = a3;
    v14 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v18 + 1) + 12LL) + 2);
    if ( (__int64)v5 - 8 < v14 || !(v14 + *((_QWORD *)&v5 + 1)) )
      return 3221225485LL;
    *(_QWORD *)(v14 + *((_QWORD *)&v5 + 1)) = a3;
    v10 = *(_DWORD *)(*((_QWORD *)&v18 + 1) + 16LL);
    v9 = a5[12];
    goto LABEL_29;
  }
  if ( !(_DWORD)a2 )
    return 0LL;
  if ( (_DWORD)a2 == 3 )
  {
    v6 = (unsigned int)(**((_DWORD **)&v18 + 1) + 2);
    if ( (unsigned __int64)v5 >= 8 && (__int64)v5 - 8 >= v6 )
    {
      if ( v6 + *((_QWORD *)&v5 + 1) )
      {
        *(_QWORD *)(v6 + *((_QWORD *)&v5 + 1)) = a5[8];
        v7 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v18 + 1) + 4LL) + 2);
        if ( (__int64)v5 - 8 >= v7 )
        {
          if ( v7 + *((_QWORD *)&v5 + 1) )
          {
            *(_QWORD *)(v7 + *((_QWORD *)&v5 + 1)) = a5[9];
            v8 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL) + 2);
            if ( (__int64)v5 - 8 >= v8 && v8 + *((_QWORD *)&v5 + 1) )
            {
              *(_QWORD *)(v8 + *((_QWORD *)&v5 + 1)) = a5[10];
              v9 = a5[11];
              v10 = *(_DWORD *)(*((_QWORD *)&v18 + 1) + 12LL);
LABEL_29:
              v15 = (unsigned int)(v10 + 2);
              if ( (__int64)v5 - 8 >= v15 )
              {
                v16 = (_QWORD *)(*((_QWORD *)&v5 + 1) + v15);
                if ( v16 )
                {
                  *v16 = v9;
                  return 0LL;
                }
              }
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
