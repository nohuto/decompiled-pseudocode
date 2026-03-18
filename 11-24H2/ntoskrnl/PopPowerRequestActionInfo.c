/*
 * XREFs of PopPowerRequestActionInfo @ 0x140A14DA0
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopPowerRequestReferenceRelease @ 0x14046BD60 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046BE70 (PopPowerRequestReferenceAcquire.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A14EAC (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A14F84 (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140A150A4 (PopPowerRequestSpecialRequestClear.c)
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
