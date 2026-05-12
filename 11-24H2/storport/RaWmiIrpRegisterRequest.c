/*
 * XREFs of RaWmiIrpRegisterRequest @ 0x1401BBBA0
 * Callers:
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpRegisterRequest(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  __int64 v3; // r8
  unsigned int v5; // r12d
  NTSTATUS v6; // r14d
  char v7; // r15
  int *v8; // rbx
  char v9; // di
  int v10; // eax
  __int64 v11; // rax
  char v12; // di
  const void **DriverObjectExtension; // rax
  const void **v15; // r13
  unsigned __int64 v16; // rcx
  int v17; // ecx
  NTSTATUS v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // edi
  _WORD *v21; // rcx
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v30; // [rsp+68h] [rbp+10h]

  v2 = *(unsigned int **)(a2 + 24);
  v3 = a1;
  v5 = 0;
  v30 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = *(int **)(a1 + 64);
  v9 = 0;
  v10 = *v8;
  if ( *v8 == 1094997074 )
  {
    v7 = *((_BYTE *)v8 + 531);
    v30 = *((_QWORD *)v8 + 4);
    v12 = *((_BYTE *)v8 + 104) >> 1;
    goto LABEL_14;
  }
  if ( v10 == 1314275652 )
  {
    v7 = *((_BYTE *)v8 + 323);
    v30 = *((_QWORD *)v8 + 4);
    v12 = *((_BYTE *)v8 + 144) >> 2;
LABEL_14:
    v9 = v12 & 1;
    goto LABEL_15;
  }
  if ( v10 == 1431193940 )
  {
    v11 = *((_QWORD *)v8 + 3);
    v30 = a1;
    v7 = *(_BYTE *)(v11 + 531);
    v9 = (*(_BYTE *)(v11 + 104) & 2) != 0;
    if ( !*(_DWORD *)(a2 + 8) && (v8[488] & 1) != 0 && (*((_BYTE *)v8 + 506) & 8) == 0 && *((_QWORD *)v8 + 246) )
    {
      v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v8 + 490), 1u);
      if ( v6 < 0 )
        RtlFreeUnicodeString((PUNICODE_STRING)(v8 + 490));
      else
        *((_BYTE *)v8 + 506) |= 8u;
      v3 = a1;
    }
  }
LABEL_15:
  if ( *(_DWORD *)(a2 + 8) >= 2u )
    return 3221225485LL;
  DriverObjectExtension = (const void **)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(v3 + 8), DriverEntry);
  v15 = DriverObjectExtension;
  if ( !DriverObjectExtension )
    return 3221225473LL;
  if ( v7 && v9 )
  {
    v16 = *(unsigned int *)(a2 + 16);
    v5 = *((unsigned __int16 *)DriverObjectExtension + 20) + 2;
    if ( v16 <= (unsigned __int64)v5 + 4 )
      v17 = 4;
    else
      v17 = v16 - v5;
    *(_DWORD *)(a2 + 16) = v17;
    v18 = RaWmiPassToMiniPort(a1, 8, a2);
    v19 = *(_DWORD *)(a2 + 16);
    v6 = v18;
  }
  else
  {
    v19 = 0;
  }
  if ( v6 == -1073741789 )
  {
LABEL_40:
    *v2 += v5;
    v19 = 4;
    v6 = -1073741789;
    goto LABEL_41;
  }
  if ( v6 >= 0 )
  {
    if ( v19 != 4 )
    {
      if ( v19 )
      {
        v20 = v19;
        v21 = (_WORD *)((char *)v2 + v19);
        *v21 = *((_WORD *)v15 + 20);
        memmove(v21 + 1, v15[6], *((unsigned __int16 *)v15 + 20));
        v22 = *(unsigned int *)(a2 + 16);
        v23 = *(_QWORD *)(a2 + 24);
        if ( (unsigned __int64)(v2 + 6) <= v23 + v22 )
        {
          do
          {
            v24 = v2[4];
            if ( !v24 || (unsigned __int64)&v2[8 * v24 - 2] > v23 + (unsigned __int64)(unsigned int)v22 )
              break;
            v25 = 0;
            v2[2] = v20;
            do
            {
              v26 = 8LL * v25;
              v27 = v2[v26 + 10];
              if ( (v27 & 0xC) != 0 )
              {
                *(_QWORD *)&v2[v26 + 12] = v30;
                v2[v26 + 10] = v27 & 0xFFFFFFD3 | 0x20;
              }
              ++v25;
            }
            while ( v25 < v2[4] );
            v28 = v2[1];
            if ( !(_DWORD)v28 )
              break;
            v2 = (unsigned int *)((char *)v2 + v28);
            v23 = *(_QWORD *)(a2 + 24);
            v20 -= v28;
            LODWORD(v22) = *(_DWORD *)(a2 + 16);
          }
          while ( (unsigned __int64)(v2 + 6) <= v23 + (unsigned __int64)(unsigned int)v22 );
        }
        v19 += v5;
        *v2 = v19;
      }
      goto LABEL_41;
    }
    goto LABEL_40;
  }
LABEL_41:
  *(_DWORD *)(a2 + 16) = v19;
  return (unsigned int)v6;
}
