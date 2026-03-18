/*
 * XREFs of NtGdiDoPalette @ 0x1401A77D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiDoPalette(HPALETTE a1, unsigned __int16 a2, unsigned __int16 a3, char *a4, unsigned int a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  BOOL v8; // r12d
  struct tagPALETTEENTRY *v9; // rsi
  size_t v10; // r8
  int v11; // eax
  size_t v12; // r8
  HPALETTE v14; // [rsp+90h] [rbp+8h]
  unsigned __int16 v15; // [rsp+98h] [rbp+10h]

  v15 = a2;
  v14 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 1;
  v9 = 0LL;
  if ( a5 > 5 )
    return v7;
  if ( !*((_DWORD *)&off_14034C7D0 + 4 * a5 + 2) )
  {
    if ( a4 )
    {
      if ( a3 )
      {
        v9 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
        v8 = v9 != 0LL;
        a2 = v15;
        a1 = v14;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( v8 )
    {
      v11 = (*(&off_14034C7D0 + 2 * a5))(a1, a2, v6, v9);
      v7 = v11;
      if ( (int)v6 < v11 )
        v11 = v6;
      if ( v11 > 0 && a4 )
      {
        v12 = 4LL * v11;
        if ( (unsigned __int64)&a4[v12] > MmUserProbeAddress || &a4[v12] <= a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v9, v12);
      }
    }
    goto LABEL_23;
  }
  if ( a3 )
  {
    v9 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
    if ( !v9 )
      goto LABEL_23;
    v10 = 4LL * v6;
    if ( &a4[v10] < a4 || (unsigned __int64)&a4[v10] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v9, a4, v10);
    a2 = v15;
    a1 = v14;
  }
  v7 = (*(&off_14034C7D0 + 2 * a5))(a1, a2, (unsigned __int16)v6, v9);
LABEL_23:
  if ( v9 )
    FreeTmpBuffer(v9);
  return v7;
}
