/*
 * XREFs of AdtpNormalizeAuditInfoHelper @ 0x140448438
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1404481F0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AEB4C0 (AdtpWriteToEtw.c)
 * Callees:
 *     <none>
 */

void __fastcall AdtpNormalizeAuditInfoHelper(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  _QWORD *v4; // r8
  __int64 v5; // rbx
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r9d
  _QWORD *v10; // rcx
  unsigned int v11; // r9d
  _QWORD *v12; // rcx

  if ( a1 )
  {
    if ( a2 || (*(_DWORD *)(a1 + 20) & 1) == 0 )
      return;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = (_QWORD *)(a1 + 48);
    a2 = a1;
  }
  else
  {
    if ( !a2 || (*(_DWORD *)(a2 + 24) & 1) == 0 )
      return;
    v3 = *(_DWORD *)(a2 + 12);
    v4 = (_QWORD *)(a2 + 56);
  }
  if ( v3 )
  {
    v5 = v3;
    while ( 1 )
    {
      v6 = *((_DWORD *)v4 - 6);
      if ( v6 > 23 )
      {
        if ( v6 != 24 && v6 != 25 && v6 != 28 && v6 != 29 && v6 != 30 && v6 != 31 && v6 != 32 && v6 != 34 )
          goto LABEL_18;
LABEL_16:
        v7 = a2 + *v4;
        *v4 = v7;
        if ( ((v6 - 1) & 0xFFFFFFDE) == 0 )
          *(_QWORD *)(v7 + 8) += a2;
        goto LABEL_18;
      }
      if ( v6 == 23 || v6 == 1 || v6 == 2 || v6 == 4 || v6 == 8 || v6 == 9 || v6 == 13 )
        goto LABEL_16;
      if ( v6 == 16 )
        break;
      if ( v6 == 17 )
      {
        *v4 += a1;
        v8 = *v4;
        if ( *(_DWORD *)*v4 )
        {
          *(_QWORD *)(v8 + 8) += a1;
          v9 = 0;
          v10 = (_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
          do
          {
            *v10 += a1;
            ++v9;
            v10 += 2;
          }
          while ( v9 < *(_DWORD *)v8 );
          goto LABEL_18;
        }
        goto LABEL_30;
      }
LABEL_18:
      v4 += 4;
      if ( !--v5 )
        return;
    }
    *v4 += a2;
    v8 = *v4;
    if ( *(_DWORD *)*v4 )
    {
      *(_QWORD *)(v8 + 8) += a2;
      v11 = 0;
      v12 = (_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
      do
      {
        *v12 += a2;
        ++v11;
        v12 += 3;
      }
      while ( v11 < *(_DWORD *)v8 );
      goto LABEL_18;
    }
LABEL_30:
    *(_QWORD *)(v8 + 8) = 0LL;
    goto LABEL_18;
  }
}
