/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9690
 * Callers:
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9568 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 * Callees:
 *     ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9BA0 (-KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextPhase(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  unsigned int v1; // edi
  unsigned __int8 v2; // bp
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // esi
  char v10; // r11
  unsigned __int8 v11; // dl
  char *v12; // r8
  __int64 v13; // r11
  __int64 v14; // r10
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // r8d
  unsigned __int8 v21; // dl
  unsigned int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // si
  __int64 v28; // r11
  __int64 v29; // r9
  unsigned __int8 v30; // cl
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // r11d
  char v37; // si
  unsigned __int8 v38; // dl
  char *v39; // r8
  int v40; // eax
  int v41; // eax
  char *v42; // rdx
  __int64 v43; // r8
  int v44; // eax
  char *v45; // rdx
  __int64 v46; // r8
  int v47; // eax
  int v48; // edx
  unsigned int v49; // ecx
  __int64 v50; // rcx

  v1 = 0;
  v2 = *((_BYTE *)a1 + 13) + 1;
  if ( v2 < 4u )
  {
    while ( 1 )
    {
      if ( v2 != 2 )
      {
        if ( v2 == 1 )
        {
          v4 = *(unsigned int *)a1;
          v5 = 0;
          *((_DWORD *)a1 + 1) = 0;
          if ( (_DWORD)v4 )
          {
            v42 = (char *)a1 + 92;
            v43 = v4;
            do
            {
              v44 = *((_DWORD *)v42 - 1) | v5;
              v42 += 48;
              *((_DWORD *)a1 + 1) = v44;
              v5 = *((_DWORD *)v42 - 12) | v44;
              *((_DWORD *)a1 + 1) = v5;
              --v43;
            }
            while ( v43 );
          }
          v6 = v5 & 0xFFFFFFFE;
          *((_DWORD *)a1 + 1) = v6;
          if ( v6 )
          {
            v7 = *((unsigned __int8 *)a1 + 9);
            _BitScanReverse((unsigned int *)&v8, v6);
            *((_BYTE *)a1 + 10) = v7;
            *((_BYTE *)a1 + 8) = v8;
            if ( ((*((_DWORD *)a1 + 12 * v7 + 22) | *((_DWORD *)a1 + 12 * v7 + 23)) & (1 << v8)) == 0 )
            {
              v9 = *(_DWORD *)a1;
              do
              {
                LOBYTE(v7) = v7 + 1;
                v10 = v7;
                *((_BYTE *)a1 + 10) = v7;
                if ( (unsigned __int8)v7 >= v9 )
                {
                  LOBYTE(v7) = 0;
                  *((_BYTE *)a1 + 10) = 0;
                  v10 = 0;
                }
              }
              while ( ((*((_DWORD *)a1 + 12 * (unsigned __int8)v7 + 22) | *((_DWORD *)a1 + 12 * (unsigned __int8)v7 + 23)) & (1 << v8)) == 0 );
              LOBYTE(v7) = v10;
            }
            v11 = 0;
            v12 = (char *)a1 + 48 * (unsigned __int8)v7 + 48;
            v13 = *(_QWORD *)v12;
            v14 = *((_QWORD *)v12 + 1);
            *((_BYTE *)a1 + 11) = 0;
            v15 = *((_DWORD *)v12 + 10);
            if ( _bittest(&v15, (unsigned __int8)v8) )
            {
              *((_BYTE *)a1 + 11) = 1;
              v11 = 1;
            }
            v16 = *((_DWORD *)v12 + 11);
            if ( _bittest(&v16, (unsigned __int8)v8) )
            {
              v11 |= 2u;
              *((_BYTE *)a1 + 11) = v11;
            }
            v17 = v11;
            if ( ((unsigned __int8)(v11 - 1) & v11) == 0 )
            {
LABEL_17:
              _BitScanForward((unsigned int *)&v18, v17);
              goto LABEL_18;
            }
LABEL_57:
            LOBYTE(v18) = !_bittest((const signed __int32 *)(v13 + 33756), (unsigned __int8)v8);
LABEL_18:
            *((_BYTE *)a1 + 12) = v18;
            if ( (_BYTE)v18 )
            {
              if ( (unsigned __int8)v18 != 1 )
              {
LABEL_22:
                *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 4);
                goto LABEL_38;
              }
              v19 = v14 + 16 * (*((unsigned __int8 *)a1 + 8) + 4LL);
            }
            else
            {
              v19 = v13 + 16 * (*((unsigned __int8 *)a1 + 8) + 2116LL);
            }
            *((_QWORD *)a1 + 4) = v19;
            goto LABEL_22;
          }
        }
        else if ( v2 == 3 )
        {
          v32 = *(unsigned int *)a1;
          v33 = 0;
          *((_DWORD *)a1 + 1) = 0;
          if ( (_DWORD)v32 )
          {
            v45 = (char *)a1 + 92;
            v46 = v32;
            do
            {
              v47 = *((_DWORD *)v45 - 1) | v33;
              v45 += 48;
              *((_DWORD *)a1 + 1) = v47;
              v33 = *((_DWORD *)v45 - 12) | v47;
              *((_DWORD *)a1 + 1) = v33;
              --v46;
            }
            while ( v46 );
          }
          v34 = v33 & 1;
          *((_DWORD *)a1 + 1) = v34;
          if ( v34 )
          {
            v35 = *((unsigned __int8 *)a1 + 9);
            _BitScanReverse((unsigned int *)&v8, v34);
            *((_BYTE *)a1 + 10) = v35;
            *((_BYTE *)a1 + 8) = v8;
            if ( ((*((_DWORD *)a1 + 12 * v35 + 22) | *((_DWORD *)a1 + 12 * v35 + 23)) & (1 << v8)) == 0 )
            {
              v36 = *(_DWORD *)a1;
              do
              {
                LOBYTE(v35) = v35 + 1;
                v37 = v35;
                *((_BYTE *)a1 + 10) = v35;
                if ( (unsigned __int8)v35 >= v36 )
                {
                  LOBYTE(v35) = 0;
                  *((_BYTE *)a1 + 10) = 0;
                  v37 = 0;
                }
              }
              while ( ((*((_DWORD *)a1 + 12 * (unsigned __int8)v35 + 22) | *((_DWORD *)a1
                                                                           + 12 * (unsigned __int8)v35
                                                                           + 23)) & (1 << v8)) == 0 );
              LOBYTE(v35) = v37;
            }
            v38 = 0;
            v39 = (char *)a1 + 48 * (unsigned __int8)v35 + 48;
            v13 = *(_QWORD *)v39;
            v14 = *((_QWORD *)v39 + 1);
            *((_BYTE *)a1 + 11) = 0;
            v40 = *((_DWORD *)v39 + 10);
            if ( _bittest(&v40, (unsigned __int8)v8) )
            {
              *((_BYTE *)a1 + 11) = 1;
              v38 = 1;
            }
            v41 = *((_DWORD *)v39 + 11);
            if ( _bittest(&v41, (unsigned __int8)v8) )
            {
              v38 |= 2u;
              *((_BYTE *)a1 + 11) = v38;
            }
            v17 = v38;
            if ( ((unsigned __int8)(v38 - 1) & v38) == 0 )
              goto LABEL_17;
            goto LABEL_57;
          }
        }
        goto LABEL_37;
      }
      v20 = *(_DWORD *)a1;
      v21 = 0;
      if ( *(_DWORD *)a1 )
        break;
LABEL_31:
      v26 = *((_BYTE *)a1 + 9);
      v27 = 0;
      v28 = 0LL;
      do
      {
        v29 = *((_QWORD *)a1 + 6 * v26 + 8);
        if ( v29 && (!v28 || *(_DWORD *)(v28 + 124) < *(_DWORD *)(v29 + 124)) )
        {
          v27 = v26;
          v28 = *((_QWORD *)a1 + 6 * v26 + 8);
        }
        v30 = 0;
        if ( (unsigned __int8)(v26 + 1) < v20 )
          v30 = v26 + 1;
        v26 = v30;
      }
      while ( v30 != *((_BYTE *)a1 + 9) );
      if ( v28 )
      {
        *((_BYTE *)a1 + 10) = v27;
        *((_QWORD *)a1 + 3) = v28;
        *((_QWORD *)a1 + 2) = v28;
        v48 = *(unsigned __int16 *)(v28 + 120);
        *((_DWORD *)a1 + 1) = v48;
        if ( *(_DWORD *)(v28 + 124) == *((_DWORD *)a1 + 12 * v27 + 20) )
        {
          v48 &= *((_DWORD *)a1 + 12 * v27 + 21);
          *((_DWORD *)a1 + 1) = v48;
        }
        if ( v48 || (int)KiAdvanceReadyQueueEnumeratorToNextScb(a1) >= 0 )
        {
          _BitScanReverse(&v49, *((_DWORD *)a1 + 1));
          *((_BYTE *)a1 + 8) = v49;
          v50 = *((_QWORD *)a1 + 2) + 16 * ((unsigned __int8)v49 + 9LL);
          *((_QWORD *)a1 + 4) = v50;
          *((_QWORD *)a1 + 5) = v50;
          goto LABEL_38;
        }
      }
LABEL_37:
      if ( ++v2 >= 4u )
        goto LABEL_38;
    }
    while ( 1 )
    {
      v22 = *((_DWORD *)a1 + 12 * v21 + 20);
      if ( v22 )
        break;
LABEL_30:
      v20 = *(_DWORD *)a1;
      if ( (unsigned int)++v21 >= *(_DWORD *)a1 )
        goto LABEL_31;
    }
    v23 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v21 + 6) + 33848LL);
    if ( (v23 & 1) != 0 )
    {
      if ( v23 == 1 )
      {
LABEL_28:
        v25 = 0LL;
LABEL_29:
        *((_QWORD *)a1 + 6 * v21 + 8) = v25;
        goto LABEL_30;
      }
      v24 = v23 ^ ((*((_QWORD *)a1 + 6 * v21 + 6) + 33840LL) | 1);
    }
    else
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v21 + 6) + 33848LL);
    }
    if ( v24 )
    {
      v25 = v24 - 88;
      if ( *(_DWORD *)(v25 + 124) <= v22 )
        goto LABEL_29;
    }
    goto LABEL_28;
  }
LABEL_38:
  *((_BYTE *)a1 + 13) = v2;
  if ( v2 == 4 )
    return (unsigned int)-2147483622;
  return v1;
}
