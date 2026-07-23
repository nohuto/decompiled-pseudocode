/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x1408C92A0
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x140724058 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403E48E0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403E5040 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D042C (PiPnpRtlObjectEventRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(_WORD *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  void *v8; // r14
  int v9; // edi
  _WORD *v10; // rax
  __int64 v11; // rcx
  unsigned __int16 v12; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v14; // r9d
  unsigned __int16 *v15; // r10
  unsigned __int16 v16; // dx
  int v17; // r11d
  struct _LIST_ENTRY *i; // rbx
  unsigned __int64 v19; // rax
  PVOID *v20; // rax
  PVOID v21; // rbx
  int Object; // eax
  _QWORD *Pool2; // rax
  PVOID inserted; // rax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+30h] [rbp-D0h] BYREF
  void *v27; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+50h] [rbp-B0h] BYREF
  int *Buffer; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  char v32[4]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 *v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+B0h] [rbp-50h] BYREF
  char v35[8]; // [rsp+B8h] [rbp-48h] BYREF
  _WORD *v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  unsigned int v38; // [rsp+CCh] [rbp-34h]

  v34 = 0LL;
  memset_0(v35, 0, 0x68uLL);
  v31 = 0;
  memset_0(v32, 0, 0x4CuLL);
  NodeOrParent = 0LL;
  Buffer = &v31;
  SearchResult = TableEmptyTree;
  v8 = 0LL;
  v27 = 0LL;
  v9 = 0;
  *a4 = 0LL;
  v36 = a1;
  v38 = a2;
  *(_OWORD *)P = 0LL;
  if ( !a1 )
    goto LABEL_36;
  v10 = a1;
  v11 = 0x7FFFLL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v11;
  }
  while ( v11 );
  v9 = -1073741811;
  if ( v11 )
  {
    v9 = 0;
    v12 = 2 * (0x7FFF - v11);
  }
  else
  {
LABEL_36:
    v12 = (unsigned __int16)P[0];
  }
  if ( v9 < 0 )
    goto LABEL_32;
  if ( a2 == 3 && v12 <= 8u )
  {
    v9 = -1073741772;
LABEL_32:
    *a4 = 0LL;
    goto LABEL_34;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v17 = v16 >> 1;
  for ( i = CurrentServerSiloGlobals[75].Flink; v17; v14 = (unsigned __int16)v19 + 65599 * v14 )
  {
    v19 = *v15++;
    --v17;
    if ( (unsigned int)v19 >= 0x61 )
    {
      if ( (unsigned int)v19 > 0x7A )
      {
        if ( i && (unsigned __int16)v19 >= 0xC0u )
          LOWORD(v19) = *((_WORD *)&i->Flink
                        + (v19 & 0xF)
                        + *((unsigned __int16 *)&i->Flink
                          + ((unsigned __int8)v19 >> 4)
                          + (unsigned int)*((unsigned __int16 *)&i->Flink + (v19 >> 8))))
                      + v19;
      }
      else
      {
        LOWORD(v19) = v19 - 32;
      }
    }
  }
  v37 = v14;
  v9 = 0;
  v33 = &v34;
  v20 = (PVOID *)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
  if ( v20 )
  {
    v21 = *v20;
    if ( *v20 )
    {
LABEL_16:
      *a4 = v21;
      return (unsigned int)v9;
    }
  }
  else
  {
    v21 = 0LL;
  }
  Object = PiDmGetObject(a2, a1, &v27);
  v9 = Object;
  if ( Object != -1073741772 )
  {
    if ( Object >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0xF0uLL, 0x41706E50u);
      P[0] = Pool2;
      v21 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        Pool2[4] = 0LL;
        Pool2[5] = 0LL;
        Pool2[6] = 0LL;
        Pool2[7] = 0LL;
        Pool2[8] = 0LL;
        Pool2[9] = 5LL;
        *(_DWORD *)Pool2 = 1;
        Pool2[1] = v27;
        inserted = RtlInsertElementGenericTableFullAvl(
                     (PRTL_AVL_TABLE)(a3 + 24),
                     P,
                     8u,
                     0LL,
                     NodeOrParent,
                     SearchResult);
        v21 = P[0];
        if ( inserted )
          goto LABEL_16;
        v9 = -1073741670;
        goto LABEL_30;
      }
      v9 = -1073741670;
    }
    v8 = v27;
LABEL_30:
    if ( v21 )
      PiPnpRtlObjectEventRelease(v21);
    goto LABEL_32;
  }
  v9 = 0;
  v8 = v27;
LABEL_34:
  if ( v8 )
    PiDmObjectRelease(v8);
  return (unsigned int)v9;
}
