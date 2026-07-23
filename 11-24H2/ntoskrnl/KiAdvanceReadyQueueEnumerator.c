/*
 * XREFs of KiAdvanceReadyQueueEnumerator @ 0x1402D9050
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9568 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9BA0 (-KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumerator(
        struct _KI_READY_QUEUE_ENUMERATOR *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  char v5; // al
  char v10; // si
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // edi
  char v17; // r11
  unsigned __int8 v18; // dl
  char *v19; // r8
  __int64 v20; // r11
  __int64 v21; // r10
  int v22; // eax
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // r8d
  unsigned __int8 v28; // dl
  unsigned int v29; // r9d
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // di
  __int64 v35; // r11
  __int64 v36; // r9
  unsigned __int8 v37; // cl
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 result; // rax
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // r8
  unsigned int v50; // r11d
  char v51; // di
  unsigned __int8 v52; // dl
  char *v53; // r8
  int v54; // eax
  int v55; // eax
  char *v56; // rdx
  __int64 v57; // r8
  int v58; // eax
  char *v59; // rdx
  __int64 v60; // r8
  int v61; // eax
  int v62; // edx
  unsigned int v63; // ecx
  __int64 v64; // rcx

  v5 = *((_BYTE *)a1 + 13);
  if ( v5 == 4 )
    return 2147483674LL;
  if ( v5 )
    goto LABEL_41;
  v10 = 1;
  while ( 1 )
  {
    if ( v10 != 2 )
    {
      if ( v10 == 1 )
      {
        v11 = *(unsigned int *)a1;
        v12 = 0;
        *((_DWORD *)a1 + 1) = 0;
        if ( (_DWORD)v11 )
        {
          v56 = (char *)a1 + 92;
          v57 = v11;
          do
          {
            v58 = *((_DWORD *)v56 - 1) | v12;
            v56 += 48;
            *((_DWORD *)a1 + 1) = v58;
            v12 = *((_DWORD *)v56 - 12) | v58;
            *((_DWORD *)a1 + 1) = v12;
            --v57;
          }
          while ( v57 );
        }
        v13 = v12 & 0xFFFFFFFE;
        *((_DWORD *)a1 + 1) = v13;
        if ( v13 )
        {
          v14 = *((unsigned __int8 *)a1 + 9);
          _BitScanReverse((unsigned int *)&v15, v13);
          *((_BYTE *)a1 + 10) = v14;
          *((_BYTE *)a1 + 8) = v15;
          if ( ((*((_DWORD *)a1 + 12 * v14 + 22) | *((_DWORD *)a1 + 12 * v14 + 23)) & (1 << v15)) == 0 )
          {
            v16 = *(_DWORD *)a1;
            do
            {
              LOBYTE(v14) = v14 + 1;
              v17 = v14;
              *((_BYTE *)a1 + 10) = v14;
              if ( (unsigned __int8)v14 >= v16 )
              {
                LOBYTE(v14) = 0;
                *((_BYTE *)a1 + 10) = 0;
                v17 = 0;
              }
            }
            while ( ((*((_DWORD *)a1 + 12 * (unsigned __int8)v14 + 22) | *((_DWORD *)a1 + 12 * (unsigned __int8)v14 + 23)) & (1 << v15)) == 0 );
            LOBYTE(v14) = v17;
          }
          v18 = 0;
          v19 = (char *)a1 + 48 * (unsigned __int8)v14 + 48;
          v20 = *(_QWORD *)v19;
          v21 = *((_QWORD *)v19 + 1);
          *((_BYTE *)a1 + 11) = 0;
          v22 = *((_DWORD *)v19 + 10);
          if ( _bittest(&v22, (unsigned __int8)v15) )
          {
            *((_BYTE *)a1 + 11) = 1;
            v18 = 1;
          }
          v23 = *((_DWORD *)v19 + 11);
          if ( _bittest(&v23, (unsigned __int8)v15) )
          {
            v18 |= 2u;
            *((_BYTE *)a1 + 11) = v18;
          }
          v24 = v18;
          if ( ((unsigned __int8)(v18 - 1) & v18) == 0 )
          {
LABEL_19:
            _BitScanForward((unsigned int *)&v25, v24);
            goto LABEL_20;
          }
LABEL_63:
          LOBYTE(v25) = !_bittest((const signed __int32 *)(v20 + 33756), (unsigned __int8)v15);
LABEL_20:
          *((_BYTE *)a1 + 12) = v25;
          if ( (_BYTE)v25 )
          {
            if ( (unsigned __int8)v25 != 1 )
            {
LABEL_24:
              *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 4);
              goto LABEL_40;
            }
            v26 = v21 + 16 * (*((unsigned __int8 *)a1 + 8) + 4LL);
          }
          else
          {
            v26 = v20 + 16 * (*((unsigned __int8 *)a1 + 8) + 2116LL);
          }
          *((_QWORD *)a1 + 4) = v26;
          goto LABEL_24;
        }
      }
      else if ( v10 == 3 )
      {
        v46 = *(unsigned int *)a1;
        v47 = 0;
        *((_DWORD *)a1 + 1) = 0;
        if ( (_DWORD)v46 )
        {
          v59 = (char *)a1 + 92;
          v60 = v46;
          do
          {
            v61 = *((_DWORD *)v59 - 1) | v47;
            v59 += 48;
            *((_DWORD *)a1 + 1) = v61;
            v47 = *((_DWORD *)v59 - 12) | v61;
            *((_DWORD *)a1 + 1) = v47;
            --v60;
          }
          while ( v60 );
        }
        v48 = v47 & 1;
        *((_DWORD *)a1 + 1) = v48;
        if ( v48 )
        {
          v49 = *((unsigned __int8 *)a1 + 9);
          _BitScanReverse((unsigned int *)&v15, v48);
          *((_BYTE *)a1 + 10) = v49;
          *((_BYTE *)a1 + 8) = v15;
          if ( ((*((_DWORD *)a1 + 12 * v49 + 22) | *((_DWORD *)a1 + 12 * v49 + 23)) & (1 << v15)) == 0 )
          {
            v50 = *(_DWORD *)a1;
            do
            {
              LOBYTE(v49) = v49 + 1;
              v51 = v49;
              *((_BYTE *)a1 + 10) = v49;
              if ( (unsigned __int8)v49 >= v50 )
              {
                LOBYTE(v49) = 0;
                *((_BYTE *)a1 + 10) = 0;
                v51 = 0;
              }
            }
            while ( ((*((_DWORD *)a1 + 12 * (unsigned __int8)v49 + 22) | *((_DWORD *)a1 + 12 * (unsigned __int8)v49 + 23)) & (1 << v15)) == 0 );
            LOBYTE(v49) = v51;
          }
          v52 = 0;
          v53 = (char *)a1 + 48 * (unsigned __int8)v49 + 48;
          v20 = *(_QWORD *)v53;
          v21 = *((_QWORD *)v53 + 1);
          *((_BYTE *)a1 + 11) = 0;
          v54 = *((_DWORD *)v53 + 10);
          if ( _bittest(&v54, (unsigned __int8)v15) )
          {
            *((_BYTE *)a1 + 11) = 1;
            v52 = 1;
          }
          v55 = *((_DWORD *)v53 + 11);
          if ( _bittest(&v55, (unsigned __int8)v15) )
          {
            v52 |= 2u;
            *((_BYTE *)a1 + 11) = v52;
          }
          v24 = v52;
          if ( ((unsigned __int8)(v52 - 1) & v52) == 0 )
            goto LABEL_19;
          goto LABEL_63;
        }
      }
      goto LABEL_39;
    }
    v27 = *(_DWORD *)a1;
    v28 = 0;
    if ( *(_DWORD *)a1 )
    {
      while ( 1 )
      {
        v29 = *((_DWORD *)a1 + 12 * v28 + 20);
        if ( v29 )
          break;
LABEL_32:
        v27 = *(_DWORD *)a1;
        if ( (unsigned int)++v28 >= *(_DWORD *)a1 )
          goto LABEL_33;
      }
      v30 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v28 + 6) + 33848LL);
      if ( (v30 & 1) != 0 )
      {
        if ( v30 == 1 )
        {
LABEL_30:
          v32 = 0LL;
LABEL_31:
          *((_QWORD *)a1 + 6 * v28 + 8) = v32;
          goto LABEL_32;
        }
        v31 = v30 ^ ((*((_QWORD *)a1 + 6 * v28 + 6) + 33840LL) | 1);
      }
      else
      {
        v31 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v28 + 6) + 33848LL);
      }
      if ( v31 )
      {
        v32 = v31 - 88;
        if ( *(_DWORD *)(v32 + 124) <= v29 )
          goto LABEL_31;
      }
      goto LABEL_30;
    }
LABEL_33:
    v33 = *((_BYTE *)a1 + 9);
    v34 = 0;
    v35 = 0LL;
    do
    {
      v36 = *((_QWORD *)a1 + 6 * v33 + 8);
      if ( v36 && (!v35 || *(_DWORD *)(v35 + 124) < *(_DWORD *)(v36 + 124)) )
      {
        v34 = v33;
        v35 = *((_QWORD *)a1 + 6 * v33 + 8);
      }
      v37 = 0;
      if ( (unsigned __int8)(v33 + 1) < v27 )
        v37 = v33 + 1;
      v33 = v37;
    }
    while ( v37 != *((_BYTE *)a1 + 9) );
    if ( v35 )
    {
      *((_BYTE *)a1 + 10) = v34;
      *((_QWORD *)a1 + 3) = v35;
      *((_QWORD *)a1 + 2) = v35;
      v62 = *(unsigned __int16 *)(v35 + 120);
      *((_DWORD *)a1 + 1) = v62;
      if ( *(_DWORD *)(v35 + 124) == *((_DWORD *)a1 + 12 * v34 + 20) )
      {
        v62 &= *((_DWORD *)a1 + 12 * v34 + 21);
        *((_DWORD *)a1 + 1) = v62;
      }
      if ( v62 || (int)KiAdvanceReadyQueueEnumeratorToNextScb(a1) >= 0 )
        break;
    }
LABEL_39:
    if ( (unsigned __int8)++v10 >= 4u )
      goto LABEL_40;
  }
  _BitScanReverse(&v63, *((_DWORD *)a1 + 1));
  *((_BYTE *)a1 + 8) = v63;
  v64 = *((_QWORD *)a1 + 2) + 16 * ((unsigned __int8)v63 + 9LL);
  *((_QWORD *)a1 + 4) = v64;
  *((_QWORD *)a1 + 5) = v64;
LABEL_40:
  *((_BYTE *)a1 + 13) = v10;
  if ( v10 == 4 )
    return 2147483674LL;
LABEL_41:
  while ( 1 )
  {
    v38 = (__int64 *)*((_QWORD *)a1 + 5);
    v39 = *v38;
    *((_QWORD *)a1 + 5) = *v38;
    if ( v39 != *((_QWORD *)a1 + 4) )
      break;
    result = KiAdvanceReadyQueueEnumeratorToNextList(a1);
    if ( (int)result < 0 )
      return result;
  }
  v40 = 6 * (*((unsigned __int8 *)a1 + 10) + 1LL);
  v41 = *((_BYTE *)a1 + 13) == 2;
  *a2 = v39 - 216;
  v42 = *((_QWORD *)a1 + v40);
  if ( v41 )
  {
    v44 = *((_QWORD *)a1 + 2);
    v43 = 0LL;
  }
  else
  {
    if ( *((_BYTE *)a1 + 12) == 1 )
      v43 = *((_QWORD *)a1 + v40 + 1);
    else
      v43 = 0LL;
    v44 = 0LL;
  }
  *a4 = v43;
  result = 0LL;
  *a3 = v42;
  *a5 = v44;
  return result;
}
