/*
 * XREFs of RtlpCreateServerAcl @ 0x14091B940
 * Callers:
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     RtlUShortAdd @ 0x140472A24 (RtlUShortAdd.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  USHORT v7; // cx
  unsigned __int16 *v9; // rdi
  unsigned int v10; // r15d
  __int16 v11; // dx
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // si
  unsigned int v15; // ebp
  __int64 v16; // r11
  int v17; // r9d
  unsigned __int16 v18; // dx
  __int64 v19; // rsi
  int v20; // r8d
  ACL *Pool2; // rax
  ACL *v22; // r15
  unsigned int v23; // esi
  unsigned int v24; // eax
  char *v25; // rbx
  unsigned __int8 *v26; // r15
  char v27; // al
  char *v28; // r12
  unsigned __int8 *v29; // rbp
  char *v30; // rbx
  char *v31; // rbx
  __int64 v32; // rax
  __int16 v33; // cx
  NTSTATUS result; // eax
  _BYTE *v35; // rax
  __int16 v36; // ax
  USHORT v37; // dx
  ACL *pusResult; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  v7 = 8;
  LOWORD(pusResult) = 8;
  if ( a1 )
  {
    v9 = (unsigned __int16 *)(a1 + 8);
    v10 = *(unsigned __int16 *)(a1 + 4);
    v11 = 8;
    v12 = 4 * (a3[1] + 2);
    v13 = 8;
    v14 = 8;
    v15 = 0;
    v16 = a1 + 8;
    v17 = -1073741675;
    while ( v15 < v10 )
    {
      if ( *(_BYTE *)v16 )
      {
        if ( a2 && *(_BYTE *)v16 == 4 )
        {
          v36 = 4 * *(unsigned __int8 *)(v16 + 13);
          if ( (unsigned __int16)(v36 + 8) <= v12 )
            v37 = v12 - v36 - 8;
          else
            v37 = v36 + 8 - v12;
          result = RtlUShortAdd(v7, v37, (USHORT *)&pusResult);
          if ( result < 0 )
            return result;
          v7 = (unsigned __int16)pusResult;
        }
      }
      else
      {
        v18 = v12 + v11;
        if ( v18 < v13 )
          return v17;
        v7 = v18 + 4;
        if ( (unsigned __int16)(v18 + 4) < v18 )
          return v17;
      }
      v19 = *(unsigned __int16 *)(v16 + 2);
      if ( (unsigned __int16)(v7 + v19) < v7 )
      {
        v20 = v17;
        v7 = -1;
      }
      else
      {
        v20 = 0;
        v7 += v19;
      }
      LOWORD(pusResult) = v7;
      v11 = v7;
      if ( v20 < 0 )
        return v20;
      ++v15;
      v13 = v7;
      v16 += v19;
      v14 = v7;
    }
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    *a4 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *a5 = 1;
    RtlCreateAcl(Pool2, v14, 3u);
    v22 = *a4;
    v23 = 0;
    LOWORD(v24) = *(_WORD *)(a1 + 4);
    pusResult = v22;
    v25 = (char *)&v22[1];
    if ( (_WORD)v24 )
    {
      v26 = (unsigned __int8 *)Src;
      do
      {
        v27 = *(_BYTE *)v9;
        if ( !*(_BYTE *)v9 || a2 && v27 == 4 )
        {
          v28 = v25;
          if ( v27 )
            v29 = (unsigned __int8 *)v9 + RtlLengthSid(v9 + 6) + 12;
          else
            v29 = (unsigned __int8 *)(v9 + 4);
          *(_QWORD *)v25 = *(_QWORD *)v9;
          v30 = v25 + 12;
          memmove(v30, v26, 4LL * v26[1] + 8);
          v31 = &v30[(unsigned __int8)(4 * (v26[1] + 2))];
          memmove(v31, v29, 4LL * v29[1] + 8);
          v32 = v29[1];
          v33 = v26[1];
          *v28 = 4;
          *((_WORD *)v28 + 1) = 4 * (v32 + v33 + 7);
          v25 = &v31[4 * v32 + 8];
          *((_WORD *)v28 + 4) = 1;
        }
        else
        {
          memmove(v25, v9, v9[1]);
          v25 += v9[1];
        }
        ++v23;
        v9 = (unsigned __int16 *)((char *)v9 + v9[1]);
        v24 = *(unsigned __int16 *)(a1 + 4);
      }
      while ( v23 < v24 );
      v22 = pusResult;
    }
    v22->AceCount = v24;
  }
  else
  {
    v35 = a5;
    *a4 = 0LL;
    *v35 = 0;
  }
  return 0;
}
