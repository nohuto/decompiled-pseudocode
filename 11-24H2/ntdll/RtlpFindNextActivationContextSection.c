/*
 * XREFs of RtlpFindNextActivationContextSection @ 0x180074170
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180073890 (RtlFindActivationContextSectionString.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800746B0 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180074330 (RtlpLocateActivationContextSection.c)
 */

__int64 __fastcall RtlpFindNextActivationContextSection(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r15
  const char *ActivationContextData; // rbp
  __int64 ActivationContext; // rdi
  _PEB *ProcessEnvironmentBlock; // rdx
  int v12; // r14d
  unsigned int v13; // ecx
  __int64 result; // rax
  int v15; // ecx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  _PEB *v17; // [rsp+60h] [rbp+8h]

  v4 = NtCurrentTeb();
  ActivationContextData = 0LL;
  ActivationContext = 0LL;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  v17 = ProcessEnvironmentBlock;
  if ( a4 )
    *a4 = 0LL;
  v12 = 2;
  while ( 1 )
  {
    v13 = *(_DWORD *)(a1 + 20);
    if ( v13 )
    {
      if ( v13 == 1 )
      {
LABEL_22:
        ActivationContextData = (const char *)ProcessEnvironmentBlock->ActivationContextData;
        ActivationContext = 0LL;
        if ( ActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 2;
          goto LABEL_9;
        }
      }
      else if ( v13 != 2 )
      {
LABEL_7:
        if ( v13 > 3 )
          return 3221225701LL;
        goto LABEL_8;
      }
      ActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      ActivationContext = -4LL;
      if ( ActivationContextData )
      {
        *(_DWORD *)(a1 + 20) = 3;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
    ActivationContextStackPointer = v4->ActivationContextStackPointer;
    if ( !ActivationContextStackPointer || !ActivationContextStackPointer->ActiveFrame )
      goto LABEL_22;
    ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
    if ( ActivationContext )
    {
      if ( ActivationContext == -4 )
      {
        ActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      }
      else
      {
        if ( ActivationContext == -3 )
        {
          ActivationContextData = "Actx ";
          *(_DWORD *)(a1 + 20) = 1;
          goto LABEL_8;
        }
        ActivationContextData = *(const char **)(ActivationContext + 24);
      }
    }
    if ( !ActivationContextData )
      goto LABEL_22;
    *(_DWORD *)(a1 + 20) = 1;
LABEL_8:
    if ( !ActivationContextData )
      return 3222601729LL;
LABEL_9:
    result = RtlpLocateActivationContextSection(
               (_DWORD)ActivationContextData,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 16),
               a2,
               a3);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result == -1072365567 )
    {
      ProcessEnvironmentBlock = v17;
      if ( *(_DWORD *)(a1 + 20) != 3 )
        continue;
    }
    return result;
  }
  result = 0LL;
  v15 = 0;
  if ( ActivationContext != -4 )
    v12 = 0;
  LOBYTE(v15) = ActivationContext == 0;
  *(_DWORD *)(a1 + 24) = v15 | v12;
  if ( a4 )
  {
    if ( ActivationContext == -4 )
      ActivationContext = 0LL;
    *a4 = ActivationContext;
  }
  return result;
}
