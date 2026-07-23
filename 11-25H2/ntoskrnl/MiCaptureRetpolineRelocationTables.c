/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x140944F04
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407E084C (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlValidateDynamicFixupRelocation @ 0x140400A18 (RtlValidateDynamicFixupRelocation.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiIsRetpolineEnabled @ 0x1404498D0 (MiIsRetpolineEnabled.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiFreeImageRetpolineContext @ 0x140943580 (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        char a6,
        __int64 a7)
{
  char *v9; // rbx
  PVOID v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rsi
  char *v14; // r15
  __int64 v15; // r13
  unsigned int v16; // eax
  int v17; // ebx
  __int64 *v19; // rbx
  void *Pool; // rax
  __int64 v21; // rax
  bool IsRetpolineEnabled; // al
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-58h] BYREF
  ULONG v25; // [rsp+24h] [rbp-54h] BYREF
  char *v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  char v31; // [rsp+A8h] [rbp+30h]

  v9 = a1;
  v26 = 0LL;
  v24 = 0;
  v31 = 0;
  v10 = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, &v25);
  if ( v10 )
  {
    v11 = (_DWORD)v10 - (_DWORD)v9;
    *(_DWORD *)a7 = v11;
    if ( v11 > a2 )
    {
LABEL_8:
      v17 = -1073741701;
LABEL_9:
      MiFreeImageRetpolineContext((_QWORD *)a7);
      return (unsigned int)v17;
    }
  }
  else
  {
    *(_DWORD *)a7 = 0;
  }
  if ( *a5 != 1 )
  {
    v17 = -1073741637;
    goto LABEL_9;
  }
  v12 = a4 + a5[1] + 8;
  v13 = (unsigned int)(a4 + 8);
  while ( (unsigned int)v13 < v12 )
  {
    if ( v13 + 12 > (unsigned __int64)v12 )
      goto LABEL_8;
    v14 = &v9[v13];
    v26 = &v9[v13];
    v27 = *(_QWORD *)&v9[v13];
    v15 = *(unsigned int *)&v9[v13 + 8];
    v16 = v13 + 12;
    if ( (int)v13 + 12 < (unsigned int)v13 )
      goto LABEL_8;
    v13 = v16 + (unsigned int)v15;
    if ( (unsigned int)v13 < v16 || (unsigned int)v13 > v12 )
      goto LABEL_8;
    v19 = 0LL;
    if ( v27 == 3 )
    {
      v19 = (__int64 *)(a7 + 8);
    }
    else
    {
      if ( v27 == 4 )
      {
        IsRetpolineEnabled = MiIsRetpolineEnabled();
        v23 = a7 + 16;
      }
      else
      {
        if ( v27 != 5 )
          goto LABEL_19;
        IsRetpolineEnabled = MiIsRetpolineEnabled();
        v23 = a7 + 24;
      }
      v19 = (__int64 *)(v23 & -(__int64)IsRetpolineEnabled);
    }
LABEL_19:
    if ( v19 )
    {
      v31 = 1;
      if ( *v19 )
        goto LABEL_8;
      Pool = (void *)MiAllocatePool(0x100uLL, v15 + 12, 1918003533);
      *v19 = (__int64)Pool;
      if ( !Pool )
      {
        v17 = -1073741670;
        goto LABEL_9;
      }
      memmove(Pool, v14, v15 + 12);
      v21 = *v19;
      *(_QWORD *)v21 = v27;
      *(_DWORD *)(v21 + 8) = v15;
      v17 = RtlValidateDynamicFixupRelocation(*v19, a2, a3, &v24);
      if ( v17 < 0 )
        goto LABEL_9;
      *(_DWORD *)(a7 + 4) += v24;
    }
    v9 = a1;
  }
  if ( !v31 )
  {
    v17 = -1073741637;
    goto LABEL_9;
  }
  return 0;
}
