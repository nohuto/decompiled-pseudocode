/*
 * XREFs of ACPIGetProcessorStatus @ 0x140034FAC
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x140034B40 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIGetProcessorStatus(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rcx
  __int64 v7; // r14
  int v8; // edi
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  char *v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rcx
  char *v16; // r8
  char v17; // al
  __int16 v18; // ax
  char v19; // al
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int16 v22; // ax
  const char *v23; // rcx
  __int16 v24; // ax

  v3 = 0;
  v5 = *(__int64 **)(a1 + 760);
  dword_140088AE0 = 0;
  v7 = 0LL;
  v8 = 15;
  if ( !v5 || !_bittest64((const signed __int64 *)(a1 + 8), 0x24u) )
    goto LABEL_3;
  v10 = *v5;
  if ( *(_WORD *)(*v5 + 66) != 12 )
  {
    v20 = AMLIGetNamedChild(v5, 1145656671);
    v7 = (__int64)v20;
    if ( !v20 )
      goto LABEL_4;
    v21 = *v20;
    v22 = *(_WORD *)(*v20 + 66);
    if ( v22 == 1 )
    {
      v11 = *(_DWORD *)(v21 + 80);
    }
    else
    {
      if ( v22 != 8 )
        goto LABEL_4;
      if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x2Eu) || (v23 = *(const char **)(a1 + 616)) == 0LL )
      {
        v3 = -1073741808;
        goto LABEL_45;
      }
      v11 = _strtoui64(v23, 0LL, 16);
    }
LABEL_10:
    *(_DWORD *)(a1 + 196) = v11;
    v12 = *((_QWORD *)AcpiInformation + 4);
    if ( v12 )
    {
      v13 = (char *)(v12 + 44);
      v14 = v12 + *(unsigned int *)(v12 + 4);
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)(v13 + 2) > v14 )
              goto LABEL_4;
            v15 = (unsigned __int8)v13[1];
            if ( (unsigned __int8)v15 < 2u || (unsigned __int64)&v13[v15] > v14 )
              goto LABEL_4;
            v16 = v13;
            v13 += v15;
            v17 = *v16;
            if ( *v16 )
              break;
            if ( (unsigned __int8)v15 >= 8u )
            {
              v18 = *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL);
              if ( (v18 == 12 || v18 == 6 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u))
                && (unsigned __int8)v16[2] == v11 )
              {
                v19 = v16[4];
LABEL_22:
                v8 = (v19 & 1) != 0 ? 0xF : 0;
                goto LABEL_5;
              }
            }
          }
          if ( v17 != 11 )
            break;
          if ( (unsigned __int8)v15 >= 0x28u )
          {
            v24 = *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL);
            if ( (v24 == 12 || v24 == 6 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u))
              && *((_DWORD *)v16 + 2) == v11 )
            {
              v19 = v16[12];
              goto LABEL_22;
            }
          }
        }
      }
      while ( v17 != 9
           || (unsigned __int8)v15 < 0x10u
           || *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL) != 6
           || !_bittest64((const signed __int64 *)(a1 + 8), 0x24u)
           || *((_DWORD *)v16 + 3) != v11 );
      if ( (v16[8] & 1) == 0 )
        goto LABEL_4;
      goto LABEL_5;
    }
    if ( !dword_140088AE0 )
    {
      dword_140088AE4 = v11;
      dword_140088AE0 = 1;
      goto LABEL_5;
    }
    if ( dword_140088AE4 == v11 )
    {
LABEL_5:
      if ( !v7 )
        goto LABEL_6;
LABEL_45:
      AMLIDereferenceHandleEx(v7);
      goto LABEL_6;
    }
LABEL_4:
    v8 = 0;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v10 + 96) )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(v10 + 96) + 8LL);
    goto LABEL_10;
  }
LABEL_3:
  v3 = -1073741808;
LABEL_6:
  result = v3;
  *a3 = v8;
  return result;
}
