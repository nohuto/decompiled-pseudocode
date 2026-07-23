/*
 * XREFs of IopAddCodeRegion @ 0x140590288
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     RtlULongLongSub @ 0x140473334 (RtlULongLongSub.c)
 *     IopValidateSectionSize @ 0x1404D1640 (IopValidateSectionSize.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall IopAddCodeRegion(__int64 a1, unsigned int a2, _DWORD *a3)
{
  ULONGLONG v3; // r12
  unsigned int v4; // edi
  char *v6; // rsi
  ULONGLONG v7; // r15
  char v8; // r11
  PVOID *v9; // r14
  __int64 v10; // rbx
  char *v11; // rbp
  unsigned int *v12; // rdx
  unsigned int *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // edi
  ULONGLONG pullResult[11]; // [rsp+20h] [rbp-58h] BYREF
  char v21; // [rsp+88h] [rbp+10h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 248);
  pullResult[0] = 0LL;
  v4 = a2;
  LODWORD(OutHeaders) = 4112;
  v23 = (a2 + 7) & 0xFFFFFFF8;
  v21 = 0;
  v6 = 0LL;
  v7 = -1LL;
  IopValidateSectionSize(v23, (unsigned int *)&OutHeaders);
  v9 = (PVOID *)PsLoadedModuleList;
  if ( (unsigned int)OutHeaders > 0x10 )
  {
    v10 = (unsigned int)((_DWORD)OutHeaders - 16);
    while ( v9 != &PsLoadedModuleList )
    {
      v11 = (char *)v9[6];
      if ( v3 >= (unsigned __int64)v11 && v3 < (unsigned __int64)&v11[*((unsigned int *)v9 + 38)] )
      {
        OutHeaders = 0LL;
        RtlImageNtHeaderEx(1u, v11, 0LL, &OutHeaders);
        if ( !OutHeaders )
          return v4;
        v12 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
        v13 = &v12[10 * OutHeaders->FileHeader.NumberOfSections];
        while ( 1 )
        {
          if ( v12 >= v13 )
          {
            v8 = v21;
            goto LABEL_15;
          }
          v6 = &v11[v12[3]];
          v7 = (ULONGLONG)&v6[v12[2]];
          if ( v3 >= (unsigned __int64)v6 && v3 < v7 )
            break;
          v12 += 10;
        }
        if ( (v12[9] & 0x2000000) != 0 )
          return v4;
        v8 = 1;
        v21 = 1;
      }
LABEL_15:
      v9 = (PVOID *)*v9;
    }
    if ( v8 )
    {
      v14 = (unsigned __int64)(unsigned int)v10 >> 1;
      if ( *(_QWORD *)(a1 + 248) - v14 + 1 >= (unsigned __int64)v6 )
        v6 = (char *)(*(_QWORD *)(a1 + 248) - v14 + 1);
      if ( (unsigned __int64)&v6[v10] <= v7
        || RtlULongLongSub(v7, (ULONGLONG)v6, pullResult) >= 0
        && (LODWORD(v10) = pullResult[0], pullResult[0] <= 0xFFFFFFFF) )
      {
        if ( (_DWORD)v10 )
        {
          a3[1038] |= 0x800u;
          v15 = v23;
          a3[2078] = v23;
          v16 = v15;
          a3[2079] = 1;
          v17 = (v15 + 23) & 0xFFFFFFF8;
          *(_QWORD *)((char *)a3 + v16) = v6;
          *(_DWORD *)((char *)a3 + v16 + 12) = v10;
          *(_DWORD *)((char *)a3 + v16 + 8) = v17;
          memmove((char *)a3 + v17, v6, (unsigned int)v10);
          return (unsigned int)v10 + v17;
        }
      }
    }
  }
  return v4;
}
