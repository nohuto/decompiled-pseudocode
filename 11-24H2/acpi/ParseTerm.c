/*
 * XREFs of ParseTerm @ 0x14000D430
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     PrintIndent @ 0x140056344 (PrintIndent.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  _DWORD *v6; // rdi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rax
  void (__fastcall *v12)(__int64, __int64, __int64, __int64); // r10
  __int64 v13; // rcx
  _QWORD *v14; // r15
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  _QWORD *i; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  _QWORD *j; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  unsigned __int8 *v40; // rax
  unsigned int v41; // r9d
  unsigned __int8 *v42; // r10
  unsigned int v43; // r8d
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r9
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  unsigned __int8 v57; // r11
  unsigned __int8 v58; // cl
  __int64 (__fastcall *v59)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // rax
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx

  v3 = a3;
  if ( a3 )
    goto LABEL_27;
  v6 = (_DWORD *)(a2 + 16);
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      ++*v6;
      if ( (gDebugger & 0xD0) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
        {
          ++dword_140088FB4;
          PrintIndent(a1);
        }
        ConPrintf("%s", **(const char ***)(a2 + 56));
        if ( *(_DWORD *)(a2 + 76) )
          ConPrintf("(");
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL) & 1) != 0 )
      {
        v39 = (_QWORD *)(a2 + 40);
        if ( a2 != -40 )
          *v39 = *(_QWORD *)(a1 + 120);
        v40 = *(unsigned __int8 **)(a1 + 120);
        v41 = *v40;
        v42 = v40 + 1;
        *(_QWORD *)(a1 + 120) = v40 + 1;
        v43 = v41 >> 6;
        if ( (unsigned __int8)(v41 >> 6) )
        {
          v41 &= 0xFu;
          v57 = 0;
          do
          {
            v58 = v57++;
            v41 |= *v42++ << (8 * v58 + 4);
            *(_QWORD *)(a1 + 120) = v42;
          }
          while ( v57 < (unsigned __int8)v43 );
        }
        if ( a2 != -40 )
          *v39 += v41;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v44 = *(_QWORD *)(a2 + 48);
          if ( v44 )
          {
            if ( *(_QWORD *)(a2 + 40) > v44 )
            {
              v3 = -1072431089;
              LogError(3222536207LL);
              AcpiDiagTraceAmlError(a1, 3222536207LL);
              PrintDebugMessage(143, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), 0, 0LL);
              return v3;
            }
          }
        }
      }
      do
      {
LABEL_11:
        while ( 1 )
        {
          v8 = *(unsigned int *)(a2 + 72);
          if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 76) )
            break;
          *(_DWORD *)(a2 + 72) = v8 + 1;
          if ( (gDebugger & 0xD0) != 0 && (_DWORD)v8 )
            ConPrintf(",");
          v3 = ParseArg(
                 a1,
                 *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL) + v8),
                 *(_QWORD *)(a2 + 80) + 40 * v8,
                 *(_QWORD *)(a2 + 48));
          if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
            return v3;
        }
        if ( a2 != *(_QWORD *)(a1 + 416) )
          return v3;
      }
      while ( *(_DWORD *)(a2 + 72) < *(_DWORD *)(a2 + 76) );
      ++*(_DWORD *)(a2 + 16);
      v6 = (_DWORD *)(a2 + 16);
LABEL_19:
      v9 = *(_QWORD *)(a2 + 56);
      ++*v6;
      if ( *(int *)(v9 + 28) < 0 )
      {
        v59 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(v9 + 32);
        if ( v59 )
        {
          v3 = v59(12LL, 1LL, *(unsigned int *)(v9 + 8), *(_QWORD *)(a2 + 64) + 120LL, *(_DWORD *)(v9 + 40), a1);
          if ( v3 == 259 )
            return 32772;
        }
      }
      goto LABEL_20;
    case 1:
      goto LABEL_11;
    case 2:
      goto LABEL_19;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 3 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 4 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xF) != 5 )
        return v3;
      goto LABEL_27;
    }
    goto LABEL_24;
  }
LABEL_20:
  ++*v6;
  if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(a2 + 76) )
    ConPrintf(")");
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 56) + 48LL);
  if ( !v10 || (v3 = v10(a1, a2)) == 0 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_24:
    ++*v6;
    if ( (gDebugger & 0xD0) != 0 )
    {
      v63 = *(_QWORD *)(a2 + 56);
      if ( (unsigned int)(*(_DWORD *)(v63 + 8) - 17) > 2 && *(_DWORD *)(v63 + 24) == 4 )
      {
        ConPrintf("=");
        PrintObject(*(_QWORD *)(a2 + 88));
      }
    }
    if ( (gDebugger & 0x40) != 0 )
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
      AMLIDebugger();
      goto LABEL_27;
    }
    v11 = *(_QWORD *)(a2 + 56);
    v12 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(v11 + 32);
    if ( !v12 )
      goto LABEL_27;
    v60 = *(unsigned int *)(v11 + 40);
    v61 = *(_QWORD *)(a2 + 64) + 120LL;
    v62 = *(unsigned int *)(v11 + 8);
    if ( *(int *)(v11 + 28) >= 0 )
    {
      v12(1LL, v62, v61, v60);
      goto LABEL_27;
    }
    v3 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))v12)(
           12LL,
           2LL,
           (unsigned int)v62,
           v61,
           v60,
           a1);
    if ( v3 != 259 )
    {
LABEL_27:
      if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
        --dword_140088FB4;
      v13 = *(_QWORD *)(a2 + 80);
      if ( v13 )
      {
        FreeDataBuffs(v13, *(unsigned int *)(a2 + 76));
        v14 = *(_QWORD **)(a2 + 80);
        *((_DWORD *)v14 - 4) = 0;
        v15 = v14 - 2;
        byte_140088EC8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v16 = *(v14 - 1);
        for ( i = *(_QWORD **)(v16 + 40); i != (_QWORD *)(v16 + 40); i = (_QWORD *)*i )
        {
          if ( v14 < i )
            break;
        }
        v18 = (_QWORD *)i[1];
        if ( (_QWORD *)*v18 != i )
          goto LABEL_49;
        *v14 = i;
        v14[1] = v18;
        *v18 = v14;
        i[1] = v14;
        v19 = (_QWORD *)*v14;
        v20 = *v14 - 16LL;
        if ( *v14 != v16 + 40 )
        {
          v48 = *((unsigned int *)v15 + 1);
          if ( (_QWORD *)v20 == (_QWORD *)((char *)v15 + v48) )
          {
            *((_DWORD *)v15 + 1) = v48 + *(_DWORD *)(v20 + 4);
            v49 = *v19;
            if ( *(_QWORD **)(*v19 + 8LL) != v19 )
              goto LABEL_49;
            v50 = (_QWORD *)v19[1];
            if ( (_QWORD *)*v50 != v19 )
              goto LABEL_49;
            *v50 = v49;
            *(_QWORD *)(v49 + 8) = v50;
          }
        }
        v21 = v15[3];
        v22 = v21 - 16;
        if ( v21 != v16 + 40 )
        {
          v54 = *(unsigned int *)(v22 + 4);
          if ( v15 == (_QWORD *)(v22 + v54) )
          {
            *(_DWORD *)(v22 + 4) = *((_DWORD *)v15 + 1) + v54;
            v55 = *v14;
            if ( *(_QWORD **)(*v14 + 8LL) != v14 )
              goto LABEL_49;
            v56 = (_QWORD *)v14[1];
            if ( (_QWORD *)*v56 != v14 )
              goto LABEL_49;
            *v56 = v55;
            v15 = (_QWORD *)v22;
            *(_QWORD *)(v55 + 8) = v56;
          }
        }
        if ( *(_QWORD *)(v16 + 32) <= (unsigned __int64)v15 + *((unsigned int *)v15 + 1) )
        {
          *(_QWORD *)(v16 + 32) = v15;
          v23 = v15 + 2;
          v24 = *v23;
          if ( *(_QWORD **)(*v23 + 8LL) != v23 )
            goto LABEL_49;
          v25 = (_QWORD *)v23[1];
          if ( (_QWORD *)*v25 != v23 )
            goto LABEL_49;
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
        }
        KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
      }
      v26 = *(_QWORD *)(a2 + 64);
      if ( v26 )
      {
        DereferenceObjectEx(v26);
        *(_QWORD *)(a2 + 64) = 0LL;
      }
      v27 = *(_QWORD **)(a1 + 416);
      v28 = v27 - 2;
      *(_QWORD *)(a1 + 416) = v27[1];
      *((_DWORD *)v27 - 4) = 0;
      byte_140088EC8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v29 = *(v27 - 1);
      for ( j = *(_QWORD **)(v29 + 40); j != (_QWORD *)(v29 + 40); j = (_QWORD *)*j )
      {
        if ( v27 < j )
          break;
      }
      v31 = (_QWORD *)j[1];
      if ( (_QWORD *)*v31 == j )
      {
        *v27 = j;
        v27[1] = v31;
        *v31 = v27;
        j[1] = v27;
        v32 = (_QWORD *)*v27;
        v33 = *v27 - 16LL;
        if ( *v27 != v29 + 40 )
        {
          v45 = *((unsigned int *)v28 + 1);
          if ( (_QWORD *)v33 == (_QWORD *)((char *)v28 + v45) )
          {
            *((_DWORD *)v28 + 1) = v45 + *(_DWORD *)(v33 + 4);
            v46 = *v32;
            if ( *(_QWORD **)(*v32 + 8LL) != v32 )
              goto LABEL_49;
            v47 = (_QWORD *)v32[1];
            if ( (_QWORD *)*v47 != v32 )
              goto LABEL_49;
            *v47 = v46;
            *(_QWORD *)(v46 + 8) = v47;
          }
        }
        v34 = v28[3];
        v35 = v34 - 16;
        if ( v34 != v29 + 40 )
        {
          v51 = *(unsigned int *)(v35 + 4);
          if ( v28 == (_QWORD *)(v35 + v51) )
          {
            *(_DWORD *)(v35 + 4) = *((_DWORD *)v28 + 1) + v51;
            v52 = *v27;
            if ( *(_QWORD **)(*v27 + 8LL) != v27 )
              goto LABEL_49;
            v53 = (_QWORD *)v27[1];
            if ( (_QWORD *)*v53 != v27 )
              goto LABEL_49;
            *v53 = v52;
            v28 = (_QWORD *)v35;
            *(_QWORD *)(v52 + 8) = v53;
          }
        }
        if ( *(_QWORD *)(v29 + 32) > (unsigned __int64)v28 + *((unsigned int *)v28 + 1) )
        {
LABEL_48:
          KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
          return v3;
        }
        *(_QWORD *)(v29 + 32) = v28;
        v36 = v28 + 2;
        v37 = *v36;
        if ( *(_QWORD **)(*v36 + 8LL) == v36 )
        {
          v38 = (_QWORD *)v36[1];
          if ( (_QWORD *)*v38 == v36 )
          {
            *v38 = v37;
            *(_QWORD *)(v37 + 8) = v38;
            goto LABEL_48;
          }
        }
      }
LABEL_49:
      __fastfail(3u);
    }
    return 32772;
  }
  return v3;
}
