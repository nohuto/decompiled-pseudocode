/*
 * XREFs of PopulateUMKMHandlePair @ 0x1401477C0
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     ConvertUserToKernelFileHandle @ 0x1401A75C0 (ConvertUserToKernelFileHandle.c)
 */

__int64 __fastcall PopulateUMKMHandlePair(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0LL;
  if ( a1 )
  {
    result = ConvertUserToKernelFileHandle(a1, (char *)a2 + 8);
    if ( (int)result >= 0 )
      *(_QWORD *)a2 = a1;
  }
  return result;
}
