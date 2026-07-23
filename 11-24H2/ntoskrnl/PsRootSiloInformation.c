/*
 * XREFs of PsRootSiloInformation @ 0x1407724D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     PspGetNextSilo @ 0x14085D264 (PspGetNextSilo.c)
 *     PspIsSiloInSilo @ 0x140A4F21C (PspIsSiloInSilo.c)
 */

__int64 __fastcall PsRootSiloInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // edi
  struct _LIST_ENTRY *CurrentSilo; // r12
  __int64 v8; // rsi
  int v9; // ebx
  _DWORD *i; // rcx
  __int64 NextSilo; // rax
  _DWORD *v12; // r8

  v3 = a2;
  v5 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = 0LL;
  v9 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    NextSilo = PspGetNextSilo(i, 0LL);
    v12 = (_DWORD *)NextSilo;
    if ( !NextSilo )
      break;
    if ( (struct _LIST_ENTRY *)NextSilo != CurrentSilo && (unsigned __int8)PspIsSiloInSilo(NextSilo) )
    {
      if ( (unsigned __int64)v5 + 4 > v3 )
      {
        v9 = -1073741789;
        ObfDereferenceObjectWithTag(v12, 0x6E457350u);
        break;
      }
      a1[v8 + 1] = v12[367];
      v5 += 4;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  if ( v9 >= 0 )
  {
    *a1 = v8;
    *a3 = v5;
  }
  return (unsigned int)v9;
}
