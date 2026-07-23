/*
 * XREFs of DbgUiConvertStateChangeStructureWorker @ 0x18010E664
 * Callers:
 *     DbgUiConvertStateChangeStructure @ 0x180115900 (DbgUiConvertStateChangeStructure.c)
 *     DbgUiConvertStateChangeStructureEx @ 0x18011A960 (DbgUiConvertStateChangeStructureEx.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall DbgUiConvertStateChangeStructureWorker(int *a1, __int64 a2, char a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  _OWORD *v12; // rax
  _QWORD *v13; // rdx
  int v15; // edx
  NTSTATUS InformationThread; // eax
  __int64 v17; // rcx
  __int16 v18; // di
  __int16 v19; // ax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  _OWORD ThreadInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-18h]
  int v24; // [rsp+58h] [rbp-10h]

  v23 = 0LL;
  v24 = 0;
  *(_DWORD *)(a2 + 4) = a1[2];
  *(_DWORD *)(a2 + 8) = a1[4];
  v4 = *a1;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  v5 = v4 - 2;
  if ( !v5 )
  {
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 16) = *((_QWORD *)a1 + 3);
    *(_QWORD *)(a2 + 32) = *((_QWORD *)a1 + 5);
    InformationThread = ZwQueryInformationThread(
                          *((HANDLE *)a1 + 3),
                          ThreadBasicInformation,
                          ThreadInformation,
                          0x30u,
                          0LL);
    v17 = *((_QWORD *)&ThreadInformation[0] + 1);
    if ( InformationThread < 0 )
      v17 = 0LL;
    *(_QWORD *)(a2 + 24) = v17;
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_DWORD *)a2 = 3;
    *(_QWORD *)(a2 + 24) = *((_QWORD *)a1 + 3);
    *(_QWORD *)(a2 + 32) = *((_QWORD *)a1 + 4);
    *(_QWORD *)(a2 + 16) = *((_QWORD *)a1 + 6);
    *(_QWORD *)(a2 + 40) = *((_QWORD *)a1 + 7);
    *(_DWORD *)(a2 + 48) = a1[16];
    *(_DWORD *)(a2 + 52) = a1[17];
    *(_QWORD *)(a2 + 64) = *((_QWORD *)a1 + 10);
    v20 = ZwQueryInformationThread(*((HANDLE *)a1 + 4), ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    v21 = *((_QWORD *)&ThreadInformation[0] + 1);
    *(_QWORD *)(a2 + 72) = 0LL;
    if ( v20 < 0 )
      v21 = 0LL;
    *(_WORD *)(a2 + 80) = 1;
    *(_QWORD *)(a2 + 56) = v21;
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_DWORD *)a2 = 4;
    goto LABEL_29;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_DWORD *)a2 = 5;
LABEL_29:
    *(_DWORD *)(a2 + 16) = a1[6];
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 )
  {
    v12 = a1 + 6;
    v13 = (_QWORD *)(a2 + 16);
    if ( a1[6] == 1073807370 )
    {
      v18 = 0;
      *(_DWORD *)a2 = 8;
      if ( a3 )
      {
        v18 = 1;
        *v13 = *((_QWORD *)a1 + 8);
        v19 = 2 * *((_WORD *)a1 + 28);
      }
      else
      {
        *v13 = *((_QWORD *)a1 + 10);
        v19 = *((_WORD *)a1 + 36);
      }
    }
    else
    {
      if ( *(_DWORD *)v12 != 1073807366 )
      {
        if ( *(_DWORD *)v12 == 1073807367 )
        {
          *(_DWORD *)a2 = 9;
          *(_DWORD *)(a2 + 20) = a1[16];
          *(_DWORD *)v13 = a1[14];
        }
        else
        {
          *(_DWORD *)a2 = 1;
          *(_OWORD *)v13 = *v12;
          *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 10);
          *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 14);
          *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 18);
          *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 22);
          *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 26);
          *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 30);
          *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 34);
          *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 38);
          *(_QWORD *)(a2 + 160) = *((_QWORD *)a1 + 21);
          *(_DWORD *)(a2 + 168) = a1[44];
        }
        return 0LL;
      }
      *(_DWORD *)a2 = 8;
      v18 = 0;
      *v13 = *((_QWORD *)a1 + 8);
      v19 = *((_WORD *)a1 + 28);
    }
    *(_WORD *)(a2 + 26) = v19;
    *(_WORD *)(a2 + 24) = v18;
    return 0LL;
  }
  v15 = v11 - 1;
  if ( !v15 )
  {
    *(_DWORD *)a2 = 6;
    *(_QWORD *)(a2 + 24) = *((_QWORD *)a1 + 4);
    *(_QWORD *)(a2 + 16) = *((_QWORD *)a1 + 3);
    *(_DWORD *)(a2 + 32) = a1[10];
    *(_DWORD *)(a2 + 36) = a1[11];
    *(_QWORD *)(a2 + 40) = *((_QWORD *)a1 + 6);
    *(_WORD *)(a2 + 48) = 1;
    return 0LL;
  }
  if ( v15 == 1 )
  {
    *(_DWORD *)a2 = 7;
    *(_QWORD *)(a2 + 16) = *((_QWORD *)a1 + 3);
    return 0LL;
  }
  return 3221225473LL;
}
