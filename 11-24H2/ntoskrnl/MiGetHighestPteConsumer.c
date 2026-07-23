/*
 * XREFs of MiGetHighestPteConsumer @ 0x1404F36B8
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1404F3650 (MiIssueNoPtesBugcheck.c)
 * Callees:
 *     MiImageContainsVa @ 0x1404A2444 (MiImageContainsVa.c)
 */

__int64 __fastcall MiGetHighestPteConsumer(unsigned __int64 *a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // rbx
  void **v8; // r14
  char *v9; // rdi
  __int64 v10; // r12
  char *i; // r8
  __int64 v12; // rbp
  int v13; // r11d
  __int64 v14; // rax

  *a1 = 0LL;
  if ( (dword_140FC51FC & 1) == 0 || byte_140E35FE5 || !PsLoadedModuleList )
    return 0LL;
  v2 = 0;
  v3 = &unk_140E38930;
  do
  {
    if ( (_QWORD *)*v3 != v3 )
      break;
    ++v2;
    v3 += 2;
  }
  while ( v2 < 0x10 );
  if ( v2 == 16 )
    return 0LL;
  v4 = (__int64)*(&PsLoadedModuleList + 1);
  v5 = 0LL;
  v6 = 0LL;
  while ( (PVOID *)v4 != &PsLoadedModuleList )
  {
    v7 = 0LL;
    v8 = (void **)&unk_140E38930;
    v9 = (char *)&unk_140E38930;
    v10 = 16LL;
    do
    {
      for ( i = (char *)*v8; i != v9; i = *(char **)i )
      {
        if ( (*((_DWORD *)i + 16) & 2) == 0 )
        {
          v12 = *((_QWORD *)i + 3);
          if ( MiImageContainsVa(v4, *((_QWORD *)i + 10)) || MiImageContainsVa(v4, *((_QWORD *)i + 11)) )
          {
            v7 += v12;
            *((_DWORD *)i + 16) = v13 | 2;
          }
        }
      }
      v9 += 16;
      v8 += 2;
      --v10;
    }
    while ( v10 );
    v14 = v4;
    v4 = *(_QWORD *)(v4 + 8);
    if ( v7 <= v5 )
    {
      v14 = v6;
      v7 = v5;
    }
    v6 = v14;
    v5 = v7;
  }
  *a1 = v5;
  return v6;
}
