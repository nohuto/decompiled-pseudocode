/*
 * XREFs of PopPowerRequestActionInfo @ 0x140A0DBB8
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A0DD9C (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140A0DEBC (PopPowerRequestSpecialRequestClear.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  char PreviousMode; // bp
  ULONG_PTR v3; // rcx
  int IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = *(_QWORD *)a1;
  Object = 0LL;
  IsAppContainerOrIdentifyLevelContext = ObpReferenceObjectByHandleWithTag(
                                           v3,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           0x72506F50u,
                                           &Object,
                                           0LL,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v5 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( PreviousMode )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_8;
      }
    }
    else if ( *(_DWORD *)(a1 + 8) == 4 && PreviousMode != 1 )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741637;
LABEL_8:
      ObfDereferenceObjectWithTag(v5, 0x72506F50u);
      return (unsigned int)IsAppContainerOrIdentifyLevelContext;
    }
    v6 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v5[152] )
        v7 = PopPowerRequestSpecialRequestSet(v5, v6, *(_QWORD *)(a1 + 16));
      else
        v7 = PopPowerRequestReferenceAcquire(v5, v6);
    }
    else if ( v5[152] )
    {
      v7 = PopPowerRequestSpecialRequestClear(v5, v6);
    }
    else
    {
      v7 = PopPowerRequestReferenceRelease(v5, v6);
    }
    IsAppContainerOrIdentifyLevelContext = v7;
    goto LABEL_8;
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
