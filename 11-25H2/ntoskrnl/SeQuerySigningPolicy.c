/*
 * XREFs of SeQuerySigningPolicy @ 0x1409BD120
 * Callers:
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 * Callees:
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404F1B70 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     SepIsSystemAppTCB @ 0x1406E9498 (SepIsSystemAppTCB.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     SepIsMinTCB @ 0x1409BB9B4 (SepIsMinTCB.c)
 *     SeQuerySigningPolicyWorker @ 0x140AC8B10 (SeQuerySigningPolicyWorker.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        int a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        char a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  char v7; // r14
  int IsMinTCB; // ebp
  int IsSystemAppTCB; // eax
  int v13; // r9d
  __int64 v15; // rcx
  char v16; // bl
  __int64 v17; // rcx
  __int64 v18; // rcx

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, a3, a4, v7, a5, a6, a7);
  if ( IsMinTCB >= 0
    || (Feature_ID51912085__private_IsEnabledPreCheck(), IsMinTCB == -1073741275)
    && ((IsSystemAppTCB = SepIsSystemAppTCB(a2, a3, a4, v7, (__int64)a5, (__int64)a6, (__int64)a7),
         IsMinTCB = IsSystemAppTCB,
         IsSystemAppTCB >= 0)
     || IsSystemAppTCB == -1073741275
     && (LOBYTE(v13) = a4,
         IsMinTCB = SeQuerySigningPolicyWorker(a1, (_DWORD)a2, a3, v13, v7, (__int64)a5, (__int64)a6, (__int64)a7),
         IsMinTCB >= 0)) )
  {
    v15 = (*a7 & 7u) - 1;
    if ( (*a7 & 7) == 1 )
    {
      *a5 |= 0x30u;
    }
    else if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
    if ( IsMinTCB >= 0 )
    {
      v16 = 8;
      if ( (*a5 & 0xF) != 8 )
      {
        LOBYTE(v15) = *a5;
        if ( (unsigned int)SeCompareSigningLevels(v15) )
        {
          if ( (SeCiDebugOptions & 4) != 0
            || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            LOBYTE(v17) = v7;
            if ( (unsigned int)SeCompareSigningLevels(v17) || (*a7 & 7) == 0 )
            {
              LOBYTE(v18) = v7;
              v16 = v7 & 0xF;
            }
            else
            {
              LOBYTE(v18) = 8;
            }
            *a5 = v16 | *a5 & 0x30;
            if ( !(unsigned int)SeCompareSigningLevels(v18) )
              *a6 = v16 | *a6 & 0x30;
          }
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
