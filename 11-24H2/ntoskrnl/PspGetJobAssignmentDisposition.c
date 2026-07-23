/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x140A10458
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140A103D0 (PsAssignProcessToJobObject.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     PspIsJobMovable @ 0x140777AE4 (PspIsJobMovable.c)
 *     PspIsProcessInJob @ 0x140A10C78 (PspIsProcessInJob.c)
 *     PsIsJobParentImmutable @ 0x140A10CA8 (PsIsJobParentImmutable.c)
 */

__int64 __fastcall PspGetJobAssignmentDisposition(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v8; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 i; // rax
  __int64 v14; // rcx

  v4 = 0;
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 488);
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488)) )
    {
      if ( (*(_DWORD *)(a2 + 500) & 8) != 0 )
      {
        v4 = -1073741558;
      }
      else if ( *(_QWORD *)(a2 + 672) )
      {
        if ( (unsigned int)PspIsProcessInJob(a2, a1) == 292 )
        {
          *a4 = 2;
        }
        else
        {
          for ( i = a1; i; i = *(_QWORD *)(i + 1304) )
          {
            if ( i == *(_QWORD *)(a2 + 672) )
            {
              *a4 = 3;
              goto LABEL_7;
            }
          }
          if ( (unsigned __int8)PsIsJobParentImmutable(a1) || *(_DWORD *)(a1 + 212) )
          {
            if ( PspIsJobMovable(v14) )
              *a4 = 5;
            else
              v4 = -1073741637;
          }
          else
          {
            *a4 = 4;
          }
        }
      }
      else
      {
        *a4 = 1;
      }
LABEL_7:
      ExReleaseRundownProtection_0(v8);
      return v4;
    }
    else
    {
      return 3221225738LL;
    }
  }
  else if ( (unsigned __int8)((__int64 (*)(void))PsIsJobParentImmutable)()
         || *(_DWORD *)(v10 + 212)
         || *(_QWORD *)(v10 + 1792) == -1LL )
  {
    return 3221225659LL;
  }
  else
  {
    *v12 = (v11 != 0) + 6;
    return 0LL;
  }
}
