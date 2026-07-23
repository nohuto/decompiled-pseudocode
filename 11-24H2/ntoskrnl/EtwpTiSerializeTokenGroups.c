/*
 * XREFs of EtwpTiSerializeTokenGroups @ 0x140A69FE8
 * Callers:
 *     EtwpTiQueryTokenIdentity @ 0x140A69F44 (EtwpTiQueryTokenIdentity.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpTiSerializeTokenGroups(PSID *a1, unsigned int a2, unsigned int *a3, __int64 *a4)
{
  unsigned int v4; // edi
  __int64 *v6; // r15
  unsigned int v8; // ebp
  __int64 v9; // rsi
  PSID *v10; // r14
  __int64 v11; // r13
  ULONG v12; // eax
  PSID *v13; // r13
  __int64 Pool2; // rax
  __int64 v15; // r14
  _DWORD *v16; // r15
  PSID v17; // rbx
  ULONG v18; // eax
  ULONG v19; // eax

  v4 = 0;
  v6 = a4;
  if ( a2 )
  {
    v8 = 0;
    v9 = a2;
    v10 = a1;
    v11 = a2;
    do
    {
      v12 = RtlLengthSid(*v10);
      v10 += 2;
      v8 += v12 + 4;
      --v11;
    }
    while ( v11 );
    v13 = a1;
    Pool2 = ExAllocatePool2(0x100uLL, v8, 0x6E734954u);
    v15 = Pool2;
    if ( Pool2 )
    {
      if ( a2 )
      {
        v16 = (_DWORD *)Pool2;
        do
        {
          *v16 = *((_DWORD *)v13 + 2);
          v17 = *v13;
          v18 = RtlLengthSid(*v13);
          memmove(v16 + 1, v17, v18);
          v19 = RtlLengthSid(*v13);
          v13 += 2;
          v16 = (_DWORD *)((char *)v16 + v19 + 4);
          --v9;
        }
        while ( v9 );
        v6 = a4;
      }
      *a3 = v8;
      *v6 = v15;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    *a3 = 0;
    *a4 = 0LL;
  }
  return v4;
}
