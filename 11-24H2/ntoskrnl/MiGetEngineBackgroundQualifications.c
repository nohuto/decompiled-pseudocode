/*
 * XREFs of MiGetEngineBackgroundQualifications @ 0x14041354C
 * Callers:
 *     MiAddZeroingThreads @ 0x140413008 (MiAddZeroingThreads.c)
 * Callees:
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 */

__int64 __fastcall MiGetEngineBackgroundQualifications(int *a1, _BYTE *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx

  *(_DWORD *)(a4 + 40) = 5;
  result = (unsigned int)a1[1];
  if ( (_DWORD)result )
  {
    v9 = a1[3];
    if ( (_DWORD)result == v9 )
    {
      ++MiZeroThreadStats;
    }
    else if ( v9 < a1[2] )
    {
      v10 = *a1;
      result = qword_140E2DC38;
      v11 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)a1 + 22) + 56LL) + qword_140E2DC38 + 376);
      v12 = *(_QWORD *)(168 * v10 + v11 + 144);
      if ( *a2 && (unsigned __int64)(v12 + *a3) > *(_QWORD *)(v11 + 576) )
      {
        ++dword_140EF4E4C;
      }
      else if ( a2[1] && (unsigned __int64)(v12 + a3[1]) > *(_QWORD *)(v11 + 584) && (_DWORD)v10 )
      {
        ++dword_140EF4E48;
      }
      else
      {
        return MiFindBestZeroingProcessor(a4, a1, 0, 0);
      }
    }
  }
  return result;
}
