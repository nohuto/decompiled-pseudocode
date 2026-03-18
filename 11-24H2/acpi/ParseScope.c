/*
 * XREFs of ParseScope @ 0x14000D030
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     PrintIndent @ 0x140056344 (PrintIndent.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 */

__int64 __fastcall ParseScope(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _QWORD *i; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax

  v3 = a3;
  if ( a3 && a3 != 32769 && a3 != 32774 )
    goto LABEL_20;
  v6 = *(_DWORD *)(a2 + 16) & 0xF;
  switch ( v6 )
  {
    case 1:
      goto LABEL_3;
    case 0:
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        ConPrintf("{");
        ++dword_140088FB4;
        *(_DWORD *)(a2 + 16) |= 0x10000u;
      }
      ++*(_DWORD *)(a2 + 16);
LABEL_3:
      while ( 1 )
      {
        v7 = v3;
        if ( v3 == 32769 )
          break;
        if ( v3 == 32774 )
        {
          a1[15] = *(_QWORD *)(a2 + 32);
          if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
            goto LABEL_38;
          goto LABEL_63;
        }
        do
        {
          if ( (unsigned __int64)a1[15] >= *(_QWORD *)(a2 + 32) )
            break;
          qword_140088FC0 = a1[15];
          if ( (gDebugger & 0xD0) != 0 )
          {
            v23 = *(_DWORD *)(a2 + 16);
            if ( (v23 & 0x10000) != 0 )
            {
              *(_DWORD *)(a2 + 16) = v23 & 0xFFFEFFFF;
            }
            else if ( (gDebugger & 0x80u) != 0 )
            {
              _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
              AMLIDebugger();
            }
          }
          if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)a1[15] - 18) > 1u )
            PrintIndent(a1);
          FreeDataBuffs(*(_QWORD *)(a2 + 72), 1LL);
          v3 = ParseOpcode(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 72));
          if ( v3 )
            break;
        }
        while ( a2 == a1[52] );
        v7 = v3;
        if ( v3 == 32769 )
          break;
        if ( v3 == 32774 )
        {
          a1[15] = *(_QWORD *)(a2 + 32);
          if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
            goto LABEL_38;
LABEL_63:
          v3 = 0;
          goto LABEL_38;
        }
        if ( v3 == 32772 || a2 != a1[52] )
          return v3;
        if ( v3 || (unsigned __int64)a1[15] >= *(_QWORD *)(a2 + 32) )
          goto LABEL_38;
      }
      v3 = 0;
      a1[15] = *(_QWORD *)(a2 + 32);
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
        v3 = v7;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
LABEL_38:
      ++*(_DWORD *)(a2 + 16);
LABEL_20:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_140088FB4;
        PrintIndent(a1);
        ConPrintf("}");
      }
      DereferenceObjectEx(a1[10]);
      a1[10] = *(_QWORD *)(a2 + 48);
      v9 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 48) = 0LL;
      a1[11] = v9;
      a1[40] = *(_QWORD *)(a2 + 64);
      v10 = *(_QWORD *)(a2 + 40);
      if ( v10 )
        a1[15] = v10;
      v11 = (_QWORD *)a1[52];
      v12 = v11 - 2;
      a1[52] = v11[1];
      *((_DWORD *)v11 - 4) = 0;
      byte_140088EC8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v13 = *(v11 - 1);
      for ( i = *(_QWORD **)(v13 + 40); i != (_QWORD *)(v13 + 40); i = (_QWORD *)*i )
      {
        if ( v11 < i )
          break;
      }
      v15 = (_QWORD *)i[1];
      if ( (_QWORD *)*v15 == i )
      {
        *v11 = i;
        v11[1] = v15;
        *v15 = v11;
        i[1] = v11;
        v16 = (_QWORD *)*v11;
        v17 = *v11 - 16LL;
        if ( *v11 != v13 + 40 )
        {
          v24 = *((unsigned int *)v12 + 1);
          if ( (_QWORD *)v17 == (_QWORD *)((char *)v12 + v24) )
          {
            *((_DWORD *)v12 + 1) = v24 + *(_DWORD *)(v17 + 4);
            v25 = *v16;
            if ( *(_QWORD **)(*v16 + 8LL) != v16 )
              goto LABEL_39;
            v26 = (_QWORD *)v16[1];
            if ( (_QWORD *)*v26 != v16 )
              goto LABEL_39;
            *v26 = v25;
            *(_QWORD *)(v25 + 8) = v26;
          }
        }
        v18 = v12[3];
        v19 = v18 - 16;
        if ( v18 != v13 + 40 )
        {
          v27 = *(unsigned int *)(v19 + 4);
          if ( v12 == (_QWORD *)(v19 + v27) )
          {
            *(_DWORD *)(v19 + 4) = *((_DWORD *)v12 + 1) + v27;
            v28 = *v11;
            if ( *(_QWORD **)(*v11 + 8LL) != v11 )
              goto LABEL_39;
            v29 = (_QWORD *)v11[1];
            if ( (_QWORD *)*v29 != v11 )
              goto LABEL_39;
            *v29 = v28;
            v12 = (_QWORD *)v19;
            *(_QWORD *)(v28 + 8) = v29;
          }
        }
        if ( *(_QWORD *)(v13 + 32) > (unsigned __int64)v12 + *((unsigned int *)v12 + 1) )
        {
LABEL_32:
          KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
          return v3;
        }
        *(_QWORD *)(v13 + 32) = v12;
        v20 = v12 + 2;
        v21 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) == v20 )
        {
          v22 = (_QWORD *)v20[1];
          if ( (_QWORD *)*v22 == v20 )
          {
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            goto LABEL_32;
          }
        }
      }
LABEL_39:
      __fastfail(3u);
    case 2:
      goto LABEL_20;
  }
  return v3;
}
