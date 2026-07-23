/*
 * XREFs of WmipTranslatePDOInstanceNames @ 0x140A4A4E8
 * Callers:
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IoGetDeviceInstanceName @ 0x14049B9DC (IoGetDeviceInstanceName.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall WmipTranslatePDOInstanceNames(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int *v4; // r11
  void *v5; // rbp
  int v6; // r15d
  unsigned int v7; // r13d
  void *v8; // r12
  char v9; // r14
  _WORD *v10; // rdi
  unsigned int v11; // r15d
  unsigned int *v12; // rsi
  __int128 v13; // kr00_16
  __int128 v14; // kr10_16
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned int v22; // eax
  unsigned int Length; // ecx
  unsigned int v24; // r14d
  wchar_t *Buffer; // rdx
  __int64 v26; // rbx
  unsigned int *v27; // rcx
  __int64 v28; // rax
  wchar_t *v29; // r12
  _DWORD *v30; // r14
  unsigned int v31; // ecx
  size_t v32; // rdi
  unsigned int v33; // ebx
  char *v34; // rbx
  unsigned __int16 v35; // ax
  char v36; // [rsp+20h] [rbp-78h]
  char v37; // [rsp+21h] [rbp-77h]
  unsigned int v38; // [rsp+24h] [rbp-74h]
  int v39; // [rsp+28h] [rbp-70h]
  unsigned int v40; // [rsp+2Ch] [rbp-6Ch]
  unsigned int *v41; // [rsp+30h] [rbp-68h]
  void *v42; // [rsp+38h] [rbp-60h]
  UNICODE_STRING Src; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(unsigned int **)(a1 + 24);
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 56);
  v7 = 0;
  v39 = 0;
  v8 = 0LL;
  v9 = 1;
  v10 = 0LL;
  Src = 0LL;
  v36 = 0;
  v11 = (v6 + 1) & 0xFFFFFFFE;
  v41 = v4;
  v38 = 0;
  v12 = v4;
  v37 = 1;
  v13 = WmipDataProviderPnPIdInstanceNamesGuid;
  v14 = WmipDataProviderPnpidGuid;
  do
  {
    v15 = 0;
    v40 = 0;
    if ( v12[4] )
    {
      v42 = 0LL;
      do
      {
        v16 = 8LL * v15;
        v17 = *(_QWORD *)&v12[v16 + 6] - v14;
        if ( !v17 )
          v17 = *(_QWORD *)&v12[v16 + 8] - *((_QWORD *)&v14 + 1);
        if ( !v17 )
          goto LABEL_48;
        v18 = *(_QWORD *)&v12[v16 + 6] - v13;
        if ( !v18 )
          v18 = *(_QWORD *)&v12[v16 + 8] - *((_QWORD *)&v13 + 1);
        if ( !v18 )
        {
LABEL_48:
          v9 = 0;
          v37 = 0;
          if ( v5 )
          {
            ObfDereferenceObject(v5);
            v5 = 0LL;
            v4 = v41;
            v13 = WmipDataProviderPnPIdInstanceNamesGuid;
            v14 = WmipDataProviderPnpidGuid;
          }
        }
        v19 = v12[v16 + 10];
        if ( (v19 & 0x20) == 0 )
          goto LABEL_11;
        if ( !v10 )
        {
          v27 = v4;
          if ( v4[1] )
          {
            v28 = v4[1];
            do
            {
              v27 = (unsigned int *)((char *)v27 + v28);
              v28 = v27[1];
            }
            while ( (_DWORD)v28 );
          }
          v10 = (_WORD *)((char *)v27 + ((*v27 + 1) & 0xFFFFFFFE));
          v7 = a3 + (_DWORD)v4 - (_DWORD)v10;
        }
        v22 = v12[v16 + 11];
        v8 = *(void **)&v12[v16 + 12];
        if ( v38 >= v22 )
          v22 = v38;
        v38 = v22;
        if ( v8 == v42 )
        {
          v12[v16 + 10] = v19 | 8;
          v12[v16 + 12] = v39;
        }
        else if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v8, &Src) >= 0 )
        {
          if ( v9 )
          {
            if ( !v5 )
            {
              v5 = v8;
              PsReferenceSiloContext(v8);
LABEL_25:
              Length = Src.Length;
              v24 = Src.Length + 4;
              v11 += v24;
              if ( v36 || v24 > v7 )
              {
                v36 = 1;
              }
              else
              {
                v12[v16 + 10] |= 8u;
                Buffer = Src.Buffer;
                v12[v16 + 12] = (_DWORD)v10 - (_DWORD)v12;
                v39 = (_DWORD)v10 - (_DWORD)v12;
                v26 = Length;
                v42 = v8;
                *v10 = Length + 2;
                memmove(v10 + 1, Buffer, Length);
                *(_WORD *)((char *)v10 + v26 + 2) = 95;
                v10 = (_WORD *)((char *)v10 + v26 + 4);
                v7 -= v24;
              }
              if ( Src.Buffer )
              {
                ExFreePool(Src.Buffer);
                Src = 0LL;
              }
              goto LABEL_30;
            }
            if ( v5 == v8 )
              goto LABEL_25;
          }
          v37 = 0;
          if ( v5 )
          {
            ObfDereferenceObject(v5);
            v5 = 0LL;
          }
          goto LABEL_25;
        }
LABEL_30:
        if ( a2 == 11 )
          ObfDereferenceObject(v8);
        v13 = WmipDataProviderPnPIdInstanceNamesGuid;
        v14 = WmipDataProviderPnpidGuid;
LABEL_11:
        v4 = v41;
        v15 = v40 + 1;
        v9 = v37;
        v40 = v15;
      }
      while ( v15 < v12[4] );
    }
    v20 = v12[1];
    v12 = (unsigned int *)((char *)v12 + v20);
  }
  while ( (_DWORD)v20 );
  if ( v9 && v5 )
  {
    if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v8, &Src) >= 0 )
    {
      v29 = Src.Buffer;
      v30 = (_DWORD *)(((unsigned __int64)v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v31 = (((_DWORD)v10 + 7) & 0xFFFFFFF8) - (_DWORD)v10;
      v32 = Src.Length;
      v33 = 2 * Src.Length + 96;
      v11 += v31 + v33;
      if ( v36 || v33 > v7 - v31 )
      {
        v36 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        PsReferenceSiloContext(v5);
        *(_QWORD *)(a4 + 24) = v5;
        *(_DWORD *)(a4 + 52) = v38;
        v12[1] = (_DWORD)v30 - (_DWORD)v12;
        memset_0(v30, 0, 0x58uLL);
        *v30 = v33;
        v30[4] = 2;
        v30[10] = 40;
        v34 = (char *)v30 + 90;
        v30[11] = v38;
        v30[12] = 88;
        *(_OWORD *)(v30 + 6) = WmipDataProviderPnpidGuid;
        *((_WORD *)v30 + 44) = v32 + 2;
        memmove((char *)v30 + 90, v29, v32);
        *(_WORD *)&v34[v32] = 95;
        v30[18] = 4;
        v30[19] = 1;
        v30[20] = v32 + 92;
        v35 = Src.Length;
        *(_OWORD *)(v30 + 14) = WmipDataProviderPnPIdInstanceNamesGuid;
        *(_WORD *)&v34[v32 + 2] = v35;
        memmove((char *)v30 + v32 + 94, v29, v32);
      }
      if ( v29 )
        ExFreePool(v29);
    }
    ObfDereferenceObject(v5);
  }
  *v41 = v11;
  result = 4LL;
  if ( !v36 )
    result = v11;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
