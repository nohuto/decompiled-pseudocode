/*
 * XREFs of CmpInitializeActualFileSizes @ 0x14096A314
 * Callers:
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 * Callees:
 *     CmpGetFileSize @ 0x14096B3AC (CmpGetFileSize.c)
 *     CmpLogFailureToGetFileSize @ 0x14096BDD8 (CmpLogFailureToGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualFileSizes(__int64 a1, _DWORD *a2)
{
  int FileSize; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0LL;
  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 1544), &v19);
  v6 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v5, 0LL, (unsigned int)FileSize);
  }
  else
  {
    v7 = v19;
    *(_QWORD *)(a1 + 1800) = v19;
    if ( v7 )
    {
      if ( v7 > 2147479552 )
        *(_QWORD *)(a1 + 1800) = 2147479552LL;
    }
    else
    {
      *(_QWORD *)(a1 + 1800) = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096);
    }
    if ( a2 )
      *a2 = *(_DWORD *)(a1 + 1800);
    v8 = *(_DWORD *)(a1 + 168);
    if ( v8 == 1 )
    {
      v16 = CmpGetFileSize(*(_QWORD *)(a1 + 1552), &v19);
      if ( v16 < 0 )
      {
        CmpLogFailureToGetFileSize(v17, 1LL, (unsigned int)v16);
        v18 = 0LL;
      }
      else
      {
        v18 = v19;
      }
      *(_QWORD *)(a1 + 1808) = v18;
    }
    else if ( (unsigned int)(v8 - 4) <= 1 )
    {
      v9 = CmpGetFileSize(*(_QWORD *)(a1 + 1576), &v19);
      if ( v9 < 0 )
      {
        CmpLogFailureToGetFileSize(v10, 4LL, (unsigned int)v9);
        v11 = 0LL;
        v19 = 0LL;
      }
      else
      {
        v11 = v19;
      }
      *(_QWORD *)(a1 + 1808) = v11;
      v12 = CmpGetFileSize(*(_QWORD *)(a1 + 1584), &v19);
      if ( v12 < 0 )
      {
        CmpLogFailureToGetFileSize(v13, 5LL, (unsigned int)v12);
        v14 = 0LL;
      }
      else
      {
        v14 = v19;
      }
      *(_QWORD *)(a1 + 1816) = v14;
    }
    return 0;
  }
  return v6;
}
