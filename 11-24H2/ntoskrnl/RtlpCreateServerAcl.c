/*
 * XREFs of RtlpCreateServerAcl @ 0x140856C98
 * Callers:
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  USHORT v7; // cx
  unsigned __int16 *v9; // rdi
  unsigned int v10; // r15d
  __int16 v11; // dx
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // si
  unsigned int v16; // ebp
  __int64 v17; // r11
  int v18; // r9d
  unsigned __int16 v19; // dx
  __int64 v20; // rsi
  int v21; // r8d
  ACL *Pool2; // rax
  ACL *v23; // r15
  unsigned int v24; // esi
  unsigned int v25; // eax
  char *v26; // rbx
  unsigned __int8 *v27; // r15
  char v28; // al
  char *v29; // r12
  unsigned __int8 *v30; // rbp
  char *v31; // rbx
  char *v32; // rbx
  __int64 v33; // rax
  __int16 v34; // cx
  NTSTATUS result; // eax
  _BYTE *v36; // rax
  __int16 v37; // ax
  USHORT v38; // dx
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
    v15 = 8;
    v16 = 0;
    v17 = a1 + 8;
    v18 = -1073741675;
    while ( v16 < v10 )
    {
      if ( *(_BYTE *)v17 )
      {
        if ( a2 && *(_BYTE *)v17 == 4 )
        {
          v37 = 4 * *(unsigned __int8 *)(v17 + 13);
          if ( (unsigned __int16)(v37 + 8) <= v12 )
            v38 = v12 - v37 - 8;
          else
            v38 = v37 + 8 - v12;
          result = RtlUShortAdd(v7, v38, (USHORT *)&pusResult);
          if ( result < 0 )
            return result;
          v7 = (unsigned __int16)pusResult;
        }
      }
      else
      {
        v19 = v12 + v11;
        if ( v19 < v13 )
          return v18;
        v7 = v19 + 4;
        if ( (unsigned __int16)(v19 + 4) < v19 )
          return v18;
      }
      v20 = *(unsigned __int16 *)(v17 + 2);
      if ( (unsigned __int16)(v7 + v20) < v7 )
      {
        v21 = v18;
        v7 = -1;
      }
      else
      {
        v21 = 0;
        v7 += v20;
      }
      LOWORD(pusResult) = v7;
      v11 = v7;
      if ( v21 < 0 )
        return v21;
      ++v16;
      v13 = v7;
      v17 += v20;
      v14 = v7;
      v15 = v7;
    }
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v14, 0x63416553u);
    *a4 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *a5 = 1;
    RtlCreateAcl(Pool2, v15, 3u);
    v23 = *a4;
    v24 = 0;
    LOWORD(v25) = *(_WORD *)(a1 + 4);
    pusResult = v23;
    v26 = (char *)&v23[1];
    if ( (_WORD)v25 )
    {
      v27 = (unsigned __int8 *)Src;
      do
      {
        v28 = *(_BYTE *)v9;
        if ( !*(_BYTE *)v9 || a2 && v28 == 4 )
        {
          v29 = v26;
          if ( v28 )
            v30 = (unsigned __int8 *)v9 + RtlLengthSid(v9 + 6) + 12;
          else
            v30 = (unsigned __int8 *)(v9 + 4);
          *(_QWORD *)v26 = *(_QWORD *)v9;
          v31 = v26 + 12;
          memmove(v31, v27, 4LL * v27[1] + 8);
          v32 = &v31[(unsigned __int8)(4 * (v27[1] + 2))];
          memmove(v32, v30, 4LL * v30[1] + 8);
          v33 = v30[1];
          v34 = v27[1];
          *v29 = 4;
          *((_WORD *)v29 + 1) = 4 * (v33 + v34 + 7);
          v26 = &v32[4 * v33 + 8];
          *((_WORD *)v29 + 4) = 1;
        }
        else
        {
          memmove(v26, v9, v9[1]);
          v26 += v9[1];
        }
        ++v24;
        v9 = (unsigned __int16 *)((char *)v9 + v9[1]);
        v25 = *(unsigned __int16 *)(a1 + 4);
      }
      while ( v24 < v25 );
      v23 = pusResult;
    }
    v23->AceCount = v25;
  }
  else
  {
    v36 = a5;
    *a4 = 0LL;
    *v36 = 0;
  }
  return 0;
}
