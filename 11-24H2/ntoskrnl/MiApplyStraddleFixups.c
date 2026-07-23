/*
 * XREFs of MiApplyStraddleFixups @ 0x14042A000
 * Callers:
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void __fastcall MiApplyStraddleFixups(__int64 a1, char *a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v6; // rbx
  int v11; // ecx
  int v12; // r8d
  size_t v13; // r8
  char *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF

  v6 = *(__int64 **)(a1 + 16);
  if ( v6 )
  {
    while ( 1 )
    {
      v11 = *((_DWORD *)v6 + 2);
      if ( (v11 & 0xFFFFF000) == a3 )
        break;
      v12 = *((_DWORD *)v6 + 3);
      if ( (v12 & 0xFFFFF000) == a3 )
      {
        v13 = v12 & 0xFFF;
        v14 = a2;
        v15 = 4096 - (v11 & 0xFFFu);
LABEL_5:
        if ( v14 )
        {
          v16 = v6[3];
          if ( (a6 & 8) != 0 )
          {
            v17 = v16 + *(_QWORD *)(a1 + 48);
          }
          else
          {
            if ( a5 )
              v16 += a5;
            v17 = v16 + a4;
          }
          v18 = v17;
          if ( (_DWORD)v13 )
            memmove(v14, (char *)&v18 + v15, v13);
        }
      }
LABEL_6:
      v6 = (__int64 *)*v6;
      if ( !v6 )
        return;
    }
    if ( (v11 & 0xFFF) == 0 )
    {
      if ( *((_WORD *)v6 + 8) == 3 )
        *(_WORD *)&a2[(*((_DWORD *)v6 + 3) & 0xFFF) - 2] += WORD1(a4);
      goto LABEL_6;
    }
    v14 = &a2[v11 & 0xFFF];
    v13 = 4096 - (((v11 & 0xFFF) + (_WORD)a2) & 0xFFFu);
    v15 = 0LL;
    goto LABEL_5;
  }
}
