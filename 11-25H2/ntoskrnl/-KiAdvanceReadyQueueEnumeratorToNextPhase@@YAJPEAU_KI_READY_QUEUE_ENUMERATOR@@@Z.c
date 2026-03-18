/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403530B0
 * Callers:
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140352F90 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 * Callees:
 *     ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403535BC (-KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextPhase(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  unsigned __int8 v1; // si
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v8; // edi
  char v9; // r11
  unsigned __int8 v10; // dl
  char *v11; // r8
  __int64 v12; // r11
  __int64 v13; // r10
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned __int8 v20; // dl
  unsigned int v21; // r9d
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // di
  __int64 v27; // r11
  __int64 v28; // r9
  unsigned __int8 v29; // cl
  __int64 result; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned int v35; // r11d
  char v36; // di
  unsigned __int8 v37; // dl
  char *v38; // r8
  int v39; // eax
  int v40; // eax
  char *v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  char *v44; // rdx
  __int64 v45; // r8
  int v46; // eax
  int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // rcx

  v1 = *((_BYTE *)a1 + 13) + 1;
  if ( v1 >= 4u )
    goto LABEL_38;
  while ( 1 )
  {
    if ( v1 != 2 )
    {
      if ( v1 == 1 )
      {
        v3 = *(unsigned int *)a1;
        v4 = 0;
        *((_DWORD *)a1 + 1) = 0;
        if ( (_DWORD)v3 )
        {
          v41 = (char *)a1 + 92;
          v42 = v3;
          do
          {
            v43 = *((_DWORD *)v41 - 1) | v4;
            v41 += 48;
            *((_DWORD *)a1 + 1) = v43;
            v4 = *((_DWORD *)v41 - 12) | v43;
            *((_DWORD *)a1 + 1) = v4;
            --v42;
          }
          while ( v42 );
        }
        v5 = v4 & 0xFFFFFFFE;
        *((_DWORD *)a1 + 1) = v5;
        if ( v5 )
        {
          v6 = *((unsigned __int8 *)a1 + 9);
          _BitScanReverse((unsigned int *)&v7, v5);
          *((_BYTE *)a1 + 10) = v6;
          *((_BYTE *)a1 + 8) = v7;
          if ( ((*((_DWORD *)a1 + 12 * v6 + 22) | *((_DWORD *)a1 + 12 * v6 + 23)) & (1 << v7)) == 0 )
          {
            v8 = *(_DWORD *)a1;
            do
            {
              LOBYTE(v6) = v6 + 1;
              v9 = v6;
              *((_BYTE *)a1 + 10) = v6;
              if ( (unsigned __int8)v6 >= v8 )
              {
                LOBYTE(v6) = 0;
                *((_BYTE *)a1 + 10) = 0;
                v9 = 0;
              }
            }
            while ( ((*((_DWORD *)a1 + 12 * (unsigned __int8)v6 + 22) | *((_DWORD *)a1 + 12 * (unsigned __int8)v6 + 23)) & (1 << v7)) == 0 );
            LOBYTE(v6) = v9;
          }
          v10 = 0;
          v11 = (char *)a1 + 48 * (unsigned __int8)v6 + 48;
          v12 = *(_QWORD *)v11;
          v13 = *((_QWORD *)v11 + 1);
          *((_BYTE *)a1 + 11) = 0;
          v14 = *((_DWORD *)v11 + 10);
          if ( _bittest(&v14, (unsigned __int8)v7) )
          {
            *((_BYTE *)a1 + 11) = 1;
            v10 = 1;
          }
          v15 = *((_DWORD *)v11 + 11);
          if ( _bittest(&v15, (unsigned __int8)v7) )
          {
            v10 |= 2u;
            *((_BYTE *)a1 + 11) = v10;
          }
          v16 = v10;
          if ( ((unsigned __int8)(v10 - 1) & v10) == 0 )
          {
LABEL_17:
            _BitScanForward((unsigned int *)&v17, v16);
            goto LABEL_18;
          }
LABEL_57:
          LOBYTE(v17) = !_bittest((const signed __int32 *)(v12 + 33756), (unsigned __int8)v7);
LABEL_18:
          *((_BYTE *)a1 + 12) = v17;
          if ( (_BYTE)v17 )
          {
            if ( (unsigned __int8)v17 != 1 )
            {
LABEL_22:
              *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 4);
              goto LABEL_38;
            }
            v18 = v13 + 16 * (*((unsigned __int8 *)a1 + 8) + 4LL);
          }
          else
          {
            v18 = v12 + 16 * (*((unsigned __int8 *)a1 + 8) + 2116LL);
          }
          *((_QWORD *)a1 + 4) = v18;
          goto LABEL_22;
        }
      }
      else if ( v1 == 3 )
      {
        v31 = *(unsigned int *)a1;
        v32 = 0;
        *((_DWORD *)a1 + 1) = 0;
        if ( (_DWORD)v31 )
        {
          v44 = (char *)a1 + 92;
          v45 = v31;
          do
          {
            v46 = *((_DWORD *)v44 - 1) | v32;
            v44 += 48;
            *((_DWORD *)a1 + 1) = v46;
            v32 = *((_DWORD *)v44 - 12) | v46;
            *((_DWORD *)a1 + 1) = v32;
            --v45;
          }
          while ( v45 );
        }
        v33 = v32 & 1;
        *((_DWORD *)a1 + 1) = v33;
        if ( v33 )
        {
          v34 = *((unsigned __int8 *)a1 + 9);
          _BitScanReverse((unsigned int *)&v7, v33);
          *((_BYTE *)a1 + 10) = v34;
          *((_BYTE *)a1 + 8) = v7;
          if ( ((*((_DWORD *)a1 + 12 * v34 + 22) | *((_DWORD *)a1 + 12 * v34 + 23)) & (1 << v7)) == 0 )
          {
            v35 = *(_DWORD *)a1;
            do
            {
              LOBYTE(v34) = v34 + 1;
              v36 = v34;
              *((_BYTE *)a1 + 10) = v34;
              if ( (unsigned __int8)v34 >= v35 )
              {
                LOBYTE(v34) = 0;
                *((_BYTE *)a1 + 10) = 0;
                v36 = 0;
              }
            }
            while ( ((*((_DWORD *)a1 + 12 * (unsigned __int8)v34 + 22) | *((_DWORD *)a1 + 12 * (unsigned __int8)v34 + 23)) & (1 << v7)) == 0 );
            LOBYTE(v34) = v36;
          }
          v37 = 0;
          v38 = (char *)a1 + 48 * (unsigned __int8)v34 + 48;
          v12 = *(_QWORD *)v38;
          v13 = *((_QWORD *)v38 + 1);
          *((_BYTE *)a1 + 11) = 0;
          v39 = *((_DWORD *)v38 + 10);
          if ( _bittest(&v39, (unsigned __int8)v7) )
          {
            *((_BYTE *)a1 + 11) = 1;
            v37 = 1;
          }
          v40 = *((_DWORD *)v38 + 11);
          if ( _bittest(&v40, (unsigned __int8)v7) )
          {
            v37 |= 2u;
            *((_BYTE *)a1 + 11) = v37;
          }
          v16 = v37;
          if ( ((unsigned __int8)(v37 - 1) & v37) == 0 )
            goto LABEL_17;
          goto LABEL_57;
        }
      }
      goto LABEL_37;
    }
    v19 = *(_DWORD *)a1;
    v20 = 0;
    if ( *(_DWORD *)a1 )
    {
      while ( 1 )
      {
        v21 = *((_DWORD *)a1 + 12 * v20 + 20);
        if ( v21 )
          break;
LABEL_30:
        v19 = *(_DWORD *)a1;
        if ( (unsigned int)++v20 >= *(_DWORD *)a1 )
          goto LABEL_31;
      }
      v22 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v20 + 6) + 33848LL);
      if ( (v22 & 1) != 0 )
      {
        if ( v22 == 1 )
        {
LABEL_28:
          v24 = 0LL;
LABEL_29:
          *((_QWORD *)a1 + 6 * v20 + 8) = v24;
          goto LABEL_30;
        }
        v23 = v22 ^ ((*((_QWORD *)a1 + 6 * v20 + 6) + 33840LL) | 1);
      }
      else
      {
        v23 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v20 + 6) + 33848LL);
      }
      if ( v23 )
      {
        v24 = v23 - 88;
        if ( *(_DWORD *)(v24 + 124) <= v21 )
          goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_31:
    v25 = *((_BYTE *)a1 + 9);
    v26 = 0;
    v27 = 0LL;
    do
    {
      v28 = *((_QWORD *)a1 + 6 * v25 + 8);
      if ( v28 && (!v27 || *(_DWORD *)(v27 + 124) < *(_DWORD *)(v28 + 124)) )
      {
        v26 = v25;
        v27 = *((_QWORD *)a1 + 6 * v25 + 8);
      }
      v29 = 0;
      if ( (unsigned __int8)(v25 + 1) < v19 )
        v29 = v25 + 1;
      v25 = v29;
    }
    while ( v29 != *((_BYTE *)a1 + 9) );
    if ( v27 )
    {
      *((_BYTE *)a1 + 10) = v26;
      *((_QWORD *)a1 + 3) = v27;
      *((_QWORD *)a1 + 2) = v27;
      v47 = *(unsigned __int16 *)(v27 + 120);
      *((_DWORD *)a1 + 1) = v47;
      if ( *(_DWORD *)(v27 + 124) == *((_DWORD *)a1 + 12 * v26 + 20) )
      {
        v47 &= *((_DWORD *)a1 + 12 * v26 + 21);
        *((_DWORD *)a1 + 1) = v47;
      }
      if ( v47 || (int)KiAdvanceReadyQueueEnumeratorToNextScb(a1) >= 0 )
        break;
    }
LABEL_37:
    if ( ++v1 >= 4u )
      goto LABEL_38;
  }
  _BitScanReverse(&v48, *((_DWORD *)a1 + 1));
  *((_BYTE *)a1 + 8) = v48;
  v49 = *((_QWORD *)a1 + 2) + 16 * ((unsigned __int8)v48 + 9LL);
  *((_QWORD *)a1 + 4) = v49;
  *((_QWORD *)a1 + 5) = v49;
LABEL_38:
  *((_BYTE *)a1 + 13) = v1;
  result = 2147483674LL;
  if ( v1 != 4 )
    return 0LL;
  return result;
}
