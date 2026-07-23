/*
 * XREFs of SeGetLinkedToken @ 0x140A25970
 * Callers:
 *     <none>
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x14043F618 (SepDeReferenceLogonSessionDirect.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepReferenceLogonSessionSilo @ 0x140A25AB4 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SeGetLinkedToken(int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // r10
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h]
  __int128 v13; // [rsp+60h] [rbp-10h]
  _QWORD *v14; // [rsp+90h] [rbp+20h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  v5 = a2;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a2 + 216);
  v7 = *(_DWORD *)(v6 + 40);
  if ( ((v7 & 4) == 0 || a1 != 2) && ((v7 & 2) == 0 || a1 != 3) )
    goto LABEL_10;
  v8 = SepReferenceLogonSessionSilo(v6 + 16, *(_QWORD *)(v6 + 168), &v14);
  v3 = v14;
  v9 = v8;
  if ( v8 >= 0 )
  {
    v5 = v14[7];
LABEL_10:
    *((_QWORD *)&v11 + 1) = 0LL;
    DWORD2(v12) = 0;
    *(_QWORD *)&v12 = 0LL;
    LODWORD(v11) = 48;
    v13 = 0LL;
    v9 = SepDuplicateToken(v5, (int)&v11, 0, 1, 0, 0, 0, a3);
  }
  if ( v3 )
    SepDeReferenceLogonSessionDirect(v3);
  return v9;
}
