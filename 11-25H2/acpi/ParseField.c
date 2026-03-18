/*
 * XREFs of ParseField @ 0x140035A2C
 * Callers:
 *     ParseFieldList @ 0x1400358A8 (ParseFieldList.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ParseFieldConnection @ 0x140054520 (ParseFieldConnection.c)
 *     PrintIndent @ 0x140056344 (PrintIndent.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ParseField(__int64 *a1, __int64 a2, int *a3, _DWORD *a4, unsigned __int8 *a5, _DWORD **a6)
{
  unsigned int v6; // esi
  _BYTE *v10; // rdx
  char v11; // r8
  int v12; // r13d
  int v13; // ecx
  __int64 v14; // r8
  char *i; // rcx
  char v16; // r9
  char *v17; // rax
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // r8
  unsigned int v20; // edi
  unsigned int v21; // edx
  __int64 v22; // rbp
  unsigned int v23; // r8d
  void *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rbx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned __int8 *v29; // rax
  int v31; // eax
  unsigned __int8 v32; // r9
  unsigned __int8 v33; // cl
  const char *v34; // rdx
  int v35; // edx
  bool v36; // bp
  unsigned __int8 *v37; // rdi
  int v38; // eax
  char v39; // cl
  int v40; // eax
  unsigned __int8 *v41; // rax
  __int64 v43; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 *v44; // [rsp+40h] [rbp-68h]
  char v45[8]; // [rsp+48h] [rbp-60h] BYREF

  v6 = 0;
  v44 = a5;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 112), 1u);
  v10 = (_BYTE *)a1[15];
  v11 = *v10;
  if ( ((*v10 - 1) & 0xFD) == 0 )
  {
    a1[15] = (__int64)(v10 + 1);
    v35 = *a3;
    v36 = v11 == 3;
    *a3 &= 0xFFFFFFF0;
    *a3 = v35 ^ ((unsigned __int8)v35 ^ *(_BYTE *)a1[15]) & 0xF;
    if ( v11 == 3 || (*(_BYTE *)a1[15] & 0xC0) == 0 )
    {
      ++a1[15];
      v37 = (unsigned __int8 *)a3 + 1;
      *((_BYTE *)a3 + 1) = 0;
      *a3 |= *(unsigned __int8 *)a1[15]++ << 8;
      v41 = (unsigned __int8 *)a1[15];
      if ( v11 != 3 )
      {
        *a5 = 0;
LABEL_55:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1);
          ConPrintf("AccessAs(0x%x,0x%x", (unsigned __int8)*a3, *v37);
          if ( v36 )
            ConPrintf(",0x%x)\n", *a5);
          else
            ConPrintf(")\n");
        }
        goto LABEL_30;
      }
    }
    else
    {
      v37 = (unsigned __int8 *)a3 + 1;
      *((_BYTE *)a3 + 1) = 0;
      v38 = *a3;
      v39 = *(_BYTE *)a1[15] & 0xC0;
      if ( v39 == 64 )
      {
        v40 = v38 | 0xB00;
      }
      else if ( v39 == (char)0x80 )
      {
        v40 = v38 | 0xE00;
      }
      else
      {
        v40 = v38 | 0xF00;
      }
      v36 = 1;
      *a3 = v40;
      v41 = (unsigned __int8 *)(a1[15] + 1);
      a1[15] = (__int64)v41;
    }
    *a5 = *v41;
    ++a1[15];
    goto LABEL_55;
  }
  if ( v11 == 2 )
  {
    a1[15] = (__int64)(v10 + 1);
    v31 = ParseFieldConnection(a1, a6);
    v6 = v31;
    if ( v31 )
    {
      LogError(v31);
      AcpiDiagTraceAmlError((__int64)a1, v6);
      PrintDebugMessage(0x7Du, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      (*a6)[1] = *a4;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        v34 = (const char *)(*a6 + 4);
        if ( **a6 == 1 )
          ConPrintf("Connection(%s)", v34);
        else
          ConPrintf(
            "Connection(%02x %02x %02x %02x ...)",
            *(unsigned __int8 *)v34,
            *((unsigned __int8 *)*a6 + 17),
            *((unsigned __int8 *)*a6 + 18),
            *((unsigned __int8 *)*a6 + 19));
      }
    }
    goto LABEL_30;
  }
  v12 = 1;
  v13 = *a3 & 0xF;
  if ( (unsigned int)(v13 - 1) <= 3 )
    v12 = 1 << (v13 - 1);
  v43 = 0LL;
  if ( v11 )
  {
    v14 = 5LL;
    for ( i = v45; v14 != 1; ++i )
    {
      v16 = i[v10 - v45];
      if ( !v16 )
        break;
      *i = v16;
      --v14;
    }
    v17 = i - 1;
    if ( v14 )
      v17 = i;
    v18 = v10 + 4;
    *v17 = 0;
  }
  else
  {
    v45[0] = 0;
    v18 = v10 + 1;
  }
  a1[15] = (__int64)v18;
  v19 = v18 + 1;
  v20 = *v18;
  a1[15] = (__int64)(v18 + 1);
  v21 = v20 >> 6;
  if ( (unsigned __int8)(v20 >> 6) )
  {
    v20 &= 0xFu;
    v32 = 0;
    do
    {
      v33 = v32++;
      v20 |= *v19++ << (8 * v33 + 4);
      a1[15] = (__int64)v19;
    }
    while ( v32 < (unsigned __int8)v21 );
  }
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    if ( v45[0] )
    {
      ConPrintf("%s,%d", v45, v20);
    }
    else if ( v20 <= 0x20 || (((_BYTE)v20 + *(_BYTE *)a4) & 7) != 0 )
    {
      ConPrintf(",%d", v20);
    }
    else
    {
      ConPrintf("Offset(0x%x)", (v20 + *a4) >> 3);
    }
  }
  v6 = CreateNameSpaceObject(a1[40], (__int64)v45, a1[10], a1[11], &v43, 0);
  if ( v6 )
  {
LABEL_30:
    v26 = a2;
    goto LABEL_25;
  }
  v22 = v43;
  v23 = 40;
  *(_WORD *)(v43 + 66) = 5;
  *(_DWORD *)(v22 + 88) = 40;
  if ( *a6 )
  {
    v23 = (*a6)[3] + 40;
    *(_DWORD *)(v22 + 88) = v23;
  }
  v24 = (void *)HeapAlloc(a1[40], 1430537800, v23);
  *(_QWORD *)(v22 + 96) = v24;
  if ( v24 )
  {
    memset(v24, 0, *(unsigned int *)(v22 + 88));
    v25 = *(_QWORD *)(v22 + 96);
    *(_QWORD *)v25 = a2;
    v26 = 0LL;
    *(_DWORD *)(v25 + 20) = *a3;
    v27 = v12 * (*a4 / (unsigned int)(8 * v12));
    *(_DWORD *)(v25 + 8) = v27;
    v28 = *a4 - 8 * v27;
    *(_DWORD *)(v25 + 16) = v20;
    v29 = v44;
    *(_DWORD *)(v25 + 12) = v28;
    *(_BYTE *)(v25 + 24) = *v29;
    if ( *a6 )
    {
      *(_DWORD *)(v25 + 28) = **a6;
      *(_DWORD *)(v25 + 32) = (*a6)[1];
      *(_DWORD *)(v25 + 36) = (*a6)[3];
      memmove((void *)(v25 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
    }
    *a4 += v20;
  }
  else
  {
    v6 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError((__int64)a1, -1073741670);
    PrintDebugMessage(0x7Cu, 0LL, 0LL, 0LL, 0LL);
    v26 = a2;
  }
  DereferenceObjectEx(v22);
LABEL_25:
  if ( v26 )
    DereferenceObjectEx(v26);
  return v6;
}
