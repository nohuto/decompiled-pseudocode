/*
 * XREFs of ?DestroyHandlesOwnedByProcess@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAXPEAVCMutex@2@@Z @ 0x14008C038
 * Callers:
 *     ?OPMProcessTerminating@@YAXPEAX@Z @ 0x14008BF08 (-OPMProcessTerminating@@YAXPEAX@Z.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x14008ACDC (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 */

_UNKNOWN **__fastcall OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandlesOwnedByProcess(
        __int64 a1,
        __int64 a2,
        OPM::CMutex *a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // rcx
  unsigned int *v8; // rsi
  unsigned int i; // ebx
  __int64 v10; // rdx
  unsigned int v11; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = *(_QWORD **)a1;
    v8 = (unsigned int *)(a1 + 12);
    if ( *v7 )
    {
      i = 0;
LABEL_10:
      v10 = 0LL;
      if ( i < *v8 && *(_QWORD *)(*(_QWORD *)a1 + 8LL * i) )
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * i);
      if ( a2 == *(_QWORD *)(v10 + 56) )
        OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(a1, v10, i, a3);
      result = (_UNKNOWN **)(i + 1);
      if ( (unsigned int)result >= i )
      {
        v11 = i + 2;
        ++i;
        while ( i < *v8 )
        {
          result = *(_UNKNOWN ***)a1;
          if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL * i) )
            goto LABEL_10;
          if ( v11 < i )
            break;
          ++i;
          ++v11;
        }
      }
    }
    else
    {
      for ( i = 1; i < *v8; ++i )
      {
        if ( v7[i] )
          goto LABEL_10;
        result = (_UNKNOWN **)(i + 1);
        if ( (unsigned int)result < i )
          break;
      }
    }
  }
  return result;
}
